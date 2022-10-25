#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_232_new,"flixel.system.FlxQuadTree","new",0xc8d074fc,"flixel.system.FlxQuadTree.new","flixel/system/FlxQuadTree.hx",232,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_277_reset,"flixel.system.FlxQuadTree","reset",0x432c4d6b,"flixel.system.FlxQuadTree.reset","flixel/system/FlxQuadTree.hx",277,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_346_destroy,"flixel.system.FlxQuadTree","destroy",0x64a74f96,"flixel.system.FlxQuadTree.destroy","flixel/system/FlxQuadTree.hx",346,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_382_load,"flixel.system.FlxQuadTree","load",0xec4afe0a,"flixel.system.FlxQuadTree.load","flixel/system/FlxQuadTree.hx",382,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_406_add,"flixel.system.FlxQuadTree","add",0xc8c696bd,"flixel.system.FlxQuadTree.add","flixel/system/FlxQuadTree.hx",406,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_460_addObject,"flixel.system.FlxQuadTree","addObject",0x3207b55c,"flixel.system.FlxQuadTree.addObject","flixel/system/FlxQuadTree.hx",460,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_552_addToList,"flixel.system.FlxQuadTree","addToList",0x9a34be16,"flixel.system.FlxQuadTree.addToList","flixel/system/FlxQuadTree.hx",552,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_602_execute,"flixel.system.FlxQuadTree","execute",0x0c2e2cd1,"flixel.system.FlxQuadTree.execute","flixel/system/FlxQuadTree.hx",602,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_653_overlapNode,"flixel.system.FlxQuadTree","overlapNode",0x0fc5e9c5,"flixel.system.FlxQuadTree.overlapNode","flixel/system/FlxQuadTree.hx",653,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_248_recycle,"flixel.system.FlxQuadTree","recycle",0x77ad32af,"flixel.system.FlxQuadTree.recycle","flixel/system/FlxQuadTree.hx",248,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_265_clearCache,"flixel.system.FlxQuadTree","clearCache",0xc0fc4059,"flixel.system.FlxQuadTree.clearCache","flixel/system/FlxQuadTree.hx",265,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_21_boot,"flixel.system.FlxQuadTree","boot",0xe5aee816,"flixel.system.FlxQuadTree.boot","flixel/system/FlxQuadTree.hx",21,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_26_boot,"flixel.system.FlxQuadTree","boot",0xe5aee816,"flixel.system.FlxQuadTree.boot","flixel/system/FlxQuadTree.hx",26,0xb5742814)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b090d39d0d72d3_222_boot,"flixel.system.FlxQuadTree","boot",0xe5aee816,"flixel.system.FlxQuadTree.boot","flixel/system/FlxQuadTree.hx",222,0xb5742814)
namespace flixel{
namespace _hx_system{

void FlxQuadTree_obj::__construct(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_232_new)
HXLINE( 233)		super::__construct(null(),null(),null(),null());
HXLINE( 234)		{
HXLINE( 234)			this->x = X;
HXDLIN( 234)			this->y = Y;
HXDLIN( 234)			this->width = Width;
HXDLIN( 234)			this->height = Height;
            		}
HXLINE( 235)		this->reset(X,Y,Width,Height,Parent);
            	}

Dynamic FlxQuadTree_obj::__CreateEmpty() { return new FlxQuadTree_obj; }

void *FlxQuadTree_obj::_hx_vtable = 0;

Dynamic FlxQuadTree_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxQuadTree_obj > _hx_result = new FlxQuadTree_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxQuadTree_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fbb2b20) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fbb2b20;
	} else {
		return inClassId==(int)0x7da4a0b2;
	}
}

void FlxQuadTree_obj::reset(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_277_reset)
HXLINE( 278)		this->exists = true;
HXLINE( 280)		{
HXLINE( 280)			this->x = X;
HXDLIN( 280)			this->y = Y;
HXDLIN( 280)			this->width = Width;
HXDLIN( 280)			this->height = Height;
            		}
HXLINE( 282)		this->_headA = (this->_tailA = ::flixel::_hx_system::FlxLinkedList_obj::recycle());
HXLINE( 283)		this->_headB = (this->_tailB = ::flixel::_hx_system::FlxLinkedList_obj::recycle());
HXLINE( 286)		if (::hx::IsNotNull( Parent )) {
HXLINE( 288)			 ::flixel::_hx_system::FlxLinkedList iterator;
HXLINE( 289)			 ::flixel::_hx_system::FlxLinkedList ot;
HXLINE( 290)			if (::hx::IsNotNull( Parent->_headA->object )) {
HXLINE( 292)				iterator = Parent->_headA;
HXLINE( 293)				while(::hx::IsNotNull( iterator )){
HXLINE( 295)					if (::hx::IsNotNull( this->_tailA->object )) {
HXLINE( 297)						ot = this->_tailA;
HXLINE( 298)						this->_tailA = ::flixel::_hx_system::FlxLinkedList_obj::recycle();
HXLINE( 299)						ot->next = this->_tailA;
            					}
HXLINE( 301)					this->_tailA->object = iterator->object;
HXLINE( 302)					iterator = iterator->next;
            				}
            			}
HXLINE( 305)			if (::hx::IsNotNull( Parent->_headB->object )) {
HXLINE( 307)				iterator = Parent->_headB;
HXLINE( 308)				while(::hx::IsNotNull( iterator )){
HXLINE( 310)					if (::hx::IsNotNull( this->_tailB->object )) {
HXLINE( 312)						ot = this->_tailB;
HXLINE( 313)						this->_tailB = ::flixel::_hx_system::FlxLinkedList_obj::recycle();
HXLINE( 314)						ot->next = this->_tailB;
            					}
HXLINE( 316)					this->_tailB->object = iterator->object;
HXLINE( 317)					iterator = iterator->next;
            				}
            			}
            		}
            		else {
HXLINE( 323)			::flixel::_hx_system::FlxQuadTree_obj::_min = ::Math_obj::floor(((this->width + this->height) / ( (Float)((2 * ::flixel::_hx_system::FlxQuadTree_obj::divisions)) )));
            		}
HXLINE( 325)		bool _hx_tmp;
HXDLIN( 325)		if (!((this->width > ::flixel::_hx_system::FlxQuadTree_obj::_min))) {
HXLINE( 325)			_hx_tmp = (this->height > ::flixel::_hx_system::FlxQuadTree_obj::_min);
            		}
            		else {
HXLINE( 325)			_hx_tmp = true;
            		}
HXDLIN( 325)		this->_canSubdivide = _hx_tmp;
HXLINE( 328)		this->_northWestTree = null();
HXLINE( 329)		this->_northEastTree = null();
HXLINE( 330)		this->_southEastTree = null();
HXLINE( 331)		this->_southWestTree = null();
HXLINE( 332)		this->_leftEdge = this->x;
HXLINE( 333)		this->_rightEdge = (this->x + this->width);
HXLINE( 334)		this->_halfWidth = (this->width / ( (Float)(2) ));
HXLINE( 335)		this->_midpointX = (this->_leftEdge + this->_halfWidth);
HXLINE( 336)		this->_topEdge = this->y;
HXLINE( 337)		this->_bottomEdge = (this->y + this->height);
HXLINE( 338)		this->_halfHeight = (this->height / ( (Float)(2) ));
HXLINE( 339)		this->_midpointY = (this->_topEdge + this->_halfHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,reset,(void))

void FlxQuadTree_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_346_destroy)
HXLINE( 347)		this->_headA = ( ( ::flixel::_hx_system::FlxLinkedList)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_headA)) );
HXLINE( 348)		this->_headB = ( ( ::flixel::_hx_system::FlxLinkedList)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_headB)) );
HXLINE( 350)		this->_tailA = ( ( ::flixel::_hx_system::FlxLinkedList)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_tailA)) );
HXLINE( 351)		this->_tailB = ( ( ::flixel::_hx_system::FlxLinkedList)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_tailB)) );
HXLINE( 353)		this->_northWestTree = ( ( ::flixel::_hx_system::FlxQuadTree)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_northWestTree)) );
HXLINE( 354)		this->_northEastTree = ( ( ::flixel::_hx_system::FlxQuadTree)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_northEastTree)) );
HXLINE( 356)		this->_southWestTree = ( ( ::flixel::_hx_system::FlxQuadTree)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_southWestTree)) );
HXLINE( 357)		this->_southEastTree = ( ( ::flixel::_hx_system::FlxQuadTree)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_southEastTree)) );
HXLINE( 359)		::flixel::_hx_system::FlxQuadTree_obj::_object = null();
HXLINE( 360)		::flixel::_hx_system::FlxQuadTree_obj::_processingCallback = null();
HXLINE( 361)		::flixel::_hx_system::FlxQuadTree_obj::_notifyCallback = null();
HXLINE( 363)		this->exists = false;
HXLINE( 366)		this->next = ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead;
HXLINE( 367)		::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 368)		::flixel::_hx_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES++;
HXLINE( 370)		this->super::destroy();
            	}


void FlxQuadTree_obj::load( ::flixel::FlxBasic ObjectOrGroup1, ::flixel::FlxBasic ObjectOrGroup2, ::Dynamic NotifyCallback, ::Dynamic ProcessCallback){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_382_load)
HXLINE( 383)		this->add(ObjectOrGroup1,0);
HXLINE( 384)		if (::hx::IsNotNull( ObjectOrGroup2 )) {
HXLINE( 386)			this->add(ObjectOrGroup2,1);
HXLINE( 387)			::flixel::_hx_system::FlxQuadTree_obj::_useBothLists = true;
            		}
            		else {
HXLINE( 391)			::flixel::_hx_system::FlxQuadTree_obj::_useBothLists = false;
            		}
HXLINE( 393)		::flixel::_hx_system::FlxQuadTree_obj::_notifyCallback = NotifyCallback;
HXLINE( 394)		::flixel::_hx_system::FlxQuadTree_obj::_processingCallback = ProcessCallback;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxQuadTree_obj,load,(void))

void FlxQuadTree_obj::add( ::flixel::FlxBasic ObjectOrGroup,int list){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_406_add)
HXLINE( 407)		::flixel::_hx_system::FlxQuadTree_obj::_list = list;
HXLINE( 409)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 410)		if (::hx::IsNotNull( group )) {
HXLINE( 412)			int i = 0;
HXLINE( 413)			 ::flixel::FlxBasic basic;
HXLINE( 414)			::Array< ::Dynamic> members = group->members;
HXLINE( 415)			int l = group->length;
HXLINE( 416)			while((i < l)){
HXLINE( 418)				i = (i + 1);
HXDLIN( 418)				basic = members->__get((i - 1)).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 419)				bool _hx_tmp;
HXDLIN( 419)				if (::hx::IsNotNull( basic )) {
HXLINE( 419)					_hx_tmp = basic->exists;
            				}
            				else {
HXLINE( 419)					_hx_tmp = false;
            				}
HXDLIN( 419)				if (_hx_tmp) {
HXLINE( 421)					group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 422)					if (::hx::IsNotNull( group )) {
HXLINE( 424)						this->add(group,list);
            					}
            					else {
HXLINE( 428)						::flixel::_hx_system::FlxQuadTree_obj::_object = ( ( ::flixel::FlxObject)(basic) );
HXLINE( 429)						bool _hx_tmp;
HXDLIN( 429)						if (::flixel::_hx_system::FlxQuadTree_obj::_object->exists) {
HXLINE( 429)							_hx_tmp = (::flixel::_hx_system::FlxQuadTree_obj::_object->allowCollisions != 0);
            						}
            						else {
HXLINE( 429)							_hx_tmp = false;
            						}
HXDLIN( 429)						if (_hx_tmp) {
HXLINE( 431)							::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::_hx_system::FlxQuadTree_obj::_object->x;
HXLINE( 432)							::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge = ::flixel::_hx_system::FlxQuadTree_obj::_object->y;
HXLINE( 433)							Float _hx_tmp = ::flixel::_hx_system::FlxQuadTree_obj::_object->x;
HXDLIN( 433)							::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge = (_hx_tmp + ::flixel::_hx_system::FlxQuadTree_obj::_object->get_width());
HXLINE( 434)							Float _hx_tmp1 = ::flixel::_hx_system::FlxQuadTree_obj::_object->y;
HXDLIN( 434)							::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge = (_hx_tmp1 + ::flixel::_hx_system::FlxQuadTree_obj::_object->get_height());
HXLINE( 435)							this->addObject();
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 443)			::flixel::_hx_system::FlxQuadTree_obj::_object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 444)			bool _hx_tmp;
HXDLIN( 444)			if (::flixel::_hx_system::FlxQuadTree_obj::_object->exists) {
HXLINE( 444)				_hx_tmp = (::flixel::_hx_system::FlxQuadTree_obj::_object->allowCollisions != 0);
            			}
            			else {
HXLINE( 444)				_hx_tmp = false;
            			}
HXDLIN( 444)			if (_hx_tmp) {
HXLINE( 446)				::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::_hx_system::FlxQuadTree_obj::_object->x;
HXLINE( 447)				::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge = ::flixel::_hx_system::FlxQuadTree_obj::_object->y;
HXLINE( 448)				Float _hx_tmp = ::flixel::_hx_system::FlxQuadTree_obj::_object->x;
HXDLIN( 448)				::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge = (_hx_tmp + ::flixel::_hx_system::FlxQuadTree_obj::_object->get_width());
HXLINE( 449)				Float _hx_tmp1 = ::flixel::_hx_system::FlxQuadTree_obj::_object->y;
HXDLIN( 449)				::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge = (_hx_tmp1 + ::flixel::_hx_system::FlxQuadTree_obj::_object->get_height());
HXLINE( 450)				this->addObject();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxQuadTree_obj,add,(void))

void FlxQuadTree_obj::addObject(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_460_addObject)
HXLINE( 462)		bool _hx_tmp;
HXDLIN( 462)		if (this->_canSubdivide) {
HXLINE( 463)			bool _hx_tmp1;
HXDLIN( 463)			bool _hx_tmp2;
HXDLIN( 463)			if ((this->_leftEdge >= ::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge)) {
HXLINE( 463)				_hx_tmp2 = (this->_rightEdge <= ::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge);
            			}
            			else {
HXLINE( 463)				_hx_tmp2 = false;
            			}
HXDLIN( 463)			if (_hx_tmp2) {
HXLINE( 463)				_hx_tmp1 = (this->_topEdge >= ::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge);
            			}
            			else {
HXLINE( 463)				_hx_tmp1 = false;
            			}
HXDLIN( 463)			if (_hx_tmp1) {
HXLINE( 462)				_hx_tmp = (this->_bottomEdge <= ::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge);
            			}
            			else {
HXLINE( 462)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 462)			_hx_tmp = true;
            		}
HXDLIN( 462)		if (_hx_tmp) {
HXLINE( 465)			this->addToList();
HXLINE( 466)			return;
            		}
HXLINE( 470)		bool _hx_tmp1;
HXDLIN( 470)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge > this->_leftEdge)) {
HXLINE( 470)			_hx_tmp1 = (::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge < this->_midpointX);
            		}
            		else {
HXLINE( 470)			_hx_tmp1 = false;
            		}
HXDLIN( 470)		if (_hx_tmp1) {
HXLINE( 472)			bool _hx_tmp;
HXDLIN( 472)			if ((::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) {
HXLINE( 472)				_hx_tmp = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY);
            			}
            			else {
HXLINE( 472)				_hx_tmp = false;
            			}
HXDLIN( 472)			if (_hx_tmp) {
HXLINE( 474)				if (::hx::IsNull( this->_northWestTree )) {
HXLINE( 476)					this->_northWestTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE( 478)				this->_northWestTree->addObject();
HXLINE( 479)				return;
            			}
HXLINE( 481)			bool _hx_tmp1;
HXDLIN( 481)			if ((::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) {
HXLINE( 481)				_hx_tmp1 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge);
            			}
            			else {
HXLINE( 481)				_hx_tmp1 = false;
            			}
HXDLIN( 481)			if (_hx_tmp1) {
HXLINE( 483)				if (::hx::IsNull( this->_southWestTree )) {
HXLINE( 485)					this->_southWestTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE( 487)				this->_southWestTree->addObject();
HXLINE( 488)				return;
            			}
            		}
HXLINE( 491)		bool _hx_tmp2;
HXDLIN( 491)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge > this->_midpointX)) {
HXLINE( 491)			_hx_tmp2 = (::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge < this->_rightEdge);
            		}
            		else {
HXLINE( 491)			_hx_tmp2 = false;
            		}
HXDLIN( 491)		if (_hx_tmp2) {
HXLINE( 493)			bool _hx_tmp;
HXDLIN( 493)			if ((::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) {
HXLINE( 493)				_hx_tmp = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY);
            			}
            			else {
HXLINE( 493)				_hx_tmp = false;
            			}
HXDLIN( 493)			if (_hx_tmp) {
HXLINE( 495)				if (::hx::IsNull( this->_northEastTree )) {
HXLINE( 497)					this->_northEastTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE( 499)				this->_northEastTree->addObject();
HXLINE( 500)				return;
            			}
HXLINE( 502)			bool _hx_tmp1;
HXDLIN( 502)			if ((::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) {
HXLINE( 502)				_hx_tmp1 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge);
            			}
            			else {
HXLINE( 502)				_hx_tmp1 = false;
            			}
HXDLIN( 502)			if (_hx_tmp1) {
HXLINE( 504)				if (::hx::IsNull( this->_southEastTree )) {
HXLINE( 506)					this->_southEastTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE( 508)				this->_southEastTree->addObject();
HXLINE( 509)				return;
            			}
            		}
HXLINE( 514)		bool _hx_tmp3;
HXDLIN( 514)		bool _hx_tmp4;
HXDLIN( 514)		bool _hx_tmp5;
HXDLIN( 514)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) {
HXLINE( 514)			_hx_tmp5 = (::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX);
            		}
            		else {
HXLINE( 514)			_hx_tmp5 = false;
            		}
HXDLIN( 514)		if (_hx_tmp5) {
HXLINE( 514)			_hx_tmp4 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge);
            		}
            		else {
HXLINE( 514)			_hx_tmp4 = false;
            		}
HXDLIN( 514)		if (_hx_tmp4) {
HXLINE( 514)			_hx_tmp3 = (::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY);
            		}
            		else {
HXLINE( 514)			_hx_tmp3 = false;
            		}
HXDLIN( 514)		if (_hx_tmp3) {
HXLINE( 516)			if (::hx::IsNull( this->_northWestTree )) {
HXLINE( 518)				this->_northWestTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 520)			this->_northWestTree->addObject();
            		}
HXLINE( 522)		bool _hx_tmp6;
HXDLIN( 522)		bool _hx_tmp7;
HXDLIN( 522)		bool _hx_tmp8;
HXDLIN( 522)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) {
HXLINE( 522)			_hx_tmp8 = (::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge);
            		}
            		else {
HXLINE( 522)			_hx_tmp8 = false;
            		}
HXDLIN( 522)		if (_hx_tmp8) {
HXLINE( 522)			_hx_tmp7 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge);
            		}
            		else {
HXLINE( 522)			_hx_tmp7 = false;
            		}
HXDLIN( 522)		if (_hx_tmp7) {
HXLINE( 522)			_hx_tmp6 = (::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY);
            		}
            		else {
HXLINE( 522)			_hx_tmp6 = false;
            		}
HXDLIN( 522)		if (_hx_tmp6) {
HXLINE( 524)			if (::hx::IsNull( this->_northEastTree )) {
HXLINE( 526)				this->_northEastTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 528)			this->_northEastTree->addObject();
            		}
HXLINE( 530)		bool _hx_tmp9;
HXDLIN( 530)		bool _hx_tmp10;
HXDLIN( 530)		bool _hx_tmp11;
HXDLIN( 530)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) {
HXLINE( 530)			_hx_tmp11 = (::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge);
            		}
            		else {
HXLINE( 530)			_hx_tmp11 = false;
            		}
HXDLIN( 530)		if (_hx_tmp11) {
HXLINE( 530)			_hx_tmp10 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY);
            		}
            		else {
HXLINE( 530)			_hx_tmp10 = false;
            		}
HXDLIN( 530)		if (_hx_tmp10) {
HXLINE( 530)			_hx_tmp9 = (::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge);
            		}
            		else {
HXLINE( 530)			_hx_tmp9 = false;
            		}
HXDLIN( 530)		if (_hx_tmp9) {
HXLINE( 532)			if (::hx::IsNull( this->_southEastTree )) {
HXLINE( 534)				this->_southEastTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 536)			this->_southEastTree->addObject();
            		}
HXLINE( 538)		bool _hx_tmp12;
HXDLIN( 538)		bool _hx_tmp13;
HXDLIN( 538)		bool _hx_tmp14;
HXDLIN( 538)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) {
HXLINE( 538)			_hx_tmp14 = (::flixel::_hx_system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX);
            		}
            		else {
HXLINE( 538)			_hx_tmp14 = false;
            		}
HXDLIN( 538)		if (_hx_tmp14) {
HXLINE( 538)			_hx_tmp13 = (::flixel::_hx_system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY);
            		}
            		else {
HXLINE( 538)			_hx_tmp13 = false;
            		}
HXDLIN( 538)		if (_hx_tmp13) {
HXLINE( 538)			_hx_tmp12 = (::flixel::_hx_system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge);
            		}
            		else {
HXLINE( 538)			_hx_tmp12 = false;
            		}
HXDLIN( 538)		if (_hx_tmp12) {
HXLINE( 540)			if (::hx::IsNull( this->_southWestTree )) {
HXLINE( 542)				this->_southWestTree = ::flixel::_hx_system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 544)			this->_southWestTree->addObject();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addObject,(void))

void FlxQuadTree_obj::addToList(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_552_addToList)
HXLINE( 553)		 ::flixel::_hx_system::FlxLinkedList ot;
HXLINE( 554)		if ((::flixel::_hx_system::FlxQuadTree_obj::_list == 0)) {
HXLINE( 556)			if (::hx::IsNotNull( this->_tailA->object )) {
HXLINE( 558)				ot = this->_tailA;
HXLINE( 559)				this->_tailA = ::flixel::_hx_system::FlxLinkedList_obj::recycle();
HXLINE( 560)				ot->next = this->_tailA;
            			}
HXLINE( 562)			this->_tailA->object = ::flixel::_hx_system::FlxQuadTree_obj::_object;
            		}
            		else {
HXLINE( 566)			if (::hx::IsNotNull( this->_tailB->object )) {
HXLINE( 568)				ot = this->_tailB;
HXLINE( 569)				this->_tailB = ::flixel::_hx_system::FlxLinkedList_obj::recycle();
HXLINE( 570)				ot->next = this->_tailB;
            			}
HXLINE( 572)			this->_tailB->object = ::flixel::_hx_system::FlxQuadTree_obj::_object;
            		}
HXLINE( 574)		if (!(this->_canSubdivide)) {
HXLINE( 576)			return;
            		}
HXLINE( 578)		if (::hx::IsNotNull( this->_northWestTree )) {
HXLINE( 580)			this->_northWestTree->addToList();
            		}
HXLINE( 582)		if (::hx::IsNotNull( this->_northEastTree )) {
HXLINE( 584)			this->_northEastTree->addToList();
            		}
HXLINE( 586)		if (::hx::IsNotNull( this->_southEastTree )) {
HXLINE( 588)			this->_southEastTree->addToList();
            		}
HXLINE( 590)		if (::hx::IsNotNull( this->_southWestTree )) {
HXLINE( 592)			this->_southWestTree->addToList();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addToList,(void))

bool FlxQuadTree_obj::execute(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_602_execute)
HXLINE( 603)		bool overlapProcessed = false;
HXLINE( 605)		if (::hx::IsNotNull( this->_headA->object )) {
HXLINE( 607)			 ::flixel::_hx_system::FlxLinkedList iterator = this->_headA;
HXLINE( 608)			while(::hx::IsNotNull( iterator )){
HXLINE( 610)				::flixel::_hx_system::FlxQuadTree_obj::_object = iterator->object;
HXLINE( 611)				if (::flixel::_hx_system::FlxQuadTree_obj::_useBothLists) {
HXLINE( 613)					::flixel::_hx_system::FlxQuadTree_obj::_iterator = this->_headB;
            				}
            				else {
HXLINE( 617)					::flixel::_hx_system::FlxQuadTree_obj::_iterator = iterator->next;
            				}
HXLINE( 619)				bool _hx_tmp;
HXDLIN( 619)				bool _hx_tmp1;
HXDLIN( 619)				bool _hx_tmp2;
HXDLIN( 619)				bool _hx_tmp3;
HXDLIN( 619)				bool _hx_tmp4;
HXDLIN( 619)				if (::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_object )) {
HXLINE( 619)					_hx_tmp4 = ::flixel::_hx_system::FlxQuadTree_obj::_object->exists;
            				}
            				else {
HXLINE( 619)					_hx_tmp4 = false;
            				}
HXDLIN( 619)				if (_hx_tmp4) {
HXLINE( 619)					_hx_tmp3 = (::flixel::_hx_system::FlxQuadTree_obj::_object->allowCollisions > 0);
            				}
            				else {
HXLINE( 619)					_hx_tmp3 = false;
            				}
HXDLIN( 619)				if (_hx_tmp3) {
HXLINE( 619)					_hx_tmp2 = ::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_iterator );
            				}
            				else {
HXLINE( 619)					_hx_tmp2 = false;
            				}
HXDLIN( 619)				if (_hx_tmp2) {
HXLINE( 619)					_hx_tmp1 = ::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_iterator->object );
            				}
            				else {
HXLINE( 619)					_hx_tmp1 = false;
            				}
HXDLIN( 619)				if (_hx_tmp1) {
HXLINE( 619)					_hx_tmp = this->overlapNode();
            				}
            				else {
HXLINE( 619)					_hx_tmp = false;
            				}
HXDLIN( 619)				if (_hx_tmp) {
HXLINE( 621)					overlapProcessed = true;
            				}
HXLINE( 623)				iterator = iterator->next;
            			}
            		}
HXLINE( 628)		bool _hx_tmp;
HXDLIN( 628)		if (::hx::IsNotNull( this->_northWestTree )) {
HXLINE( 628)			_hx_tmp = this->_northWestTree->execute();
            		}
            		else {
HXLINE( 628)			_hx_tmp = false;
            		}
HXDLIN( 628)		if (_hx_tmp) {
HXLINE( 630)			overlapProcessed = true;
            		}
HXLINE( 632)		bool _hx_tmp1;
HXDLIN( 632)		if (::hx::IsNotNull( this->_northEastTree )) {
HXLINE( 632)			_hx_tmp1 = this->_northEastTree->execute();
            		}
            		else {
HXLINE( 632)			_hx_tmp1 = false;
            		}
HXDLIN( 632)		if (_hx_tmp1) {
HXLINE( 634)			overlapProcessed = true;
            		}
HXLINE( 636)		bool _hx_tmp2;
HXDLIN( 636)		if (::hx::IsNotNull( this->_southEastTree )) {
HXLINE( 636)			_hx_tmp2 = this->_southEastTree->execute();
            		}
            		else {
HXLINE( 636)			_hx_tmp2 = false;
            		}
HXDLIN( 636)		if (_hx_tmp2) {
HXLINE( 638)			overlapProcessed = true;
            		}
HXLINE( 640)		bool _hx_tmp3;
HXDLIN( 640)		if (::hx::IsNotNull( this->_southWestTree )) {
HXLINE( 640)			_hx_tmp3 = this->_southWestTree->execute();
            		}
            		else {
HXLINE( 640)			_hx_tmp3 = false;
            		}
HXDLIN( 640)		if (_hx_tmp3) {
HXLINE( 642)			overlapProcessed = true;
            		}
HXLINE( 645)		return overlapProcessed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,execute,return )

bool FlxQuadTree_obj::overlapNode(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_653_overlapNode)
HXLINE( 655)		Float _hx_tmp;
HXDLIN( 655)		if ((::flixel::_hx_system::FlxQuadTree_obj::_object->x < ::flixel::_hx_system::FlxQuadTree_obj::_object->last->x)) {
HXLINE( 655)			_hx_tmp = ::flixel::_hx_system::FlxQuadTree_obj::_object->x;
            		}
            		else {
HXLINE( 655)			_hx_tmp = ::flixel::_hx_system::FlxQuadTree_obj::_object->last->x;
            		}
HXDLIN( 655)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullX = _hx_tmp;
HXLINE( 656)		Float _hx_tmp1;
HXDLIN( 656)		if ((::flixel::_hx_system::FlxQuadTree_obj::_object->y < ::flixel::_hx_system::FlxQuadTree_obj::_object->last->y)) {
HXLINE( 656)			_hx_tmp1 = ::flixel::_hx_system::FlxQuadTree_obj::_object->y;
            		}
            		else {
HXLINE( 656)			_hx_tmp1 = ::flixel::_hx_system::FlxQuadTree_obj::_object->last->y;
            		}
HXDLIN( 656)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullY = _hx_tmp1;
HXLINE( 657)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth = (::flixel::_hx_system::FlxQuadTree_obj::_object->x - ::flixel::_hx_system::FlxQuadTree_obj::_object->last->x);
HXLINE( 658)		Float _hx_tmp2 = ::flixel::_hx_system::FlxQuadTree_obj::_object->get_width();
HXDLIN( 658)		Float _hx_tmp3;
HXDLIN( 658)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth > 0)) {
HXLINE( 658)			_hx_tmp3 = ::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth;
            		}
            		else {
HXLINE( 658)			_hx_tmp3 = -(::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth);
            		}
HXDLIN( 658)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth = (_hx_tmp2 + _hx_tmp3);
HXLINE( 659)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight = (::flixel::_hx_system::FlxQuadTree_obj::_object->y - ::flixel::_hx_system::FlxQuadTree_obj::_object->last->y);
HXLINE( 660)		Float _hx_tmp4 = ::flixel::_hx_system::FlxQuadTree_obj::_object->get_height();
HXDLIN( 660)		Float _hx_tmp5;
HXDLIN( 660)		if ((::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight > 0)) {
HXLINE( 660)			_hx_tmp5 = ::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight;
            		}
            		else {
HXLINE( 660)			_hx_tmp5 = -(::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight);
            		}
HXDLIN( 660)		::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight = (_hx_tmp4 + _hx_tmp5);
HXLINE( 663)		bool overlapProcessed = false;
HXLINE( 664)		 ::flixel::FlxObject checkObject;
HXLINE( 666)		while(::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_iterator )){
HXLINE( 668)			checkObject = ::flixel::_hx_system::FlxQuadTree_obj::_iterator->object;
HXLINE( 669)			bool _hx_tmp;
HXDLIN( 669)			bool _hx_tmp1;
HXDLIN( 669)			if (::hx::IsInstanceNotEq( ::flixel::_hx_system::FlxQuadTree_obj::_object,checkObject )) {
HXLINE( 669)				_hx_tmp1 = !(checkObject->exists);
            			}
            			else {
HXLINE( 669)				_hx_tmp1 = true;
            			}
HXDLIN( 669)			if (!(_hx_tmp1)) {
HXLINE( 669)				_hx_tmp = (checkObject->allowCollisions <= 0);
            			}
            			else {
HXLINE( 669)				_hx_tmp = true;
            			}
HXDLIN( 669)			if (_hx_tmp) {
HXLINE( 671)				::flixel::_hx_system::FlxQuadTree_obj::_iterator = ::flixel::_hx_system::FlxQuadTree_obj::_iterator->next;
HXLINE( 672)				continue;
            			}
HXLINE( 676)			Float _hx_tmp2;
HXDLIN( 676)			if ((checkObject->x < checkObject->last->x)) {
HXLINE( 676)				_hx_tmp2 = checkObject->x;
            			}
            			else {
HXLINE( 676)				_hx_tmp2 = checkObject->last->x;
            			}
HXDLIN( 676)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullX = _hx_tmp2;
HXLINE( 677)			Float _hx_tmp3;
HXDLIN( 677)			if ((checkObject->y < checkObject->last->y)) {
HXLINE( 677)				_hx_tmp3 = checkObject->y;
            			}
            			else {
HXLINE( 677)				_hx_tmp3 = checkObject->last->y;
            			}
HXDLIN( 677)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullY = _hx_tmp3;
HXLINE( 678)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth = (checkObject->x - checkObject->last->x);
HXLINE( 679)			Float _hx_tmp4 = checkObject->get_width();
HXDLIN( 679)			Float _hx_tmp5;
HXDLIN( 679)			if ((::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth > 0)) {
HXLINE( 679)				_hx_tmp5 = ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth;
            			}
            			else {
HXLINE( 679)				_hx_tmp5 = -(::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth);
            			}
HXDLIN( 679)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth = (_hx_tmp4 + _hx_tmp5);
HXLINE( 680)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight = (checkObject->y - checkObject->last->y);
HXLINE( 681)			Float _hx_tmp6 = checkObject->get_height();
HXDLIN( 681)			Float _hx_tmp7;
HXDLIN( 681)			if ((::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight > 0)) {
HXLINE( 681)				_hx_tmp7 = ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight;
            			}
            			else {
HXLINE( 681)				_hx_tmp7 = -(::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight);
            			}
HXDLIN( 681)			::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight = (_hx_tmp6 + _hx_tmp7);
HXLINE( 684)			bool _hx_tmp8;
HXDLIN( 684)			bool _hx_tmp9;
HXDLIN( 684)			bool _hx_tmp10;
HXDLIN( 684)			if (((::flixel::_hx_system::FlxQuadTree_obj::_objectHullX + ::flixel::_hx_system::FlxQuadTree_obj::_objectHullWidth) > ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullX)) {
HXLINE( 684)				_hx_tmp10 = (::flixel::_hx_system::FlxQuadTree_obj::_objectHullX < (::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullX + ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullWidth));
            			}
            			else {
HXLINE( 684)				_hx_tmp10 = false;
            			}
HXDLIN( 684)			if (_hx_tmp10) {
HXLINE( 684)				_hx_tmp9 = ((::flixel::_hx_system::FlxQuadTree_obj::_objectHullY + ::flixel::_hx_system::FlxQuadTree_obj::_objectHullHeight) > ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullY);
            			}
            			else {
HXLINE( 684)				_hx_tmp9 = false;
            			}
HXDLIN( 684)			if (_hx_tmp9) {
HXLINE( 684)				_hx_tmp8 = (::flixel::_hx_system::FlxQuadTree_obj::_objectHullY < (::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullY + ::flixel::_hx_system::FlxQuadTree_obj::_checkObjectHullHeight));
            			}
            			else {
HXLINE( 684)				_hx_tmp8 = false;
            			}
HXDLIN( 684)			if (_hx_tmp8) {
HXLINE( 690)				bool _hx_tmp;
HXDLIN( 690)				if (::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_processingCallback )) {
HXLINE( 690)					_hx_tmp = ( (bool)(::flixel::_hx_system::FlxQuadTree_obj::_processingCallback(::flixel::_hx_system::FlxQuadTree_obj::_object,checkObject)) );
            				}
            				else {
HXLINE( 690)					_hx_tmp = true;
            				}
HXDLIN( 690)				if (_hx_tmp) {
HXLINE( 692)					overlapProcessed = true;
HXLINE( 693)					if (::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_notifyCallback )) {
HXLINE( 695)						::flixel::_hx_system::FlxQuadTree_obj::_notifyCallback(::flixel::_hx_system::FlxQuadTree_obj::_object,checkObject);
            					}
            				}
            			}
HXLINE( 699)			if (::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_iterator )) {
HXLINE( 701)				::flixel::_hx_system::FlxQuadTree_obj::_iterator = ::flixel::_hx_system::FlxQuadTree_obj::_iterator->next;
            			}
            		}
HXLINE( 705)		return overlapProcessed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,overlapNode,return )

int FlxQuadTree_obj::A_LIST;

int FlxQuadTree_obj::B_LIST;

int FlxQuadTree_obj::divisions;

int FlxQuadTree_obj::_min;

 ::flixel::FlxObject FlxQuadTree_obj::_object;

Float FlxQuadTree_obj::_objectLeftEdge;

Float FlxQuadTree_obj::_objectTopEdge;

Float FlxQuadTree_obj::_objectRightEdge;

Float FlxQuadTree_obj::_objectBottomEdge;

int FlxQuadTree_obj::_list;

bool FlxQuadTree_obj::_useBothLists;

 ::Dynamic FlxQuadTree_obj::_processingCallback;

 ::Dynamic FlxQuadTree_obj::_notifyCallback;

 ::flixel::_hx_system::FlxLinkedList FlxQuadTree_obj::_iterator;

Float FlxQuadTree_obj::_objectHullX;

Float FlxQuadTree_obj::_objectHullY;

Float FlxQuadTree_obj::_objectHullWidth;

Float FlxQuadTree_obj::_objectHullHeight;

Float FlxQuadTree_obj::_checkObjectHullX;

Float FlxQuadTree_obj::_checkObjectHullY;

Float FlxQuadTree_obj::_checkObjectHullWidth;

Float FlxQuadTree_obj::_checkObjectHullHeight;

int FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;

 ::flixel::_hx_system::FlxQuadTree FlxQuadTree_obj::_cachedTreesHead;

 ::flixel::_hx_system::FlxQuadTree FlxQuadTree_obj::recycle(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent){
            	HX_GC_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_248_recycle)
HXDLIN( 248)		if (::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead )) {
HXLINE( 250)			 ::flixel::_hx_system::FlxQuadTree cachedTree = ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead;
HXLINE( 251)			::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead->next;
HXLINE( 252)			::flixel::_hx_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES--;
HXLINE( 254)			cachedTree->reset(X,Y,Width,Height,Parent);
HXLINE( 255)			return cachedTree;
            		}
            		else {
HXLINE( 258)			return  ::flixel::_hx_system::FlxQuadTree_obj::__alloc( HX_CTX ,X,Y,Width,Height,Parent);
            		}
HXLINE( 248)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,recycle,return )

void FlxQuadTree_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_265_clearCache)
HXLINE( 267)		while(::hx::IsNotNull( ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead )){
HXLINE( 269)			 ::flixel::_hx_system::FlxQuadTree node = ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead;
HXLINE( 270)			::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::_hx_system::FlxQuadTree_obj::_cachedTreesHead->next;
HXLINE( 271)			node->next = null();
            		}
HXLINE( 273)		::flixel::_hx_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,clearCache,(void))


::hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__new(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent) {
	::hx::ObjectPtr< FlxQuadTree_obj > __this = new FlxQuadTree_obj();
	__this->__construct(X,Y,Width,Height,Parent);
	return __this;
}

::hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent) {
	FlxQuadTree_obj *__this = (FlxQuadTree_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxQuadTree_obj), true, "flixel.system.FlxQuadTree"));
	*(void **)__this = FlxQuadTree_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height,Parent);
	return __this;
}

FlxQuadTree_obj::FlxQuadTree_obj()
{
}

void FlxQuadTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxQuadTree);
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_MARK_MEMBER_NAME(_headA,"_headA");
	HX_MARK_MEMBER_NAME(_tailA,"_tailA");
	HX_MARK_MEMBER_NAME(_headB,"_headB");
	HX_MARK_MEMBER_NAME(_tailB,"_tailB");
	HX_MARK_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_MARK_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_MARK_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_MARK_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_MARK_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_MARK_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_MARK_MEMBER_NAME(_topEdge,"_topEdge");
	HX_MARK_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_midpointX,"_midpointX");
	HX_MARK_MEMBER_NAME(_midpointY,"_midpointY");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxQuadTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_VISIT_MEMBER_NAME(_headA,"_headA");
	HX_VISIT_MEMBER_NAME(_tailA,"_tailA");
	HX_VISIT_MEMBER_NAME(_headB,"_headB");
	HX_VISIT_MEMBER_NAME(_tailB,"_tailB");
	HX_VISIT_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_VISIT_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_VISIT_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_VISIT_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_VISIT_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_VISIT_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_VISIT_MEMBER_NAME(_topEdge,"_topEdge");
	HX_VISIT_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_midpointX,"_midpointX");
	HX_VISIT_MEMBER_NAME(_midpointY,"_midpointY");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val FlxQuadTree_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists ); }
		if (HX_FIELD_EQ(inName,"_headA") ) { return ::hx::Val( _headA ); }
		if (HX_FIELD_EQ(inName,"_tailA") ) { return ::hx::Val( _tailA ); }
		if (HX_FIELD_EQ(inName,"_headB") ) { return ::hx::Val( _headB ); }
		if (HX_FIELD_EQ(inName,"_tailB") ) { return ::hx::Val( _tailB ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { return ::hx::Val( _topEdge ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { return ::hx::Val( _leftEdge ); }
		if (HX_FIELD_EQ(inName,"addObject") ) { return ::hx::Val( addObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"addToList") ) { return ::hx::Val( addToList_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { return ::hx::Val( _rightEdge ); }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return ::hx::Val( _halfWidth ); }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { return ::hx::Val( _midpointX ); }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { return ::hx::Val( _midpointY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { return ::hx::Val( _bottomEdge ); }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return ::hx::Val( _halfHeight ); }
		if (HX_FIELD_EQ(inName,"overlapNode") ) { return ::hx::Val( overlapNode_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { return ::hx::Val( _canSubdivide ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { return ::hx::Val( _northWestTree ); }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { return ::hx::Val( _northEastTree ); }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { return ::hx::Val( _southEastTree ); }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { return ::hx::Val( _southWestTree ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxQuadTree_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { outValue = ( _min ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { outValue = ( _list ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { outValue = ( _object ); return true; }
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { outValue = ( divisions ); return true; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { outValue = ( _iterator ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { outValue = ( _objectHullX ); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { outValue = ( _objectHullY ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { outValue = ( _useBothLists ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { outValue = ( _objectTopEdge ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { outValue = ( _objectLeftEdge ); return true; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { outValue = ( _notifyCallback ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { outValue = ( _objectRightEdge ); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { outValue = ( _objectHullWidth ); return true; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { outValue = ( _cachedTreesHead ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { outValue = ( _objectBottomEdge ); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { outValue = ( _objectHullHeight ); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { outValue = ( _checkObjectHullX ); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { outValue = ( _checkObjectHullY ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { outValue = ( _processingCallback ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { outValue = ( _checkObjectHullWidth ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { outValue = ( _checkObjectHullHeight ); return true; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { outValue = ( _NUM_CACHED_QUAD_TREES ); return true; }
	}
	return false;
}

::hx::Val FlxQuadTree_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headA") ) { _headA=inValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { _tailA=inValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headB") ) { _headB=inValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { _tailB=inValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { _topEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { _leftEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { _rightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { _midpointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { _midpointY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { _bottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { _canSubdivide=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { _northWestTree=inValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { _northEastTree=inValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { _southEastTree=inValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { _southWestTree=inValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxQuadTree_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=ioValue.Cast<  ::flixel::FlxObject >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { divisions=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=ioValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { _objectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { _objectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { _useBothLists=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { _objectTopEdge=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { _objectLeftEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { _notifyCallback=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { _objectRightEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { _objectHullWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { _cachedTreesHead=ioValue.Cast<  ::flixel::_hx_system::FlxQuadTree >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { _objectBottomEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { _objectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { _checkObjectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { _checkObjectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { _processingCallback=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { _checkObjectHullWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { _checkObjectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { _NUM_CACHED_QUAD_TREES=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxQuadTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("exists",dc,1d,e0,bf));
	outFields->push(HX_("_canSubdivide",a8,f5,58,f6));
	outFields->push(HX_("_headA",62,1a,a0,20));
	outFields->push(HX_("_tailA",f2,4e,d0,06));
	outFields->push(HX_("_headB",63,1a,a0,20));
	outFields->push(HX_("_tailB",f3,4e,d0,06));
	outFields->push(HX_("_northWestTree",53,53,64,c5));
	outFields->push(HX_("_northEastTree",21,72,82,19));
	outFields->push(HX_("_southEastTree",69,27,e0,f8));
	outFields->push(HX_("_southWestTree",9b,08,c2,a4));
	outFields->push(HX_("_leftEdge",43,03,a0,91));
	outFields->push(HX_("_rightEdge",fa,99,77,09));
	outFields->push(HX_("_topEdge",f3,22,d8,1d));
	outFields->push(HX_("_bottomEdge",e7,f9,7f,fa));
	outFields->push(HX_("_halfWidth",14,6f,d7,6a));
	outFields->push(HX_("_halfHeight",19,3b,f9,c7));
	outFields->push(HX_("_midpointX",51,75,ad,d7));
	outFields->push(HX_("_midpointY",52,75,ad,d7));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxQuadTree_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxQuadTree_obj,exists),HX_("exists",dc,1d,e0,bf)},
	{::hx::fsBool,(int)offsetof(FlxQuadTree_obj,_canSubdivide),HX_("_canSubdivide",a8,f5,58,f6)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(int)offsetof(FlxQuadTree_obj,_headA),HX_("_headA",62,1a,a0,20)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(int)offsetof(FlxQuadTree_obj,_tailA),HX_("_tailA",f2,4e,d0,06)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(int)offsetof(FlxQuadTree_obj,_headB),HX_("_headB",63,1a,a0,20)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(int)offsetof(FlxQuadTree_obj,_tailB),HX_("_tailB",f3,4e,d0,06)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(int)offsetof(FlxQuadTree_obj,_northWestTree),HX_("_northWestTree",53,53,64,c5)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(int)offsetof(FlxQuadTree_obj,_northEastTree),HX_("_northEastTree",21,72,82,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(int)offsetof(FlxQuadTree_obj,_southEastTree),HX_("_southEastTree",69,27,e0,f8)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(int)offsetof(FlxQuadTree_obj,_southWestTree),HX_("_southWestTree",9b,08,c2,a4)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_leftEdge),HX_("_leftEdge",43,03,a0,91)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_rightEdge),HX_("_rightEdge",fa,99,77,09)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_topEdge),HX_("_topEdge",f3,22,d8,1d)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_bottomEdge),HX_("_bottomEdge",e7,f9,7f,fa)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfWidth),HX_("_halfWidth",14,6f,d7,6a)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfHeight),HX_("_halfHeight",19,3b,f9,c7)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointX),HX_("_midpointX",51,75,ad,d7)},
	{::hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointY),HX_("_midpointY",52,75,ad,d7)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(int)offsetof(FlxQuadTree_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxQuadTree_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxQuadTree_obj::A_LIST,HX_("A_LIST",5c,74,b7,e2)},
	{::hx::fsInt,(void *) &FlxQuadTree_obj::B_LIST,HX_("B_LIST",bb,d0,12,49)},
	{::hx::fsInt,(void *) &FlxQuadTree_obj::divisions,HX_("divisions",a6,2a,2c,7f)},
	{::hx::fsInt,(void *) &FlxQuadTree_obj::_min,HX_("_min",93,56,1e,3f)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(void *) &FlxQuadTree_obj::_object,HX_("_object",5e,90,b6,83)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectLeftEdge,HX_("_objectLeftEdge",62,e6,26,8d)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectTopEdge,HX_("_objectTopEdge",b4,48,32,11)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectRightEdge,HX_("_objectRightEdge",fb,71,f7,23)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectBottomEdge,HX_("_objectBottomEdge",c6,22,dd,0f)},
	{::hx::fsInt,(void *) &FlxQuadTree_obj::_list,HX_("_list",3d,38,c4,fa)},
	{::hx::fsBool,(void *) &FlxQuadTree_obj::_useBothLists,HX_("_useBothLists",ac,2f,5e,54)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FlxQuadTree_obj::_processingCallback,HX_("_processingCallback",d7,be,42,97)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FlxQuadTree_obj::_notifyCallback,HX_("_notifyCallback",4d,ea,c6,7e)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(void *) &FlxQuadTree_obj::_iterator,HX_("_iterator",4d,41,30,db)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullX,HX_("_objectHullX",ad,67,8d,04)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullY,HX_("_objectHullY",ae,67,8d,04)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullWidth,HX_("_objectHullWidth",bb,5b,6c,63)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullHeight,HX_("_objectHullHeight",92,60,b3,51)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullX,HX_("_checkObjectHullX",23,4c,df,eb)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullY,HX_("_checkObjectHullY",24,4c,df,eb)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullWidth,HX_("_checkObjectHullWidth",31,b3,c8,14)},
	{::hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullHeight,HX_("_checkObjectHullHeight",5c,90,23,d1)},
	{::hx::fsInt,(void *) &FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,HX_("_NUM_CACHED_QUAD_TREES",a2,0a,d2,83)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxQuadTree */ ,(void *) &FlxQuadTree_obj::_cachedTreesHead,HX_("_cachedTreesHead",54,73,90,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxQuadTree_obj_sMemberFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("_canSubdivide",a8,f5,58,f6),
	HX_("_headA",62,1a,a0,20),
	HX_("_tailA",f2,4e,d0,06),
	HX_("_headB",63,1a,a0,20),
	HX_("_tailB",f3,4e,d0,06),
	HX_("_northWestTree",53,53,64,c5),
	HX_("_northEastTree",21,72,82,19),
	HX_("_southEastTree",69,27,e0,f8),
	HX_("_southWestTree",9b,08,c2,a4),
	HX_("_leftEdge",43,03,a0,91),
	HX_("_rightEdge",fa,99,77,09),
	HX_("_topEdge",f3,22,d8,1d),
	HX_("_bottomEdge",e7,f9,7f,fa),
	HX_("_halfWidth",14,6f,d7,6a),
	HX_("_halfHeight",19,3b,f9,c7),
	HX_("_midpointX",51,75,ad,d7),
	HX_("_midpointY",52,75,ad,d7),
	HX_("next",f3,84,02,49),
	HX_("reset",cf,49,c8,e6),
	HX_("destroy",fa,2c,86,24),
	HX_("load",26,9a,b7,47),
	HX_("add",21,f2,49,00),
	HX_("addObject",c0,b3,63,cd),
	HX_("addToList",7a,bc,90,35),
	HX_("execute",35,0a,0d,cc),
	HX_("overlapNode",29,49,e9,38),
	::String(null()) };

static void FlxQuadTree_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxQuadTree_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#endif

::hx::Class FlxQuadTree_obj::__mClass;

static ::String FlxQuadTree_obj_sStaticFields[] = {
	HX_("A_LIST",5c,74,b7,e2),
	HX_("B_LIST",bb,d0,12,49),
	HX_("divisions",a6,2a,2c,7f),
	HX_("_min",93,56,1e,3f),
	HX_("_object",5e,90,b6,83),
	HX_("_objectLeftEdge",62,e6,26,8d),
	HX_("_objectTopEdge",b4,48,32,11),
	HX_("_objectRightEdge",fb,71,f7,23),
	HX_("_objectBottomEdge",c6,22,dd,0f),
	HX_("_list",3d,38,c4,fa),
	HX_("_useBothLists",ac,2f,5e,54),
	HX_("_processingCallback",d7,be,42,97),
	HX_("_notifyCallback",4d,ea,c6,7e),
	HX_("_iterator",4d,41,30,db),
	HX_("_objectHullX",ad,67,8d,04),
	HX_("_objectHullY",ae,67,8d,04),
	HX_("_objectHullWidth",bb,5b,6c,63),
	HX_("_objectHullHeight",92,60,b3,51),
	HX_("_checkObjectHullX",23,4c,df,eb),
	HX_("_checkObjectHullY",24,4c,df,eb),
	HX_("_checkObjectHullWidth",31,b3,c8,14),
	HX_("_checkObjectHullHeight",5c,90,23,d1),
	HX_("_NUM_CACHED_QUAD_TREES",a2,0a,d2,83),
	HX_("_cachedTreesHead",54,73,90,d0),
	HX_("recycle",13,10,8c,37),
	HX_("clearCache",75,d9,1e,16),
	::String(null())
};

void FlxQuadTree_obj::__register()
{
	FlxQuadTree_obj _hx_dummy;
	FlxQuadTree_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxQuadTree",0a,87,43,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxQuadTree_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxQuadTree_obj::__SetStatic;
	__mClass->mMarkFunc = FlxQuadTree_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxQuadTree_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxQuadTree_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxQuadTree_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxQuadTree_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxQuadTree_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxQuadTree_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxQuadTree_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_21_boot)
HXDLIN(  21)		A_LIST = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_26_boot)
HXDLIN(  26)		B_LIST = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b090d39d0d72d3_222_boot)
HXDLIN( 222)		_NUM_CACHED_QUAD_TREES = 0;
            	}
}

} // end namespace flixel
} // end namespace system
