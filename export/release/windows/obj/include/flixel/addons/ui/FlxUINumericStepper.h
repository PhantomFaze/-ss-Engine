#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#define INCLUDED_flixel_addons_ui_FlxUINumericStepper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUINumericStepper_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUINumericStepper_obj OBJ_;
		FlxUINumericStepper_obj();

	public:
		enum { _hx_ClassId = 0x6a478fa3 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_StepSize,::hx::Null< Float >  __o_DefaultValue,::hx::Null< Float >  __o_Min,::hx::Null< Float >  __o_Max,::hx::Null< int >  __o_Decimals,::hx::Null< int >  __o_Stack, ::flixel::text::FlxText TextField, ::flixel::addons::ui::FlxUITypedButton ButtonPlus, ::flixel::addons::ui::FlxUITypedButton ButtonMinus,::hx::Null< bool >  __o_IsPercent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUINumericStepper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUINumericStepper"); }
		static ::hx::ObjectPtr< FlxUINumericStepper_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_StepSize,::hx::Null< Float >  __o_DefaultValue,::hx::Null< Float >  __o_Min,::hx::Null< Float >  __o_Max,::hx::Null< int >  __o_Decimals,::hx::Null< int >  __o_Stack, ::flixel::text::FlxText TextField, ::flixel::addons::ui::FlxUITypedButton ButtonPlus, ::flixel::addons::ui::FlxUITypedButton ButtonMinus,::hx::Null< bool >  __o_IsPercent);
		static ::hx::ObjectPtr< FlxUINumericStepper_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_StepSize,::hx::Null< Float >  __o_DefaultValue,::hx::Null< Float >  __o_Min,::hx::Null< Float >  __o_Max,::hx::Null< int >  __o_Decimals,::hx::Null< int >  __o_Stack, ::flixel::text::FlxText TextField, ::flixel::addons::ui::FlxUITypedButton ButtonPlus, ::flixel::addons::ui::FlxUITypedButton ButtonMinus,::hx::Null< bool >  __o_IsPercent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUINumericStepper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUINumericStepper",8a,77,30,c0); }

		static void __boot();
		static int STACK_VERTICAL;
		static int STACK_HORIZONTAL;
		static ::String CLICK_EVENT;
		static ::String EDIT_EVENT;
		static ::String CHANGE_EVENT;
		 ::flixel::addons::ui::FlxUITypedButton button_plus;
		 ::flixel::addons::ui::FlxUITypedButton button_minus;
		 ::flixel::text::FlxText text_field;
		Float stepSize;
		int decimals;
		Float min;
		Float max;
		Float value;
		int stack;
		bool isPercent;
		::cpp::VirtualArray params;
		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		bool skipButtonUpdate;
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		int set_color(int _tmp_Value);

		Float set_min(Float f);
		::Dynamic set_min_dyn();

		Float set_max(Float f);
		::Dynamic set_max_dyn();

		Float set_value(Float f);
		::Dynamic set_value_dyn();

		int set_decimals(int i);
		::Dynamic set_decimals_dyn();

		bool set_isPercent(bool b);
		::Dynamic set_isPercent_dyn();

		int set_stack(int s);
		::Dynamic set_stack_dyn();

		::String decimalize(Float f,int digits);
		::Dynamic decimalize_dyn();

		void _onInputTextEvent(::String text,::String action);
		::Dynamic _onInputTextEvent_dyn();

		void _onPlus();
		::Dynamic _onPlus_dyn();

		void _onMinus();
		::Dynamic _onMinus_dyn();

		void _doCallback(::String event_name);
		::Dynamic _doCallback_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUINumericStepper */ 
