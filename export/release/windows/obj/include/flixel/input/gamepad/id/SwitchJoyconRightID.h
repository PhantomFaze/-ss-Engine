#ifndef INCLUDED_flixel_input_gamepad_id_SwitchJoyconRightID
#define INCLUDED_flixel_input_gamepad_id_SwitchJoyconRightID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,SwitchJoyconRightID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES SwitchJoyconRightID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SwitchJoyconRightID_obj OBJ_;
		SwitchJoyconRightID_obj();

	public:
		enum { _hx_ClassId = 0x44d8f6e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.SwitchJoyconRightID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.SwitchJoyconRightID"); }

		inline static ::hx::ObjectPtr< SwitchJoyconRightID_obj > __new() {
			::hx::ObjectPtr< SwitchJoyconRightID_obj > __this = new SwitchJoyconRightID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SwitchJoyconRightID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SwitchJoyconRightID_obj *__this = (SwitchJoyconRightID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchJoyconRightID_obj), false, "flixel.input.gamepad.id.SwitchJoyconRightID"));
			*(void **)__this = SwitchJoyconRightID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SwitchJoyconRightID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SwitchJoyconRightID",f5,94,de,b7); }

		static void __boot();
		static int ZR;
		static int A;
		static int X;
		static int B;
		static int Y;
		static int R;
		static int HOME;
		static int PLUS;
		static int LEFT_STICK_CLICK;
		static int SL;
		static int SR;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_SwitchJoyconRightID */ 
