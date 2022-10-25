#ifndef INCLUDED_TypedAlphabet
#define INCLUDED_TypedAlphabet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(TypedAlphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TypedAlphabet_obj : public  ::Alphabet_obj
{
	public:
		typedef  ::Alphabet_obj super;
		typedef TypedAlphabet_obj OBJ_;
		TypedAlphabet_obj();

	public:
		enum { _hx_ClassId = 0x72d2885d };

		void __construct(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TypedAlphabet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TypedAlphabet"); }
		static ::hx::ObjectPtr< TypedAlphabet_obj > __new(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold);
		static ::hx::ObjectPtr< TypedAlphabet_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypedAlphabet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypedAlphabet",1d,73,8b,96); }

		 ::Dynamic onFinish;
		Dynamic onFinish_dyn() { return onFinish;}
		bool finishedText;
		Float delay;
		::String sound;
		Float volume;
		::String set_text(::String newText);

		int _curLetter;
		Float _timeToUpdate;
		void update(Float elapsed);

		void showCharacterUpTo(int upTo);
		::Dynamic showCharacterUpTo_dyn();

		void resetDialogue();
		::Dynamic resetDialogue_dyn();

		void finishText();
		::Dynamic finishText_dyn();

};


#endif /* INCLUDED_TypedAlphabet */ 
