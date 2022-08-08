#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Object
struct Object_t631007953;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t340375123;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.GUIText
struct GUIText_t402233326;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Font__ctor_m4193154730_MetadataUsageId;
extern RuntimeClass* Font_t1956802104_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m3642676323_RuntimeMethod_var;
extern const uint32_t Font_InvokeTextureRebuilt_Internal_m3260810449_MetadataUsageId;

struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745533_H
#define U3CMODULEU3E_T692745533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745533 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745533_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FONTSTYLE_T82229486_H
#define FONTSTYLE_T82229486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t82229486 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t82229486, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLE_T82229486_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef CHARACTERINFO_T1228754872_H
#define CHARACTERINFO_T1228754872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterInfo
struct  CharacterInfo_t1228754872 
{
public:
	// System.Int32 UnityEngine.CharacterInfo::index
	int32_t ___index_0;
	// UnityEngine.Rect UnityEngine.CharacterInfo::uv
	Rect_t2360479859  ___uv_1;
	// UnityEngine.Rect UnityEngine.CharacterInfo::vert
	Rect_t2360479859  ___vert_2;
	// System.Single UnityEngine.CharacterInfo::width
	float ___width_3;
	// System.Int32 UnityEngine.CharacterInfo::size
	int32_t ___size_4;
	// UnityEngine.FontStyle UnityEngine.CharacterInfo::style
	int32_t ___style_5;
	// System.Boolean UnityEngine.CharacterInfo::flipped
	bool ___flipped_6;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___uv_1)); }
	inline Rect_t2360479859  get_uv_1() const { return ___uv_1; }
	inline Rect_t2360479859 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Rect_t2360479859  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_vert_2() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___vert_2)); }
	inline Rect_t2360479859  get_vert_2() const { return ___vert_2; }
	inline Rect_t2360479859 * get_address_of_vert_2() { return &___vert_2; }
	inline void set_vert_2(Rect_t2360479859  value)
	{
		___vert_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_style_5() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___style_5)); }
	inline int32_t get_style_5() const { return ___style_5; }
	inline int32_t* get_address_of_style_5() { return &___style_5; }
	inline void set_style_5(int32_t value)
	{
		___style_5 = value;
	}

	inline static int32_t get_offset_of_flipped_6() { return static_cast<int32_t>(offsetof(CharacterInfo_t1228754872, ___flipped_6)); }
	inline bool get_flipped_6() const { return ___flipped_6; }
	inline bool* get_address_of_flipped_6() { return &___flipped_6; }
	inline void set_flipped_6(bool value)
	{
		___flipped_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t1228754872_marshaled_pinvoke
{
	int32_t ___index_0;
	Rect_t2360479859  ___uv_1;
	Rect_t2360479859  ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
};
// Native definition for COM marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t1228754872_marshaled_com
{
	int32_t ___index_0;
	Rect_t2360479859  ___uv_1;
	Rect_t2360479859  ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
};
#endif // CHARACTERINFO_T1228754872_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef ACTION_1_T2129269699_H
#define ACTION_1_T2129269699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Font>
struct  Action_1_t2129269699  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2129269699_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T2467502454_H
#define FONTTEXTUREREBUILDCALLBACK_T2467502454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t2467502454  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T2467502454_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef GUITEXT_T402233326_H
#define GUITEXT_T402233326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIText
struct  GUIText_t402233326  : public GUIElement_t3567083079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITEXT_T402233326_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" IL2CPP_METHOD_ATTR void Font_Internal_CreateFont_m3912844329 (RuntimeObject * __this /* static, unused */, Font_t1956802104 * ____font0, String_t* ___name1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Font>::Invoke(!0)
#define Action_1_Invoke_m3642676323(__this, p0, method) ((  void (*) (Action_1_t2129269699 *, Font_t1956802104 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void FontTextureRebuildCallback_Invoke_m3604797831 (FontTextureRebuildCallback_t2467502454 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke(const CharacterInfo_t1228754872& unmarshaled, CharacterInfo_t1228754872_marshaled_pinvoke& marshaled)
{
	marshaled.___index_0 = unmarshaled.get_index_0();
	marshaled.___uv_1 = unmarshaled.get_uv_1();
	marshaled.___vert_2 = unmarshaled.get_vert_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___size_4 = unmarshaled.get_size_4();
	marshaled.___style_5 = unmarshaled.get_style_5();
	marshaled.___flipped_6 = static_cast<int32_t>(unmarshaled.get_flipped_6());
}
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke_back(const CharacterInfo_t1228754872_marshaled_pinvoke& marshaled, CharacterInfo_t1228754872& unmarshaled)
{
	int32_t unmarshaled_index_temp_0 = 0;
	unmarshaled_index_temp_0 = marshaled.___index_0;
	unmarshaled.set_index_0(unmarshaled_index_temp_0);
	Rect_t2360479859  unmarshaled_uv_temp_1;
	memset(&unmarshaled_uv_temp_1, 0, sizeof(unmarshaled_uv_temp_1));
	unmarshaled_uv_temp_1 = marshaled.___uv_1;
	unmarshaled.set_uv_1(unmarshaled_uv_temp_1);
	Rect_t2360479859  unmarshaled_vert_temp_2;
	memset(&unmarshaled_vert_temp_2, 0, sizeof(unmarshaled_vert_temp_2));
	unmarshaled_vert_temp_2 = marshaled.___vert_2;
	unmarshaled.set_vert_2(unmarshaled_vert_temp_2);
	float unmarshaled_width_temp_3 = 0.0f;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_size_temp_4 = 0;
	unmarshaled_size_temp_4 = marshaled.___size_4;
	unmarshaled.set_size_4(unmarshaled_size_temp_4);
	int32_t unmarshaled_style_temp_5 = 0;
	unmarshaled_style_temp_5 = marshaled.___style_5;
	unmarshaled.set_style_5(unmarshaled_style_temp_5);
	bool unmarshaled_flipped_temp_6 = false;
	unmarshaled_flipped_temp_6 = static_cast<bool>(marshaled.___flipped_6);
	unmarshaled.set_flipped_6(unmarshaled_flipped_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke_cleanup(CharacterInfo_t1228754872_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t1228754872_marshal_com(const CharacterInfo_t1228754872& unmarshaled, CharacterInfo_t1228754872_marshaled_com& marshaled)
{
	marshaled.___index_0 = unmarshaled.get_index_0();
	marshaled.___uv_1 = unmarshaled.get_uv_1();
	marshaled.___vert_2 = unmarshaled.get_vert_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___size_4 = unmarshaled.get_size_4();
	marshaled.___style_5 = unmarshaled.get_style_5();
	marshaled.___flipped_6 = static_cast<int32_t>(unmarshaled.get_flipped_6());
}
extern "C" void CharacterInfo_t1228754872_marshal_com_back(const CharacterInfo_t1228754872_marshaled_com& marshaled, CharacterInfo_t1228754872& unmarshaled)
{
	int32_t unmarshaled_index_temp_0 = 0;
	unmarshaled_index_temp_0 = marshaled.___index_0;
	unmarshaled.set_index_0(unmarshaled_index_temp_0);
	Rect_t2360479859  unmarshaled_uv_temp_1;
	memset(&unmarshaled_uv_temp_1, 0, sizeof(unmarshaled_uv_temp_1));
	unmarshaled_uv_temp_1 = marshaled.___uv_1;
	unmarshaled.set_uv_1(unmarshaled_uv_temp_1);
	Rect_t2360479859  unmarshaled_vert_temp_2;
	memset(&unmarshaled_vert_temp_2, 0, sizeof(unmarshaled_vert_temp_2));
	unmarshaled_vert_temp_2 = marshaled.___vert_2;
	unmarshaled.set_vert_2(unmarshaled_vert_temp_2);
	float unmarshaled_width_temp_3 = 0.0f;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_size_temp_4 = 0;
	unmarshaled_size_temp_4 = marshaled.___size_4;
	unmarshaled.set_size_4(unmarshaled_size_temp_4);
	int32_t unmarshaled_style_temp_5 = 0;
	unmarshaled_style_temp_5 = marshaled.___style_5;
	unmarshaled.set_style_5(unmarshaled_style_temp_5);
	bool unmarshaled_flipped_temp_6 = false;
	unmarshaled_flipped_temp_6 = static_cast<bool>(marshaled.___flipped_6);
	unmarshaled.set_flipped_6(unmarshaled_flipped_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t1228754872_marshal_com_cleanup(CharacterInfo_t1228754872_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Font::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Font__ctor_m4193154730 (Font_t1956802104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Font__ctor_m4193154730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		Font_Internal_CreateFont_m3912844329(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" IL2CPP_METHOD_ATTR void Font_Internal_CreateFont_m3912844329 (RuntimeObject * __this /* static, unused */, Font_t1956802104 * ____font0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*Font_Internal_CreateFont_m3912844329_ftn) (Font_t1956802104 *, String_t*);
	static Font_Internal_CreateFont_m3912844329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateFont_m3912844329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)");
	_il2cpp_icall_func(____font0, ___name1);
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Font_get_material_m1471867149 (Font_t1956802104 * __this, const RuntimeMethod* method)
{
	typedef Material_t340375123 * (*Font_get_material_m1471867149_ftn) (Font_t1956802104 *);
	static Font_get_material_m1471867149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m1471867149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	Material_t340375123 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Font_HasCharacter_m2396486601 (Font_t1956802104 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	typedef bool (*Font_HasCharacter_m2396486601_ftn) (Font_t1956802104 *, Il2CppChar);
	static Font_HasCharacter_m2396486601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2396486601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	bool retVal = _il2cpp_icall_func(__this, ___c0);
	return retVal;
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Font_get_fontNames_m714993719 (Font_t1956802104 * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_t1281789340* (*Font_get_fontNames_m714993719_ftn) (Font_t1956802104 *);
	static Font_get_fontNames_m714993719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m714993719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	StringU5BU5D_t1281789340* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" IL2CPP_METHOD_ATTR void Font_RequestCharactersInTexture_m2970556110 (Font_t1956802104 * __this, String_t* ___characters0, int32_t ___size1, int32_t ___style2, const RuntimeMethod* method)
{
	typedef void (*Font_RequestCharactersInTexture_m2970556110_ftn) (Font_t1956802104 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m2970556110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m2970556110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters0, ___size1, ___style2);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void Font_InvokeTextureRebuilt_Internal_m3260810449 (RuntimeObject * __this /* static, unused */, Font_t1956802104 * ___font0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Font_InvokeTextureRebuilt_Internal_m3260810449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2129269699 * V_0 = NULL;
	{
		Action_1_t2129269699 * L_0 = ((Font_t1956802104_StaticFields*)il2cpp_codegen_static_fields_for(Font_t1956802104_il2cpp_TypeInfo_var))->get_textureRebuilt_2();
		V_0 = L_0;
		Action_1_t2129269699 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Action_1_t2129269699 * L_2 = V_0;
		Font_t1956802104 * L_3 = ___font0;
		NullCheck(L_2);
		Action_1_Invoke_m3642676323(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3642676323_RuntimeMethod_var);
	}

IL_0014:
	{
		Font_t1956802104 * L_4 = ___font0;
		NullCheck(L_4);
		FontTextureRebuildCallback_t2467502454 * L_5 = L_4->get_m_FontTextureRebuildCallback_3();
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		Font_t1956802104 * L_6 = ___font0;
		NullCheck(L_6);
		FontTextureRebuildCallback_t2467502454 * L_7 = L_6->get_m_FontTextureRebuildCallback_3();
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m3604797831(L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" IL2CPP_METHOD_ATTR void Font_set_textureRebuildCallback_m2906199741 (Font_t1956802104 * __this, FontTextureRebuildCallback_t2467502454 * ___value0, const RuntimeMethod* method)
{
	{
		FontTextureRebuildCallback_t2467502454 * L_0 = ___value0;
		__this->set_m_FontTextureRebuildCallback_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" IL2CPP_METHOD_ATTR bool Font_GetCharacterInfo_m129252932 (Font_t1956802104 * __this, Il2CppChar ___ch0, CharacterInfo_t1228754872 * ___info1, int32_t ___size2, int32_t ___style3, const RuntimeMethod* method)
{
	typedef bool (*Font_GetCharacterInfo_m129252932_ftn) (Font_t1956802104 *, Il2CppChar, CharacterInfo_t1228754872 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m129252932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m129252932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	bool retVal = _il2cpp_icall_func(__this, ___ch0, ___info1, ___size2, ___style3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454 (FontTextureRebuildCallback_t2467502454 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FontTextureRebuildCallback__ctor_m3251169343 (FontTextureRebuildCallback_t2467502454 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void FontTextureRebuildCallback_Invoke_m3604797831 (FontTextureRebuildCallback_t2467502454 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3604797831((FontTextureRebuildCallback_t2467502454 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FontTextureRebuildCallback_BeginInvoke_m304512862 (FontTextureRebuildCallback_t2467502454 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void FontTextureRebuildCallback_EndInvoke_m3732346867 (FontTextureRebuildCallback_t2467502454 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIText::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIText_set_text_m2265981083 (GUIText_t402233326 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIText_set_text_m2265981083_ftn) (GUIText_t402233326 *, String_t*);
	static GUIText_set_text_m2265981083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_text_m2265981083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*TextMesh_set_text_m446189179_ftn) (TextMesh_t1536577757 *, String_t*);
	static TextMesh_set_text_m446189179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m446189179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
