#ifndef INCLUDED_flixel_addons_ui_FlxUITooltip
#define INCLUDED_flixel_addons_ui_FlxUITooltip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,Anchor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltip)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUITooltip_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUITooltip_obj OBJ_;
		FlxUITooltip_obj();

	public:
		enum { _hx_ClassId = 0x09e0f6a8 };

		void __construct(int Width,int Height, ::flixel::addons::ui::Anchor Anchor_, ::Dynamic Style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITooltip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUITooltip"); }
		static ::hx::ObjectPtr< FlxUITooltip_obj > __new(int Width,int Height, ::flixel::addons::ui::Anchor Anchor_, ::Dynamic Style);
		static ::hx::ObjectPtr< FlxUITooltip_obj > __alloc(::hx::Ctx *_hx_ctx,int Width,int Height, ::flixel::addons::ui::Anchor Anchor_, ::Dynamic Style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITooltip_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUITooltip",7d,a6,7d,0c); }

		static  ::Dynamic styleFix( ::Dynamic Style, ::Dynamic DefaultStyle);
		static ::Dynamic styleFix_dyn();

		static  ::Dynamic cloneStyle( ::Dynamic s);
		static ::Dynamic cloneStyle_dyn();

		static void fillFontDefNulls( ::flixel::addons::ui::FontDef a, ::flixel::addons::ui::FontDef b);
		static ::Dynamic fillFontDefNulls_dyn();

		static void fillFormatNulls( ::openfl::text::TextFormat a, ::openfl::text::TextFormat b);
		static ::Dynamic fillFormatNulls_dyn();

		 ::Dynamic style;
		 ::flixel::addons::ui::Anchor anchor;
		::String title;
		::String body;
		void show( ::flixel::FlxObject obj,::String Title,::String Body,::hx::Null< bool >  AutoSizeVertical,::hx::Null< bool >  AutoSizeHorizontal,::hx::Null< bool >  ShowArrow);
		::Dynamic show_dyn();

		Float get_height();

		void hide();
		::Dynamic hide_dyn();

		 ::flixel::addons::ui::Anchor set_anchor( ::flixel::addons::ui::Anchor a);
		::Dynamic set_anchor_dyn();

		 ::Dynamic set_style( ::Dynamic s);
		::Dynamic set_style_dyn();

		::String set_title(::String t);
		::Dynamic set_title_dyn();

		::String set_body(::String b);
		::Dynamic set_body_dyn();

		 ::flixel::FlxSprite _bkg;
		 ::flixel::addons::ui::FlxUIText _titleText;
		 ::flixel::addons::ui::FlxUIText _bodyText;
		 ::flixel::FlxSprite _arrow;
		 ::flixel::FlxSprite _arrowBkg;
		 ::flixel::addons::ui::Anchor _anchorArrow;
		void refresh(int Width,int Height,::String Title,::String Body, ::flixel::addons::ui::Anchor Anchor_, ::Dynamic Style);
		::Dynamic refresh_dyn();

		void refreshBkg(int Width,int Height, ::Dynamic Style);
		::Dynamic refreshBkg_dyn();

		::String getStyleKey(int W,int H, ::Dynamic Style);
		::Dynamic getStyleKey_dyn();

		 ::flixel::FlxSprite makeArrowBkg( ::flixel::FlxSprite b);
		::Dynamic makeArrowBkg_dyn();

		 ::flixel::addons::ui::Anchor getArrowAnchor( ::flixel::addons::ui::Anchor a, ::flixel::addons::ui::Anchor result);
		::Dynamic getArrowAnchor_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITooltip */ 
