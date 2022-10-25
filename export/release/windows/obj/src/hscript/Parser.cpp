#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
#ifndef INCLUDED_hscript_ExprDef
#include <hscript/ExprDef.h>
#endif
#ifndef INCLUDED_hscript_FieldAccess
#include <hscript/FieldAccess.h>
#endif
#ifndef INCLUDED_hscript_FieldKind
#include <hscript/FieldKind.h>
#endif
#ifndef INCLUDED_hscript_ModuleDecl
#include <hscript/ModuleDecl.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_45_new,"hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",45,0x98735743)
static const ::String _hx_array_data_e9f29f9a_3[] = {
	HX_("%",25,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_4[] = {
	HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_5[] = {
	HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_6[] = {
	HX_("<<",80,34,00,00),HX_(">>",40,36,00,00),HX_(">>>",fe,41,2f,00),
};
static const ::String _hx_array_data_e9f29f9a_7[] = {
	HX_("|",7c,00,00,00),HX_("&",26,00,00,00),HX_("^",5e,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_8[] = {
	HX_("==",60,35,00,00),HX_("!=",fc,1c,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),
};
static const ::String _hx_array_data_e9f29f9a_9[] = {
	HX_("...",ee,0f,23,00),
};
static const ::String _hx_array_data_e9f29f9a_10[] = {
	HX_("&&",40,21,00,00),
};
static const ::String _hx_array_data_e9f29f9a_11[] = {
	HX_("||",80,6c,00,00),
};
static const ::String _hx_array_data_e9f29f9a_12[] = {
	HX_("=",3d,00,00,00),HX_("+=",b2,25,00,00),HX_("-=",70,27,00,00),HX_("*=",d3,24,00,00),HX_("/=",2e,29,00,00),HX_("%=",78,20,00,00),HX_("<<=",bd,bb,2d,00),HX_(">>=",fd,41,2f,00),HX_(">>>=",7f,7c,2a,29),HX_("|=",41,6c,00,00),HX_("&=",57,21,00,00),HX_("^=",1f,52,00,00),HX_("=>",61,35,00,00),
};
static const ::String _hx_array_data_e9f29f9a_13[] = {
	HX_("->",71,27,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_147_error,"hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",147,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_156_invalidChar,"hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",156,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_159_initParser,"hscript.Parser","initParser",0xe350f063,"hscript.Parser.initParser","hscript/Parser.hx",159,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_183_parseString,"hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",183,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_197_unexpected,"hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",197,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_202_push,"hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",202,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_212_ensure,"hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",212,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_217_ensureToken,"hscript.Parser","ensureToken",0x4d49bd87,"hscript.Parser.ensureToken","hscript/Parser.hx",217,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_222_maybe,"hscript.Parser","maybe",0x2baefbd4,"hscript.Parser.maybe","hscript/Parser.hx",222,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_230_getIdent,"hscript.Parser","getIdent",0x33becdce,"hscript.Parser.getIdent","hscript/Parser.hx",230,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_242_expr,"hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",242,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_250_pmin,"hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",250,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_258_pmax,"hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",258,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_264_mk,"hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",264,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_275_isBlock,"hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",275,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_294_parseFullExpr,"hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",294,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_314_parseObject,"hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",314,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_349_parseExpr,"hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",349,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_488_parseLambda,"hscript.Parser","parseLambda",0x2d1330c6,"hscript.Parser.parseLambda","hscript/Parser.hx",488,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_508_parseMetaArgs,"hscript.Parser","parseMetaArgs",0xfe617641,"hscript.Parser.parseMetaArgs","hscript/Parser.hx",508,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_532_mapCompr,"hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",532,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_553_makeUnop,"hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",553,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_563_makeBinop,"hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",563,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_582_parseStructure,"hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",582,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_774_parseExprNext,"hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",774,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_821_parseFunctionArgs,"hscript.Parser","parseFunctionArgs",0xca222794,"hscript.Parser.parseFunctionArgs","hscript/Parser.hx",821,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_863_parseFunctionDecl,"hscript.Parser","parseFunctionDecl",0xcc13eaa1,"hscript.Parser.parseFunctionDecl","hscript/Parser.hx",863,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_877_parsePath,"hscript.Parser","parsePath",0x9635a5a4,"hscript.Parser.parsePath","hscript/Parser.hx",877,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_890_parseType,"hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",890,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_935_parseType,"hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",935,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1012_parseTypeNext,"hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",1012,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1034_parseExprList,"hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",1034,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1056_parseModule,"hscript.Parser","parseModule",0x9d26326b,"hscript.Parser.parseModule","hscript/Parser.hx",1056,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1072_parseMetadata,"hscript.Parser","parseMetadata",0x157712ee,"hscript.Parser.parseMetadata","hscript/Parser.hx",1072,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1087_parseParams,"hscript.Parser","parseParams",0xc9cdf905,"hscript.Parser.parseParams","hscript/Parser.hx",1087,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1093_parseModuleDecl,"hscript.Parser","parseModuleDecl",0xfa46c075,"hscript.Parser.parseModuleDecl","hscript/Parser.hx",1093,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1186_parseField,"hscript.Parser","parseField",0x1bf7d3db,"hscript.Parser.parseField","hscript/Parser.hx",1186,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1261_readChar,"hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",1261,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1264_readString,"hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",1264,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1324_token,"hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",1324,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1340__token,"hscript.Parser","_token",0x5e76088e,"hscript.Parser._token","hscript/Parser.hx",1340,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1565_preprocValue,"hscript.Parser","preprocValue",0xbabba0cc,"hscript.Parser.preprocValue","hscript/Parser.hx",1565,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1570_parsePreproCond,"hscript.Parser","parsePreproCond",0x44c5e42b,"hscript.Parser.parsePreproCond","hscript/Parser.hx",1570,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1586_evalPreproCond,"hscript.Parser","evalPreproCond",0x4859d7fc,"hscript.Parser.evalPreproCond","hscript/Parser.hx",1586,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1604_preprocess,"hscript.Parser","preprocess",0x83c9d500,"hscript.Parser.preprocess","hscript/Parser.hx",1604,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1636_skipTokens,"hscript.Parser","skipTokens",0xeb6e038d,"hscript.Parser.skipTokens","hscript/Parser.hx",1636,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1651_tokenComment,"hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1651,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1694_constString,"hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1694,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1705_tokenString,"hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1705,0x98735743)
namespace hscript{

void Parser_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_45_new)
HXLINE(  91)		this->uid = 0;
HXLINE(  62)		this->preprocesorValues =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 114)		this->line = 1;
HXLINE( 115)		this->opChars = HX_("+*/-=!><&|^%~",e2,ec,c4,dc);
HXLINE( 116)		this->identChars = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_",e0,b5,3b,15);
HXLINE( 117)		::Array< ::Dynamic> priorities = ::Array_obj< ::Dynamic>::__new(11)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_3,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_4,2))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_5,2))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_6,3))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_7,3))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_8,6))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_9,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_10,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_11,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_12,13))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_13,1));
HXLINE( 131)		this->opPriority =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 132)		this->opRightAssoc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 137)		{
HXLINE( 137)			int _g = 0;
HXDLIN( 137)			int _g1 = priorities->length;
HXDLIN( 137)			while((_g < _g1)){
HXLINE( 137)				_g = (_g + 1);
HXDLIN( 137)				int i = (_g - 1);
HXLINE( 138)				{
HXLINE( 138)					int _g1 = 0;
HXDLIN( 138)					::Array< ::String > _g2 = priorities->__get(i).StaticCast< ::Array< ::String > >();
HXDLIN( 138)					while((_g1 < _g2->length)){
HXLINE( 138)						::String x = _g2->__get(_g1);
HXDLIN( 138)						_g1 = (_g1 + 1);
HXLINE( 139)						this->opPriority->set(x,i);
HXLINE( 140)						if ((i == 9)) {
HXLINE( 140)							this->opRightAssoc->set(x,true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 142)		{
HXLINE( 142)			{
HXLINE( 142)				::String x = HX_("!",21,00,00,00);
HXLINE( 143)				{
HXLINE( 143)					int _hx_tmp;
HXDLIN( 143)					bool _hx_tmp1;
HXDLIN( 143)					if ((x != HX_("++",a0,25,00,00))) {
HXLINE( 143)						_hx_tmp1 = (x == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 143)						_hx_tmp1 = true;
            					}
HXDLIN( 143)					if (_hx_tmp1) {
HXLINE( 143)						_hx_tmp = -1;
            					}
            					else {
HXLINE( 143)						_hx_tmp = -2;
            					}
HXDLIN( 143)					this->opPriority->set(x,_hx_tmp);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				::String x1 = HX_("++",a0,25,00,00);
HXLINE( 143)				{
HXLINE( 143)					int _hx_tmp2;
HXDLIN( 143)					bool _hx_tmp3;
HXDLIN( 143)					if ((x1 != HX_("++",a0,25,00,00))) {
HXLINE( 143)						_hx_tmp3 = (x1 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 143)						_hx_tmp3 = true;
            					}
HXDLIN( 143)					if (_hx_tmp3) {
HXLINE( 143)						_hx_tmp2 = -1;
            					}
            					else {
HXLINE( 143)						_hx_tmp2 = -2;
            					}
HXDLIN( 143)					this->opPriority->set(x1,_hx_tmp2);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				::String x2 = HX_("--",60,27,00,00);
HXLINE( 143)				{
HXLINE( 143)					int _hx_tmp4;
HXDLIN( 143)					bool _hx_tmp5;
HXDLIN( 143)					if ((x2 != HX_("++",a0,25,00,00))) {
HXLINE( 143)						_hx_tmp5 = (x2 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 143)						_hx_tmp5 = true;
            					}
HXDLIN( 143)					if (_hx_tmp5) {
HXLINE( 143)						_hx_tmp4 = -1;
            					}
            					else {
HXLINE( 143)						_hx_tmp4 = -2;
            					}
HXDLIN( 143)					this->opPriority->set(x2,_hx_tmp4);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				::String x3 = HX_("~",7e,00,00,00);
HXLINE( 143)				{
HXLINE( 143)					int _hx_tmp6;
HXDLIN( 143)					bool _hx_tmp7;
HXDLIN( 143)					if ((x3 != HX_("++",a0,25,00,00))) {
HXLINE( 143)						_hx_tmp7 = (x3 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 143)						_hx_tmp7 = true;
            					}
HXDLIN( 143)					if (_hx_tmp7) {
HXLINE( 143)						_hx_tmp6 = -1;
            					}
            					else {
HXLINE( 143)						_hx_tmp6 = -2;
            					}
HXDLIN( 143)					this->opPriority->set(x3,_hx_tmp6);
            				}
            			}
            		}
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b857072;
}

void Parser_obj::error( ::hscript::ErrorDef err,int pmin,int pmax){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_147_error)
HXDLIN( 147)		if (!(this->resumeErrors)) {
HXLINE( 149)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,err,pmin,pmax,this->origin,this->line)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

void Parser_obj::invalidChar(int c){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_156_invalidChar)
HXDLIN( 156)		if (!(this->resumeErrors)) {
HXDLIN( 156)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidChar(c),(this->readPos - 1),(this->readPos - 1),this->origin,this->line)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

void Parser_obj::initParser(::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_159_initParser)
HXLINE( 161)		this->preprocStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 163)		this->origin = origin;
HXLINE( 164)		this->readPos = 0;
HXLINE( 165)		this->tokenMin = (this->oldTokenMin = 0);
HXLINE( 166)		this->tokenMax = (this->oldTokenMax = 0);
HXLINE( 167)		this->tokens =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 173)		this->_hx_char = -1;
HXLINE( 174)		this->ops = ::Array_obj< bool >::__new();
HXLINE( 175)		this->idents = ::Array_obj< bool >::__new();
HXLINE( 176)		this->uid = 0;
HXLINE( 177)		{
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = this->opChars.length;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXLINE( 178)				this->ops[( (int)(this->opChars.charCodeAt(i)) )] = true;
            			}
            		}
HXLINE( 179)		{
HXLINE( 179)			int _g2 = 0;
HXDLIN( 179)			int _g3 = this->identChars.length;
HXDLIN( 179)			while((_g2 < _g3)){
HXLINE( 179)				_g2 = (_g2 + 1);
HXDLIN( 179)				int i = (_g2 - 1);
HXLINE( 180)				this->idents[( (int)(this->identChars.charCodeAt(i)) )] = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,initParser,(void))

 ::Dynamic Parser_obj::parseString(::String s,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_183_parseString)
HXLINE( 184)		this->initParser(origin);
HXLINE( 185)		this->input = s;
HXLINE( 186)		this->readPos = 0;
HXLINE( 187)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 188)		while(true){
HXLINE( 189)			 ::hscript::Token tk = this->token();
HXLINE( 190)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE( 190)				goto _hx_goto_19;
            			}
HXLINE( 191)			{
HXLINE( 191)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 191)				this->tokenMin = this->oldTokenMin;
HXDLIN( 191)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 192)			this->parseFullExpr(a);
            		}
            		_hx_goto_19:;
HXLINE( 194)		if ((a->length == 1)) {
HXLINE( 194)			return a->__get(0);
            		}
            		else {
HXLINE( 194)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(a);
HXDLIN( 194)			 ::Dynamic pmin = 0;
HXDLIN( 194)			 ::Dynamic pmax = null();
HXDLIN( 194)			if (::hx::IsNull( e )) {
HXLINE( 194)				return null();
            			}
            			else {
HXLINE( 194)				if (::hx::IsNull( pmin )) {
HXLINE( 194)					pmin = this->tokenMin;
            				}
HXDLIN( 194)				if (::hx::IsNull( pmax )) {
HXLINE( 194)					pmax = this->tokenMax;
            				}
HXDLIN( 194)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
            		}
HXDLIN( 194)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseString,return )

 ::Dynamic Parser_obj::unexpected( ::hscript::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_197_unexpected)
HXLINE( 198)		{
HXLINE( 198)			 ::hscript::ErrorDef err = ::hscript::ErrorDef_obj::EUnexpected(this->tokenString(tk));
HXDLIN( 198)			if (!(this->resumeErrors)) {
HXLINE( 198)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,err,this->tokenMin,this->tokenMax,this->origin,this->line)));
            			}
            		}
HXLINE( 199)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::push( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_202_push)
HXLINE( 204)		this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("t",74,00,00,00),tk)
            			->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            			->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXLINE( 205)		this->tokenMin = this->oldTokenMin;
HXLINE( 206)		this->tokenMax = this->oldTokenMax;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

void Parser_obj::ensure( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_212_ensure)
HXLINE( 213)		 ::hscript::Token t = this->token();
HXLINE( 214)		if (::hx::IsPointerNotEq( t,tk )) {
HXLINE( 214)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

void Parser_obj::ensureToken( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_217_ensureToken)
HXLINE( 218)		 ::hscript::Token t = this->token();
HXLINE( 219)		if (!(__hxcpp_enum_eq(t,tk))) {
HXLINE( 219)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensureToken,(void))

bool Parser_obj::maybe( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_222_maybe)
HXLINE( 223)		 ::hscript::Token t = this->token();
HXLINE( 224)		if (__hxcpp_enum_eq(t,tk)) {
HXLINE( 225)			return true;
            		}
HXLINE( 226)		{
HXLINE( 226)			this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            				->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 226)			this->tokenMin = this->oldTokenMin;
HXDLIN( 226)			this->tokenMax = this->oldTokenMax;
            		}
HXLINE( 227)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,maybe,return )

::String Parser_obj::getIdent(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_230_getIdent)
HXLINE( 231)		 ::hscript::Token tk = this->token();
HXLINE( 232)		if ((tk->_hx_getIndex() == 2)) {
HXLINE( 233)			::String id = tk->_hx_getString(0);
HXDLIN( 233)			return id;
            		}
            		else {
HXLINE( 235)			this->unexpected(tk);
HXLINE( 236)			return null();
            		}
HXLINE( 232)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getIdent,return )

 ::hscript::ExprDef Parser_obj::expr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_242_expr)
HXDLIN( 242)		return e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_250_pmin)
HXDLIN( 250)		if (::hx::IsNull( e )) {
HXDLIN( 250)			return 0;
            		}
            		else {
HXDLIN( 250)			return ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            		}
HXDLIN( 250)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_258_pmax)
HXDLIN( 258)		if (::hx::IsNull( e )) {
HXDLIN( 258)			return 0;
            		}
            		else {
HXDLIN( 258)			return ( (int)(e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) );
            		}
HXDLIN( 258)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

 ::Dynamic Parser_obj::mk( ::hscript::ExprDef e, ::Dynamic pmin, ::Dynamic pmax){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_264_mk)
HXLINE( 266)		if (::hx::IsNull( e )) {
HXLINE( 266)			return null();
            		}
HXLINE( 267)		if (::hx::IsNull( pmin )) {
HXLINE( 267)			pmin = this->tokenMin;
            		}
HXLINE( 268)		if (::hx::IsNull( pmax )) {
HXLINE( 268)			pmax = this->tokenMax;
            		}
HXLINE( 269)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            			->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            			->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            			->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_275_isBlock)
HXLINE( 276)		if (::hx::IsNull( e )) {
HXLINE( 276)			return false;
            		}
HXLINE( 277)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 277)		switch((int)(_g->_hx_getIndex())){
            			case (int)2: {
HXLINE( 280)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 280)				 ::hscript::CType t = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 280)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 280)				if (::hx::IsNotNull( e )) {
HXLINE( 280)					return this->isBlock(e);
            				}
            				else {
HXLINE( 280)					if (::hx::IsNotNull( t )) {
HXLINE( 280)						if (::hx::IsNull( t )) {
HXLINE( 280)							return false;
            						}
            						else {
HXLINE( 280)							if ((t->_hx_getIndex() == 2)) {
HXLINE( 280)								::Array< ::Dynamic> _g = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 280)								return true;
            							}
            							else {
HXLINE( 280)								return false;
            							}
            						}
            					}
            					else {
HXLINE( 280)						return false;
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 278)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 278)				return true;
            			}
            			break;
            			case (int)6: {
HXLINE( 282)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 282)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 282)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 282)				return this->isBlock(e);
            			}
            			break;
            			case (int)7: {
HXLINE( 283)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 283)				bool prefix = _g->_hx_getBool(1);
HXDLIN( 283)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 283)				if (!(prefix)) {
HXLINE( 283)					return this->isBlock(e);
            				}
            				else {
HXLINE( 283)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 281)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 281)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 281)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 281)				if (::hx::IsNotNull( e2 )) {
HXLINE( 281)					return this->isBlock(e2);
            				}
            				else {
HXLINE( 281)					return this->isBlock(e1);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 284)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 284)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 284)				return this->isBlock(e);
            			}
            			break;
            			case (int)11: {
HXLINE( 286)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 286)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 286)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 286)				return this->isBlock(e);
            			}
            			break;
            			case (int)14: {
HXLINE( 279)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 279)				::String _g2 = _g->_hx_getString(2);
HXDLIN( 279)				 ::hscript::CType _g3 = _g->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN( 279)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 279)				return this->isBlock(e);
            			}
            			break;
            			case (int)15: {
HXLINE( 287)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 287)				if (::hx::IsNotNull( e )) {
HXLINE( 287)					return this->isBlock(e);
            				}
            				else {
HXLINE( 287)					return false;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 288)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 288)				::String _g2 = _g->_hx_getString(1);
HXDLIN( 288)				 ::hscript::CType _g3 = _g->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN( 288)				 ::Dynamic e = _g->_hx_getObject(3);
HXDLIN( 288)				return this->isBlock(e);
            			}
            			break;
            			case (int)21: {
HXLINE( 278)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 278)				return true;
            			}
            			break;
            			case (int)23: {
HXLINE( 278)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 278)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 278)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 278)				return true;
            			}
            			break;
            			case (int)24: {
HXLINE( 285)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 285)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 285)				return this->isBlock(e);
            			}
            			break;
            			case (int)25: {
HXLINE( 289)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 289)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 289)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 289)				return this->isBlock(e);
            			}
            			break;
            			default:{
HXLINE( 290)				return false;
            			}
            		}
HXLINE( 277)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

void Parser_obj::parseFullExpr(::Array< ::Dynamic> exprs){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_294_parseFullExpr)
HXLINE( 295)		 ::Dynamic e = this->parseExpr();
HXLINE( 296)		exprs->push(e);
HXLINE( 298)		 ::hscript::Token tk = this->token();
HXLINE( 300)		while(true){
HXLINE( 300)			bool _hx_tmp;
HXDLIN( 300)			bool _hx_tmp1;
HXDLIN( 300)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TComma_dyn() )) {
HXLINE( 300)				_hx_tmp1 = ::hx::IsNotNull( e );
            			}
            			else {
HXLINE( 300)				_hx_tmp1 = false;
            			}
HXDLIN( 300)			if (_hx_tmp1) {
HXLINE( 300)				 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 300)				if ((_g->_hx_getIndex() == 2)) {
HXLINE( 300)					::String _g1 = _g->_hx_getString(0);
HXDLIN( 300)					 ::hscript::CType _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 300)					 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 300)					_hx_tmp = true;
            				}
            				else {
HXLINE( 300)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 300)				_hx_tmp = false;
            			}
HXDLIN( 300)			if (!(_hx_tmp)) {
HXLINE( 300)				goto _hx_goto_32;
            			}
HXLINE( 301)			e = this->parseStructure(HX_("var",e7,de,59,00));
HXLINE( 302)			exprs->push(e);
HXLINE( 303)			tk = this->token();
            		}
            		_hx_goto_32:;
HXLINE( 306)		bool _hx_tmp;
HXDLIN( 306)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 306)			_hx_tmp = ::hx::IsPointerNotEq( tk,::hscript::Token_obj::TEof_dyn() );
            		}
            		else {
HXLINE( 306)			_hx_tmp = false;
            		}
HXDLIN( 306)		if (_hx_tmp) {
HXLINE( 307)			if (this->isBlock(e)) {
HXLINE( 308)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 308)				this->tokenMin = this->oldTokenMin;
HXDLIN( 308)				this->tokenMax = this->oldTokenMax;
            			}
            			else {
HXLINE( 310)				this->unexpected(tk);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseFullExpr,(void))

 ::Dynamic Parser_obj::parseObject( ::Dynamic p1){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_314_parseObject)
HXLINE( 316)		::Array< ::Dynamic> fl = ::Array_obj< ::Dynamic>::__new();
HXLINE( 317)		while(true){
HXLINE( 318)			 ::hscript::Token tk = this->token();
HXLINE( 319)			::String id = null();
HXLINE( 320)			switch((int)(tk->_hx_getIndex())){
            				case (int)1: {
HXLINE( 322)					 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN( 322)					{
HXLINE( 323)						if (!(this->allowJSON)) {
HXLINE( 324)							this->unexpected(tk);
            						}
HXLINE( 325)						if ((c->_hx_getIndex() == 2)) {
HXLINE( 326)							::String s = c->_hx_getString(0);
HXDLIN( 326)							id = s;
            						}
            						else {
HXLINE( 327)							this->unexpected(tk);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 321)					::String i = tk->_hx_getString(0);
HXDLIN( 321)					id = i;
            				}
            				break;
            				case (int)7: {
HXLINE( 330)					goto _hx_goto_34;
            				}
            				break;
            				default:{
HXLINE( 332)					this->unexpected(tk);
HXLINE( 333)					goto _hx_goto_34;
            				}
            			}
HXLINE( 335)			{
HXLINE( 335)				 ::hscript::Token t = this->token();
HXDLIN( 335)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 335)					this->unexpected(t);
            				}
            			}
HXLINE( 336)			fl->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("e",65,00,00,00),this->parseExpr())
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 337)			tk = this->token();
HXLINE( 338)			switch((int)(tk->_hx_getIndex())){
            				case (int)7: {
HXLINE( 340)					goto _hx_goto_34;
            				}
            				break;
            				case (int)9: {
            				}
            				break;
            				default:{
HXLINE( 343)					this->unexpected(tk);
            				}
            			}
            		}
            		_hx_goto_34:;
HXLINE( 346)		 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EObject(fl);
HXDLIN( 346)		 ::Dynamic pmin = p1;
HXDLIN( 346)		 ::Dynamic pmax = null();
HXDLIN( 346)		 ::Dynamic _hx_tmp;
HXDLIN( 346)		if (::hx::IsNull( e )) {
HXLINE( 346)			_hx_tmp = null();
            		}
            		else {
HXLINE( 346)			if (::hx::IsNull( pmin )) {
HXLINE( 346)				pmin = this->tokenMin;
            			}
HXDLIN( 346)			if (::hx::IsNull( pmax )) {
HXLINE( 346)				pmax = this->tokenMax;
            			}
HXDLIN( 346)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 346)		return this->parseExprNext(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

 ::Dynamic Parser_obj::parseExpr(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_349_parseExpr)
HXLINE( 350)		 ::hscript::Token tk = this->token();
HXLINE( 352)		int p1 = this->tokenMin;
HXLINE( 354)		switch((int)(tk->_hx_getIndex())){
            			case (int)1: {
HXLINE( 360)				 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 361)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EConst(c);
HXDLIN( 361)				 ::Dynamic pmin = null();
HXDLIN( 361)				 ::Dynamic pmax = null();
HXDLIN( 361)				 ::Dynamic _hx_tmp;
HXDLIN( 361)				if (::hx::IsNull( e )) {
HXLINE( 361)					_hx_tmp = null();
            				}
            				else {
HXLINE( 361)					if (::hx::IsNull( pmin )) {
HXLINE( 361)						pmin = this->tokenMin;
            					}
HXDLIN( 361)					if (::hx::IsNull( pmax )) {
HXLINE( 361)						pmax = this->tokenMax;
            					}
HXDLIN( 361)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 361)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE( 355)				::String id = tk->_hx_getString(0);
HXLINE( 356)				 ::Dynamic e = this->parseStructure(id);
HXLINE( 357)				if (::hx::IsNull( e )) {
HXLINE( 358)					 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EIdent(id);
HXDLIN( 358)					 ::Dynamic pmin = null();
HXDLIN( 358)					 ::Dynamic pmax = null();
HXDLIN( 358)					if (::hx::IsNull( e1 )) {
HXLINE( 358)						e = null();
            					}
            					else {
HXLINE( 358)						if (::hx::IsNull( pmin )) {
HXLINE( 358)							pmin = this->tokenMin;
            						}
HXDLIN( 358)						if (::hx::IsNull( pmax )) {
HXLINE( 358)							pmax = this->tokenMax;
            						}
HXDLIN( 358)						e =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
HXLINE( 359)				return this->parseExprNext(e);
            			}
            			break;
            			case (int)3: {
HXLINE( 439)				::String op = tk->_hx_getString(0);
HXLINE( 440)				if ((op == HX_("-",2d,00,00,00))) {
HXLINE( 441)					int start = this->tokenMin;
HXLINE( 442)					 ::Dynamic e = this->parseExpr();
HXLINE( 443)					if (::hx::IsNull( e )) {
HXLINE( 444)						return this->makeUnop(op,e);
            					}
HXLINE( 445)					 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 445)					if ((_g->_hx_getIndex() == 0)) {
HXLINE( 448)						 ::hscript::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN( 448)						switch((int)(_g1->_hx_getIndex())){
            							case (int)0: {
HXLINE( 446)								int i = _g1->_hx_getInt(0);
HXLINE( 447)								 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EConst(::hscript::Const_obj::CInt(-(i)));
HXDLIN( 447)								 ::Dynamic pmin = start;
HXDLIN( 447)								 ::Dynamic pmax;
HXDLIN( 447)								if (::hx::IsNull( e )) {
HXLINE( 447)									pmax = 0;
            								}
            								else {
HXLINE( 447)									pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 447)								if (::hx::IsNull( e1 )) {
HXLINE( 447)									return null();
            								}
            								else {
HXLINE( 447)									if (::hx::IsNull( pmin )) {
HXLINE( 447)										pmin = this->tokenMin;
            									}
HXDLIN( 447)									if (::hx::IsNull( pmax )) {
HXLINE( 447)										pmax = this->tokenMax;
            									}
HXDLIN( 447)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 448)								Float f = _g1->_hx_getFloat(0);
HXLINE( 449)								 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EConst(::hscript::Const_obj::CFloat(-(f)));
HXDLIN( 449)								 ::Dynamic pmin = start;
HXDLIN( 449)								 ::Dynamic pmax;
HXDLIN( 449)								if (::hx::IsNull( e )) {
HXLINE( 449)									pmax = 0;
            								}
            								else {
HXLINE( 449)									pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 449)								if (::hx::IsNull( e1 )) {
HXLINE( 449)									return null();
            								}
            								else {
HXLINE( 449)									if (::hx::IsNull( pmin )) {
HXLINE( 449)										pmin = this->tokenMin;
            									}
HXDLIN( 449)									if (::hx::IsNull( pmax )) {
HXLINE( 449)										pmax = this->tokenMax;
            									}
HXDLIN( 449)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							default:{
HXLINE( 451)								return this->makeUnop(op,e);
            							}
            						}
            					}
            					else {
HXLINE( 451)						return this->makeUnop(op,e);
            					}
            				}
HXLINE( 454)				if (::hx::IsLess( this->opPriority->get(op),0 )) {
HXLINE( 455)					return this->makeUnop(op,this->parseExpr());
            				}
HXLINE( 456)				return this->unexpected(tk);
            			}
            			break;
            			case (int)4: {
HXLINE( 363)				tk = this->token();
HXLINE( 364)				if (::hx::IsPointerEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 365)					{
HXLINE( 365)						 ::hscript::Token t = this->token();
HXDLIN( 365)						if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 365)							this->unexpected(t);
            						}
            					}
HXLINE( 366)					 ::Dynamic eret = this->parseExpr();
HXLINE( 367)					 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EReturn(eret);
HXDLIN( 367)					 ::Dynamic pmin = p1;
HXDLIN( 367)					 ::Dynamic pmax = null();
HXDLIN( 367)					 ::Dynamic e1;
HXDLIN( 367)					if (::hx::IsNull( e )) {
HXLINE( 367)						e1 = null();
            					}
            					else {
HXLINE( 367)						if (::hx::IsNull( pmin )) {
HXLINE( 367)							pmin = this->tokenMin;
            						}
HXDLIN( 367)						if (::hx::IsNull( pmax )) {
HXLINE( 367)							pmax = this->tokenMax;
            						}
HXDLIN( 367)						e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 367)					 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(0),e1,null(),null());
HXDLIN( 367)					 ::Dynamic pmin1 = p1;
HXDLIN( 367)					 ::Dynamic pmax1 = null();
HXDLIN( 367)					if (::hx::IsNull( e2 )) {
HXLINE( 367)						return null();
            					}
            					else {
HXLINE( 367)						if (::hx::IsNull( pmin1 )) {
HXLINE( 367)							pmin1 = this->tokenMin;
            						}
HXDLIN( 367)						if (::hx::IsNull( pmax1 )) {
HXLINE( 367)							pmax1 = this->tokenMax;
            						}
HXDLIN( 367)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
HXLINE( 369)				{
HXLINE( 369)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 369)					this->tokenMin = this->oldTokenMin;
HXDLIN( 369)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 370)				 ::Dynamic e = this->parseExpr();
HXLINE( 371)				tk = this->token();
HXLINE( 372)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE( 374)						 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EParent(e);
HXDLIN( 374)						 ::Dynamic pmin = p1;
HXDLIN( 374)						 ::Dynamic pmax = this->tokenMax;
HXDLIN( 374)						 ::Dynamic _hx_tmp;
HXDLIN( 374)						if (::hx::IsNull( e1 )) {
HXLINE( 374)							_hx_tmp = null();
            						}
            						else {
HXLINE( 374)							if (::hx::IsNull( pmin )) {
HXLINE( 374)								pmin = this->tokenMin;
            							}
HXDLIN( 374)							if (::hx::IsNull( pmax )) {
HXLINE( 374)								pmax = this->tokenMax;
            							}
HXDLIN( 374)							_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("e",65,00,00,00),e1)
            								->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            								->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            								->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            								->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            						}
HXDLIN( 374)						return this->parseExprNext(_hx_tmp);
            					}
            					break;
            					case (int)9: {
HXLINE( 389)						 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 389)						if ((_g->_hx_getIndex() == 1)) {
HXLINE( 390)							::String v = _g->_hx_getString(0);
HXDLIN( 390)							int _hx_tmp;
HXDLIN( 390)							if (::hx::IsNull( e )) {
HXLINE( 390)								_hx_tmp = 0;
            							}
            							else {
HXLINE( 390)								_hx_tmp = ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            							}
HXDLIN( 390)							return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("name",4b,72,ff,48),v))),_hx_tmp);
            						}
            					}
            					break;
            					case (int)14: {
HXLINE( 376)						 ::hscript::CType t = this->parseType();
HXLINE( 377)						tk = this->token();
HXLINE( 378)						switch((int)(tk->_hx_getIndex())){
            							case (int)5: {
HXLINE( 380)								 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::ECheckType(e,t);
HXDLIN( 380)								 ::Dynamic pmin = p1;
HXDLIN( 380)								 ::Dynamic pmax = this->tokenMax;
HXDLIN( 380)								 ::Dynamic _hx_tmp;
HXDLIN( 380)								if (::hx::IsNull( e1 )) {
HXLINE( 380)									_hx_tmp = null();
            								}
            								else {
HXLINE( 380)									if (::hx::IsNull( pmin )) {
HXLINE( 380)										pmin = this->tokenMin;
            									}
HXDLIN( 380)									if (::hx::IsNull( pmax )) {
HXLINE( 380)										pmax = this->tokenMax;
            									}
HXDLIN( 380)									_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 380)								return this->parseExprNext(_hx_tmp);
            							}
            							break;
            							case (int)9: {
HXLINE( 382)								 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 382)								if ((_g->_hx_getIndex() == 1)) {
HXLINE( 383)									::String v = _g->_hx_getString(0);
HXDLIN( 383)									int _hx_tmp;
HXDLIN( 383)									if (::hx::IsNull( e )) {
HXLINE( 383)										_hx_tmp = 0;
            									}
            									else {
HXLINE( 383)										_hx_tmp = ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            									}
HXDLIN( 383)									return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),v))),_hx_tmp);
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 395)				return this->unexpected(tk);
            			}
            			break;
            			case (int)6: {
HXLINE( 397)				tk = this->token();
HXLINE( 398)				switch((int)(tk->_hx_getIndex())){
            					case (int)1: {
HXLINE( 410)						 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 411)						if (this->allowJSON) {
HXLINE( 412)							if ((c->_hx_getIndex() == 2)) {
HXLINE( 413)								::String _g = c->_hx_getString(0);
HXDLIN( 413)								{
HXLINE( 414)									 ::hscript::Token tk2 = this->token();
HXLINE( 415)									{
HXLINE( 415)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk2)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 415)										this->tokenMin = this->oldTokenMin;
HXDLIN( 415)										this->tokenMax = this->oldTokenMax;
            									}
HXLINE( 416)									{
HXLINE( 416)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 416)										this->tokenMin = this->oldTokenMin;
HXDLIN( 416)										this->tokenMax = this->oldTokenMax;
            									}
HXLINE( 417)									if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 419)										return this->parseExprNext(this->parseObject(p1));
            									}
            								}
            							}
            							else {
HXLINE( 423)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 423)								this->tokenMin = this->oldTokenMin;
HXDLIN( 423)								this->tokenMax = this->oldTokenMax;
            							}
            						}
            						else {
HXLINE( 426)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),tk)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 426)							this->tokenMin = this->oldTokenMin;
HXDLIN( 426)							this->tokenMax = this->oldTokenMax;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 401)						::String _g = tk->_hx_getString(0);
HXDLIN( 401)						{
HXLINE( 402)							 ::hscript::Token tk2 = this->token();
HXLINE( 403)							{
HXLINE( 403)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk2)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 403)								this->tokenMin = this->oldTokenMin;
HXDLIN( 403)								this->tokenMax = this->oldTokenMax;
            							}
HXLINE( 404)							{
HXLINE( 404)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 404)								this->tokenMin = this->oldTokenMin;
HXDLIN( 404)								this->tokenMax = this->oldTokenMax;
            							}
HXLINE( 405)							if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 407)								return this->parseExprNext(this->parseObject(p1));
            							}
            						}
            					}
            					break;
            					case (int)7: {
HXLINE( 400)						 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EObject(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 400)						 ::Dynamic pmin = p1;
HXDLIN( 400)						 ::Dynamic pmax = null();
HXDLIN( 400)						 ::Dynamic _hx_tmp;
HXDLIN( 400)						if (::hx::IsNull( e )) {
HXLINE( 400)							_hx_tmp = null();
            						}
            						else {
HXLINE( 400)							if (::hx::IsNull( pmin )) {
HXLINE( 400)								pmin = this->tokenMin;
            							}
HXDLIN( 400)							if (::hx::IsNull( pmax )) {
HXLINE( 400)								pmax = this->tokenMax;
            							}
HXDLIN( 400)							_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("e",65,00,00,00),e)
            								->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            								->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            								->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            								->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            						}
HXDLIN( 400)						return this->parseExprNext(_hx_tmp);
            					}
            					break;
            					default:{
HXLINE( 428)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 428)						this->tokenMin = this->oldTokenMin;
HXDLIN( 428)						this->tokenMax = this->oldTokenMax;
            					}
            				}
HXLINE( 430)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 431)				while(true){
HXLINE( 432)					this->parseFullExpr(a);
HXLINE( 433)					tk = this->token();
HXLINE( 434)					bool _hx_tmp;
HXDLIN( 434)					if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TBrClose_dyn() )) {
HXLINE( 434)						if (this->resumeErrors) {
HXLINE( 434)							_hx_tmp = ::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() );
            						}
            						else {
HXLINE( 434)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 434)						_hx_tmp = true;
            					}
HXDLIN( 434)					if (_hx_tmp) {
HXLINE( 435)						goto _hx_goto_36;
            					}
HXLINE( 436)					{
HXLINE( 436)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 436)						this->tokenMin = this->oldTokenMin;
HXDLIN( 436)						this->tokenMax = this->oldTokenMax;
            					}
            				}
            				_hx_goto_36:;
HXLINE( 438)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(a);
HXDLIN( 438)				 ::Dynamic pmin = p1;
HXDLIN( 438)				 ::Dynamic pmax = null();
HXDLIN( 438)				if (::hx::IsNull( e )) {
HXLINE( 438)					return null();
            				}
            				else {
HXLINE( 438)					if (::hx::IsNull( pmin )) {
HXLINE( 438)						pmin = this->tokenMin;
            					}
HXDLIN( 438)					if (::hx::IsNull( pmax )) {
HXLINE( 438)						pmax = this->tokenMax;
            					}
HXDLIN( 438)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 458)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 459)				tk = this->token();
HXLINE( 460)				while(true){
HXLINE( 460)					bool _hx_tmp;
HXDLIN( 460)					if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TBkClose_dyn() )) {
HXLINE( 460)						if (this->resumeErrors) {
HXLINE( 460)							_hx_tmp = ::hx::IsPointerNotEq( tk,::hscript::Token_obj::TEof_dyn() );
            						}
            						else {
HXLINE( 460)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 460)						_hx_tmp = false;
            					}
HXDLIN( 460)					if (!(_hx_tmp)) {
HXLINE( 460)						goto _hx_goto_37;
            					}
HXLINE( 461)					{
HXLINE( 461)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 461)						this->tokenMin = this->oldTokenMin;
HXDLIN( 461)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE( 462)					a->push(this->parseExpr());
HXLINE( 463)					tk = this->token();
HXLINE( 464)					if (::hx::IsPointerEq( tk,::hscript::Token_obj::TComma_dyn() )) {
HXLINE( 465)						tk = this->token();
            					}
            				}
            				_hx_goto_37:;
HXLINE( 467)				bool _hx_tmp;
HXDLIN( 467)				if ((a->length == 1)) {
HXLINE( 467)					_hx_tmp = ::hx::IsNotNull( a->__get(0) );
            				}
            				else {
HXLINE( 467)					_hx_tmp = false;
            				}
HXDLIN( 467)				if (_hx_tmp) {
HXLINE( 468)					 ::hscript::ExprDef _g = a->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 468)					switch((int)(_g->_hx_getIndex())){
            						case (int)10: {
HXLINE( 469)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 469)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE( 470)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 472)							 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 472)							 ::Dynamic pmin = p1;
HXDLIN( 472)							 ::Dynamic pmax = null();
HXDLIN( 472)							 ::Dynamic e1;
HXDLIN( 472)							if (::hx::IsNull( e )) {
HXLINE( 472)								e1 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin )) {
HXLINE( 472)									pmin = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax )) {
HXLINE( 472)									pmax = this->tokenMax;
            								}
HXDLIN( 472)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 472)							 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EVar(tmp,null(),e1);
HXDLIN( 472)							 ::Dynamic pmin1 = p1;
HXDLIN( 472)							 ::Dynamic pmax1 = null();
HXDLIN( 472)							 ::Dynamic e3;
HXDLIN( 472)							if (::hx::IsNull( e2 )) {
HXLINE( 472)								e3 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin1 )) {
HXLINE( 472)									pmin1 = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax1 )) {
HXLINE( 472)									pmax1 = this->tokenMax;
            								}
HXDLIN( 472)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 473)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 474)							 ::hscript::ExprDef e5 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 474)							 ::Dynamic pmin2 = p1;
HXDLIN( 474)							 ::Dynamic pmax2 = null();
HXDLIN( 474)							 ::Dynamic e6;
HXDLIN( 474)							if (::hx::IsNull( e5 )) {
HXLINE( 474)								e6 = null();
            							}
            							else {
HXLINE( 474)								if (::hx::IsNull( pmin2 )) {
HXLINE( 474)									pmin2 = this->tokenMin;
            								}
HXDLIN( 474)								if (::hx::IsNull( pmax2 )) {
HXLINE( 474)									pmax2 = this->tokenMax;
            								}
HXDLIN( 474)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 471)							 ::hscript::ExprDef e7 = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 471)							 ::Dynamic pmin3 = p1;
HXDLIN( 471)							 ::Dynamic pmax3 = null();
HXDLIN( 471)							 ::Dynamic e8;
HXDLIN( 471)							if (::hx::IsNull( e7 )) {
HXLINE( 471)								e8 = null();
            							}
            							else {
HXLINE( 471)								if (::hx::IsNull( pmin3 )) {
HXLINE( 471)									pmin3 = this->tokenMin;
            								}
HXDLIN( 471)								if (::hx::IsNull( pmax3 )) {
HXLINE( 471)									pmax3 = this->tokenMax;
            								}
HXDLIN( 471)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 476)							return this->parseExprNext(e8);
            						}
            						break;
            						case (int)11: {
HXLINE( 469)							::String _g1 = _g->_hx_getString(0);
HXDLIN( 469)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 469)							 ::Dynamic _g3 = _g->_hx_getObject(2);
HXLINE( 470)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 472)							 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 472)							 ::Dynamic pmin = p1;
HXDLIN( 472)							 ::Dynamic pmax = null();
HXDLIN( 472)							 ::Dynamic e1;
HXDLIN( 472)							if (::hx::IsNull( e )) {
HXLINE( 472)								e1 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin )) {
HXLINE( 472)									pmin = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax )) {
HXLINE( 472)									pmax = this->tokenMax;
            								}
HXDLIN( 472)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 472)							 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EVar(tmp,null(),e1);
HXDLIN( 472)							 ::Dynamic pmin1 = p1;
HXDLIN( 472)							 ::Dynamic pmax1 = null();
HXDLIN( 472)							 ::Dynamic e3;
HXDLIN( 472)							if (::hx::IsNull( e2 )) {
HXLINE( 472)								e3 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin1 )) {
HXLINE( 472)									pmin1 = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax1 )) {
HXLINE( 472)									pmax1 = this->tokenMax;
            								}
HXDLIN( 472)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 473)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 474)							 ::hscript::ExprDef e5 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 474)							 ::Dynamic pmin2 = p1;
HXDLIN( 474)							 ::Dynamic pmax2 = null();
HXDLIN( 474)							 ::Dynamic e6;
HXDLIN( 474)							if (::hx::IsNull( e5 )) {
HXLINE( 474)								e6 = null();
            							}
            							else {
HXLINE( 474)								if (::hx::IsNull( pmin2 )) {
HXLINE( 474)									pmin2 = this->tokenMin;
            								}
HXDLIN( 474)								if (::hx::IsNull( pmax2 )) {
HXLINE( 474)									pmax2 = this->tokenMax;
            								}
HXDLIN( 474)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 471)							 ::hscript::ExprDef e7 = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 471)							 ::Dynamic pmin3 = p1;
HXDLIN( 471)							 ::Dynamic pmax3 = null();
HXDLIN( 471)							 ::Dynamic e8;
HXDLIN( 471)							if (::hx::IsNull( e7 )) {
HXLINE( 471)								e8 = null();
            							}
            							else {
HXLINE( 471)								if (::hx::IsNull( pmin3 )) {
HXLINE( 471)									pmin3 = this->tokenMin;
            								}
HXDLIN( 471)								if (::hx::IsNull( pmax3 )) {
HXLINE( 471)									pmax3 = this->tokenMax;
            								}
HXDLIN( 471)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 476)							return this->parseExprNext(e8);
            						}
            						break;
            						case (int)24: {
HXLINE( 469)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 469)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE( 470)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 472)							 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 472)							 ::Dynamic pmin = p1;
HXDLIN( 472)							 ::Dynamic pmax = null();
HXDLIN( 472)							 ::Dynamic e1;
HXDLIN( 472)							if (::hx::IsNull( e )) {
HXLINE( 472)								e1 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin )) {
HXLINE( 472)									pmin = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax )) {
HXLINE( 472)									pmax = this->tokenMax;
            								}
HXDLIN( 472)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 472)							 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EVar(tmp,null(),e1);
HXDLIN( 472)							 ::Dynamic pmin1 = p1;
HXDLIN( 472)							 ::Dynamic pmax1 = null();
HXDLIN( 472)							 ::Dynamic e3;
HXDLIN( 472)							if (::hx::IsNull( e2 )) {
HXLINE( 472)								e3 = null();
            							}
            							else {
HXLINE( 472)								if (::hx::IsNull( pmin1 )) {
HXLINE( 472)									pmin1 = this->tokenMin;
            								}
HXDLIN( 472)								if (::hx::IsNull( pmax1 )) {
HXLINE( 472)									pmax1 = this->tokenMax;
            								}
HXDLIN( 472)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 473)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 474)							 ::hscript::ExprDef e5 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 474)							 ::Dynamic pmin2 = p1;
HXDLIN( 474)							 ::Dynamic pmax2 = null();
HXDLIN( 474)							 ::Dynamic e6;
HXDLIN( 474)							if (::hx::IsNull( e5 )) {
HXLINE( 474)								e6 = null();
            							}
            							else {
HXLINE( 474)								if (::hx::IsNull( pmin2 )) {
HXLINE( 474)									pmin2 = this->tokenMin;
            								}
HXDLIN( 474)								if (::hx::IsNull( pmax2 )) {
HXLINE( 474)									pmax2 = this->tokenMax;
            								}
HXDLIN( 474)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 471)							 ::hscript::ExprDef e7 = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 471)							 ::Dynamic pmin3 = p1;
HXDLIN( 471)							 ::Dynamic pmax3 = null();
HXDLIN( 471)							 ::Dynamic e8;
HXDLIN( 471)							if (::hx::IsNull( e7 )) {
HXLINE( 471)								e8 = null();
            							}
            							else {
HXLINE( 471)								if (::hx::IsNull( pmin3 )) {
HXLINE( 471)									pmin3 = this->tokenMin;
            								}
HXDLIN( 471)								if (::hx::IsNull( pmax3 )) {
HXLINE( 471)									pmax3 = this->tokenMax;
            								}
HXDLIN( 471)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 476)							return this->parseExprNext(e8);
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 479)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EArrayDecl(a);
HXDLIN( 479)				 ::Dynamic pmin = p1;
HXDLIN( 479)				 ::Dynamic pmax = null();
HXDLIN( 479)				 ::Dynamic _hx_tmp1;
HXDLIN( 479)				if (::hx::IsNull( e )) {
HXLINE( 479)					_hx_tmp1 = null();
            				}
            				else {
HXLINE( 479)					if (::hx::IsNull( pmin )) {
HXLINE( 479)						pmin = this->tokenMin;
            					}
HXDLIN( 479)					if (::hx::IsNull( pmax )) {
HXLINE( 479)						pmax = this->tokenMax;
            					}
HXDLIN( 479)					_hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 479)				return this->parseExprNext(_hx_tmp1);
            			}
            			break;
            			case (int)15: {
HXLINE( 480)				::String id = tk->_hx_getString(0);
HXDLIN( 480)				if (this->allowMetadata) {
HXLINE( 481)					::Array< ::Dynamic> args = this->parseMetaArgs();
HXLINE( 482)					 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EMeta(id,args,this->parseExpr());
HXDLIN( 482)					 ::Dynamic pmin = p1;
HXDLIN( 482)					 ::Dynamic pmax = null();
HXDLIN( 482)					if (::hx::IsNull( e )) {
HXLINE( 482)						return null();
            					}
            					else {
HXLINE( 482)						if (::hx::IsNull( pmin )) {
HXLINE( 482)							pmin = this->tokenMin;
            						}
HXDLIN( 482)						if (::hx::IsNull( pmax )) {
HXLINE( 482)							pmax = this->tokenMax;
            						}
HXDLIN( 482)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 484)					return this->unexpected(tk);
            				}
            			}
            			break;
            			default:{
HXLINE( 484)				return this->unexpected(tk);
            			}
            		}
HXLINE( 354)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

 ::Dynamic Parser_obj::parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_488_parseLambda)
HXLINE( 489)		while(true){
HXLINE( 490)			::String id = this->getIdent();
HXLINE( 491)			 ::hscript::CType t;
HXDLIN( 491)			if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE( 491)				t = this->parseType();
            			}
            			else {
HXLINE( 491)				t = null();
            			}
HXLINE( 492)			args->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 493)			 ::hscript::Token tk = this->token();
HXLINE( 494)			switch((int)(tk->_hx_getIndex())){
            				case (int)5: {
HXLINE( 497)					goto _hx_goto_39;
            				}
            				break;
            				case (int)9: {
            				}
            				break;
            				default:{
HXLINE( 499)					this->unexpected(tk);
HXLINE( 500)					goto _hx_goto_39;
            				}
            			}
            		}
            		_hx_goto_39:;
HXLINE( 503)		{
HXLINE( 503)			 ::hscript::Token t = this->token();
HXDLIN( 503)			if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 503)				this->unexpected(t);
            			}
            		}
HXLINE( 504)		 ::Dynamic eret = this->parseExpr();
HXLINE( 505)		 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EReturn(eret);
HXDLIN( 505)		 ::Dynamic pmin1 = pmin;
HXDLIN( 505)		 ::Dynamic pmax = null();
HXDLIN( 505)		 ::Dynamic e1;
HXDLIN( 505)		if (::hx::IsNull( e )) {
HXLINE( 505)			e1 = null();
            		}
            		else {
HXLINE( 505)			if (::hx::IsNull( pmin1 )) {
HXLINE( 505)				pmin1 = this->tokenMin;
            			}
HXDLIN( 505)			if (::hx::IsNull( pmax )) {
HXLINE( 505)				pmax = this->tokenMax;
            			}
HXDLIN( 505)			e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 505)		 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EFunction(args,e1,null(),null());
HXDLIN( 505)		 ::Dynamic pmin2 = pmin;
HXDLIN( 505)		 ::Dynamic pmax1 = null();
HXDLIN( 505)		if (::hx::IsNull( e2 )) {
HXLINE( 505)			return null();
            		}
            		else {
HXLINE( 505)			if (::hx::IsNull( pmin2 )) {
HXLINE( 505)				pmin2 = this->tokenMin;
            			}
HXDLIN( 505)			if (::hx::IsNull( pmax1 )) {
HXLINE( 505)				pmax1 = this->tokenMax;
            			}
HXDLIN( 505)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e2)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 505)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseLambda,return )

::Array< ::Dynamic> Parser_obj::parseMetaArgs(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_508_parseMetaArgs)
HXLINE( 509)		 ::hscript::Token tk = this->token();
HXLINE( 510)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 511)			{
HXLINE( 511)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 511)				this->tokenMin = this->oldTokenMin;
HXDLIN( 511)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 512)			return null();
            		}
HXLINE( 514)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 515)		tk = this->token();
HXLINE( 516)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 517)			{
HXLINE( 517)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 517)				this->tokenMin = this->oldTokenMin;
HXDLIN( 517)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 518)			while(true){
HXLINE( 519)				args->push(this->parseExpr());
HXLINE( 520)				{
HXLINE( 520)					 ::hscript::Token _g = this->token();
HXDLIN( 520)					switch((int)(_g->_hx_getIndex())){
            						case (int)5: {
HXLINE( 523)							goto _hx_goto_41;
            						}
            						break;
            						case (int)9: {
            						}
            						break;
            						default:{
HXLINE( 524)							 ::hscript::Token tk = _g;
HXLINE( 525)							this->unexpected(tk);
            						}
            					}
            				}
            			}
            			_hx_goto_41:;
            		}
HXLINE( 529)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetaArgs,return )

 ::Dynamic Parser_obj::mapCompr(::String tmp, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_532_mapCompr)
HXLINE( 533)		if (::hx::IsNull( e )) {
HXLINE( 533)			return null();
            		}
HXLINE( 534)		 ::hscript::ExprDef edef;
HXDLIN( 534)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 534)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 545)				 ::Dynamic e2 = _g->_hx_getObject(0);
HXLINE( 534)				edef = ::hscript::ExprDef_obj::EParent(this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)4: {
HXLINE( 543)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 543)				if ((_g1->length == 1)) {
HXLINE( 543)					 ::Dynamic e = _g1->__get(0);
HXLINE( 534)					edef = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mapCompr(tmp,e)));
            				}
            				else {
HXLINE( 548)					 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 548)					 ::Dynamic pmin;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmin = 0;
            					}
            					else {
HXLINE( 548)						pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic pmax;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmax = 0;
            					}
            					else {
HXLINE( 548)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic e2;
HXDLIN( 548)					if (::hx::IsNull( e1 )) {
HXLINE( 548)						e2 = null();
            					}
            					else {
HXLINE( 548)						if (::hx::IsNull( pmin )) {
HXLINE( 548)							pmin = this->tokenMin;
            						}
HXDLIN( 548)						if (::hx::IsNull( pmax )) {
HXLINE( 548)							pmax = this->tokenMax;
            						}
HXDLIN( 548)						e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 548)					 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 548)					 ::Dynamic pmin1;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmin1 = 0;
            					}
            					else {
HXLINE( 548)						pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic pmax1;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmax1 = 0;
            					}
            					else {
HXLINE( 548)						pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic edef1;
HXDLIN( 548)					if (::hx::IsNull( e3 )) {
HXLINE( 548)						edef1 = null();
            					}
            					else {
HXLINE( 548)						if (::hx::IsNull( pmin1 )) {
HXLINE( 548)							pmin1 = this->tokenMin;
            						}
HXDLIN( 548)						if (::hx::IsNull( pmax1 )) {
HXLINE( 548)							pmax1 = this->tokenMax;
            						}
HXDLIN( 548)						edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e3)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXLINE( 534)					edef = ::hscript::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 541)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 541)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 541)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 541)				if (::hx::IsNull( e2 )) {
HXLINE( 534)					edef = ::hscript::ExprDef_obj::EIf(cond,this->mapCompr(tmp,e1),null());
            				}
            				else {
HXLINE( 548)					 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 548)					 ::Dynamic pmin;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmin = 0;
            					}
            					else {
HXLINE( 548)						pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic pmax;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmax = 0;
            					}
            					else {
HXLINE( 548)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic e2;
HXDLIN( 548)					if (::hx::IsNull( e1 )) {
HXLINE( 548)						e2 = null();
            					}
            					else {
HXLINE( 548)						if (::hx::IsNull( pmin )) {
HXLINE( 548)							pmin = this->tokenMin;
            						}
HXDLIN( 548)						if (::hx::IsNull( pmax )) {
HXLINE( 548)							pmax = this->tokenMax;
            						}
HXDLIN( 548)						e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 548)					 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 548)					 ::Dynamic pmin1;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmin1 = 0;
            					}
            					else {
HXLINE( 548)						pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic pmax1;
HXDLIN( 548)					if (::hx::IsNull( e )) {
HXLINE( 548)						pmax1 = 0;
            					}
            					else {
HXLINE( 548)						pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 548)					 ::Dynamic edef1;
HXDLIN( 548)					if (::hx::IsNull( e3 )) {
HXLINE( 548)						edef1 = null();
            					}
            					else {
HXLINE( 548)						if (::hx::IsNull( pmin1 )) {
HXLINE( 548)							pmin1 = this->tokenMin;
            						}
HXDLIN( 548)						if (::hx::IsNull( pmax1 )) {
HXLINE( 548)							pmax1 = this->tokenMax;
            						}
HXDLIN( 548)						edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e3)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXLINE( 534)					edef = ::hscript::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 537)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 537)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXLINE( 534)				edef = ::hscript::ExprDef_obj::EWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)11: {
HXLINE( 535)				::String v = _g->_hx_getString(0);
HXDLIN( 535)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 535)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXLINE( 534)				edef = ::hscript::ExprDef_obj::EFor(v,it,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)24: {
HXLINE( 539)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 539)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXLINE( 534)				edef = ::hscript::ExprDef_obj::EDoWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			default:{
HXLINE( 548)				 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EIdent(tmp);
HXDLIN( 548)				 ::Dynamic pmin;
HXDLIN( 548)				if (::hx::IsNull( e )) {
HXLINE( 548)					pmin = 0;
            				}
            				else {
HXLINE( 548)					pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 548)				 ::Dynamic pmax;
HXDLIN( 548)				if (::hx::IsNull( e )) {
HXLINE( 548)					pmax = 0;
            				}
            				else {
HXLINE( 548)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 548)				 ::Dynamic e2;
HXDLIN( 548)				if (::hx::IsNull( e1 )) {
HXLINE( 548)					e2 = null();
            				}
            				else {
HXLINE( 548)					if (::hx::IsNull( pmin )) {
HXLINE( 548)						pmin = this->tokenMin;
            					}
HXDLIN( 548)					if (::hx::IsNull( pmax )) {
HXLINE( 548)						pmax = this->tokenMax;
            					}
HXDLIN( 548)					e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e1)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 548)				 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 548)				 ::Dynamic pmin1;
HXDLIN( 548)				if (::hx::IsNull( e )) {
HXLINE( 548)					pmin1 = 0;
            				}
            				else {
HXLINE( 548)					pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 548)				 ::Dynamic pmax1;
HXDLIN( 548)				if (::hx::IsNull( e )) {
HXLINE( 548)					pmax1 = 0;
            				}
            				else {
HXLINE( 548)					pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 548)				 ::Dynamic edef1;
HXDLIN( 548)				if (::hx::IsNull( e3 )) {
HXLINE( 548)					edef1 = null();
            				}
            				else {
HXLINE( 548)					if (::hx::IsNull( pmin1 )) {
HXLINE( 548)						pmin1 = this->tokenMin;
            					}
HXDLIN( 548)					if (::hx::IsNull( pmax1 )) {
HXLINE( 548)						pmax1 = this->tokenMax;
            					}
HXDLIN( 548)					edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e3)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXLINE( 534)				edef = ::hscript::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            			}
            		}
HXLINE( 550)		 ::Dynamic pmin;
HXDLIN( 550)		if (::hx::IsNull( e )) {
HXLINE( 550)			pmin = 0;
            		}
            		else {
HXLINE( 550)			pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            		}
HXDLIN( 550)		 ::Dynamic pmax;
HXDLIN( 550)		if (::hx::IsNull( e )) {
HXLINE( 550)			pmax = 0;
            		}
            		else {
HXLINE( 550)			pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            		}
HXDLIN( 550)		if (::hx::IsNull( edef )) {
HXLINE( 550)			return null();
            		}
            		else {
HXLINE( 550)			if (::hx::IsNull( pmin )) {
HXLINE( 550)				pmin = this->tokenMin;
            			}
HXDLIN( 550)			if (::hx::IsNull( pmax )) {
HXLINE( 550)				pmax = this->tokenMax;
            			}
HXDLIN( 550)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),edef)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 550)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

 ::Dynamic Parser_obj::makeUnop(::String op, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_553_makeUnop)
HXLINE( 554)		bool _hx_tmp;
HXDLIN( 554)		if (::hx::IsNull( e )) {
HXLINE( 554)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 554)			_hx_tmp = false;
            		}
HXDLIN( 554)		if (_hx_tmp) {
HXLINE( 555)			return null();
            		}
HXLINE( 556)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 556)		switch((int)(_g->_hx_getIndex())){
            			case (int)6: {
HXLINE( 557)				::String bop = _g->_hx_getString(0);
HXDLIN( 557)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 557)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 557)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBinop(bop,this->makeUnop(op,e1),e2);
HXDLIN( 557)				 ::Dynamic pmin;
HXDLIN( 557)				if (::hx::IsNull( e1 )) {
HXLINE( 557)					pmin = 0;
            				}
            				else {
HXLINE( 557)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 557)				 ::Dynamic pmax;
HXDLIN( 557)				if (::hx::IsNull( e2 )) {
HXLINE( 557)					pmax = 0;
            				}
            				else {
HXLINE( 557)					pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 557)				if (::hx::IsNull( e )) {
HXLINE( 557)					return null();
            				}
            				else {
HXLINE( 557)					if (::hx::IsNull( pmin )) {
HXLINE( 557)						pmin = this->tokenMin;
            					}
HXDLIN( 557)					if (::hx::IsNull( pmax )) {
HXLINE( 557)						pmax = this->tokenMax;
            					}
HXDLIN( 557)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 558)				 ::Dynamic e1 = _g->_hx_getObject(0);
HXDLIN( 558)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXDLIN( 558)				 ::Dynamic e3 = _g->_hx_getObject(2);
HXDLIN( 558)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::ETernary(this->makeUnop(op,e1),e2,e3);
HXDLIN( 558)				 ::Dynamic pmin;
HXDLIN( 558)				if (::hx::IsNull( e1 )) {
HXLINE( 558)					pmin = 0;
            				}
            				else {
HXLINE( 558)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 558)				 ::Dynamic pmax;
HXDLIN( 558)				if (::hx::IsNull( e3 )) {
HXLINE( 558)					pmax = 0;
            				}
            				else {
HXLINE( 558)					pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 558)				if (::hx::IsNull( e )) {
HXLINE( 558)					return null();
            				}
            				else {
HXLINE( 558)					if (::hx::IsNull( pmin )) {
HXLINE( 558)						pmin = this->tokenMin;
            					}
HXDLIN( 558)					if (::hx::IsNull( pmax )) {
HXLINE( 558)						pmax = this->tokenMax;
            					}
HXDLIN( 558)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			default:{
HXLINE( 559)				 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EUnop(op,true,e);
HXDLIN( 559)				 ::Dynamic pmin;
HXDLIN( 559)				if (::hx::IsNull( e )) {
HXLINE( 559)					pmin = 0;
            				}
            				else {
HXLINE( 559)					pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 559)				 ::Dynamic pmax;
HXDLIN( 559)				if (::hx::IsNull( e )) {
HXLINE( 559)					pmax = 0;
            				}
            				else {
HXLINE( 559)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 559)				if (::hx::IsNull( e1 )) {
HXLINE( 559)					return null();
            				}
            				else {
HXLINE( 559)					if (::hx::IsNull( pmin )) {
HXLINE( 559)						pmin = this->tokenMin;
            					}
HXDLIN( 559)					if (::hx::IsNull( pmax )) {
HXLINE( 559)						pmax = this->tokenMax;
            					}
HXDLIN( 559)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e1)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            		}
HXLINE( 556)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

 ::Dynamic Parser_obj::makeBinop(::String op, ::Dynamic e1, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_563_makeBinop)
HXLINE( 564)		bool _hx_tmp;
HXDLIN( 564)		if (::hx::IsNull( e )) {
HXLINE( 564)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 564)			_hx_tmp = false;
            		}
HXDLIN( 564)		if (_hx_tmp) {
HXLINE( 565)			 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 565)			 ::Dynamic pmin;
HXDLIN( 565)			if (::hx::IsNull( e1 )) {
HXLINE( 565)				pmin = 0;
            			}
            			else {
HXLINE( 565)				pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 565)			 ::Dynamic pmax;
HXDLIN( 565)			if (::hx::IsNull( e1 )) {
HXLINE( 565)				pmax = 0;
            			}
            			else {
HXLINE( 565)				pmax = e1->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 565)			if (::hx::IsNull( e2 )) {
HXLINE( 565)				return null();
            			}
            			else {
HXLINE( 565)				if (::hx::IsNull( pmin )) {
HXLINE( 565)					pmin = this->tokenMin;
            				}
HXDLIN( 565)				if (::hx::IsNull( pmax )) {
HXLINE( 565)					pmax = this->tokenMax;
            				}
HXDLIN( 565)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e2)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
            		}
HXLINE( 566)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 566)		switch((int)(_g->_hx_getIndex())){
            			case (int)6: {
HXLINE( 567)				::String op2 = _g->_hx_getString(0);
HXDLIN( 567)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXDLIN( 567)				 ::Dynamic e3 = _g->_hx_getObject(2);
HXLINE( 568)				bool _hx_tmp;
HXDLIN( 568)				 ::Dynamic _hx_tmp1 = this->opPriority->get(op);
HXDLIN( 568)				if (::hx::IsLessEq( _hx_tmp1,this->opPriority->get(op2) )) {
HXLINE( 568)					_hx_tmp = !(this->opRightAssoc->exists(op));
            				}
            				else {
HXLINE( 568)					_hx_tmp = false;
            				}
HXDLIN( 568)				if (_hx_tmp) {
HXLINE( 569)					 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBinop(op2,this->makeBinop(op,e1,e2),e3);
HXDLIN( 569)					 ::Dynamic pmin;
HXDLIN( 569)					if (::hx::IsNull( e1 )) {
HXLINE( 569)						pmin = 0;
            					}
            					else {
HXLINE( 569)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 569)					 ::Dynamic pmax;
HXDLIN( 569)					if (::hx::IsNull( e3 )) {
HXLINE( 569)						pmax = 0;
            					}
            					else {
HXLINE( 569)						pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 569)					if (::hx::IsNull( e )) {
HXLINE( 569)						return null();
            					}
            					else {
HXLINE( 569)						if (::hx::IsNull( pmin )) {
HXLINE( 569)							pmin = this->tokenMin;
            						}
HXDLIN( 569)						if (::hx::IsNull( pmax )) {
HXLINE( 569)							pmax = this->tokenMax;
            						}
HXDLIN( 569)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 571)					 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 571)					 ::Dynamic pmin;
HXDLIN( 571)					if (::hx::IsNull( e1 )) {
HXLINE( 571)						pmin = 0;
            					}
            					else {
HXLINE( 571)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 571)					 ::Dynamic pmax;
HXDLIN( 571)					if (::hx::IsNull( e )) {
HXLINE( 571)						pmax = 0;
            					}
            					else {
HXLINE( 571)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 571)					if (::hx::IsNull( e2 )) {
HXLINE( 571)						return null();
            					}
            					else {
HXLINE( 571)						if (::hx::IsNull( pmin )) {
HXLINE( 571)							pmin = this->tokenMin;
            						}
HXDLIN( 571)						if (::hx::IsNull( pmax )) {
HXLINE( 571)							pmax = this->tokenMax;
            						}
HXDLIN( 571)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 572)				 ::Dynamic e2 = _g->_hx_getObject(0);
HXDLIN( 572)				 ::Dynamic e3 = _g->_hx_getObject(1);
HXDLIN( 572)				 ::Dynamic e4 = _g->_hx_getObject(2);
HXLINE( 573)				if (this->opRightAssoc->exists(op)) {
HXLINE( 574)					 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 574)					 ::Dynamic pmin;
HXDLIN( 574)					if (::hx::IsNull( e1 )) {
HXLINE( 574)						pmin = 0;
            					}
            					else {
HXLINE( 574)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 574)					 ::Dynamic pmax;
HXDLIN( 574)					if (::hx::IsNull( e )) {
HXLINE( 574)						pmax = 0;
            					}
            					else {
HXLINE( 574)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 574)					if (::hx::IsNull( e2 )) {
HXLINE( 574)						return null();
            					}
            					else {
HXLINE( 574)						if (::hx::IsNull( pmin )) {
HXLINE( 574)							pmin = this->tokenMin;
            						}
HXDLIN( 574)						if (::hx::IsNull( pmax )) {
HXLINE( 574)							pmax = this->tokenMax;
            						}
HXDLIN( 574)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 576)					 ::hscript::ExprDef e5 = ::hscript::ExprDef_obj::ETernary(this->makeBinop(op,e1,e2),e3,e4);
HXDLIN( 576)					 ::Dynamic pmin;
HXDLIN( 576)					if (::hx::IsNull( e1 )) {
HXLINE( 576)						pmin = 0;
            					}
            					else {
HXLINE( 576)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 576)					 ::Dynamic pmax;
HXDLIN( 576)					if (::hx::IsNull( e )) {
HXLINE( 576)						pmax = 0;
            					}
            					else {
HXLINE( 576)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 576)					if (::hx::IsNull( e5 )) {
HXLINE( 576)						return null();
            					}
            					else {
HXLINE( 576)						if (::hx::IsNull( pmin )) {
HXLINE( 576)							pmin = this->tokenMin;
            						}
HXDLIN( 576)						if (::hx::IsNull( pmax )) {
HXLINE( 576)							pmax = this->tokenMax;
            						}
HXDLIN( 576)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e5)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 578)				 ::hscript::ExprDef e2 = ::hscript::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 578)				 ::Dynamic pmin;
HXDLIN( 578)				if (::hx::IsNull( e1 )) {
HXLINE( 578)					pmin = 0;
            				}
            				else {
HXLINE( 578)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 578)				 ::Dynamic pmax;
HXDLIN( 578)				if (::hx::IsNull( e )) {
HXLINE( 578)					pmax = 0;
            				}
            				else {
HXLINE( 578)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 578)				if (::hx::IsNull( e2 )) {
HXLINE( 578)					return null();
            				}
            				else {
HXLINE( 578)					if (::hx::IsNull( pmin )) {
HXLINE( 578)						pmin = this->tokenMin;
            					}
HXDLIN( 578)					if (::hx::IsNull( pmax )) {
HXLINE( 578)						pmax = this->tokenMax;
            					}
HXDLIN( 578)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e2)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            		}
HXLINE( 566)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

 ::Dynamic Parser_obj::parseStructure(::String id){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_582_parseStructure)
HXLINE( 584)		int p1 = this->tokenMin;
HXLINE( 586)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 642)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBreak_dyn();
HXDLIN( 642)			 ::Dynamic pmin = null();
HXDLIN( 642)			 ::Dynamic pmax = null();
HXDLIN( 642)			if (::hx::IsNull( e )) {
HXLINE( 642)				return null();
            			}
            			else {
HXLINE( 642)				if (::hx::IsNull( pmin )) {
HXLINE( 642)					pmin = this->tokenMin;
            				}
HXDLIN( 642)				if (::hx::IsNull( pmax )) {
HXLINE( 642)					pmax = this->tokenMax;
            				}
HXDLIN( 642)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXDLIN( 642)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 643)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EContinue_dyn();
HXDLIN( 643)			 ::Dynamic pmin = null();
HXDLIN( 643)			 ::Dynamic pmax = null();
HXDLIN( 643)			if (::hx::IsNull( e )) {
HXLINE( 643)				return null();
            			}
            			else {
HXLINE( 643)				if (::hx::IsNull( pmin )) {
HXLINE( 643)					pmin = this->tokenMin;
            				}
HXDLIN( 643)				if (::hx::IsNull( pmax )) {
HXLINE( 643)					pmax = this->tokenMax;
            				}
HXDLIN( 643)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXDLIN( 643)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("do",8b,57,00,00)) ){
HXLINE( 625)			 ::Dynamic e = this->parseExpr();
HXLINE( 626)			 ::hscript::Token tk = this->token();
HXLINE( 627)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 629)				if ((tk->_hx_getString(0) != HX_("while",b1,43,bd,c9))) {
HXLINE( 630)					this->unexpected(tk);
            				}
            			}
            			else {
HXLINE( 630)				this->unexpected(tk);
            			}
HXLINE( 632)			 ::Dynamic econd = this->parseExpr();
HXLINE( 633)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EDoWhile(econd,e);
HXDLIN( 633)			 ::Dynamic pmin = p1;
HXDLIN( 633)			 ::Dynamic pmax;
HXDLIN( 633)			if (::hx::IsNull( econd )) {
HXLINE( 633)				pmax = 0;
            			}
            			else {
HXLINE( 633)				pmax = econd->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 633)			if (::hx::IsNull( e1 )) {
HXLINE( 633)				return null();
            			}
            			else {
HXLINE( 633)				if (::hx::IsNull( pmin )) {
HXLINE( 633)					pmin = this->tokenMin;
            				}
HXDLIN( 633)				if (::hx::IsNull( pmax )) {
HXLINE( 633)					pmax = this->tokenMax;
            				}
HXDLIN( 633)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 624)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 644)			return this->unexpected(::hscript::Token_obj::TId(id));
HXDLIN( 644)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("for",09,c7,4d,00)) ){
HXLINE( 635)			{
HXLINE( 635)				 ::hscript::Token t = this->token();
HXDLIN( 635)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 635)					this->unexpected(t);
            				}
            			}
HXLINE( 636)			::String vname = this->getIdent();
HXLINE( 637)			{
HXLINE( 637)				 ::hscript::Token t1 = this->token();
HXDLIN( 637)				if (!(__hxcpp_enum_eq(t1,::hscript::Token_obj::TId(HX_("in",e5,5b,00,00))))) {
HXLINE( 637)					this->unexpected(t1);
            				}
            			}
HXLINE( 638)			 ::Dynamic eiter = this->parseExpr();
HXLINE( 639)			{
HXLINE( 639)				 ::hscript::Token t2 = this->token();
HXDLIN( 639)				if (::hx::IsPointerNotEq( t2,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 639)					this->unexpected(t2);
            				}
            			}
HXLINE( 640)			 ::Dynamic e = this->parseExpr();
HXLINE( 641)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EFor(vname,eiter,e);
HXDLIN( 641)			 ::Dynamic pmin = p1;
HXDLIN( 641)			 ::Dynamic pmax;
HXDLIN( 641)			if (::hx::IsNull( e )) {
HXLINE( 641)				pmax = 0;
            			}
            			else {
HXLINE( 641)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 641)			if (::hx::IsNull( e1 )) {
HXLINE( 641)				return null();
            			}
            			else {
HXLINE( 641)				if (::hx::IsNull( pmin )) {
HXLINE( 641)					pmin = this->tokenMin;
            				}
HXDLIN( 641)				if (::hx::IsNull( pmax )) {
HXLINE( 641)					pmax = this->tokenMax;
            				}
HXDLIN( 641)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 634)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE( 649)			 ::hscript::Token tk = this->token();
HXLINE( 650)			::String name = null();
HXLINE( 651)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 652)				::String id = tk->_hx_getString(0);
HXDLIN( 652)				name = id;
            			}
            			else {
HXLINE( 653)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 653)				this->tokenMin = this->oldTokenMin;
HXDLIN( 653)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 655)			 ::Dynamic inf = this->parseFunctionDecl();
HXLINE( 656)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EFunction( ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)),name, ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)));
HXDLIN( 656)			 ::Dynamic pmin = p1;
HXDLIN( 656)			 ::Dynamic e1 = inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic);
HXDLIN( 656)			 ::Dynamic pmax;
HXDLIN( 656)			if (::hx::IsNull( e1 )) {
HXLINE( 656)				pmax = 0;
            			}
            			else {
HXLINE( 656)				pmax = e1->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 656)			if (::hx::IsNull( e )) {
HXLINE( 656)				return null();
            			}
            			else {
HXLINE( 656)				if (::hx::IsNull( pmin )) {
HXLINE( 656)					pmin = this->tokenMin;
            				}
HXDLIN( 656)				if (::hx::IsNull( pmax )) {
HXLINE( 656)					pmax = this->tokenMax;
            				}
HXDLIN( 656)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 648)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 588)			{
HXLINE( 588)				 ::hscript::Token t = this->token();
HXDLIN( 588)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 588)					this->unexpected(t);
            				}
            			}
HXLINE( 589)			 ::Dynamic cond = this->parseExpr();
HXLINE( 590)			{
HXLINE( 590)				 ::hscript::Token t1 = this->token();
HXDLIN( 590)				if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 590)					this->unexpected(t1);
            				}
            			}
HXLINE( 591)			 ::Dynamic e1 = this->parseExpr();
HXLINE( 592)			 ::Dynamic e2 = null();
HXLINE( 593)			bool semic = false;
HXLINE( 594)			 ::hscript::Token tk = this->token();
HXLINE( 595)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 596)				semic = true;
HXLINE( 597)				tk = this->token();
            			}
HXLINE( 599)			if (__hxcpp_enum_eq(tk,::hscript::Token_obj::TId(HX_("else",b9,e4,14,43)))) {
HXLINE( 600)				e2 = this->parseExpr();
            			}
            			else {
HXLINE( 602)				{
HXLINE( 602)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 602)					this->tokenMin = this->oldTokenMin;
HXDLIN( 602)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 603)				if (semic) {
HXLINE( 603)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),::hscript::Token_obj::TSemicolon_dyn())
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 603)					this->tokenMin = this->oldTokenMin;
HXDLIN( 603)					this->tokenMax = this->oldTokenMax;
            				}
            			}
HXLINE( 605)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EIf(cond,e1,e2);
HXDLIN( 605)			 ::Dynamic pmin = p1;
HXDLIN( 605)			 ::Dynamic pmax;
HXDLIN( 605)			if (::hx::IsNull( e2 )) {
HXLINE( 605)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 605)				if (::hx::IsNull( e2 )) {
HXLINE( 605)					pmax = 0;
            				}
            				else {
HXLINE( 605)					pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 605)			if (::hx::IsNull( e )) {
HXLINE( 605)				return null();
            			}
            			else {
HXLINE( 605)				if (::hx::IsNull( pmin )) {
HXLINE( 605)					pmin = this->tokenMin;
            				}
HXDLIN( 605)				if (::hx::IsNull( pmax )) {
HXLINE( 605)					pmax = this->tokenMax;
            				}
HXDLIN( 605)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 587)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE( 646)			if (!(this->maybe(::hscript::Token_obj::TId(HX_("function",18,ab,52,14))))) {
HXLINE( 646)				this->unexpected(::hscript::Token_obj::TId(HX_("inline",59,ca,3f,99)));
            			}
HXLINE( 647)			return this->parseStructure(HX_("function",18,ab,52,14));
HXLINE( 645)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("new",60,d0,53,00)) ){
HXLINE( 663)			::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE( 664)			a->push(this->getIdent());
HXLINE( 665)			while(true){
HXLINE( 666)				 ::hscript::Token tk = this->token();
HXLINE( 667)				switch((int)(tk->_hx_getIndex())){
            					case (int)4: {
HXLINE( 671)						goto _hx_goto_47;
            					}
            					break;
            					case (int)8: {
HXLINE( 669)						a->push(this->getIdent());
            					}
            					break;
            					default:{
HXLINE( 673)						this->unexpected(tk);
HXLINE( 674)						goto _hx_goto_47;
            					}
            				}
            			}
            			_hx_goto_47:;
HXLINE( 677)			::Array< ::Dynamic> args = this->parseExprList(::hscript::Token_obj::TPClose_dyn());
HXLINE( 678)			 ::hscript::ExprDef e = ::hscript::ExprDef_obj::ENew(a->join(HX_(".",2e,00,00,00)),args);
HXDLIN( 678)			 ::Dynamic pmin = p1;
HXDLIN( 678)			 ::Dynamic pmax = null();
HXDLIN( 678)			if (::hx::IsNull( e )) {
HXLINE( 678)				return null();
            			}
            			else {
HXLINE( 678)				if (::hx::IsNull( pmin )) {
HXLINE( 678)					pmin = this->tokenMin;
            				}
HXDLIN( 678)				if (::hx::IsNull( pmax )) {
HXLINE( 678)					pmax = this->tokenMax;
            				}
HXDLIN( 678)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 662)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("return",b0,a4,2d,09)) ){
HXLINE( 658)			 ::hscript::Token tk = this->token();
HXLINE( 659)			{
HXLINE( 659)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 659)				this->tokenMin = this->oldTokenMin;
HXDLIN( 659)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 660)			 ::Dynamic e;
HXDLIN( 660)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 660)				e = null();
            			}
            			else {
HXLINE( 660)				e = this->parseExpr();
            			}
HXLINE( 661)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EReturn(e);
HXDLIN( 661)			 ::Dynamic pmin = p1;
HXDLIN( 661)			 ::Dynamic pmax;
HXDLIN( 661)			if (::hx::IsNull( e )) {
HXLINE( 661)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 661)				if (::hx::IsNull( e )) {
HXLINE( 661)					pmax = 0;
            				}
            				else {
HXLINE( 661)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 661)			if (::hx::IsNull( e1 )) {
HXLINE( 661)				return null();
            			}
            			else {
HXLINE( 661)				if (::hx::IsNull( pmin )) {
HXLINE( 661)					pmin = this->tokenMin;
            				}
HXDLIN( 661)				if (::hx::IsNull( pmax )) {
HXLINE( 661)					pmax = this->tokenMax;
            				}
HXDLIN( 661)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 657)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("switch",f4,49,79,c5)) ){
HXLINE( 697)			 ::Dynamic e = this->parseExpr();
HXLINE( 698)			 ::Dynamic def = null();
HXDLIN( 698)			::Array< ::Dynamic> cases = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 699)			{
HXLINE( 699)				 ::hscript::Token t = this->token();
HXDLIN( 699)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBrOpen_dyn() )) {
HXLINE( 699)					this->unexpected(t);
            				}
            			}
HXLINE( 700)			while(true){
HXLINE( 701)				 ::hscript::Token tk = this->token();
HXLINE( 702)				switch((int)(tk->_hx_getIndex())){
            					case (int)2: {
HXLINE( 739)						::String _hx_switch_1 = tk->_hx_getString(0);
            						if (  (_hx_switch_1==HX_("case",b0,1e,ba,41)) ){
HXLINE( 704)							 ::Dynamic c =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("expr",35,fd,1d,43),null())
            								->setFixed(1,HX_("values",e2,03,b7,4f),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 705)							cases->push(c);
HXLINE( 706)							while(true){
HXLINE( 707)								 ::Dynamic e = this->parseExpr();
HXLINE( 708)								( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(e);
HXLINE( 709)								tk = this->token();
HXLINE( 710)								switch((int)(tk->_hx_getIndex())){
            									case (int)9: {
            									}
            									break;
            									case (int)14: {
HXLINE( 714)										goto _hx_goto_50;
            									}
            									break;
            									default:{
HXLINE( 716)										this->unexpected(tk);
HXLINE( 717)										goto _hx_goto_50;
            									}
            								}
            							}
            							_hx_goto_50:;
HXLINE( 720)							::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 721)							while(true){
HXLINE( 722)								tk = this->token();
HXLINE( 723)								{
HXLINE( 723)									this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),tk)
            										->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            										->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 723)									this->tokenMin = this->oldTokenMin;
HXDLIN( 723)									this->tokenMax = this->oldTokenMax;
            								}
HXLINE( 724)								switch((int)(tk->_hx_getIndex())){
            									case (int)0: {
HXLINE( 727)										if (this->resumeErrors) {
HXLINE( 728)											goto _hx_goto_51;
            										}
            										else {
HXLINE( 730)											this->parseFullExpr(exprs);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 725)										::String _hx_switch_2 = tk->_hx_getString(0);
            										if (  (_hx_switch_2==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_2==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 726)											goto _hx_goto_51;
HXDLIN( 726)											goto _hx_goto_52;
            										}
            										/* default */{
HXLINE( 730)											this->parseFullExpr(exprs);
            										}
            										_hx_goto_52:;
            									}
            									break;
            									case (int)7: {
HXLINE( 726)										goto _hx_goto_51;
            									}
            									break;
            									default:{
HXLINE( 730)										this->parseFullExpr(exprs);
            									}
            								}
            							}
            							_hx_goto_51:;
HXLINE( 733)							 ::Dynamic _hx_tmp;
HXDLIN( 733)							if ((exprs->length == 1)) {
HXLINE( 733)								_hx_tmp = exprs->__get(0);
            							}
            							else {
HXLINE( 735)								if ((exprs->length == 0)) {
HXLINE( 736)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 736)									 ::Dynamic pmin = this->tokenMin;
HXDLIN( 736)									 ::Dynamic pmax = this->tokenMin;
HXDLIN( 736)									if (::hx::IsNull( e )) {
HXLINE( 733)										_hx_tmp = null();
            									}
            									else {
HXLINE( 736)										if (::hx::IsNull( pmin )) {
HXLINE( 736)											pmin = this->tokenMin;
            										}
HXDLIN( 736)										if (::hx::IsNull( pmax )) {
HXLINE( 736)											pmax = this->tokenMax;
            										}
HXLINE( 733)										_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            								else {
HXLINE( 738)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(exprs);
HXDLIN( 738)									 ::Dynamic e1 = exprs->__get(0);
HXDLIN( 738)									 ::Dynamic pmin;
HXDLIN( 738)									if (::hx::IsNull( e1 )) {
HXLINE( 738)										pmin = 0;
            									}
            									else {
HXLINE( 738)										pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 738)									 ::Dynamic e2 = exprs->__get((exprs->length - 1));
HXDLIN( 738)									 ::Dynamic pmax;
HXDLIN( 738)									if (::hx::IsNull( e2 )) {
HXLINE( 738)										pmax = 0;
            									}
            									else {
HXLINE( 738)										pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 738)									if (::hx::IsNull( e )) {
HXLINE( 733)										_hx_tmp = null();
            									}
            									else {
HXLINE( 738)										if (::hx::IsNull( pmin )) {
HXLINE( 738)											pmin = this->tokenMin;
            										}
HXDLIN( 738)										if (::hx::IsNull( pmax )) {
HXLINE( 738)											pmax = this->tokenMax;
            										}
HXLINE( 733)										_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
HXDLIN( 733)							c->__SetField(HX_("expr",35,fd,1d,43),_hx_tmp,::hx::paccDynamic);
HXLINE( 703)							goto _hx_goto_49;
            						}
            						if (  (_hx_switch_1==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 740)							if (::hx::IsNotNull( def )) {
HXLINE( 740)								this->unexpected(tk);
            							}
HXLINE( 741)							{
HXLINE( 741)								 ::hscript::Token t = this->token();
HXDLIN( 741)								if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 741)									this->unexpected(t);
            								}
            							}
HXLINE( 742)							::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 743)							while(true){
HXLINE( 744)								tk = this->token();
HXLINE( 745)								{
HXLINE( 745)									this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),tk)
            										->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            										->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 745)									this->tokenMin = this->oldTokenMin;
HXDLIN( 745)									this->tokenMax = this->oldTokenMax;
            								}
HXLINE( 746)								switch((int)(tk->_hx_getIndex())){
            									case (int)0: {
HXLINE( 749)										if (this->resumeErrors) {
HXLINE( 750)											goto _hx_goto_53;
            										}
            										else {
HXLINE( 752)											this->parseFullExpr(exprs);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 747)										::String _hx_switch_3 = tk->_hx_getString(0);
            										if (  (_hx_switch_3==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_3==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 748)											goto _hx_goto_53;
HXDLIN( 748)											goto _hx_goto_54;
            										}
            										/* default */{
HXLINE( 752)											this->parseFullExpr(exprs);
            										}
            										_hx_goto_54:;
            									}
            									break;
            									case (int)7: {
HXLINE( 748)										goto _hx_goto_53;
            									}
            									break;
            									default:{
HXLINE( 752)										this->parseFullExpr(exprs);
            									}
            								}
            							}
            							_hx_goto_53:;
HXLINE( 755)							if ((exprs->length == 1)) {
HXLINE( 756)								def = exprs->__get(0);
            							}
            							else {
HXLINE( 757)								if ((exprs->length == 0)) {
HXLINE( 758)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 758)									 ::Dynamic pmin = this->tokenMin;
HXDLIN( 758)									 ::Dynamic pmax = this->tokenMin;
HXDLIN( 758)									if (::hx::IsNull( e )) {
HXLINE( 758)										def = null();
            									}
            									else {
HXLINE( 758)										if (::hx::IsNull( pmin )) {
HXLINE( 758)											pmin = this->tokenMin;
            										}
HXDLIN( 758)										if (::hx::IsNull( pmax )) {
HXLINE( 758)											pmax = this->tokenMax;
            										}
HXDLIN( 758)										def =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            								else {
HXLINE( 760)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EBlock(exprs);
HXDLIN( 760)									 ::Dynamic e1 = exprs->__get(0);
HXDLIN( 760)									 ::Dynamic pmin;
HXDLIN( 760)									if (::hx::IsNull( e1 )) {
HXLINE( 760)										pmin = 0;
            									}
            									else {
HXLINE( 760)										pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 760)									 ::Dynamic e2 = exprs->__get((exprs->length - 1));
HXDLIN( 760)									 ::Dynamic pmax;
HXDLIN( 760)									if (::hx::IsNull( e2 )) {
HXLINE( 760)										pmax = 0;
            									}
            									else {
HXLINE( 760)										pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 760)									if (::hx::IsNull( e )) {
HXLINE( 760)										def = null();
            									}
            									else {
HXLINE( 760)										if (::hx::IsNull( pmin )) {
HXLINE( 760)											pmin = this->tokenMin;
            										}
HXDLIN( 760)										if (::hx::IsNull( pmax )) {
HXLINE( 760)											pmax = this->tokenMax;
            										}
HXDLIN( 760)										def =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
HXLINE( 739)							goto _hx_goto_49;
            						}
            						/* default */{
HXLINE( 764)							this->unexpected(tk);
HXLINE( 765)							goto _hx_goto_48;
            						}
            						_hx_goto_49:;
            					}
            					break;
            					case (int)7: {
HXLINE( 762)						goto _hx_goto_48;
            					}
            					break;
            					default:{
HXLINE( 764)						this->unexpected(tk);
HXLINE( 765)						goto _hx_goto_48;
            					}
            				}
            			}
            			_hx_goto_48:;
HXLINE( 768)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::ESwitch(e,cases,def);
HXDLIN( 768)			 ::Dynamic pmin = p1;
HXDLIN( 768)			 ::Dynamic pmax = this->tokenMax;
HXDLIN( 768)			if (::hx::IsNull( e1 )) {
HXLINE( 768)				return null();
            			}
            			else {
HXLINE( 768)				if (::hx::IsNull( pmin )) {
HXLINE( 768)					pmin = this->tokenMin;
            				}
HXDLIN( 768)				if (::hx::IsNull( pmax )) {
HXLINE( 768)					pmax = this->tokenMax;
            				}
HXDLIN( 768)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 696)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("throw",26,5d,90,0f)) ){
HXLINE( 680)			 ::Dynamic e = this->parseExpr();
HXLINE( 681)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EThrow(e);
HXDLIN( 681)			 ::Dynamic pmin = p1;
HXDLIN( 681)			 ::Dynamic pmax;
HXDLIN( 681)			if (::hx::IsNull( e )) {
HXLINE( 681)				pmax = 0;
            			}
            			else {
HXLINE( 681)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 681)			if (::hx::IsNull( e1 )) {
HXLINE( 681)				return null();
            			}
            			else {
HXLINE( 681)				if (::hx::IsNull( pmin )) {
HXLINE( 681)					pmin = this->tokenMin;
            				}
HXDLIN( 681)				if (::hx::IsNull( pmax )) {
HXLINE( 681)					pmax = this->tokenMax;
            				}
HXDLIN( 681)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 679)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("try",3b,69,58,00)) ){
HXLINE( 683)			 ::Dynamic e = this->parseExpr();
HXLINE( 684)			{
HXLINE( 684)				 ::hscript::Token t = this->token();
HXDLIN( 684)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TId(HX_("catch",3b,7c,21,41))))) {
HXLINE( 684)					this->unexpected(t);
            				}
            			}
HXLINE( 685)			{
HXLINE( 685)				 ::hscript::Token t1 = this->token();
HXDLIN( 685)				if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 685)					this->unexpected(t1);
            				}
            			}
HXLINE( 686)			::String vname = this->getIdent();
HXLINE( 687)			{
HXLINE( 687)				 ::hscript::Token t2 = this->token();
HXDLIN( 687)				if (::hx::IsPointerNotEq( t2,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 687)					this->unexpected(t2);
            				}
            			}
HXLINE( 688)			 ::hscript::CType t3 = null();
HXLINE( 689)			if (this->allowTypes) {
HXLINE( 690)				t3 = this->parseType();
            			}
            			else {
HXLINE( 692)				 ::hscript::Token t = this->token();
HXDLIN( 692)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TId(HX_("Dynamic",5f,c7,66,03))))) {
HXLINE( 692)					this->unexpected(t);
            				}
            			}
HXLINE( 693)			{
HXLINE( 693)				 ::hscript::Token t4 = this->token();
HXDLIN( 693)				if (::hx::IsPointerNotEq( t4,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 693)					this->unexpected(t4);
            				}
            			}
HXLINE( 694)			 ::Dynamic ec = this->parseExpr();
HXLINE( 695)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::ETry(e,vname,t3,ec);
HXDLIN( 695)			 ::Dynamic pmin = p1;
HXDLIN( 695)			 ::Dynamic pmax;
HXDLIN( 695)			if (::hx::IsNull( ec )) {
HXLINE( 695)				pmax = 0;
            			}
            			else {
HXLINE( 695)				pmax = ec->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 695)			if (::hx::IsNull( e1 )) {
HXLINE( 695)				return null();
            			}
            			else {
HXLINE( 695)				if (::hx::IsNull( pmin )) {
HXLINE( 695)					pmin = this->tokenMin;
            				}
HXDLIN( 695)				if (::hx::IsNull( pmax )) {
HXLINE( 695)					pmax = this->tokenMax;
            				}
HXDLIN( 695)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 682)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE( 607)			::String ident = this->getIdent();
HXLINE( 608)			 ::hscript::Token tk = this->token();
HXLINE( 609)			 ::hscript::CType t = null();
HXLINE( 610)			bool _hx_tmp;
HXDLIN( 610)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 610)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 610)				_hx_tmp = false;
            			}
HXDLIN( 610)			if (_hx_tmp) {
HXLINE( 611)				t = this->parseType();
HXLINE( 612)				tk = this->token();
            			}
HXLINE( 614)			 ::Dynamic e = null();
HXLINE( 615)			if (__hxcpp_enum_eq(tk,::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 616)				e = this->parseExpr();
            			}
            			else {
HXLINE( 618)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 618)				this->tokenMin = this->oldTokenMin;
HXDLIN( 618)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 619)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EVar(ident,t,e);
HXDLIN( 619)			 ::Dynamic pmin = p1;
HXDLIN( 619)			 ::Dynamic pmax;
HXDLIN( 619)			if (::hx::IsNull( e )) {
HXLINE( 619)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 619)				if (::hx::IsNull( e )) {
HXLINE( 619)					pmax = 0;
            				}
            				else {
HXLINE( 619)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 619)			if (::hx::IsNull( e1 )) {
HXLINE( 619)				return null();
            			}
            			else {
HXLINE( 619)				if (::hx::IsNull( pmin )) {
HXLINE( 619)					pmin = this->tokenMin;
            				}
HXDLIN( 619)				if (::hx::IsNull( pmax )) {
HXLINE( 619)					pmax = this->tokenMax;
            				}
HXDLIN( 619)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 606)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 621)			 ::Dynamic econd = this->parseExpr();
HXLINE( 622)			 ::Dynamic e = this->parseExpr();
HXLINE( 623)			 ::hscript::ExprDef e1 = ::hscript::ExprDef_obj::EWhile(econd,e);
HXDLIN( 623)			 ::Dynamic pmin = p1;
HXDLIN( 623)			 ::Dynamic pmax;
HXDLIN( 623)			if (::hx::IsNull( e )) {
HXLINE( 623)				pmax = 0;
            			}
            			else {
HXLINE( 623)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 623)			if (::hx::IsNull( e1 )) {
HXLINE( 623)				return null();
            			}
            			else {
HXLINE( 623)				if (::hx::IsNull( pmin )) {
HXLINE( 623)					pmin = this->tokenMin;
            				}
HXDLIN( 623)				if (::hx::IsNull( pmax )) {
HXLINE( 623)					pmax = this->tokenMax;
            				}
HXDLIN( 623)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 620)			goto _hx_goto_46;
            		}
            		/* default */{
HXLINE( 770)			return null();
            		}
            		_hx_goto_46:;
HXLINE( 586)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

 ::Dynamic Parser_obj::parseExprNext( ::Dynamic e1){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_774_parseExprNext)
HXLINE( 775)		 ::hscript::Token tk = this->token();
HXLINE( 776)		switch((int)(tk->_hx_getIndex())){
            			case (int)3: {
HXLINE( 777)				::String op = tk->_hx_getString(0);
HXLINE( 779)				if ((op == HX_("->",71,27,00,00))) {
HXLINE( 781)					{
HXLINE( 781)						 ::hscript::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 781)						switch((int)(_g->_hx_getIndex())){
            							case (int)1: {
HXLINE( 782)								::String i = _g->_hx_getString(0);
HXLINE( 783)								 ::Dynamic eret = this->parseExpr();
HXLINE( 784)								 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EReturn(eret);
HXDLIN( 784)								 ::Dynamic pmin;
HXDLIN( 784)								if (::hx::IsNull( eret )) {
HXLINE( 784)									pmin = 0;
            								}
            								else {
HXLINE( 784)									pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 784)								 ::Dynamic pmax = null();
HXDLIN( 784)								 ::Dynamic e2;
HXDLIN( 784)								if (::hx::IsNull( e )) {
HXLINE( 784)									e2 = null();
            								}
            								else {
HXLINE( 784)									if (::hx::IsNull( pmin )) {
HXLINE( 784)										pmin = this->tokenMin;
            									}
HXDLIN( 784)									if (::hx::IsNull( pmax )) {
HXLINE( 784)										pmax = this->tokenMax;
            									}
HXDLIN( 784)									e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 784)								 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("name",4b,72,ff,48),i))),e2,null(),null());
HXDLIN( 784)								 ::Dynamic pmin1;
HXDLIN( 784)								if (::hx::IsNull( e1 )) {
HXLINE( 784)									pmin1 = 0;
            								}
            								else {
HXLINE( 784)									pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 784)								 ::Dynamic pmax1 = null();
HXDLIN( 784)								if (::hx::IsNull( e3 )) {
HXLINE( 784)									return null();
            								}
            								else {
HXLINE( 784)									if (::hx::IsNull( pmin1 )) {
HXLINE( 784)										pmin1 = this->tokenMin;
            									}
HXDLIN( 784)									if (::hx::IsNull( pmax1 )) {
HXLINE( 784)										pmax1 = this->tokenMax;
            									}
HXDLIN( 784)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e3)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 782)								 ::hscript::ExprDef _hx_tmp = _g->_hx_getObject(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 782)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 782)									::String i = _hx_tmp->_hx_getString(0);
HXLINE( 783)									 ::Dynamic eret = this->parseExpr();
HXLINE( 784)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EReturn(eret);
HXDLIN( 784)									 ::Dynamic pmin;
HXDLIN( 784)									if (::hx::IsNull( eret )) {
HXLINE( 784)										pmin = 0;
            									}
            									else {
HXLINE( 784)										pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 784)									 ::Dynamic pmax = null();
HXDLIN( 784)									 ::Dynamic e2;
HXDLIN( 784)									if (::hx::IsNull( e )) {
HXLINE( 784)										e2 = null();
            									}
            									else {
HXLINE( 784)										if (::hx::IsNull( pmin )) {
HXLINE( 784)											pmin = this->tokenMin;
            										}
HXDLIN( 784)										if (::hx::IsNull( pmax )) {
HXLINE( 784)											pmax = this->tokenMax;
            										}
HXDLIN( 784)										e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
HXDLIN( 784)									 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),i))),e2,null(),null());
HXDLIN( 784)									 ::Dynamic pmin1;
HXDLIN( 784)									if (::hx::IsNull( e1 )) {
HXLINE( 784)										pmin1 = 0;
            									}
            									else {
HXLINE( 784)										pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 784)									 ::Dynamic pmax1 = null();
HXDLIN( 784)									if (::hx::IsNull( e3 )) {
HXLINE( 784)										return null();
            									}
            									else {
HXLINE( 784)										if (::hx::IsNull( pmin1 )) {
HXLINE( 784)											pmin1 = this->tokenMin;
            										}
HXDLIN( 784)										if (::hx::IsNull( pmax1 )) {
HXLINE( 784)											pmax1 = this->tokenMax;
            										}
HXDLIN( 784)										return  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e3)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
            							break;
            							case (int)26: {
HXLINE( 785)								 ::hscript::ExprDef _hx_tmp = _g->_hx_getObject(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 785)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 785)									::String i = _hx_tmp->_hx_getString(0);
HXDLIN( 785)									 ::hscript::CType t = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXLINE( 786)									 ::Dynamic eret = this->parseExpr();
HXLINE( 787)									 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EReturn(eret);
HXDLIN( 787)									 ::Dynamic pmin;
HXDLIN( 787)									if (::hx::IsNull( eret )) {
HXLINE( 787)										pmin = 0;
            									}
            									else {
HXLINE( 787)										pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 787)									 ::Dynamic pmax = null();
HXDLIN( 787)									 ::Dynamic e2;
HXDLIN( 787)									if (::hx::IsNull( e )) {
HXLINE( 787)										e2 = null();
            									}
            									else {
HXLINE( 787)										if (::hx::IsNull( pmin )) {
HXLINE( 787)											pmin = this->tokenMin;
            										}
HXDLIN( 787)										if (::hx::IsNull( pmax )) {
HXLINE( 787)											pmax = this->tokenMax;
            										}
HXDLIN( 787)										e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
HXDLIN( 787)									 ::hscript::ExprDef e3 = ::hscript::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),i))),e2,null(),null());
HXDLIN( 787)									 ::Dynamic pmin1;
HXDLIN( 787)									if (::hx::IsNull( e1 )) {
HXLINE( 787)										pmin1 = 0;
            									}
            									else {
HXLINE( 787)										pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN( 787)									 ::Dynamic pmax1 = null();
HXDLIN( 787)									if (::hx::IsNull( e3 )) {
HXLINE( 787)										return null();
            									}
            									else {
HXLINE( 787)										if (::hx::IsNull( pmin1 )) {
HXLINE( 787)											pmin1 = this->tokenMin;
            										}
HXDLIN( 787)										if (::hx::IsNull( pmax1 )) {
HXLINE( 787)											pmax1 = this->tokenMax;
            										}
HXDLIN( 787)										return  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e3)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE( 790)					this->unexpected(tk);
            				}
HXLINE( 793)				if (::hx::IsEq( this->opPriority->get(op),-1 )) {
HXLINE( 794)					bool _hx_tmp;
HXDLIN( 794)					if (!(this->isBlock(e1))) {
HXLINE( 794)						 ::hscript::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 794)						if ((_g->_hx_getIndex() == 3)) {
HXLINE( 794)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 794)							_hx_tmp = true;
            						}
            						else {
HXLINE( 794)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 794)						_hx_tmp = true;
            					}
HXDLIN( 794)					if (_hx_tmp) {
HXLINE( 795)						{
HXLINE( 795)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),tk)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 795)							this->tokenMin = this->oldTokenMin;
HXDLIN( 795)							this->tokenMax = this->oldTokenMax;
            						}
HXLINE( 796)						return e1;
            					}
HXLINE( 798)					 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EUnop(op,false,e1);
HXDLIN( 798)					 ::Dynamic pmin;
HXDLIN( 798)					if (::hx::IsNull( e1 )) {
HXLINE( 798)						pmin = 0;
            					}
            					else {
HXLINE( 798)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 798)					 ::Dynamic pmax = null();
HXDLIN( 798)					 ::Dynamic _hx_tmp1;
HXDLIN( 798)					if (::hx::IsNull( e )) {
HXLINE( 798)						_hx_tmp1 = null();
            					}
            					else {
HXLINE( 798)						if (::hx::IsNull( pmin )) {
HXLINE( 798)							pmin = this->tokenMin;
            						}
HXDLIN( 798)						if (::hx::IsNull( pmax )) {
HXLINE( 798)							pmax = this->tokenMax;
            						}
HXDLIN( 798)						_hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 798)					return this->parseExprNext(_hx_tmp1);
            				}
HXLINE( 800)				return this->makeBinop(op,e1,this->parseExpr());
            			}
            			break;
            			case (int)4: {
HXLINE( 805)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::ECall(e1,this->parseExprList(::hscript::Token_obj::TPClose_dyn()));
HXDLIN( 805)				 ::Dynamic pmin;
HXDLIN( 805)				if (::hx::IsNull( e1 )) {
HXLINE( 805)					pmin = 0;
            				}
            				else {
HXLINE( 805)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 805)				 ::Dynamic pmax = null();
HXDLIN( 805)				 ::Dynamic _hx_tmp;
HXDLIN( 805)				if (::hx::IsNull( e )) {
HXLINE( 805)					_hx_tmp = null();
            				}
            				else {
HXLINE( 805)					if (::hx::IsNull( pmin )) {
HXLINE( 805)						pmin = this->tokenMin;
            					}
HXDLIN( 805)					if (::hx::IsNull( pmax )) {
HXLINE( 805)						pmax = this->tokenMax;
            					}
HXDLIN( 805)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 805)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)8: {
HXLINE( 802)				::String field = this->getIdent();
HXLINE( 803)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EField(e1,field);
HXDLIN( 803)				 ::Dynamic pmin;
HXDLIN( 803)				if (::hx::IsNull( e1 )) {
HXLINE( 803)					pmin = 0;
            				}
            				else {
HXLINE( 803)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 803)				 ::Dynamic pmax = null();
HXDLIN( 803)				 ::Dynamic _hx_tmp;
HXDLIN( 803)				if (::hx::IsNull( e )) {
HXLINE( 803)					_hx_tmp = null();
            				}
            				else {
HXLINE( 803)					if (::hx::IsNull( pmin )) {
HXLINE( 803)						pmin = this->tokenMin;
            					}
HXDLIN( 803)					if (::hx::IsNull( pmax )) {
HXLINE( 803)						pmax = this->tokenMax;
            					}
HXDLIN( 803)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 803)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)11: {
HXLINE( 807)				 ::Dynamic e2 = this->parseExpr();
HXLINE( 808)				{
HXLINE( 808)					 ::hscript::Token t = this->token();
HXDLIN( 808)					if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBkClose_dyn() )) {
HXLINE( 808)						this->unexpected(t);
            					}
            				}
HXLINE( 809)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EArray(e1,e2);
HXDLIN( 809)				 ::Dynamic pmin;
HXDLIN( 809)				if (::hx::IsNull( e1 )) {
HXLINE( 809)					pmin = 0;
            				}
            				else {
HXLINE( 809)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 809)				 ::Dynamic pmax = null();
HXDLIN( 809)				 ::Dynamic _hx_tmp;
HXDLIN( 809)				if (::hx::IsNull( e )) {
HXLINE( 809)					_hx_tmp = null();
            				}
            				else {
HXLINE( 809)					if (::hx::IsNull( pmin )) {
HXLINE( 809)						pmin = this->tokenMin;
            					}
HXDLIN( 809)					if (::hx::IsNull( pmax )) {
HXLINE( 809)						pmax = this->tokenMax;
            					}
HXDLIN( 809)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 809)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)13: {
HXLINE( 811)				 ::Dynamic e2 = this->parseExpr();
HXLINE( 812)				{
HXLINE( 812)					 ::hscript::Token t = this->token();
HXDLIN( 812)					if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 812)						this->unexpected(t);
            					}
            				}
HXLINE( 813)				 ::Dynamic e3 = this->parseExpr();
HXLINE( 814)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::ETernary(e1,e2,e3);
HXDLIN( 814)				 ::Dynamic pmin;
HXDLIN( 814)				if (::hx::IsNull( e1 )) {
HXLINE( 814)					pmin = 0;
            				}
            				else {
HXLINE( 814)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 814)				 ::Dynamic pmax;
HXDLIN( 814)				if (::hx::IsNull( e3 )) {
HXLINE( 814)					pmax = 0;
            				}
            				else {
HXLINE( 814)					pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 814)				if (::hx::IsNull( e )) {
HXLINE( 814)					return null();
            				}
            				else {
HXLINE( 814)					if (::hx::IsNull( pmin )) {
HXLINE( 814)						pmin = this->tokenMin;
            					}
HXDLIN( 814)					if (::hx::IsNull( pmax )) {
HXLINE( 814)						pmax = this->tokenMax;
            					}
HXDLIN( 814)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			default:{
HXLINE( 816)				{
HXLINE( 816)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 816)					this->tokenMin = this->oldTokenMin;
HXDLIN( 816)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 817)				return e1;
            			}
            		}
HXLINE( 776)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::Array< ::Dynamic> Parser_obj::parseFunctionArgs(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_821_parseFunctionArgs)
HXLINE( 822)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE( 823)		 ::hscript::Token tk = this->token();
HXLINE( 824)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 825)			bool done = false;
HXLINE( 826)			while(!(done)){
HXLINE( 827)				::String name = null();
HXDLIN( 827)				bool opt = false;
HXLINE( 828)				if ((tk->_hx_getIndex() == 13)) {
HXLINE( 830)					opt = true;
HXLINE( 831)					tk = this->token();
            				}
HXLINE( 834)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 835)					::String id = tk->_hx_getString(0);
HXDLIN( 835)					name = id;
            				}
            				else {
HXLINE( 837)					this->unexpected(tk);
HXLINE( 838)					goto _hx_goto_57;
            				}
HXLINE( 840)				 ::Dynamic arg =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("name",4b,72,ff,48),name));
HXLINE( 841)				args->push(arg);
HXLINE( 842)				if (opt) {
HXLINE( 842)					arg->__SetField(HX_("opt",33,9c,54,00),true,::hx::paccDynamic);
            				}
HXLINE( 843)				if (this->allowTypes) {
HXLINE( 844)					if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE( 845)						arg->__SetField(HX_("t",74,00,00,00),this->parseType(),::hx::paccDynamic);
            					}
HXLINE( 846)					if (this->maybe(::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 847)						arg->__SetField(HX_("value",71,7f,b8,31),this->parseExpr(),::hx::paccDynamic);
            					}
            				}
HXLINE( 849)				tk = this->token();
HXLINE( 850)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE( 854)						done = true;
            					}
            					break;
            					case (int)9: {
HXLINE( 852)						tk = this->token();
            					}
            					break;
            					default:{
HXLINE( 856)						this->unexpected(tk);
            					}
            				}
            			}
            			_hx_goto_57:;
            		}
HXLINE( 860)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionArgs,return )

 ::Dynamic Parser_obj::parseFunctionDecl(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_863_parseFunctionDecl)
HXLINE( 864)		{
HXLINE( 864)			 ::hscript::Token t = this->token();
HXDLIN( 864)			if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 864)				this->unexpected(t);
            			}
            		}
HXLINE( 865)		::Array< ::Dynamic> args = this->parseFunctionArgs();
HXLINE( 866)		 ::hscript::CType ret = null();
HXLINE( 867)		if (this->allowTypes) {
HXLINE( 868)			 ::hscript::Token tk = this->token();
HXLINE( 869)			if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 870)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 870)				this->tokenMin = this->oldTokenMin;
HXDLIN( 870)				this->tokenMax = this->oldTokenMax;
            			}
            			else {
HXLINE( 872)				ret = this->parseType();
            			}
            		}
HXLINE( 874)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("ret",61,d9,56,00),ret)
            			->setFixed(1,HX_("args",5d,8d,74,40),args)
            			->setFixed(2,HX_("body",a2,7a,1b,41),this->parseExpr()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionDecl,return )

::Array< ::String > Parser_obj::parsePath(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_877_parsePath)
HXLINE( 878)		::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE( 879)		while(true){
HXLINE( 880)			 ::hscript::Token t = this->token();
HXLINE( 881)			if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDot_dyn() )) {
HXLINE( 882)				{
HXLINE( 882)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 882)					this->tokenMin = this->oldTokenMin;
HXDLIN( 882)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 883)				goto _hx_goto_60;
            			}
HXLINE( 885)			path->push(this->getIdent());
            		}
            		_hx_goto_60:;
HXLINE( 887)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePath,return )

 ::hscript::CType Parser_obj::parseType(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_890_parseType)
HXDLIN( 890)		 ::hscript::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 891)		 ::hscript::Token t = this->token();
HXLINE( 892)		switch((int)(t->_hx_getIndex())){
            			case (int)2: {
HXLINE( 893)				::String v = t->_hx_getString(0);
HXLINE( 894)				{
HXLINE( 894)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 894)					this->tokenMin = this->oldTokenMin;
HXDLIN( 894)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 895)				::Array< ::String > path = this->parsePath();
HXLINE( 896)				::Array< ::Dynamic> params = null();
HXLINE( 897)				t = this->token();
HXLINE( 898)				if ((t->_hx_getIndex() == 3)) {
HXLINE( 899)					::String op = t->_hx_getString(0);
HXLINE( 900)					if ((op == HX_("<",3c,00,00,00))) {
HXLINE( 901)						params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 902)						while(true){
HXLINE( 903)							params->push(this->parseType());
HXLINE( 904)							t = this->token();
HXLINE( 905)							switch((int)(t->_hx_getIndex())){
            								case (int)3: {
HXLINE( 907)									::String op = t->_hx_getString(0);
HXDLIN( 907)									{
HXLINE( 908)										if ((op == HX_(">",3e,00,00,00))) {
HXLINE( 908)											goto _hx_goto_62;
            										}
HXLINE( 909)										if (::hx::IsEq( op.charCodeAt(0),62 )) {
HXLINE( 911)											 ::haxe::ds::List _hx_tmp = this->tokens;
HXDLIN( 911)											 ::hscript::Token _hx_tmp1 = ::hscript::Token_obj::TOp(op.substr(1,null()));
HXDLIN( 911)											_hx_tmp->add( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),_hx_tmp1)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),((this->tokenMax - op.length) - 1))));
HXLINE( 915)											goto _hx_goto_62;
            										}
            									}
            								}
            								break;
            								case (int)9: {
HXLINE( 906)									continue;
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 919)							this->unexpected(t);
HXLINE( 920)							goto _hx_goto_62;
            						}
            						_hx_goto_62:;
            					}
            					else {
HXLINE( 923)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 923)						this->tokenMin = this->oldTokenMin;
HXDLIN( 923)						this->tokenMax = this->oldTokenMax;
            					}
            				}
            				else {
HXLINE( 925)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 925)					this->tokenMin = this->oldTokenMin;
HXDLIN( 925)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 927)				return this->parseTypeNext(::hscript::CType_obj::CTPath(path,params));
            			}
            			break;
            			case (int)4: {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Parser,_gthis) HXARGC(1)
            				 ::hscript::CType _hx_run(::Array< ::Dynamic> args){
            					HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_935_parseType)
HXLINE( 936)					{
HXLINE( 936)						 ::hscript::Token _g = _gthis->token();
HXDLIN( 936)						if ((_g->_hx_getIndex() == 3)) {
HXLINE( 937)							if ((_g->_hx_getString(0) != HX_("->",71,27,00,00))) {
HXLINE( 938)								 ::hscript::Token t = _g;
HXDLIN( 938)								_gthis->unexpected(t);
            							}
            						}
            						else {
HXLINE( 938)							 ::hscript::Token t = _g;
HXDLIN( 938)							_gthis->unexpected(t);
            						}
            					}
HXLINE( 941)					return ::hscript::CType_obj::CTFun(args,_gthis->parseType());
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 929)				 ::hscript::Token a = this->token();
HXDLIN( 929)				 ::hscript::Token b = this->token();
HXLINE( 932)				{
HXLINE( 932)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),b)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 932)					this->tokenMin = this->oldTokenMin;
HXDLIN( 932)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 933)				{
HXLINE( 933)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),a)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 933)					this->tokenMin = this->oldTokenMin;
HXDLIN( 933)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 935)				 ::Dynamic withReturn =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 944)				switch((int)(a->_hx_getIndex())){
            					case (int)2: {
HXLINE( 945)						::String _g = a->_hx_getString(0);
HXLINE( 944)						if ((b->_hx_getIndex() == 14)) {
HXLINE( 947)							::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 947)							{
HXLINE( 947)								int _g1 = 0;
HXDLIN( 947)								::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 947)								while((_g1 < _g2->length)){
HXLINE( 947)									 ::Dynamic arg = _g2->__get(_g1);
HXDLIN( 947)									_g1 = (_g1 + 1);
HXLINE( 948)									{
HXLINE( 948)										 ::Dynamic _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 949)										if (::hx::IsNotNull( _g3 )) {
HXLINE( 950)											 ::Dynamic v = _g3;
HXLINE( 951)											if (!(this->resumeErrors)) {
HXLINE( 951)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6)),( (int)(v->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(v->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),this->origin,this->line)));
            											}
            										}
            									}
HXLINE( 954)									 ::hscript::CType _hx_tmp;
HXDLIN( 954)									if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 954)										_hx_tmp = ::hscript::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            									}
            									else {
HXLINE( 954)										_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            									}
HXDLIN( 954)									_g->push(::hscript::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            								}
            							}
HXLINE( 947)							::Array< ::Dynamic> args = _g;
HXLINE( 957)							return withReturn(args);
            						}
            						else {
HXLINE( 960)							 ::hscript::CType t = this->parseType();
HXLINE( 961)							 ::hscript::Token _g = this->token();
HXDLIN( 961)							switch((int)(_g->_hx_getIndex())){
            								case (int)5: {
HXLINE( 972)									return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            								}
            								break;
            								case (int)9: {
HXLINE( 963)									::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 965)									while(true){
HXLINE( 966)										args->push(this->parseType());
HXLINE( 967)										if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 967)											goto _hx_goto_65;
            										}
            									}
            									_hx_goto_65:;
HXLINE( 969)									{
HXLINE( 969)										 ::hscript::Token t1 = this->token();
HXDLIN( 969)										if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 969)											this->unexpected(t1);
            										}
            									}
HXLINE( 970)									return withReturn(args);
            								}
            								break;
            								default:{
HXLINE( 973)									 ::hscript::Token t = _g;
HXDLIN( 973)									return this->unexpected(t);
            								}
            							}
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 947)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 947)						{
HXLINE( 947)							int _g1 = 0;
HXDLIN( 947)							::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 947)							while((_g1 < _g2->length)){
HXLINE( 947)								 ::Dynamic arg = _g2->__get(_g1);
HXDLIN( 947)								_g1 = (_g1 + 1);
HXLINE( 948)								{
HXLINE( 948)									 ::Dynamic _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 949)									if (::hx::IsNotNull( _g3 )) {
HXLINE( 950)										 ::Dynamic v = _g3;
HXLINE( 951)										if (!(this->resumeErrors)) {
HXLINE( 951)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6)),( (int)(v->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(v->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),this->origin,this->line)));
            										}
            									}
            								}
HXLINE( 954)								 ::hscript::CType _hx_tmp;
HXDLIN( 954)								if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 954)									_hx_tmp = ::hscript::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            								}
            								else {
HXLINE( 954)									_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            								}
HXDLIN( 954)								_g->push(::hscript::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            							}
            						}
HXLINE( 947)						::Array< ::Dynamic> args = _g;
HXLINE( 957)						return withReturn(args);
            					}
            					break;
            					default:{
HXLINE( 960)						 ::hscript::CType t = this->parseType();
HXLINE( 961)						 ::hscript::Token _g = this->token();
HXDLIN( 961)						switch((int)(_g->_hx_getIndex())){
            							case (int)5: {
HXLINE( 972)								return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            							}
            							break;
            							case (int)9: {
HXLINE( 963)								::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 965)								while(true){
HXLINE( 966)									args->push(this->parseType());
HXLINE( 967)									if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 967)										goto _hx_goto_63;
            									}
            								}
            								_hx_goto_63:;
HXLINE( 969)								{
HXLINE( 969)									 ::hscript::Token t1 = this->token();
HXDLIN( 969)									if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 969)										this->unexpected(t1);
            									}
            								}
HXLINE( 970)								return withReturn(args);
            							}
            							break;
            							default:{
HXLINE( 973)								 ::hscript::Token t = _g;
HXDLIN( 973)								return this->unexpected(t);
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 977)				::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 978)				::Array< ::Dynamic> meta = null();
HXLINE( 979)				while(true){
HXLINE( 980)					t = this->token();
HXLINE( 981)					switch((int)(t->_hx_getIndex())){
            						case (int)2: {
HXLINE( 989)							::String _g = t->_hx_getString(0);
HXDLIN( 989)							if ((_g == HX_("var",e7,de,59,00))) {
HXLINE( 984)								::String name = this->getIdent();
HXLINE( 985)								{
HXLINE( 985)									 ::hscript::Token t = this->token();
HXDLIN( 985)									if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 985)										this->unexpected(t);
            									}
            								}
HXLINE( 986)								fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            									->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            									->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 987)								meta = null();
HXLINE( 988)								{
HXLINE( 988)									 ::hscript::Token t1 = this->token();
HXDLIN( 988)									if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 988)										this->unexpected(t1);
            									}
            								}
            							}
            							else {
HXLINE( 989)								::String name = _g;
HXDLIN( 989)								{
HXLINE( 990)									{
HXLINE( 990)										 ::hscript::Token t1 = this->token();
HXDLIN( 990)										if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 990)											this->unexpected(t1);
            										}
            									}
HXLINE( 991)									fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            										->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            										->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 992)									t = this->token();
HXLINE( 993)									switch((int)(t->_hx_getIndex())){
            										case (int)7: {
HXLINE( 995)											goto _hx_goto_67;
            										}
            										break;
            										case (int)9: {
            										}
            										break;
            										default:{
HXLINE( 996)											this->unexpected(t);
            										}
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 982)							goto _hx_goto_67;
            						}
            						break;
            						case (int)15: {
HXLINE( 998)							::String name = t->_hx_getString(0);
HXDLIN( 998)							{
HXLINE( 999)								if (::hx::IsNull( meta )) {
HXLINE( 999)									meta = ::Array_obj< ::Dynamic>::__new(0);
            								}
HXLINE(1000)								meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            									->setFixed(1,HX_("name",4b,72,ff,48),name)));
            							}
            						}
            						break;
            						default:{
HXLINE(1002)							this->unexpected(t);
HXLINE(1003)							goto _hx_goto_67;
            						}
            					}
            				}
            				_hx_goto_67:;
HXLINE(1006)				return this->parseTypeNext(::hscript::CType_obj::CTAnon(fields));
            			}
            			break;
            			default:{
HXLINE(1008)				return this->unexpected(t);
            			}
            		}
HXLINE( 892)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

 ::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1012_parseTypeNext)
HXLINE(1013)		 ::hscript::Token tk = this->token();
HXLINE(1014)		if ((tk->_hx_getIndex() == 3)) {
HXLINE(1015)			::String op = tk->_hx_getString(0);
HXLINE(1016)			if ((op != HX_("->",71,27,00,00))) {
HXLINE(1017)				{
HXLINE(1017)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1017)					this->tokenMin = this->oldTokenMin;
HXDLIN(1017)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1018)				return t;
            			}
            		}
            		else {
HXLINE(1021)			{
HXLINE(1021)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1021)				this->tokenMin = this->oldTokenMin;
HXDLIN(1021)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE(1022)			return t;
            		}
HXLINE(1024)		 ::hscript::CType t2 = this->parseType();
HXLINE(1025)		if ((t2->_hx_getIndex() == 1)) {
HXLINE(1026)			 ::hscript::CType _g = t2->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(1026)			::Array< ::Dynamic> args = t2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1027)			args->unshift(t);
HXLINE(1028)			return t2;
            		}
            		else {
HXLINE(1030)			return ::hscript::CType_obj::CTFun(::Array_obj< ::Dynamic>::__new(1)->init(0,t),t2);
            		}
HXLINE(1025)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

::Array< ::Dynamic> Parser_obj::parseExprList( ::hscript::Token etk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1034_parseExprList)
HXLINE(1035)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE(1036)		 ::hscript::Token tk = this->token();
HXLINE(1037)		if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1038)			return args;
            		}
HXLINE(1039)		{
HXLINE(1039)			this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("t",74,00,00,00),tk)
            				->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            				->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1039)			this->tokenMin = this->oldTokenMin;
HXDLIN(1039)			this->tokenMax = this->oldTokenMax;
            		}
HXLINE(1040)		while(true){
HXLINE(1041)			args->push(this->parseExpr());
HXLINE(1042)			tk = this->token();
HXLINE(1043)			if ((tk->_hx_getIndex() != 9)) {
HXLINE(1046)				if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1046)					goto _hx_goto_71;
            				}
HXLINE(1047)				this->unexpected(tk);
HXLINE(1048)				goto _hx_goto_71;
            			}
            		}
            		_hx_goto_71:;
HXLINE(1051)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

::Array< ::Dynamic> Parser_obj::parseModule(::String content,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1056_parseModule)
HXLINE(1057)		this->initParser(origin);
HXLINE(1058)		this->input = content;
HXLINE(1059)		this->readPos = 0;
HXLINE(1060)		this->allowTypes = true;
HXLINE(1061)		this->allowMetadata = true;
HXLINE(1062)		::Array< ::Dynamic> decls = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1063)		while(true){
HXLINE(1064)			 ::hscript::Token tk = this->token();
HXLINE(1065)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE(1065)				goto _hx_goto_73;
            			}
HXLINE(1066)			{
HXLINE(1066)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1066)				this->tokenMin = this->oldTokenMin;
HXDLIN(1066)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE(1067)			decls->push(this->parseModuleDecl());
            		}
            		_hx_goto_73:;
HXLINE(1069)		return decls;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseModule,return )

::Array< ::Dynamic> Parser_obj::parseMetadata(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1072_parseMetadata)
HXLINE(1073)		::Array< ::Dynamic> meta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1074)		while(true){
HXLINE(1075)			 ::hscript::Token tk = this->token();
HXLINE(1076)			if ((tk->_hx_getIndex() == 15)) {
HXLINE(1077)				::String name = tk->_hx_getString(0);
HXLINE(1078)				meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            					->setFixed(1,HX_("name",4b,72,ff,48),name)));
            			}
            			else {
HXLINE(1080)				{
HXLINE(1080)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1080)					this->tokenMin = this->oldTokenMin;
HXDLIN(1080)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1081)				goto _hx_goto_75;
            			}
            		}
            		_hx_goto_75:;
HXLINE(1084)		return meta;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetadata,return )

 ::Dynamic Parser_obj::parseParams(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1087_parseParams)
HXLINE(1088)		if (this->maybe(::hscript::Token_obj::TOp(HX_("<",3c,00,00,00)))) {
HXLINE(1089)			if (!(this->resumeErrors)) {
HXLINE(1089)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(HX_("Unsupported class type parameters",9d,ae,a3,50)),this->readPos,this->readPos,this->origin,this->line)));
            			}
            		}
HXLINE(1090)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseParams,return )

 ::hscript::ModuleDecl Parser_obj::parseModuleDecl(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1093_parseModuleDecl)
HXLINE(1094)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1095)		::String ident = this->getIdent();
HXLINE(1096)		bool isPrivate = false;
HXDLIN(1096)		bool isExtern = false;
HXLINE(1097)		while(true){
HXLINE(1098)			::String _hx_switch_0 = ident;
            			if (  (_hx_switch_0==HX_("extern",60,d5,1a,c7)) ){
HXLINE(1102)				isExtern = true;
HXDLIN(1102)				goto _hx_goto_79;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1100)				isPrivate = true;
HXDLIN(1100)				goto _hx_goto_79;
            			}
            			/* default */{
HXLINE(1104)				goto _hx_goto_78;
            			}
            			_hx_goto_79:;
HXLINE(1106)			ident = this->getIdent();
            		}
            		_hx_goto_78:;
HXLINE(1108)		::String _hx_switch_1 = ident;
            		if (  (_hx_switch_1==HX_("class",38,78,58,48)) ){
HXLINE(1135)			::String name = this->getIdent();
HXLINE(1136)			 ::Dynamic params = this->parseParams();
HXLINE(1137)			 ::hscript::CType extend = null();
HXLINE(1138)			::Array< ::Dynamic> implement = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1140)			while(true){
HXLINE(1141)				 ::hscript::Token t = this->token();
HXLINE(1142)				if ((t->_hx_getIndex() == 2)) {
HXLINE(1145)					::String _hx_switch_2 = t->_hx_getString(0);
            					if (  (_hx_switch_2==HX_("extends",59,cd,5c,70)) ){
HXLINE(1144)						extend = this->parseType();
HXDLIN(1144)						goto _hx_goto_82;
            					}
            					if (  (_hx_switch_2==HX_("implements",70,fd,43,a8)) ){
HXLINE(1146)						implement->push(this->parseType());
HXDLIN(1146)						goto _hx_goto_82;
            					}
            					/* default */{
HXLINE(1148)						{
HXLINE(1148)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),t)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1148)							this->tokenMin = this->oldTokenMin;
HXDLIN(1148)							this->tokenMax = this->oldTokenMax;
            						}
HXLINE(1149)						goto _hx_goto_81;
            					}
            					_hx_goto_82:;
            				}
            				else {
HXLINE(1148)					{
HXLINE(1148)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1148)						this->tokenMin = this->oldTokenMin;
HXDLIN(1148)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE(1149)					goto _hx_goto_81;
            				}
            			}
            			_hx_goto_81:;
HXLINE(1153)			::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1154)			{
HXLINE(1154)				 ::hscript::Token t = this->token();
HXDLIN(1154)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBrOpen_dyn() )) {
HXLINE(1154)					this->unexpected(t);
            				}
            			}
HXLINE(1155)			while(!(this->maybe(::hscript::Token_obj::TBrClose_dyn()))){
HXLINE(1156)				fields->push(this->parseField());
            			}
HXLINE(1158)			return ::hscript::ModuleDecl_obj::DClass( ::Dynamic(::hx::Anon_obj::Create(8)
            				->setFixed(0,HX_("fields",79,8e,8e,80),fields)
            				->setFixed(1,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(2,HX_("implement",a3,71,3f,af),implement)
            				->setFixed(3,HX_("extend",da,d1,1a,c7),extend)
            				->setFixed(4,HX_("params",46,fb,7a,ed),params)
            				->setFixed(5,HX_("isExtern",ea,70,84,1f),isExtern)
            				->setFixed(6,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(7,HX_("name",4b,72,ff,48),name)));
HXLINE(1134)			goto _hx_goto_80;
            		}
            		if (  (_hx_switch_1==HX_("import",65,a1,82,08)) ){
HXLINE(1114)			::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE(1115)			bool star = false;
HXLINE(1116)			while(true){
HXLINE(1117)				 ::hscript::Token t = this->token();
HXLINE(1118)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDot_dyn() )) {
HXLINE(1119)					{
HXLINE(1119)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1119)						this->tokenMin = this->oldTokenMin;
HXDLIN(1119)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE(1120)					goto _hx_goto_84;
            				}
HXLINE(1122)				t = this->token();
HXLINE(1123)				switch((int)(t->_hx_getIndex())){
            					case (int)2: {
HXLINE(1124)						::String id = t->_hx_getString(0);
HXLINE(1125)						path->push(id);
            					}
            					break;
            					case (int)3: {
HXLINE(1126)						if ((t->_hx_getString(0) == HX_("*",2a,00,00,00))) {
HXLINE(1127)							star = true;
            						}
            						else {
HXLINE(1129)							this->unexpected(t);
            						}
            					}
            					break;
            					default:{
HXLINE(1129)						this->unexpected(t);
            					}
            				}
            			}
            			_hx_goto_84:;
HXLINE(1132)			{
HXLINE(1132)				 ::hscript::Token t = this->token();
HXDLIN(1132)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1132)					this->unexpected(t);
            				}
            			}
HXLINE(1133)			return ::hscript::ModuleDecl_obj::DImport(path,star);
HXLINE(1113)			goto _hx_goto_80;
            		}
            		if (  (_hx_switch_1==HX_("package",86,2b,b1,41)) ){
HXLINE(1110)			::Array< ::String > path = this->parsePath();
HXLINE(1111)			{
HXLINE(1111)				 ::hscript::Token t = this->token();
HXDLIN(1111)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1111)					this->unexpected(t);
            				}
            			}
HXLINE(1112)			return ::hscript::ModuleDecl_obj::DPackage(path);
HXLINE(1109)			goto _hx_goto_80;
            		}
            		if (  (_hx_switch_1==HX_("typedef",4b,37,d8,f8)) ){
HXLINE(1169)			::String name = this->getIdent();
HXLINE(1170)			 ::Dynamic params = this->parseParams();
HXLINE(1171)			{
HXLINE(1171)				 ::hscript::Token t = this->token();
HXDLIN(1171)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TOp(HX_("=",3d,00,00,00))))) {
HXLINE(1171)					this->unexpected(t);
            				}
            			}
HXLINE(1172)			 ::hscript::CType t1 = this->parseType();
HXLINE(1173)			return ::hscript::ModuleDecl_obj::DTypedef( ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(1,HX_("params",46,fb,7a,ed),params)
            				->setFixed(2,HX_("t",74,00,00,00),t1)
            				->setFixed(3,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(4,HX_("name",4b,72,ff,48),name)));
HXLINE(1168)			goto _hx_goto_80;
            		}
            		/* default */{
HXLINE(1181)			this->unexpected(::hscript::Token_obj::TId(ident));
            		}
            		_hx_goto_80:;
HXLINE(1183)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseModuleDecl,return )

 ::Dynamic Parser_obj::parseField(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1186_parseField)
HXLINE(1187)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1188)		::Array< ::Dynamic> access = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1189)		while(true){
HXLINE(1190)			::String id = this->getIdent();
HXLINE(1191)			::String _hx_switch_0 = id;
            			if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE(1205)				::String name = this->getIdent();
HXLINE(1206)				 ::Dynamic inf = this->parseFunctionDecl();
HXLINE(1207)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscript::FieldKind_obj::KFunction( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("ret",61,d9,56,00), ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)))
            						->setFixed(1,HX_("args",5d,8d,74,40), ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)))
            						->setFixed(2,HX_("expr",35,fd,1d,43), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic))))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1204)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE(1199)				access->push(::hscript::FieldAccess_obj::AInline_dyn());
HXDLIN(1199)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("macro",0c,70,16,03)) ){
HXLINE(1203)				access->push(::hscript::FieldAccess_obj::AMacro_dyn());
HXDLIN(1203)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("override",4c,22,28,49)) ){
HXLINE(1193)				access->push(::hscript::FieldAccess_obj::AOverride_dyn());
HXDLIN(1193)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1197)				access->push(::hscript::FieldAccess_obj::APrivate_dyn());
HXDLIN(1197)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("public",a9,80,f3,66)) ){
HXLINE(1195)				access->push(::hscript::FieldAccess_obj::APublic_dyn());
HXDLIN(1195)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("static",ae,dc,fb,05)) ){
HXLINE(1201)				access->push(::hscript::FieldAccess_obj::AStatic_dyn());
HXDLIN(1201)				goto _hx_goto_87;
            			}
            			if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE(1218)				::String name = this->getIdent();
HXLINE(1219)				::String get = null();
HXDLIN(1219)				::String set = null();
HXLINE(1220)				if (this->maybe(::hscript::Token_obj::TPOpen_dyn())) {
HXLINE(1221)					get = this->getIdent();
HXLINE(1222)					{
HXLINE(1222)						 ::hscript::Token t = this->token();
HXDLIN(1222)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TComma_dyn() )) {
HXLINE(1222)							this->unexpected(t);
            						}
            					}
HXLINE(1223)					set = this->getIdent();
HXLINE(1224)					{
HXLINE(1224)						 ::hscript::Token t1 = this->token();
HXDLIN(1224)						if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE(1224)							this->unexpected(t1);
            						}
            					}
            				}
HXLINE(1226)				 ::hscript::CType type;
HXDLIN(1226)				if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE(1226)					type = this->parseType();
            				}
            				else {
HXLINE(1226)					type = null();
            				}
HXLINE(1227)				 ::Dynamic expr;
HXDLIN(1227)				if (this->maybe(::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1227)					expr = this->parseExpr();
            				}
            				else {
HXLINE(1227)					expr = null();
            				}
HXLINE(1229)				if (::hx::IsNotNull( expr )) {
HXLINE(1230)					if (this->isBlock(expr)) {
HXLINE(1231)						this->maybe(::hscript::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1233)						 ::hscript::Token t = this->token();
HXDLIN(1233)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1233)							this->unexpected(t);
            						}
            					}
            				}
            				else {
HXLINE(1234)					bool _hx_tmp;
HXDLIN(1234)					if (::hx::IsNotNull( type )) {
HXLINE(1234)						if (::hx::IsNull( type )) {
HXLINE(1234)							_hx_tmp = false;
            						}
            						else {
HXLINE(1234)							if ((type->_hx_getIndex() == 2)) {
HXLINE(1234)								::Array< ::Dynamic> _g = type->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1234)								_hx_tmp = true;
            							}
            							else {
HXLINE(1234)								_hx_tmp = false;
            							}
            						}
            					}
            					else {
HXLINE(1234)						_hx_tmp = false;
            					}
HXDLIN(1234)					if (_hx_tmp) {
HXLINE(1235)						this->maybe(::hscript::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1237)						 ::hscript::Token t = this->token();
HXDLIN(1237)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1237)							this->unexpected(t);
            						}
            					}
            				}
HXLINE(1239)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscript::FieldKind_obj::KVar( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("get",96,80,4e,00),get)
            						->setFixed(1,HX_("set",a2,9b,57,00),set)
            						->setFixed(2,HX_("expr",35,fd,1d,43),expr)
            						->setFixed(3,HX_("type",ba,f2,08,4d),type))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1217)				goto _hx_goto_87;
            			}
            			/* default */{
HXLINE(1251)				this->unexpected(::hscript::Token_obj::TId(id));
HXLINE(1252)				goto _hx_goto_86;
            			}
            			_hx_goto_87:;
            		}
            		_hx_goto_86:;
HXLINE(1255)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseField,return )

int Parser_obj::readChar(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1261_readChar)
HXDLIN(1261)		return this->input.cca(this->readPos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString(int until){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1264_readString)
HXLINE(1265)		int c = 0;
HXLINE(1266)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(1267)		bool esc = false;
HXLINE(1268)		int old = this->line;
HXLINE(1269)		::String s = this->input;
HXLINE(1271)		int p1 = (this->readPos - 1);
HXLINE(1273)		while(true){
HXLINE(1274)			int c = this->input.cca(this->readPos++);
HXLINE(1275)			if ((c == 0)) {
HXLINE(1276)				this->line = old;
HXLINE(1277)				if (!(this->resumeErrors)) {
HXLINE(1277)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EUnterminatedString_dyn(),p1,p1,this->origin,this->line)));
            				}
HXLINE(1278)				goto _hx_goto_90;
            			}
HXLINE(1280)			if (esc) {
HXLINE(1281)				esc = false;
HXLINE(1282)				switch((int)(c)){
            					case (int)34: case (int)39: case (int)92: {
HXLINE(1286)						if ((c >= 127)) {
HXLINE(1286)							::String x = ::String::fromCharCode(c);
HXDLIN(1286)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1286)								b->flush();
            							}
HXDLIN(1286)							if (::hx::IsNull( b->b )) {
HXLINE(1286)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1286)								::Array< ::String > b1 = b->b;
HXDLIN(1286)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1286)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1286)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1286)							b->charBuf->push(c);
            						}
            					}
            					break;
            					case (int)47: {
HXLINE(1287)						if (this->allowJSON) {
HXLINE(1287)							if ((c >= 127)) {
HXLINE(1287)								::String x = ::String::fromCharCode(c);
HXDLIN(1287)								if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1287)									b->flush();
            								}
HXDLIN(1287)								if (::hx::IsNull( b->b )) {
HXLINE(1287)									b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE(1287)									::Array< ::String > b1 = b->b;
HXDLIN(1287)									b1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE(1287)								if (::hx::IsNull( b->charBuf )) {
HXLINE(1287)									b->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(1287)								b->charBuf->push(c);
            							}
            						}
            						else {
HXLINE(1287)							this->invalidChar(c);
            						}
            					}
            					break;
            					case (int)110: {
HXLINE(1283)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1283)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1283)						b->charBuf->push(10);
            					}
            					break;
            					case (int)114: {
HXLINE(1284)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1284)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1284)						b->charBuf->push(13);
            					}
            					break;
            					case (int)116: {
HXLINE(1285)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1285)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1285)						b->charBuf->push(9);
            					}
            					break;
            					case (int)117: {
HXLINE(1289)						if (!(this->allowJSON)) {
HXLINE(1289)							this->invalidChar(c);
            						}
HXLINE(1290)						int k = 0;
HXLINE(1291)						{
HXLINE(1291)							int _g = 0;
HXDLIN(1291)							while((_g < 4)){
HXLINE(1291)								_g = (_g + 1);
HXDLIN(1291)								int i = (_g - 1);
HXLINE(1292)								k = (k << 4);
HXLINE(1293)								int _hx_char = this->input.cca(this->readPos++);
HXLINE(1294)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1296)										k = (k + (_hx_char - 48));
            									}
            									break;
            									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1298)										k = (k + (_hx_char - 55));
            									}
            									break;
            									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1300)										k = (k + (_hx_char - 87));
            									}
            									break;
            									default:{
HXLINE(1302)										if ((_hx_char == 0)) {
HXLINE(1303)											this->line = old;
HXLINE(1304)											if (!(this->resumeErrors)) {
HXLINE(1304)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EUnterminatedString_dyn(),p1,p1,this->origin,this->line)));
            											}
            										}
HXLINE(1306)										this->invalidChar(_hx_char);
            									}
            								}
            							}
            						}
HXLINE(1309)						if ((k >= 127)) {
HXLINE(1309)							::String x = ::String::fromCharCode(k);
HXDLIN(1309)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1309)								b->flush();
            							}
HXDLIN(1309)							if (::hx::IsNull( b->b )) {
HXLINE(1309)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1309)								::Array< ::String > b1 = b->b;
HXDLIN(1309)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1309)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1309)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1309)							b->charBuf->push(k);
            						}
            					}
            					break;
            					default:{
HXLINE(1310)						this->invalidChar(c);
            					}
            				}
            			}
            			else {
HXLINE(1312)				if ((c == 92)) {
HXLINE(1313)					esc = true;
            				}
            				else {
HXLINE(1314)					if ((c == until)) {
HXLINE(1315)						goto _hx_goto_90;
            					}
            					else {
HXLINE(1317)						if ((c == 10)) {
HXLINE(1317)							this->line++;
            						}
HXLINE(1318)						if ((c >= 127)) {
HXLINE(1318)							::String x = ::String::fromCharCode(c);
HXDLIN(1318)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1318)								b->flush();
            							}
HXDLIN(1318)							if (::hx::IsNull( b->b )) {
HXLINE(1318)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1318)								::Array< ::String > b1 = b->b;
HXDLIN(1318)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1318)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1318)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1318)							b->charBuf->push(c);
            						}
            					}
            				}
            			}
            		}
            		_hx_goto_90:;
HXLINE(1321)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

 ::hscript::Token Parser_obj::token(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1324_token)
HXLINE(1326)		 ::Dynamic t = this->tokens->pop();
HXLINE(1327)		if (::hx::IsNotNull( t )) {
HXLINE(1328)			this->tokenMin = ( (int)(t->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) );
HXLINE(1329)			this->tokenMax = ( (int)(t->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE(1330)			return t->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            		}
HXLINE(1332)		this->oldTokenMin = this->tokenMin;
HXLINE(1333)		this->oldTokenMax = this->tokenMax;
HXLINE(1334)		int _hx_tmp;
HXDLIN(1334)		if ((this->_hx_char < 0)) {
HXLINE(1334)			_hx_tmp = this->readPos;
            		}
            		else {
HXLINE(1334)			_hx_tmp = (this->readPos - 1);
            		}
HXDLIN(1334)		this->tokenMin = _hx_tmp;
HXLINE(1335)		 ::hscript::Token t1 = this->_token();
HXLINE(1336)		int _hx_tmp1;
HXDLIN(1336)		if ((this->_hx_char < 0)) {
HXLINE(1336)			_hx_tmp1 = (this->readPos - 1);
            		}
            		else {
HXLINE(1336)			_hx_tmp1 = (this->readPos - 2);
            		}
HXDLIN(1336)		this->tokenMax = _hx_tmp1;
HXLINE(1337)		return t1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

 ::hscript::Token Parser_obj::_token(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1340__token)
HXLINE(1345)		int _hx_char;
HXLINE(1346)		if ((this->_hx_char < 0)) {
HXLINE(1347)			_hx_char = this->input.cca(this->readPos++);
            		}
            		else {
HXLINE(1349)			_hx_char = this->_hx_char;
HXLINE(1350)			this->_hx_char = -1;
            		}
HXLINE(1352)		while(true){
HXLINE(1353)			if ((_hx_char == 0)) {
HXLINE(1354)				this->_hx_char = _hx_char;
HXLINE(1355)				return ::hscript::Token_obj::TEof_dyn();
            			}
HXLINE(1357)			switch((int)(_hx_char)){
            				case (int)0: {
HXLINE(1359)					return ::hscript::Token_obj::TEof_dyn();
            				}
            				break;
            				case (int)10: {
HXLINE(1364)					this->line++;
HXLINE(1366)					this->tokenMin++;
            				}
            				break;
            				case (int)9: case (int)13: case (int)32: {
HXLINE(1362)					this->tokenMin++;
            				}
            				break;
            				case (int)35: {
HXLINE(1512)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1513)					if (this->idents->__get(_hx_char)) {
HXLINE(1514)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1515)						while(true){
HXLINE(1516)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1517)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1518)								this->_hx_char = _hx_char;
HXLINE(1519)								return this->preprocess(id);
            							}
HXLINE(1521)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1524)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)34: case (int)39: {
HXLINE(1486)					return ::hscript::Token_obj::TConst(::hscript::Const_obj::CString(this->readString(_hx_char)));
            				}
            				break;
            				case (int)40: {
HXLINE(1453)					return ::hscript::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1454)					return ::hscript::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1455)					return ::hscript::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1457)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1458)					switch((int)(_hx_char)){
            						case (int)46: {
HXLINE(1474)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1475)							if ((_hx_char != 46)) {
HXLINE(1476)								this->invalidChar(_hx_char);
            							}
HXLINE(1477)							return ::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00));
            						}
            						break;
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1460)							int n = (_hx_char - 48);
HXLINE(1461)							int exp = 1;
HXLINE(1462)							while(true){
HXLINE(1463)								_hx_char = this->input.cca(this->readPos++);
HXLINE(1464)								exp = (exp * 10);
HXLINE(1465)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1467)										n = ((n * 10) + (_hx_char - 48));
            									}
            									break;
            									default:{
HXLINE(1469)										this->_hx_char = _hx_char;
HXLINE(1470)										return ::hscript::Token_obj::TConst(::hscript::Const_obj::CFloat((( (Float)(n) ) / ( (Float)(exp) ))));
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE(1479)							this->_hx_char = _hx_char;
HXLINE(1480)							return ::hscript::Token_obj::TDot_dyn();
            						}
            					}
            				}
            				break;
            				case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1369)					Float n = (( (Float)((_hx_char - 48)) ) * ((Float)1.0));
HXLINE(1370)					Float exp = ((Float)0.);
HXLINE(1371)					while(true){
HXLINE(1372)						_hx_char = this->input.cca(this->readPos++);
HXLINE(1373)						exp = (exp * ( (Float)(10) ));
HXLINE(1374)						switch((int)(_hx_char)){
            							case (int)46: {
HXLINE(1395)								if ((exp > 0)) {
HXLINE(1397)									bool _hx_tmp;
HXDLIN(1397)									if ((exp == 10)) {
HXLINE(1397)										_hx_tmp = (this->input.cca(this->readPos++) == 46);
            									}
            									else {
HXLINE(1397)										_hx_tmp = false;
            									}
HXDLIN(1397)									if (_hx_tmp) {
HXLINE(1398)										{
HXLINE(1398)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00)))
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1398)											this->tokenMin = this->oldTokenMin;
HXDLIN(1398)											this->tokenMax = this->oldTokenMax;
            										}
HXLINE(1399)										int i = ::Std_obj::_hx_int(n);
HXLINE(1400)										 ::hscript::Const _hx_tmp;
HXDLIN(1400)										if ((i == n)) {
HXLINE(1400)											_hx_tmp = ::hscript::Const_obj::CInt(i);
            										}
            										else {
HXLINE(1400)											_hx_tmp = ::hscript::Const_obj::CFloat(n);
            										}
HXDLIN(1400)										return ::hscript::Token_obj::TConst(_hx_tmp);
            									}
HXLINE(1402)									this->invalidChar(_hx_char);
            								}
HXLINE(1404)								exp = ((Float)1.);
            							}
            							break;
            							case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1376)								n = ((n * ( (Float)(10) )) + (_hx_char - 48));
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE(1378)								 ::hscript::Token tk = this->token();
HXLINE(1379)								 ::Dynamic pow = null();
HXLINE(1380)								switch((int)(tk->_hx_getIndex())){
            									case (int)1: {
HXLINE(1381)										 ::hscript::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1381)										if ((_g->_hx_getIndex() == 0)) {
HXLINE(1381)											int e = _g->_hx_getInt(0);
HXDLIN(1381)											pow = e;
            										}
            										else {
HXLINE(1389)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),tk)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1389)											this->tokenMin = this->oldTokenMin;
HXDLIN(1389)											this->tokenMax = this->oldTokenMax;
            										}
            									}
            									break;
            									case (int)3: {
HXLINE(1382)										if ((tk->_hx_getString(0) == HX_("-",2d,00,00,00))) {
HXLINE(1383)											tk = this->token();
HXLINE(1384)											if ((tk->_hx_getIndex() == 1)) {
HXLINE(1385)												 ::hscript::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1385)												if ((_g->_hx_getIndex() == 0)) {
HXLINE(1385)													int e = _g->_hx_getInt(0);
HXDLIN(1385)													pow = -(e);
            												}
            												else {
HXLINE(1386)													this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("t",74,00,00,00),tk)
            														->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            														->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1386)													this->tokenMin = this->oldTokenMin;
HXDLIN(1386)													this->tokenMax = this->oldTokenMax;
            												}
            											}
            											else {
HXLINE(1386)												this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("t",74,00,00,00),tk)
            													->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            													->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1386)												this->tokenMin = this->oldTokenMin;
HXDLIN(1386)												this->tokenMax = this->oldTokenMax;
            											}
            										}
            										else {
HXLINE(1389)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),tk)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1389)											this->tokenMin = this->oldTokenMin;
HXDLIN(1389)											this->tokenMax = this->oldTokenMax;
            										}
            									}
            									break;
            									default:{
HXLINE(1389)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1389)										this->tokenMin = this->oldTokenMin;
HXDLIN(1389)										this->tokenMax = this->oldTokenMax;
            									}
            								}
HXLINE(1391)								if (::hx::IsNull( pow )) {
HXLINE(1392)									this->invalidChar(_hx_char);
            								}
HXLINE(1393)								return ::hscript::Token_obj::TConst(::hscript::Const_obj::CFloat((((::Math_obj::pow(( (Float)(10) ),( (Float)(pow) )) / exp) * n) * ( (Float)(10) ))));
            							}
            							break;
            							case (int)120: {
HXLINE(1406)								bool _hx_tmp;
HXDLIN(1406)								if (!((n > 0))) {
HXLINE(1406)									_hx_tmp = (exp > 0);
            								}
            								else {
HXLINE(1406)									_hx_tmp = true;
            								}
HXDLIN(1406)								if (_hx_tmp) {
HXLINE(1407)									this->invalidChar(_hx_char);
            								}
HXLINE(1410)								int n1 = 0;
HXLINE(1411)								while(true){
HXLINE(1412)									_hx_char = this->input.cca(this->readPos++);
HXLINE(1413)									switch((int)(_hx_char)){
            										case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1415)											n1 = (((n1 << 4) + _hx_char) - 48);
            										}
            										break;
            										case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1417)											n1 = ((n1 << 4) + (_hx_char - 55));
            										}
            										break;
            										case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1419)											n1 = ((n1 << 4) + (_hx_char - 87));
            										}
            										break;
            										default:{
HXLINE(1421)											this->_hx_char = _hx_char;
HXLINE(1422)											return ::hscript::Token_obj::TConst(::hscript::Const_obj::CInt(n1));
            										}
            									}
            								}
            							}
            							break;
            							default:{
HXLINE(1447)								this->_hx_char = _hx_char;
HXLINE(1448)								int i = ::Std_obj::_hx_int(n);
HXLINE(1449)								 ::hscript::Const _hx_tmp;
HXDLIN(1449)								if ((exp > 0)) {
HXLINE(1449)									_hx_tmp = ::hscript::Const_obj::CFloat(((n * ( (Float)(10) )) / exp));
            								}
            								else {
HXLINE(1449)									if ((i == n)) {
HXLINE(1449)										_hx_tmp = ::hscript::Const_obj::CInt(i);
            									}
            									else {
HXLINE(1449)										_hx_tmp = ::hscript::Const_obj::CFloat(n);
            									}
            								}
HXDLIN(1449)								return ::hscript::Token_obj::TConst(_hx_tmp);
            							}
            						}
            					}
            				}
            				break;
            				case (int)58: {
HXLINE(1488)					return ::hscript::Token_obj::TDoubleDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1452)					return ::hscript::Token_obj::TSemicolon_dyn();
            				}
            				break;
            				case (int)61: {
HXLINE(1490)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1491)					if ((_hx_char == 61)) {
HXLINE(1492)						return ::hscript::Token_obj::TOp(HX_("==",60,35,00,00));
            					}
            					else {
HXLINE(1493)						if ((_hx_char == 62)) {
HXLINE(1494)							return ::hscript::Token_obj::TOp(HX_("=>",61,35,00,00));
            						}
            					}
HXLINE(1495)					this->_hx_char = _hx_char;
HXLINE(1496)					return ::hscript::Token_obj::TOp(HX_("=",3d,00,00,00));
            				}
            				break;
            				case (int)63: {
HXLINE(1487)					return ::hscript::Token_obj::TQuestion_dyn();
            				}
            				break;
            				case (int)64: {
HXLINE(1498)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1499)					bool _hx_tmp;
HXDLIN(1499)					if (!(this->idents->__get(_hx_char))) {
HXLINE(1499)						_hx_tmp = (_hx_char == 58);
            					}
            					else {
HXLINE(1499)						_hx_tmp = true;
            					}
HXDLIN(1499)					if (_hx_tmp) {
HXLINE(1500)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1501)						while(true){
HXLINE(1502)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1503)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1504)								this->_hx_char = _hx_char;
HXLINE(1505)								return ::hscript::Token_obj::TMeta(id);
            							}
HXLINE(1507)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1510)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)91: {
HXLINE(1484)					return ::hscript::Token_obj::TBkOpen_dyn();
            				}
            				break;
            				case (int)93: {
HXLINE(1485)					return ::hscript::Token_obj::TBkClose_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1482)					return ::hscript::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1483)					return ::hscript::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
HXLINE(1526)					if (this->ops->__get(_hx_char)) {
HXLINE(1527)						::String op = ::String::fromCharCode(_hx_char);
HXLINE(1528)						while(true){
HXLINE(1529)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1530)							if ((_hx_char == 0)) {
HXLINE(1530)								_hx_char = 0;
            							}
HXLINE(1531)							if (!(this->ops->__get(_hx_char))) {
HXLINE(1532)								this->_hx_char = _hx_char;
HXLINE(1533)								return ::hscript::Token_obj::TOp(op);
            							}
HXLINE(1535)							::String pop = op;
HXLINE(1536)							op = (op + ::String::fromCharCode(_hx_char));
HXLINE(1537)							bool _hx_tmp;
HXDLIN(1537)							if (!(this->opPriority->exists(op))) {
HXLINE(1537)								_hx_tmp = this->opPriority->exists(pop);
            							}
            							else {
HXLINE(1537)								_hx_tmp = false;
            							}
HXDLIN(1537)							if (_hx_tmp) {
HXLINE(1538)								bool _hx_tmp;
HXDLIN(1538)								if ((op != HX_("//",20,29,00,00))) {
HXLINE(1538)									_hx_tmp = (op == HX_("/*",1b,29,00,00));
            								}
            								else {
HXLINE(1538)									_hx_tmp = true;
            								}
HXDLIN(1538)								if (_hx_tmp) {
HXLINE(1539)									return this->tokenComment(op,_hx_char);
            								}
HXLINE(1540)								this->_hx_char = _hx_char;
HXLINE(1541)								return ::hscript::Token_obj::TOp(pop);
            							}
            						}
            					}
HXLINE(1545)					if (this->idents->__get(_hx_char)) {
HXLINE(1546)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1547)						while(true){
HXLINE(1548)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1549)							if ((_hx_char == 0)) {
HXLINE(1549)								_hx_char = 0;
            							}
HXLINE(1550)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1551)								this->_hx_char = _hx_char;
HXLINE(1552)								return ::hscript::Token_obj::TId(id);
            							}
HXLINE(1554)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1557)					this->invalidChar(_hx_char);
            				}
            			}
HXLINE(1559)			_hx_char = this->input.cca(this->readPos++);
            		}
HXLINE(1352)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,_token,return )

 ::Dynamic Parser_obj::preprocValue(::String id){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1565_preprocValue)
HXDLIN(1565)		return this->preprocesorValues->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocValue,return )

 ::Dynamic Parser_obj::parsePreproCond(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1570_parsePreproCond)
HXLINE(1571)		 ::hscript::Token tk = this->token();
HXLINE(1572)		switch((int)(tk->_hx_getIndex())){
            			case (int)2: {
HXLINE(1576)				::String id = tk->_hx_getString(0);
HXLINE(1577)				 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EIdent(id);
HXDLIN(1577)				 ::Dynamic pmin = this->tokenMin;
HXDLIN(1577)				 ::Dynamic pmax = this->tokenMax;
HXDLIN(1577)				if (::hx::IsNull( e )) {
HXLINE(1577)					return null();
            				}
            				else {
HXLINE(1577)					if (::hx::IsNull( pmin )) {
HXLINE(1577)						pmin = this->tokenMin;
            					}
HXDLIN(1577)					if (::hx::IsNull( pmax )) {
HXLINE(1577)						pmax = this->tokenMax;
            					}
HXDLIN(1577)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(1578)				if ((tk->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1579)					 ::hscript::ExprDef e = ::hscript::ExprDef_obj::EUnop(HX_("!",21,00,00,00),true,this->parsePreproCond());
HXDLIN(1579)					 ::Dynamic pmin = this->tokenMin;
HXDLIN(1579)					 ::Dynamic pmax = this->tokenMax;
HXDLIN(1579)					if (::hx::IsNull( e )) {
HXLINE(1579)						return null();
            					}
            					else {
HXLINE(1579)						if (::hx::IsNull( pmin )) {
HXLINE(1579)							pmin = this->tokenMin;
            						}
HXDLIN(1579)						if (::hx::IsNull( pmax )) {
HXLINE(1579)							pmax = this->tokenMax;
            						}
HXDLIN(1579)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE(1581)					return this->unexpected(tk);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(1574)				{
HXLINE(1574)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),::hscript::Token_obj::TPOpen_dyn())
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1574)					this->tokenMin = this->oldTokenMin;
HXDLIN(1574)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1575)				return this->parseExpr();
            			}
            			break;
            			default:{
HXLINE(1581)				return this->unexpected(tk);
            			}
            		}
HXLINE(1572)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePreproCond,return )

bool Parser_obj::evalPreproCond( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1586_evalPreproCond)
HXDLIN(1586)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(1586)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE(1587)				::String id = _g->_hx_getString(0);
HXLINE(1588)				return ::hx::IsNotNull( this->preprocValue(id) );
            			}
            			break;
            			case (int)3: {
HXLINE(1591)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE(1592)				return this->evalPreproCond(e);
            			}
            			break;
            			case (int)6: {
HXLINE(1595)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN(1595)				 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN(1595)				::String _hx_switch_0 = _g->_hx_getString(0);
            				if (  (_hx_switch_0==HX_("&&",40,21,00,00)) ){
HXLINE(1593)					 ::Dynamic e1 = _g1;
HXDLIN(1593)					 ::Dynamic e2 = _g2;
HXLINE(1594)					if (this->evalPreproCond(e1)) {
HXLINE(1594)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1594)						return false;
            					}
HXLINE(1593)					goto _hx_goto_105;
            				}
            				if (  (_hx_switch_0==HX_("||",80,6c,00,00)) ){
HXLINE(1595)					 ::Dynamic e1 = _g1;
HXDLIN(1595)					 ::Dynamic e2 = _g2;
HXLINE(1596)					if (!(this->evalPreproCond(e1))) {
HXLINE(1596)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1596)						return true;
            					}
HXLINE(1595)					goto _hx_goto_105;
            				}
            				/* default */{
HXLINE(1598)					{
HXLINE(1598)						 ::hscript::ErrorDef err = ::hscript::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(1598)						if (!(this->resumeErrors)) {
HXLINE(1598)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,err,this->readPos,this->readPos,this->origin,this->line)));
            						}
            					}
HXLINE(1599)					return false;
            				}
            				_hx_goto_105:;
            			}
            			break;
            			case (int)7: {
HXLINE(1589)				bool _g1 = _g->_hx_getBool(1);
HXDLIN(1589)				if ((_g->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1589)					 ::Dynamic e = _g->_hx_getObject(2);
HXLINE(1590)					return !(this->evalPreproCond(e));
            				}
            				else {
HXLINE(1598)					{
HXLINE(1598)						 ::hscript::ErrorDef err = ::hscript::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(1598)						if (!(this->resumeErrors)) {
HXLINE(1598)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,err,this->readPos,this->readPos,this->origin,this->line)));
            						}
            					}
HXLINE(1599)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE(1598)				{
HXLINE(1598)					 ::hscript::ErrorDef err = ::hscript::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(1598)					if (!(this->resumeErrors)) {
HXLINE(1598)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,err,this->readPos,this->readPos,this->origin,this->line)));
            					}
            				}
HXLINE(1599)				return false;
            			}
            		}
HXLINE(1586)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,evalPreproCond,return )

 ::hscript::Token Parser_obj::preprocess(::String id){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1604_preprocess)
HXDLIN(1604)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ||  (_hx_switch_0==HX_("elseif",d6,a0,a2,dd)) ){
HXLINE(1614)			if ((this->preprocStack->length > 0)) {
HXLINE(1615)				if (( (bool)(this->preprocStack->__get((this->preprocStack->length - 1))->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) )) {
HXLINE(1616)					this->preprocStack->__get((this->preprocStack->length - 1))->__SetField(HX_("r",72,00,00,00),false,::hx::paccDynamic);
HXLINE(1617)					this->skipTokens();
HXLINE(1618)					return this->token();
            				}
            				else {
HXLINE(1619)					if ((id == HX_("else",b9,e4,14,43))) {
HXLINE(1620)						this->preprocStack->pop();
HXLINE(1621)						this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1622)						return this->token();
            					}
            					else {
HXLINE(1625)						this->preprocStack->pop();
HXLINE(1626)						return this->preprocess(HX_("if",dd,5b,00,00));
            					}
            				}
            			}
            			else {
HXLINE(1632)				return ::hscript::Token_obj::TPrepro(id);
            			}
HXLINE(1614)			goto _hx_goto_107;
            		}
            		if (  (_hx_switch_0==HX_("end",db,03,4d,00)) ){
HXLINE(1628)			if ((this->preprocStack->length > 0)) {
HXLINE(1629)				this->preprocStack->pop();
HXLINE(1630)				return this->token();
            			}
            			else {
HXLINE(1632)				return ::hscript::Token_obj::TPrepro(id);
            			}
HXLINE(1628)			goto _hx_goto_107;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE(1606)			 ::Dynamic e = this->parsePreproCond();
HXLINE(1607)			if (this->evalPreproCond(e)) {
HXLINE(1608)				this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1609)				return this->token();
            			}
HXLINE(1611)			this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("r",72,00,00,00),false)));
HXLINE(1612)			this->skipTokens();
HXLINE(1613)			return this->token();
HXLINE(1605)			goto _hx_goto_107;
            		}
            		/* default */{
HXLINE(1632)			return ::hscript::Token_obj::TPrepro(id);
            		}
            		_hx_goto_107:;
HXLINE(1604)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocess,return )

void Parser_obj::skipTokens(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1636_skipTokens)
HXLINE(1637)		int spos = (this->preprocStack->length - 1);
HXLINE(1638)		 ::Dynamic obj = this->preprocStack->__get(spos);
HXLINE(1639)		int pos = this->readPos;
HXLINE(1640)		while(true){
HXLINE(1641)			 ::hscript::Token tk = this->token();
HXLINE(1642)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE(1643)				if (!(this->resumeErrors)) {
HXLINE(1643)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidPreprocessor(HX_("Unclosed",e5,94,4a,ea)),pos,pos,this->origin,this->line)));
            				}
            			}
HXLINE(1644)			if (::hx::IsNotEq( this->preprocStack->__get(spos),obj )) {
HXLINE(1645)				{
HXLINE(1645)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1645)					this->tokenMin = this->oldTokenMin;
HXDLIN(1645)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1646)				goto _hx_goto_109;
            			}
            		}
            		_hx_goto_109:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,skipTokens,(void))

 ::hscript::Token Parser_obj::tokenComment(::String op,int _hx_char){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1651_tokenComment)
HXLINE(1652)		 ::Dynamic c = op.charCodeAt(1);
HXLINE(1653)		::String s = this->input;
HXLINE(1654)		if (::hx::IsEq( c,47 )) {
HXLINE(1655)			while(true){
HXLINE(1655)				bool _hx_tmp;
HXDLIN(1655)				if ((_hx_char != 13)) {
HXLINE(1655)					_hx_tmp = (_hx_char != 10);
            				}
            				else {
HXLINE(1655)					_hx_tmp = false;
            				}
HXDLIN(1655)				if (!(_hx_tmp)) {
HXLINE(1655)					goto _hx_goto_111;
            				}
HXLINE(1656)				_hx_char = this->input.cca(this->readPos++);
HXLINE(1657)				if ((_hx_char == 0)) {
HXLINE(1657)					goto _hx_goto_111;
            				}
            			}
            			_hx_goto_111:;
HXLINE(1659)			this->_hx_char = _hx_char;
HXLINE(1660)			return this->token();
            		}
HXLINE(1662)		if (::hx::IsEq( c,42 )) {
HXLINE(1663)			int old = this->line;
HXLINE(1664)			if ((op == HX_("/**/",a0,0a,31,1f))) {
HXLINE(1665)				this->_hx_char = _hx_char;
HXLINE(1666)				return this->token();
            			}
HXLINE(1668)			while(true){
HXLINE(1669)				while((_hx_char != 42)){
HXLINE(1670)					if ((_hx_char == 10)) {
HXLINE(1670)						this->line++;
            					}
HXLINE(1671)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1672)					if ((_hx_char == 0)) {
HXLINE(1673)						this->line = old;
HXLINE(1674)						if (!(this->resumeErrors)) {
HXLINE(1674)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EUnterminatedComment_dyn(),this->tokenMin,this->tokenMin,this->origin,this->line)));
            						}
HXLINE(1675)						goto _hx_goto_113;
            					}
            				}
            				_hx_goto_113:;
HXLINE(1678)				_hx_char = this->input.cca(this->readPos++);
HXLINE(1679)				if ((_hx_char == 0)) {
HXLINE(1680)					this->line = old;
HXLINE(1681)					if (!(this->resumeErrors)) {
HXLINE(1681)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EUnterminatedComment_dyn(),this->tokenMin,this->tokenMin,this->origin,this->line)));
            					}
HXLINE(1682)					goto _hx_goto_112;
            				}
HXLINE(1684)				if ((_hx_char == 47)) {
HXLINE(1685)					goto _hx_goto_112;
            				}
            			}
            			_hx_goto_112:;
HXLINE(1687)			return this->token();
            		}
HXLINE(1689)		this->_hx_char = _hx_char;
HXLINE(1690)		return ::hscript::Token_obj::TOp(op);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1694_constString)
HXDLIN(1694)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE(1695)				int v = c->_hx_getInt(0);
HXDLIN(1695)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)1: {
HXLINE(1696)				Float f = c->_hx_getFloat(0);
HXDLIN(1696)				return ::Std_obj::string(f);
            			}
            			break;
            			case (int)2: {
HXLINE(1697)				::String s = c->_hx_getString(0);
HXDLIN(1697)				return s;
            			}
            			break;
            		}
HXLINE(1694)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1705_tokenString)
HXDLIN(1705)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE(1706)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            			case (int)1: {
HXLINE(1707)				 ::hscript::Const c = t->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1707)				return this->constString(c);
            			}
            			break;
            			case (int)2: {
HXLINE(1708)				::String s = t->_hx_getString(0);
HXDLIN(1708)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(1709)				::String s = t->_hx_getString(0);
HXDLIN(1709)				return s;
            			}
            			break;
            			case (int)4: {
HXLINE(1710)				return HX_("(",28,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(1711)				return HX_(")",29,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(1712)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(1713)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE(1714)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE(1715)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(1716)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE(1717)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE(1718)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE(1719)				return HX_("?",3f,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE(1720)				return HX_(":",3a,00,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE(1721)				::String id = t->_hx_getString(0);
HXDLIN(1721)				return (HX_("@",40,00,00,00) + id);
            			}
            			break;
            			case (int)16: {
HXLINE(1722)				::String id = t->_hx_getString(0);
HXDLIN(1722)				return (HX_("#",23,00,00,00) + id);
            			}
            			break;
            		}
HXLINE(1705)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hscript.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_MARK_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(readPos,"readPos");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(tokenMax,"tokenMax");
	HX_MARK_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_MARK_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_MEMBER_NAME(preprocStack,"preprocStack");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_VISIT_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(readPos,"readPos");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(tokenMax,"tokenMax");
	HX_VISIT_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_VISIT_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
	HX_VISIT_MEMBER_NAME(preprocStack,"preprocStack");
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return ::hx::Val( mk_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ::hx::Val( ops ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return ::hx::Val( pmin_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return ::hx::Val( pmax_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"maybe") ) { return ::hx::Val( maybe_dyn() ); }
		if (HX_FIELD_EQ(inName,"token") ) { return ::hx::Val( token_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return ::hx::Val( idents ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"tokens") ) { return ::hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ::hx::Val( ensure_dyn() ); }
		if (HX_FIELD_EQ(inName,"_token") ) { return ::hx::Val( _token_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return ::hx::Val( opChars ); }
		if (HX_FIELD_EQ(inName,"readPos") ) { return ::hx::Val( readPos ); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return ::hx::Val( isBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenMin") ) { return ::hx::Val( tokenMin ); }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { return ::hx::Val( tokenMax ); }
		if (HX_FIELD_EQ(inName,"getIdent") ) { return ::hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return ::hx::Val( mapCompr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return ::hx::Val( makeUnop_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return ::hx::Val( readChar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return ::hx::Val( allowJSON ); }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return ::hx::Val( parseExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return ::hx::Val( makeBinop_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePath") ) { return ::hx::Val( parsePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return ::hx::Val( parseType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return ::hx::Val( identChars ); }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return ::hx::Val( opPriority ); }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return ::hx::Val( allowTypes ); }
		if (HX_FIELD_EQ(inName,"initParser") ) { return ::hx::Val( initParser_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return ::hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseField") ) { return ::hx::Val( parseField_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocess") ) { return ::hx::Val( preprocess_dyn() ); }
		if (HX_FIELD_EQ(inName,"skipTokens") ) { return ::hx::Val( skipTokens_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { return ::hx::Val( oldTokenMin ); }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { return ::hx::Val( oldTokenMax ); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return ::hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"ensureToken") ) { return ::hx::Val( ensureToken_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return ::hx::Val( parseObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseLambda") ) { return ::hx::Val( parseLambda_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseModule") ) { return ::hx::Val( parseModule_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseParams") ) { return ::hx::Val( parseParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"constString") ) { return ::hx::Val( constString_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return ::hx::Val( tokenString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return ::hx::Val( opRightAssoc ); }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { return ::hx::Val( resumeErrors ); }
		if (HX_FIELD_EQ(inName,"preprocValue") ) { return ::hx::Val( preprocValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { return ::hx::Val( preprocStack ); }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return ::hx::Val( tokenComment_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { return ::hx::Val( allowMetadata ); }
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return ::hx::Val( parseFullExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetaArgs") ) { return ::hx::Val( parseMetaArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return ::hx::Val( parseExprNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return ::hx::Val( parseTypeNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return ::hx::Val( parseExprList_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetadata") ) { return ::hx::Val( parseMetadata_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return ::hx::Val( parseStructure_dyn() ); }
		if (HX_FIELD_EQ(inName,"evalPreproCond") ) { return ::hx::Val( evalPreproCond_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseModuleDecl") ) { return ::hx::Val( parseModuleDecl_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePreproCond") ) { return ::hx::Val( parsePreproCond_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { return ::hx::Val( preprocesorValues ); }
		if (HX_FIELD_EQ(inName,"parseFunctionArgs") ) { return ::hx::Val( parseFunctionArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseFunctionDecl") ) { return ::hx::Val( parseFunctionDecl_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Parser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readPos") ) { readPos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenMin") ) { tokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { tokenMax=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { oldTokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { oldTokenMax=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { resumeErrors=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { preprocStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { allowMetadata=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { preprocesorValues=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("opChars",fc,f3,a7,a8));
	outFields->push(HX_("identChars",cd,23,3f,ee));
	outFields->push(HX_("opPriority",a5,21,d8,3e));
	outFields->push(HX_("opRightAssoc",9a,d1,fe,02));
	outFields->push(HX_("preprocesorValues",4c,e2,81,ce));
	outFields->push(HX_("allowJSON",31,27,44,b1));
	outFields->push(HX_("allowTypes",30,2b,97,45));
	outFields->push(HX_("allowMetadata",18,79,d4,10));
	outFields->push(HX_("resumeErrors",38,61,37,31));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("readPos",de,03,cf,02));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("ops",32,9c,54,00));
	outFields->push(HX_("idents",83,4f,a1,d2));
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("tokenMin",19,a8,42,2b));
	outFields->push(HX_("tokenMax",2b,a1,42,2b));
	outFields->push(HX_("oldTokenMin",e0,7b,1c,6b));
	outFields->push(HX_("oldTokenMax",f2,74,1c,6b));
	outFields->push(HX_("tokens",5a,17,e7,91));
	outFields->push(HX_("preprocStack",4f,d3,9d,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Parser_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsString,(int)offsetof(Parser_obj,opChars),HX_("opChars",fc,f3,a7,a8)},
	{::hx::fsString,(int)offsetof(Parser_obj,identChars),HX_("identChars",cd,23,3f,ee)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opPriority),HX_("opPriority",a5,21,d8,3e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opRightAssoc),HX_("opRightAssoc",9a,d1,fe,02)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,preprocesorValues),HX_("preprocesorValues",4c,e2,81,ce)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_("allowJSON",31,27,44,b1)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_("allowTypes",30,2b,97,45)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowMetadata),HX_("allowMetadata",18,79,d4,10)},
	{::hx::fsBool,(int)offsetof(Parser_obj,resumeErrors),HX_("resumeErrors",38,61,37,31)},
	{::hx::fsString,(int)offsetof(Parser_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(Parser_obj,readPos),HX_("readPos",de,03,cf,02)},
	{::hx::fsInt,(int)offsetof(Parser_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,ops),HX_("ops",32,9c,54,00)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,idents),HX_("idents",83,4f,a1,d2)},
	{::hx::fsInt,(int)offsetof(Parser_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsString,(int)offsetof(Parser_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,tokenMin),HX_("tokenMin",19,a8,42,2b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,tokenMax),HX_("tokenMax",2b,a1,42,2b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,oldTokenMin),HX_("oldTokenMin",e0,7b,1c,6b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,oldTokenMax),HX_("oldTokenMax",f2,74,1c,6b)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Parser_obj,tokens),HX_("tokens",5a,17,e7,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Parser_obj,preprocStack),HX_("preprocStack",4f,d3,9d,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Parser_obj_sStaticStorageInfo = 0;
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("line",f4,17,b3,47),
	HX_("opChars",fc,f3,a7,a8),
	HX_("identChars",cd,23,3f,ee),
	HX_("opPriority",a5,21,d8,3e),
	HX_("opRightAssoc",9a,d1,fe,02),
	HX_("preprocesorValues",4c,e2,81,ce),
	HX_("allowJSON",31,27,44,b1),
	HX_("allowTypes",30,2b,97,45),
	HX_("allowMetadata",18,79,d4,10),
	HX_("resumeErrors",38,61,37,31),
	HX_("input",0a,c4,1d,be),
	HX_("readPos",de,03,cf,02),
	HX_("char",d6,5e,bf,41),
	HX_("ops",32,9c,54,00),
	HX_("idents",83,4f,a1,d2),
	HX_("uid",90,23,59,00),
	HX_("origin",e6,19,01,4b),
	HX_("tokenMin",19,a8,42,2b),
	HX_("tokenMax",2b,a1,42,2b),
	HX_("oldTokenMin",e0,7b,1c,6b),
	HX_("oldTokenMax",f2,74,1c,6b),
	HX_("tokens",5a,17,e7,91),
	HX_("error",c8,cb,29,73),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("initParser",0f,f8,cd,f1),
	HX_("parseString",64,d5,6c,8c),
	HX_("unexpected",d1,15,f4,c5),
	HX_("push",da,11,61,4a),
	HX_("ensure",be,f5,7b,04),
	HX_("ensureToken",5b,6c,33,ec),
	HX_("maybe",a8,13,27,03),
	HX_("getIdent",7a,52,50,17),
	HX_("expr",35,fd,1d,43),
	HX_("pmin",22,f7,5a,4a),
	HX_("pmax",34,f0,5a,4a),
	HX_("mk",5e,5f,00,00),
	HX_("isBlock",03,19,82,51),
	HX_("parseFullExpr",b7,bd,60,9c),
	HX_("parseObject",52,2b,7c,90),
	HX_("parseExpr",08,4f,c4,ca),
	HX_("parseLambda",9a,df,fc,cb),
	HX_("parseMetaArgs",15,82,33,6e),
	HX_("mapCompr",47,a4,9f,c1),
	HX_("makeUnop",c8,c4,47,44),
	HX_("makeBinop",da,90,98,86),
	HX_("parseStructure",80,85,70,8b),
	HX_("parseExprNext",1b,24,a8,f3),
	HX_("parseFunctionArgs",68,ad,48,04),
	HX_("parseFunctionDecl",75,70,3a,06),
	HX_("parsePath",78,37,f8,d1),
	HX_("parseType",8d,44,af,d4),
	HX_("parseTypeNext",20,c0,fc,fa),
	HX_("parseExprList",86,bb,58,f2),
	HX_("parseModule",3f,e1,0f,3c),
	HX_("parseMetadata",c2,1e,49,85),
	HX_("parseParams",d9,a7,b7,68),
	HX_("parseModuleDecl",49,69,92,8b),
	HX_("parseField",87,db,74,2a),
	HX_("readChar",4c,39,b7,69),
	HX_("readString",c7,0c,ac,0a),
	HX_("token",f9,82,2b,14),
	HX_("_token",3a,ca,12,10),
	HX_("preprocValue",78,eb,4a,28),
	HX_("preprocStack",4f,d3,9d,7a),
	HX_("parsePreproCond",ff,8c,11,d6),
	HX_("evalPreproCond",a8,25,52,b0),
	HX_("preprocess",ac,dc,46,92),
	HX_("skipTokens",39,0b,eb,f9),
	HX_("tokenComment",66,60,fb,25),
	HX_("constString",94,42,30,a9),
	HX_("tokenString",aa,20,de,a4),
	::String(null()) };

::hx::Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Parser",9a,9f,f2,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
