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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// Prime31.AbstractManager
struct AbstractManager_t1896924750;
// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t4258926486;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Delegate
struct Delegate_t1188392813;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Action
struct Action_t1264377477;
// Prime31.Json/Deserializer
struct Deserializer_t1361861692;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// Prime31.Json/Serializer
struct Serializer_t2740194910;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t3055037934;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Prime31.JsonArray
struct JsonArray_t3489669405;
// Prime31.JsonFormatter
struct JsonFormatter_t2365363476;
// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>
struct Stack_1_t3320103523;
// Prime31.JsonObject
struct JsonObject_t3223138545;
// Prime31.MonoBehaviourGUI
struct MonoBehaviourGUI_t3872523344;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t4177511560;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1444694249;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t811797299;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// Prime31.P31Error
struct P31Error_t2299173450;
// Prime31.P31RestKit
struct P31RestKit_t3519255076;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Action`2<System.String,System.Object>
struct Action_2_t907858853;
// Prime31.P31RestKit/<send>c__Iterator0
struct U3CsendU3Ec__Iterator0_t1520858258;
// UnityEngine.WWW
struct WWW_t3688466362;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// Prime31.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t352434764;
// Prime31.Reflection.MemberMapLoader
struct MemberMapLoader_t2688037604;
// Prime31.Reflection.CacheResolver
struct CacheResolver_t2531652178;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct SafeDictionary_2_t2471229975;
// Prime31.Reflection.CacheResolver/MemberMap
struct MemberMap_t836145089;
// Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>
struct SafeDictionary_2_t1982373739;
// System.Enum
struct Enum_t4135868527;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct IEnumerator_1_t3451644023;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2962787787;
// Prime31.Reflection.GetHandler
struct GetHandler_t3299076676;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct SafeDictionary_2_t2470438330;
// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6
struct U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360;
// Prime31.Reflection.SetHandler
struct SetHandler_t2014308932;
// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7
struct U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609;
// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8
struct U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350;
// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9
struct U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct SafeDictionary_2_t2000356588;
// Prime31.Reflection.CacheResolver/CtorDelegate
struct CtorDelegate_t2001148233;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Prime31.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t749624350;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2736452219;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t244230366;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// Prime31.JsonFormatter/JsonContextType[]
struct JsonContextTypeU5BU5D_t3827443677;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1747829908;
// System.Collections.Generic.Dictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct Dictionary_2_t621401388;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Action[]
struct ActionU5BU5D_t388269512;
// System.Collections.Generic.Dictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct Dictionary_2_t620609743;
// System.Collections.Generic.Dictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct Dictionary_2_t150528001;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.GUISettings
struct GUISettings_t1774757634;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3742157810;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1143955295;

extern RuntimeClass* AbstractManager_t1896924750_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400_RuntimeMethod_var;
extern const uint32_t AbstractManager_get_coroutineSurrogate_m4138890983_MetadataUsageId;
extern const uint32_t AbstractManager_getThreadingCallbackHelper_m1704635222_MetadataUsageId;
extern const RuntimeType* ThreadingCallbackHelper_t4258926486_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadingCallbackHelper_t4258926486_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisThreadingCallbackHelper_t4258926486_m234785792_RuntimeMethod_var;
extern const uint32_t AbstractManager_createThreadingCallbackHelper_m2783934263_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral735181246;
extern const uint32_t AbstractManager_getPrime31ManagerGameObject_m1350319744_MetadataUsageId;
extern RuntimeClass* MonoBehaviour_t3962482529_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityException_t3598173660_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4026664769;
extern String_t* _stringLiteral2742834599;
extern String_t* _stringLiteral2796876051;
extern const uint32_t AbstractManager_initialize_m1411619200_MetadataUsageId;
extern const uint32_t AbstractManager_Awake_m69806788_MetadataUsageId;
extern String_t* _stringLiteral3719385308;
extern String_t* _stringLiteral921018006;
extern const uint32_t ActionExtensions_invoke_m1944200621_MetadataUsageId;
extern const uint32_t ActionExtensions_fire_m3261000318_MetadataUsageId;
extern RuntimeClass* Json_t2695587496_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1937107660;
extern const uint32_t Json_decode_m1423667791_MetadataUsageId;
extern String_t* _stringLiteral3180690874;
extern const uint32_t Json_encode_m1889278415_MetadataUsageId;
extern RuntimeClass* Deserializer_t1361861692_il2cpp_TypeInfo_var;
extern const uint32_t Deserializer_deserialize_m3490139499_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral107078765;
extern String_t* _stringLiteral47698025;
extern const uint32_t Deserializer_parseValue_m275038268_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m303517795_RuntimeMethod_var;
extern const uint32_t Deserializer_parseObject_m242742785_MetadataUsageId;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const uint32_t Deserializer_parseArray_m32602812_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const uint32_t Deserializer_parseString_m2542394221_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614530;
extern const uint32_t Deserializer_parseNumber_m1002354842_MetadataUsageId;
extern String_t* _stringLiteral2206812729;
extern const uint32_t Deserializer_getLastIndexOfNumber_m133144268_MetadataUsageId;
extern String_t* _stringLiteral1596281288;
extern const uint32_t Deserializer_eatWhitespace_m1682480516_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t Serializer__ctor_m4287989410_MetadataUsageId;
extern RuntimeClass* Serializer_t2740194910_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_serialize_m2113405956_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1903330124;
extern const uint32_t Serializer_serializeObject_m1661408100_MetadataUsageId;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3452614643;
extern const uint32_t Serializer_serializeIList_m889817702_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614611;
extern const uint32_t Serializer_serializeIDictionary_m1141959864_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m7908668_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m565767158_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2500734324_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1204235524_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1838953748_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m294432494_RuntimeMethod_var;
extern const uint32_t Serializer_serializeDictionary_m753622930_MetadataUsageId;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455432692;
extern const uint32_t Serializer_serializeString_m2125783434_MetadataUsageId;
extern String_t* _stringLiteral1832000189;
extern const uint32_t Serializer_serializeClass_m1530331333_MetadataUsageId;
extern const uint32_t JsonArray__ctor_m1280052619_MetadataUsageId;
extern const uint32_t JsonArray_ToString_m4088836291_MetadataUsageId;
extern const uint32_t JsonExtensions_listFromJson_m74214688_MetadataUsageId;
extern const uint32_t JsonExtensions_dictionaryFromJson_m987059296_MetadataUsageId;
extern RuntimeClass* Stack_1_t3320103523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m2356622719_RuntimeMethod_var;
extern const uint32_t JsonFormatter__ctor_m3996231688_MetadataUsageId;
extern RuntimeClass* JsonFormatter_t2365363476_il2cpp_TypeInfo_var;
extern const uint32_t JsonFormatter_prettyPrint_m556974798_MetadataUsageId;
extern String_t* _stringLiteral3452614567;
extern const uint32_t JsonFormatter_buildIndents_m987969659_MetadataUsageId;
extern const RuntimeMethod* Stack_1_get_Count_m1716089596_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m3875692595_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m3601772963_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m1190955677_RuntimeMethod_var;
extern String_t* _stringLiteral3452614528;
extern const uint32_t JsonFormatter_print_m2888455803_MetadataUsageId;
extern const uint32_t JsonObject__ctor_m2436297384_MetadataUsageId;
extern const uint32_t JsonObject_ToString_m1836551772_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t4177511560_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1500660071_RuntimeMethod_var;
extern const uint32_t MonoBehaviourGUI__ctor_m2509328926_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3662341286;
extern const uint32_t MonoBehaviourGUI_paintWindow_m1033582813_MetadataUsageId;
extern String_t* _stringLiteral1775096542;
extern const uint32_t MonoBehaviourGUI_handleLog_m603942292_MetadataUsageId;
extern RuntimeClass* LogCallback_t3588208630_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimePlatform_t4159857903_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MonoBehaviourGUI_handleLog_m603942292_RuntimeMethod_var;
extern String_t* _stringLiteral2722607755;
extern const uint32_t MonoBehaviourGUI_Update_m3668306016_MetadataUsageId;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const uint32_t MonoBehaviourGUI_beginColumn_m4146504380_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MonoBehaviourGUI_paintWindow_m1033582813_RuntimeMethod_var;
extern String_t* _stringLiteral3026423753;
extern const uint32_t MonoBehaviourGUI_endColumn_m694865531_MetadataUsageId;
extern const uint32_t MonoBehaviourGUI_beginRightColumn_m3460824730_MetadataUsageId;
extern const uint32_t MonoBehaviourGUI_bottomRightButton_m1164546401_MetadataUsageId;
extern const uint32_t MonoBehaviourGUI_bottomLeftButton_m2252721825_MetadataUsageId;
extern const uint32_t MonoBehaviourGUI_bottomCenterButton_m3186389987_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m93706162_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m4020705531_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2314420255_RuntimeMethod_var;
extern const uint32_t MonoBehaviourGUI_toggleButton_m3317365033_MetadataUsageId;
extern const uint32_t MonoBehaviourGUI_toggleButtonState_m615803482_MetadataUsageId;
extern RuntimeClass* P31Error_t2299173450_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1680405325_RuntimeMethod_var;
extern String_t* _stringLiteral1471173669;
extern String_t* _stringLiteral3253941996;
extern String_t* _stringLiteral3929789730;
extern String_t* _stringLiteral1985170611;
extern String_t* _stringLiteral2324986263;
extern const uint32_t P31Error_errorFromJson_m222178292_MetadataUsageId;
extern String_t* _stringLiteral1843019704;
extern const uint32_t P31Error_ToString_m3418559899_MetadataUsageId;
extern String_t* _stringLiteral28129332;
extern const uint32_t P31RestKit_get_surrogateGameObject_m1051919742_MetadataUsageId;
extern const uint32_t P31RestKit_get_surrogateMonobehaviour_m3047038679_MetadataUsageId;
extern RuntimeClass* U3CsendU3Ec__Iterator0_t1520858258_il2cpp_TypeInfo_var;
extern const uint32_t P31RestKit_send_m411001721_MetadataUsageId;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1568726197_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3695584085_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1121422282_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1625637660_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m912154270_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2607424534_RuntimeMethod_var;
extern String_t* _stringLiteral3452614545;
extern String_t* _stringLiteral4116493219;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral4131545663;
extern const uint32_t P31RestKit_processRequest_m3966119200_MetadataUsageId;
extern const RuntimeMethod* Action_2_Invoke_m4170584757_RuntimeMethod_var;
extern const uint32_t P31RestKit_processResponse_m267050522_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4125185638_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3938572407_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2642806556_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m897800495_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2198401511_RuntimeMethod_var;
extern String_t* _stringLiteral2263759525;
extern String_t* _stringLiteral2806922932;
extern String_t* _stringLiteral3666855714;
extern const uint32_t P31RestKit_isResponseJson_m2716641910_MetadataUsageId;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral2140354418;
extern String_t* _stringLiteral1231988422;
extern String_t* _stringLiteral134007522;
extern String_t* _stringLiteral1707224250;
extern const uint32_t U3CsendU3Ec__Iterator0_MoveNext_m3694812149_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CsendU3Ec__Iterator0_Reset_m2794559029_RuntimeMethod_var;
extern const uint32_t U3CsendU3Ec__Iterator0_Reset_m2794559029_MetadataUsageId;
extern RuntimeClass* MemberMapLoader_t2688037604_il2cpp_TypeInfo_var;
extern RuntimeClass* CacheResolver_t2531652178_il2cpp_TypeInfo_var;
extern const uint32_t PocoJsonSerializerStrategy__ctor_m70961122_MetadataUsageId;
extern RuntimeClass* MemberMap_t836145089_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SafeDictionary_2_add_m3627088684_RuntimeMethod_var;
extern const uint32_t PocoJsonSerializerStrategy_buildMap_m3661383421_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_serializeEnum_m3399850826_MetadataUsageId;
extern RuntimeClass* PocoJsonSerializerStrategy_t352434764_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614620;
extern const uint32_t PocoJsonSerializerStrategy_trySerializeKnownTypes_m1714487706_MetadataUsageId;
extern RuntimeClass* JsonObject_t3223138545_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3451644023_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SafeDictionary_2_GetEnumerator_m2877288426_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m652726869_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1492108111_RuntimeMethod_var;
extern const uint32_t PocoJsonSerializerStrategy_trySerializeUnknownTypes_m2642475014_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4081536298;
extern String_t* _stringLiteral1858654798;
extern String_t* _stringLiteral1861407333;
extern const uint32_t PocoJsonSerializerStrategy__cctor_m198314538_MetadataUsageId;
extern RuntimeClass* SafeDictionary_2_t2470438330_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SafeDictionary_2__ctor_m823189424_RuntimeMethod_var;
extern const uint32_t CacheResolver__ctor_m3118824830_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern RuntimeClass* SafeDictionary_2_t2471229975_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SafeDictionary_2_tryGetValue_m335560591_RuntimeMethod_var;
extern const RuntimeMethod* SafeDictionary_2__ctor_m3987949131_RuntimeMethod_var;
extern const RuntimeMethod* SafeDictionary_2_add_m1486334210_RuntimeMethod_var;
extern const uint32_t CacheResolver_loadMaps_m2720418289_MetadataUsageId;
extern RuntimeClass* U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360_il2cpp_TypeInfo_var;
extern RuntimeClass* GetHandler_t3299076676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CcreateGetHandlerU3Ec__AnonStorey6_U3CU3Em__5_m2736408719_RuntimeMethod_var;
extern const uint32_t CacheResolver_createGetHandler_m2255824026_MetadataUsageId;
extern RuntimeClass* U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609_il2cpp_TypeInfo_var;
extern RuntimeClass* SetHandler_t2014308932_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CcreateSetHandlerU3Ec__AnonStorey7_U3CU3Em__6_m1746608410_RuntimeMethod_var;
extern const uint32_t CacheResolver_createSetHandler_m2231842901_MetadataUsageId;
extern RuntimeClass* U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CcreateGetHandlerU3Ec__AnonStorey8_U3CU3Em__7_m3274381_RuntimeMethod_var;
extern const uint32_t CacheResolver_createGetHandler_m3073072090_MetadataUsageId;
extern RuntimeClass* U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CcreateSetHandlerU3Ec__AnonStorey9_U3CU3Em__8_m2875638474_RuntimeMethod_var;
extern const uint32_t CacheResolver_createSetHandler_m1896877026_MetadataUsageId;
extern RuntimeClass* SafeDictionary_2_t2000356588_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SafeDictionary_2__ctor_m120655008_RuntimeMethod_var;
extern const uint32_t CacheResolver__cctor_m518969891_MetadataUsageId;
extern const uint32_t U3CcreateGetHandlerU3Ec__AnonStorey8_U3CU3Em__7_m3274381_MetadataUsageId;
extern const uint32_t U3CcreateSetHandlerU3Ec__AnonStorey9_U3CU3Em__8_m2875638474_MetadataUsageId;
extern const uint32_t MemberMap__ctor_m3179035751_MetadataUsageId;
extern const uint32_t MemberMap__ctor_m440999168_MetadataUsageId;
extern RuntimeClass* SimpleJson_t2127621707_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_get_currentJsonSerializerStrategy_m3004021273_MetadataUsageId;
extern const uint32_t SimpleJson_get_pocoJsonSerializerStrategy_m73467356_MetadataUsageId;
extern const uint32_t SimpleJson_encode_m2826025421_MetadataUsageId;
extern const uint32_t SimpleJson_decode_m1626785732_MetadataUsageId;
extern const uint32_t SimpleJson_parseObject_m1846159692_MetadataUsageId;
extern RuntimeClass* JsonArray_t3489669405_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_parseArray_m4163451773_MetadataUsageId;
extern const uint32_t SimpleJson_parseValue_m203415862_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t SimpleJson_parseString_m895412165_MetadataUsageId;
extern String_t* _stringLiteral3452614587;
extern const uint32_t SimpleJson_parseNumber_m1677018383_MetadataUsageId;
extern const uint32_t SimpleJson_getLastIndexOfNumber_m607293295_MetadataUsageId;
extern String_t* _stringLiteral352322198;
extern const uint32_t SimpleJson_eatWhitespace_m423768790_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t96558379_il2cpp_TypeInfo_var;
extern RuntimeClass* IJsonSerializerStrategy_t749624350_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t SimpleJson_serializeValue_m53220749_MetadataUsageId;
extern String_t* _stringLiteral3452614532;
extern const uint32_t SimpleJson_serializeObject_m2553940162_MetadataUsageId;
extern const uint32_t SimpleJson_serializeArray_m1886521706_MetadataUsageId;
extern const uint32_t SimpleJson_serializeString_m941481939_MetadataUsageId;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614606;
extern const uint32_t SimpleJson_serializeNumber_m614106910_MetadataUsageId;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_isNumeric_m428706617_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3302800229_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m633427275_RuntimeMethod_var;
extern const uint32_t StringExtensions_parseQueryString_m2943211797_MetadataUsageId;
extern RuntimeClass* List_1_t2736452219_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1022708252_RuntimeMethod_var;
extern const uint32_t ThreadingCallbackHelper__ctor_m674210543_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3047321800_RuntimeMethod_var;
extern const uint32_t ThreadingCallbackHelper_addActionToQueue_m3924614348_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m2553796114_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2660395247_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1090641809_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1660900424_RuntimeMethod_var;
extern const uint32_t ThreadingCallbackHelper_Update_m2959909921_MetadataUsageId;
extern const uint32_t ThreadingCallbackHelper_disableIfEmpty_m3481821992_MetadataUsageId;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern const uint32_t Utils_prettyPrintJson_m112161862_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct DelegateU5BU5D_t1703627840;
struct CharU5BU5D_t3528271667;
struct FieldInfoU5BU5D_t846150980;
struct PropertyInfoU5BU5D_t1461822886;
struct GUILayoutOptionU5BU5D_t2510215842;
struct ByteU5BU5D_t4116647657;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef MEMBERMAP_T836145089_H
#define MEMBERMAP_T836145089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/MemberMap
struct  MemberMap_t836145089  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Prime31.Reflection.CacheResolver/MemberMap::MemberInfo
	MemberInfo_t * ___MemberInfo_0;
	// System.Type Prime31.Reflection.CacheResolver/MemberMap::Type
	Type_t * ___Type_1;
	// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver/MemberMap::Getter
	GetHandler_t3299076676 * ___Getter_2;
	// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver/MemberMap::Setter
	SetHandler_t2014308932 * ___Setter_3;

public:
	inline static int32_t get_offset_of_MemberInfo_0() { return static_cast<int32_t>(offsetof(MemberMap_t836145089, ___MemberInfo_0)); }
	inline MemberInfo_t * get_MemberInfo_0() const { return ___MemberInfo_0; }
	inline MemberInfo_t ** get_address_of_MemberInfo_0() { return &___MemberInfo_0; }
	inline void set_MemberInfo_0(MemberInfo_t * value)
	{
		___MemberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfo_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(MemberMap_t836145089, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Getter_2() { return static_cast<int32_t>(offsetof(MemberMap_t836145089, ___Getter_2)); }
	inline GetHandler_t3299076676 * get_Getter_2() const { return ___Getter_2; }
	inline GetHandler_t3299076676 ** get_address_of_Getter_2() { return &___Getter_2; }
	inline void set_Getter_2(GetHandler_t3299076676 * value)
	{
		___Getter_2 = value;
		Il2CppCodeGenWriteBarrier((&___Getter_2), value);
	}

	inline static int32_t get_offset_of_Setter_3() { return static_cast<int32_t>(offsetof(MemberMap_t836145089, ___Setter_3)); }
	inline SetHandler_t2014308932 * get_Setter_3() const { return ___Setter_3; }
	inline SetHandler_t2014308932 ** get_address_of_Setter_3() { return &___Setter_3; }
	inline void set_Setter_3(SetHandler_t2014308932 * value)
	{
		___Setter_3 = value;
		Il2CppCodeGenWriteBarrier((&___Setter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMAP_T836145089_H
#ifndef CACHERESOLVER_T2531652178_H
#define CACHERESOLVER_T2531652178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver
struct  CacheResolver_t2531652178  : public RuntimeObject
{
public:
	// Prime31.Reflection.MemberMapLoader Prime31.Reflection.CacheResolver::_memberMapLoader
	MemberMapLoader_t2688037604 * ____memberMapLoader_0;
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>> Prime31.Reflection.CacheResolver::_memberMapsCache
	SafeDictionary_2_t2470438330 * ____memberMapsCache_1;

public:
	inline static int32_t get_offset_of__memberMapLoader_0() { return static_cast<int32_t>(offsetof(CacheResolver_t2531652178, ____memberMapLoader_0)); }
	inline MemberMapLoader_t2688037604 * get__memberMapLoader_0() const { return ____memberMapLoader_0; }
	inline MemberMapLoader_t2688037604 ** get_address_of__memberMapLoader_0() { return &____memberMapLoader_0; }
	inline void set__memberMapLoader_0(MemberMapLoader_t2688037604 * value)
	{
		____memberMapLoader_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberMapLoader_0), value);
	}

	inline static int32_t get_offset_of__memberMapsCache_1() { return static_cast<int32_t>(offsetof(CacheResolver_t2531652178, ____memberMapsCache_1)); }
	inline SafeDictionary_2_t2470438330 * get__memberMapsCache_1() const { return ____memberMapsCache_1; }
	inline SafeDictionary_2_t2470438330 ** get_address_of__memberMapsCache_1() { return &____memberMapsCache_1; }
	inline void set__memberMapsCache_1(SafeDictionary_2_t2470438330 * value)
	{
		____memberMapsCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberMapsCache_1), value);
	}
};

struct CacheResolver_t2531652178_StaticFields
{
public:
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate> Prime31.Reflection.CacheResolver::constructorCache
	SafeDictionary_2_t2000356588 * ___constructorCache_2;

public:
	inline static int32_t get_offset_of_constructorCache_2() { return static_cast<int32_t>(offsetof(CacheResolver_t2531652178_StaticFields, ___constructorCache_2)); }
	inline SafeDictionary_2_t2000356588 * get_constructorCache_2() const { return ___constructorCache_2; }
	inline SafeDictionary_2_t2000356588 ** get_address_of_constructorCache_2() { return &___constructorCache_2; }
	inline void set_constructorCache_2(SafeDictionary_2_t2000356588 * value)
	{
		___constructorCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___constructorCache_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHERESOLVER_T2531652178_H
#ifndef JSON_T2695587496_H
#define JSON_T2695587496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json
struct  Json_t2695587496  : public RuntimeObject
{
public:

public:
};

struct Json_t2695587496_StaticFields
{
public:
	// System.Boolean Prime31.Json::useSimpleJson
	bool ___useSimpleJson_0;

public:
	inline static int32_t get_offset_of_useSimpleJson_0() { return static_cast<int32_t>(offsetof(Json_t2695587496_StaticFields, ___useSimpleJson_0)); }
	inline bool get_useSimpleJson_0() const { return ___useSimpleJson_0; }
	inline bool* get_address_of_useSimpleJson_0() { return &___useSimpleJson_0; }
	inline void set_useSimpleJson_0(bool value)
	{
		___useSimpleJson_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T2695587496_H
#ifndef SERIALIZER_T2740194910_H
#define SERIALIZER_T2740194910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/Serializer
struct  Serializer_t2740194910  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Prime31.Json/Serializer::_builder
	StringBuilder_t * ____builder_0;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(Serializer_t2740194910, ____builder_0)); }
	inline StringBuilder_t * get__builder_0() const { return ____builder_0; }
	inline StringBuilder_t ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(StringBuilder_t * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier((&____builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T2740194910_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_29)); }
	inline UriParser_t3890150400 * get_parser_29() const { return ___parser_29; }
	inline UriParser_t3890150400 ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_t3890150400 * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_33;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_30() const { return ___U3CU3Ef__switchU24map12_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_30() { return &___U3CU3Ef__switchU24map12_30; }
	inline void set_U3CU3Ef__switchU24map12_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_31() const { return ___U3CU3Ef__switchU24map14_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_31() { return &___U3CU3Ef__switchU24map14_31; }
	inline void set_U3CU3Ef__switchU24map14_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_32() const { return ___U3CU3Ef__switchU24map15_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_32() { return &___U3CU3Ef__switchU24map15_32; }
	inline void set_U3CU3Ef__switchU24map15_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_33() const { return ___U3CU3Ef__switchU24map16_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_33() { return &___U3CU3Ef__switchU24map16_33; }
	inline void set_U3CU3Ef__switchU24map16_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef DESERIALIZER_T1361861692_H
#define DESERIALIZER_T1361861692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/Deserializer
struct  Deserializer_t1361861692  : public RuntimeObject
{
public:
	// System.Char[] Prime31.Json/Deserializer::charArray
	CharU5BU5D_t3528271667* ___charArray_0;

public:
	inline static int32_t get_offset_of_charArray_0() { return static_cast<int32_t>(offsetof(Deserializer_t1361861692, ___charArray_0)); }
	inline CharU5BU5D_t3528271667* get_charArray_0() const { return ___charArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_charArray_0() { return &___charArray_0; }
	inline void set_charArray_0(CharU5BU5D_t3528271667* value)
	{
		___charArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___charArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESERIALIZER_T1361861692_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef STACK_1_T3320103523_H
#define STACK_1_T3320103523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>
struct  Stack_1_t3320103523  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	JsonContextTypeU5BU5D_t3827443677* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3320103523, ____array_0)); }
	inline JsonContextTypeU5BU5D_t3827443677* get__array_0() const { return ____array_0; }
	inline JsonContextTypeU5BU5D_t3827443677** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(JsonContextTypeU5BU5D_t3827443677* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3320103523, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3320103523, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3320103523_H
#ifndef JSONFORMATTER_T2365363476_H
#define JSONFORMATTER_T2365363476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonFormatter
struct  JsonFormatter_t2365363476  : public RuntimeObject
{
public:
	// System.Boolean Prime31.JsonFormatter::inDoubleString
	bool ___inDoubleString_0;
	// System.Boolean Prime31.JsonFormatter::inSingleString
	bool ___inSingleString_1;
	// System.Boolean Prime31.JsonFormatter::inVariableAssignment
	bool ___inVariableAssignment_2;
	// System.Char Prime31.JsonFormatter::prevChar
	Il2CppChar ___prevChar_3;
	// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType> Prime31.JsonFormatter::context
	Stack_1_t3320103523 * ___context_4;

public:
	inline static int32_t get_offset_of_inDoubleString_0() { return static_cast<int32_t>(offsetof(JsonFormatter_t2365363476, ___inDoubleString_0)); }
	inline bool get_inDoubleString_0() const { return ___inDoubleString_0; }
	inline bool* get_address_of_inDoubleString_0() { return &___inDoubleString_0; }
	inline void set_inDoubleString_0(bool value)
	{
		___inDoubleString_0 = value;
	}

	inline static int32_t get_offset_of_inSingleString_1() { return static_cast<int32_t>(offsetof(JsonFormatter_t2365363476, ___inSingleString_1)); }
	inline bool get_inSingleString_1() const { return ___inSingleString_1; }
	inline bool* get_address_of_inSingleString_1() { return &___inSingleString_1; }
	inline void set_inSingleString_1(bool value)
	{
		___inSingleString_1 = value;
	}

	inline static int32_t get_offset_of_inVariableAssignment_2() { return static_cast<int32_t>(offsetof(JsonFormatter_t2365363476, ___inVariableAssignment_2)); }
	inline bool get_inVariableAssignment_2() const { return ___inVariableAssignment_2; }
	inline bool* get_address_of_inVariableAssignment_2() { return &___inVariableAssignment_2; }
	inline void set_inVariableAssignment_2(bool value)
	{
		___inVariableAssignment_2 = value;
	}

	inline static int32_t get_offset_of_prevChar_3() { return static_cast<int32_t>(offsetof(JsonFormatter_t2365363476, ___prevChar_3)); }
	inline Il2CppChar get_prevChar_3() const { return ___prevChar_3; }
	inline Il2CppChar* get_address_of_prevChar_3() { return &___prevChar_3; }
	inline void set_prevChar_3(Il2CppChar value)
	{
		___prevChar_3 = value;
	}

	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(JsonFormatter_t2365363476, ___context_4)); }
	inline Stack_1_t3320103523 * get_context_4() const { return ___context_4; }
	inline Stack_1_t3320103523 ** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(Stack_1_t3320103523 * value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier((&___context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONFORMATTER_T2365363476_H
#ifndef P31RESTKIT_T3519255076_H
#define P31RESTKIT_T3519255076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.P31RestKit
struct  P31RestKit_t3519255076  : public RuntimeObject
{
public:
	// System.String Prime31.P31RestKit::_baseUrl
	String_t* ____baseUrl_0;
	// System.Boolean Prime31.P31RestKit::debugRequests
	bool ___debugRequests_1;
	// System.Boolean Prime31.P31RestKit::forceJsonResponse
	bool ___forceJsonResponse_2;
	// UnityEngine.GameObject Prime31.P31RestKit::_surrogateGameObject
	GameObject_t1113636619 * ____surrogateGameObject_3;
	// UnityEngine.MonoBehaviour Prime31.P31RestKit::_surrogateMonobehaviour
	MonoBehaviour_t3962482529 * ____surrogateMonobehaviour_4;

public:
	inline static int32_t get_offset_of__baseUrl_0() { return static_cast<int32_t>(offsetof(P31RestKit_t3519255076, ____baseUrl_0)); }
	inline String_t* get__baseUrl_0() const { return ____baseUrl_0; }
	inline String_t** get_address_of__baseUrl_0() { return &____baseUrl_0; }
	inline void set__baseUrl_0(String_t* value)
	{
		____baseUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____baseUrl_0), value);
	}

	inline static int32_t get_offset_of_debugRequests_1() { return static_cast<int32_t>(offsetof(P31RestKit_t3519255076, ___debugRequests_1)); }
	inline bool get_debugRequests_1() const { return ___debugRequests_1; }
	inline bool* get_address_of_debugRequests_1() { return &___debugRequests_1; }
	inline void set_debugRequests_1(bool value)
	{
		___debugRequests_1 = value;
	}

	inline static int32_t get_offset_of_forceJsonResponse_2() { return static_cast<int32_t>(offsetof(P31RestKit_t3519255076, ___forceJsonResponse_2)); }
	inline bool get_forceJsonResponse_2() const { return ___forceJsonResponse_2; }
	inline bool* get_address_of_forceJsonResponse_2() { return &___forceJsonResponse_2; }
	inline void set_forceJsonResponse_2(bool value)
	{
		___forceJsonResponse_2 = value;
	}

	inline static int32_t get_offset_of__surrogateGameObject_3() { return static_cast<int32_t>(offsetof(P31RestKit_t3519255076, ____surrogateGameObject_3)); }
	inline GameObject_t1113636619 * get__surrogateGameObject_3() const { return ____surrogateGameObject_3; }
	inline GameObject_t1113636619 ** get_address_of__surrogateGameObject_3() { return &____surrogateGameObject_3; }
	inline void set__surrogateGameObject_3(GameObject_t1113636619 * value)
	{
		____surrogateGameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateGameObject_3), value);
	}

	inline static int32_t get_offset_of__surrogateMonobehaviour_4() { return static_cast<int32_t>(offsetof(P31RestKit_t3519255076, ____surrogateMonobehaviour_4)); }
	inline MonoBehaviour_t3962482529 * get__surrogateMonobehaviour_4() const { return ____surrogateMonobehaviour_4; }
	inline MonoBehaviour_t3962482529 ** get_address_of__surrogateMonobehaviour_4() { return &____surrogateMonobehaviour_4; }
	inline void set__surrogateMonobehaviour_4(MonoBehaviour_t3962482529 * value)
	{
		____surrogateMonobehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateMonobehaviour_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // P31RESTKIT_T3519255076_H
#ifndef DICTIONARY_2_T4177511560_H
#define DICTIONARY_2_T4177511560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t4177511560  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t2897418192* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___valueSlots_7)); }
	inline BooleanU5BU5D_t2897418192* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BooleanU5BU5D_t2897418192* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4177511560_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1747829908 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1747829908 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1747829908 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1747829908 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4177511560_H
#ifndef P31ERROR_T2299173450_H
#define P31ERROR_T2299173450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.P31Error
struct  P31Error_t2299173450  : public RuntimeObject
{
public:
	// System.String Prime31.P31Error::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_0;
	// System.String Prime31.P31Error::<domain>k__BackingField
	String_t* ___U3CdomainU3Ek__BackingField_1;
	// System.Int32 Prime31.P31Error::<code>k__BackingField
	int32_t ___U3CcodeU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Prime31.P31Error::<userInfo>k__BackingField
	Dictionary_2_t2865362463 * ___U3CuserInfoU3Ek__BackingField_3;
	// System.Boolean Prime31.P31Error::_containsOnlyMessage
	bool ____containsOnlyMessage_4;

public:
	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(P31Error_t2299173450, ___U3CmessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_0() const { return ___U3CmessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_0() { return &___U3CmessageU3Ek__BackingField_0; }
	inline void set_U3CmessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(P31Error_t2299173450, ___U3CdomainU3Ek__BackingField_1)); }
	inline String_t* get_U3CdomainU3Ek__BackingField_1() const { return ___U3CdomainU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdomainU3Ek__BackingField_1() { return &___U3CdomainU3Ek__BackingField_1; }
	inline void set_U3CdomainU3Ek__BackingField_1(String_t* value)
	{
		___U3CdomainU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdomainU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CcodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(P31Error_t2299173450, ___U3CcodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CcodeU3Ek__BackingField_2() const { return ___U3CcodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcodeU3Ek__BackingField_2() { return &___U3CcodeU3Ek__BackingField_2; }
	inline void set_U3CcodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CcodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CuserInfoU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(P31Error_t2299173450, ___U3CuserInfoU3Ek__BackingField_3)); }
	inline Dictionary_2_t2865362463 * get_U3CuserInfoU3Ek__BackingField_3() const { return ___U3CuserInfoU3Ek__BackingField_3; }
	inline Dictionary_2_t2865362463 ** get_address_of_U3CuserInfoU3Ek__BackingField_3() { return &___U3CuserInfoU3Ek__BackingField_3; }
	inline void set_U3CuserInfoU3Ek__BackingField_3(Dictionary_2_t2865362463 * value)
	{
		___U3CuserInfoU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserInfoU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of__containsOnlyMessage_4() { return static_cast<int32_t>(offsetof(P31Error_t2299173450, ____containsOnlyMessage_4)); }
	inline bool get__containsOnlyMessage_4() const { return ____containsOnlyMessage_4; }
	inline bool* get_address_of__containsOnlyMessage_4() { return &____containsOnlyMessage_4; }
	inline void set__containsOnlyMessage_4(bool value)
	{
		____containsOnlyMessage_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // P31ERROR_T2299173450_H
#ifndef JSONEXTENSIONS_T3665495297_H
#define JSONEXTENSIONS_T3665495297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonExtensions
struct  JsonExtensions_t3665495297  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONEXTENSIONS_T3665495297_H
#ifndef POCOJSONSERIALIZERSTRATEGY_T352434764_H
#define POCOJSONSERIALIZERSTRATEGY_T352434764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t352434764  : public RuntimeObject
{
public:
	// Prime31.Reflection.CacheResolver Prime31.PocoJsonSerializerStrategy::cacheResolver
	CacheResolver_t2531652178 * ___cacheResolver_0;

public:
	inline static int32_t get_offset_of_cacheResolver_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t352434764, ___cacheResolver_0)); }
	inline CacheResolver_t2531652178 * get_cacheResolver_0() const { return ___cacheResolver_0; }
	inline CacheResolver_t2531652178 ** get_address_of_cacheResolver_0() { return &___cacheResolver_0; }
	inline void set_cacheResolver_0(CacheResolver_t2531652178 * value)
	{
		___cacheResolver_0 = value;
		Il2CppCodeGenWriteBarrier((&___cacheResolver_0), value);
	}
};

struct PocoJsonSerializerStrategy_t352434764_StaticFields
{
public:
	// System.String[] Prime31.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t1281789340* ___Iso8601Format_1;

public:
	inline static int32_t get_offset_of_Iso8601Format_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t352434764_StaticFields, ___Iso8601Format_1)); }
	inline StringU5BU5D_t1281789340* get_Iso8601Format_1() const { return ___Iso8601Format_1; }
	inline StringU5BU5D_t1281789340** get_address_of_Iso8601Format_1() { return &___Iso8601Format_1; }
	inline void set_Iso8601Format_1(StringU5BU5D_t1281789340* value)
	{
		___Iso8601Format_1 = value;
		Il2CppCodeGenWriteBarrier((&___Iso8601Format_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POCOJSONSERIALIZERSTRATEGY_T352434764_H
#ifndef SAFEDICTIONARY_2_T2471229975_H
#define SAFEDICTIONARY_2_T2471229975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct  SafeDictionary_2_t2471229975  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_t621401388 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2471229975, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((&____padlock_0), value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2471229975, ____dictionary_1)); }
	inline Dictionary_2_t621401388 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_t621401388 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_t621401388 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEDICTIONARY_2_T2471229975_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef KEYCOLLECTION_T3055037934_H
#define KEYCOLLECTION_T3055037934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct  KeyCollection_t3055037934  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3055037934, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3055037934_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
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
#ifndef ACTIONEXTENSIONS_T2841879195_H
#define ACTIONEXTENSIONS_T2841879195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.ActionExtensions
struct  ActionExtensions_t2841879195  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONEXTENSIONS_T2841879195_H
#ifndef SIMPLEJSON_T2127621707_H
#define SIMPLEJSON_T2127621707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.SimpleJson
struct  SimpleJson_t2127621707  : public RuntimeObject
{
public:

public:
};

struct SimpleJson_t2127621707_StaticFields
{
public:
	// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::_currentJsonSerializerStrategy
	RuntimeObject* ____currentJsonSerializerStrategy_0;
	// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t352434764 * ____pocoJsonSerializerStrategy_1;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_0() { return static_cast<int32_t>(offsetof(SimpleJson_t2127621707_StaticFields, ____currentJsonSerializerStrategy_0)); }
	inline RuntimeObject* get__currentJsonSerializerStrategy_0() const { return ____currentJsonSerializerStrategy_0; }
	inline RuntimeObject** get_address_of__currentJsonSerializerStrategy_0() { return &____currentJsonSerializerStrategy_0; }
	inline void set__currentJsonSerializerStrategy_0(RuntimeObject* value)
	{
		____currentJsonSerializerStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((&____currentJsonSerializerStrategy_0), value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_1() { return static_cast<int32_t>(offsetof(SimpleJson_t2127621707_StaticFields, ____pocoJsonSerializerStrategy_1)); }
	inline PocoJsonSerializerStrategy_t352434764 * get__pocoJsonSerializerStrategy_1() const { return ____pocoJsonSerializerStrategy_1; }
	inline PocoJsonSerializerStrategy_t352434764 ** get_address_of__pocoJsonSerializerStrategy_1() { return &____pocoJsonSerializerStrategy_1; }
	inline void set__pocoJsonSerializerStrategy_1(PocoJsonSerializerStrategy_t352434764 * value)
	{
		____pocoJsonSerializerStrategy_1 = value;
		Il2CppCodeGenWriteBarrier((&____pocoJsonSerializerStrategy_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEJSON_T2127621707_H
#ifndef LIST_1_T2736452219_H
#define LIST_1_T2736452219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Action>
struct  List_1_t2736452219  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t388269512* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____items_1)); }
	inline ActionU5BU5D_t388269512* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t388269512** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t388269512* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2736452219_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ActionU5BU5D_t388269512* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2736452219_StaticFields, ___EmptyArray_4)); }
	inline ActionU5BU5D_t388269512* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ActionU5BU5D_t388269512** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ActionU5BU5D_t388269512* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2736452219_H
#ifndef STRINGEXTENSIONS_T2864061618_H
#define STRINGEXTENSIONS_T2864061618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.StringExtensions
struct  StringExtensions_t2864061618  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGEXTENSIONS_T2864061618_H
#ifndef UTILS_T3933113385_H
#define UTILS_T3933113385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Utils
struct  Utils_t3933113385  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T3933113385_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef U3CCREATEGETHANDLERU3EC__ANONSTOREY8_T2995215350_H
#define U3CCREATEGETHANDLERU3EC__ANONSTOREY8_T2995215350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8
struct  U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8::getMethodInfo
	MethodInfo_t * ___getMethodInfo_0;

public:
	inline static int32_t get_offset_of_getMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350, ___getMethodInfo_0)); }
	inline MethodInfo_t * get_getMethodInfo_0() const { return ___getMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_getMethodInfo_0() { return &___getMethodInfo_0; }
	inline void set_getMethodInfo_0(MethodInfo_t * value)
	{
		___getMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___getMethodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEGETHANDLERU3EC__ANONSTOREY8_T2995215350_H
#ifndef U3CCREATESETHANDLERU3EC__ANONSTOREY7_T1441835609_H
#define U3CCREATESETHANDLERU3EC__ANONSTOREY7_T1441835609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7
struct  U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATESETHANDLERU3EC__ANONSTOREY7_T1441835609_H
#ifndef SAFEDICTIONARY_2_T2470438330_H
#define SAFEDICTIONARY_2_T2470438330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct  SafeDictionary_2_t2470438330  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_t620609743 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2470438330, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((&____padlock_0), value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2470438330, ____dictionary_1)); }
	inline Dictionary_2_t620609743 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_t620609743 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_t620609743 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEDICTIONARY_2_T2470438330_H
#ifndef U3CCREATEGETHANDLERU3EC__ANONSTOREY6_T2995215360_H
#define U3CCREATEGETHANDLERU3EC__ANONSTOREY6_T2995215360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6
struct  U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEGETHANDLERU3EC__ANONSTOREY6_T2995215360_H
#ifndef U3CCREATESETHANDLERU3EC__ANONSTOREY9_T1441835615_H
#define U3CCREATESETHANDLERU3EC__ANONSTOREY9_T1441835615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9
struct  U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9::setMethodInfo
	MethodInfo_t * ___setMethodInfo_0;

public:
	inline static int32_t get_offset_of_setMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615, ___setMethodInfo_0)); }
	inline MethodInfo_t * get_setMethodInfo_0() const { return ___setMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_setMethodInfo_0() { return &___setMethodInfo_0; }
	inline void set_setMethodInfo_0(MethodInfo_t * value)
	{
		___setMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___setMethodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATESETHANDLERU3EC__ANONSTOREY9_T1441835615_H
#ifndef SAFEDICTIONARY_2_T2000356588_H
#define SAFEDICTIONARY_2_T2000356588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct  SafeDictionary_2_t2000356588  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_t150528001 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2000356588, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((&____padlock_0), value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t2000356588, ____dictionary_1)); }
	inline Dictionary_2_t150528001 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_t150528001 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_t150528001 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEDICTIONARY_2_T2000356588_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_t1632706988 * ____responseHeaders_1;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}

	inline static int32_t get_offset_of__responseHeaders_1() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____responseHeaders_1)); }
	inline Dictionary_2_t1632706988 * get__responseHeaders_1() const { return ____responseHeaders_1; }
	inline Dictionary_2_t1632706988 ** get_address_of__responseHeaders_1() { return &____responseHeaders_1; }
	inline void set__responseHeaders_1(Dictionary_2_t1632706988 * value)
	{
		____responseHeaders_1 = value;
		Il2CppCodeGenWriteBarrier((&____responseHeaders_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef KEYVALUEPAIR_2_T3019073555_H
#define KEYVALUEPAIR_2_T3019073555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct  KeyValuePair_2_t3019073555 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberMap_t836145089 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3019073555, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3019073555, ___value_1)); }
	inline MemberMap_t836145089 * get_value_1() const { return ___value_1; }
	inline MemberMap_t836145089 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemberMap_t836145089 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3019073555_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef JSONARRAY_T3489669405_H
#define JSONARRAY_T3489669405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonArray
struct  JsonArray_t3489669405  : public List_1_t257213610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T3489669405_H
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
#ifndef JSONOBJECT_T3223138545_H
#define JSONOBJECT_T3223138545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonObject
struct  JsonObject_t3223138545  : public Dictionary_2_t2865362463
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T3223138545_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef UNITYEXCEPTION_T3598173660_H
#define UNITYEXCEPTION_T3598173660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3598173660  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3598173660_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef TYPE_T3858932131_H
#define TYPE_T3858932131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3858932131 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3858932131, ___value___1)); }
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
#endif // TYPE_T3858932131_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
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
#endif // LOGTYPE_T73765434_H
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
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
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
#ifndef HTTPVERB_T4264241278_H
#define HTTPVERB_T4264241278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.HTTPVerb
struct  HTTPVerb_t4264241278 
{
public:
	// System.Int32 Prime31.HTTPVerb::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HTTPVerb_t4264241278, ___value___1)); }
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
#endif // HTTPVERB_T4264241278_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef JSONTOKEN_T774650801_H
#define JSONTOKEN_T774650801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/Deserializer/JsonToken
struct  JsonToken_t774650801 
{
public:
	// System.Int32 Prime31.Json/Deserializer/JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t774650801, ___value___1)); }
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
#endif // JSONTOKEN_T774650801_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ENUMERATOR_T524577942_H
#define ENUMERATOR_T524577942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t524577942 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t968067334  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___current_3)); }
	inline KeyValuePair_2_t968067334  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t968067334 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t968067334  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T524577942_H
#ifndef JSONCONTEXTTYPE_T2476714068_H
#define JSONCONTEXTTYPE_T2476714068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonFormatter/JsonContextType
struct  JsonContextType_t2476714068 
{
public:
	// System.Int32 Prime31.JsonFormatter/JsonContextType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonContextType_t2476714068, ___value___1)); }
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
#endif // JSONCONTEXTTYPE_T2476714068_H
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
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef ENUMERATOR_T3586889763_H
#define ENUMERATOR_T3586889763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_t3586889763 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1632706988 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4030379155  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___dictionary_0)); }
	inline Dictionary_2_t1632706988 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1632706988 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___current_3)); }
	inline KeyValuePair_2_t4030379155  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4030379155 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4030379155  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3586889763_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef GUILAYOUTOPTION_T811797299_H
#define GUILAYOUTOPTION_T811797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t811797299  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T811797299_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
#ifndef ENUMERATOR_T3047539447_H
#define ENUMERATOR_T3047539447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
struct  Enumerator_t3047539447 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t524577942  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3047539447, ___host_enumerator_0)); }
	inline Enumerator_t524577942  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t524577942 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t524577942  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3047539447_H
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
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef U3CSENDU3EC__ITERATOR0_T1520858258_H
#define U3CSENDU3EC__ITERATOR0_T1520858258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.P31RestKit/<send>c__Iterator0
struct  U3CsendU3Ec__Iterator0_t1520858258  : public RuntimeObject
{
public:
	// System.String Prime31.P31RestKit/<send>c__Iterator0::path
	String_t* ___path_0;
	// Prime31.HTTPVerb Prime31.P31RestKit/<send>c__Iterator0::httpVerb
	int32_t ___httpVerb_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Prime31.P31RestKit/<send>c__Iterator0::parameters
	Dictionary_2_t2865362463 * ___parameters_2;
	// UnityEngine.WWW Prime31.P31RestKit/<send>c__Iterator0::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_3;
	// System.Action`2<System.String,System.Object> Prime31.P31RestKit/<send>c__Iterator0::onComplete
	Action_2_t907858853 * ___onComplete_4;
	// Prime31.P31RestKit Prime31.P31RestKit/<send>c__Iterator0::$this
	P31RestKit_t3519255076 * ___U24this_5;
	// System.Object Prime31.P31RestKit/<send>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean Prime31.P31RestKit/<send>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 Prime31.P31RestKit/<send>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((&___path_0), value);
	}

	inline static int32_t get_offset_of_httpVerb_1() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___httpVerb_1)); }
	inline int32_t get_httpVerb_1() const { return ___httpVerb_1; }
	inline int32_t* get_address_of_httpVerb_1() { return &___httpVerb_1; }
	inline void set_httpVerb_1(int32_t value)
	{
		___httpVerb_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___parameters_2)); }
	inline Dictionary_2_t2865362463 * get_parameters_2() const { return ___parameters_2; }
	inline Dictionary_2_t2865362463 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(Dictionary_2_t2865362463 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_2), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_3() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___U3CwwwU3E__0_3)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_3() const { return ___U3CwwwU3E__0_3; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_3() { return &___U3CwwwU3E__0_3; }
	inline void set_U3CwwwU3E__0_3(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_3), value);
	}

	inline static int32_t get_offset_of_onComplete_4() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___onComplete_4)); }
	inline Action_2_t907858853 * get_onComplete_4() const { return ___onComplete_4; }
	inline Action_2_t907858853 ** get_address_of_onComplete_4() { return &___onComplete_4; }
	inline void set_onComplete_4(Action_2_t907858853 * value)
	{
		___onComplete_4 = value;
		Il2CppCodeGenWriteBarrier((&___onComplete_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___U24this_5)); }
	inline P31RestKit_t3519255076 * get_U24this_5() const { return ___U24this_5; }
	inline P31RestKit_t3519255076 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(P31RestKit_t3519255076 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__Iterator0_t1520858258, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDU3EC__ITERATOR0_T1520858258_H
#ifndef GUISKIN_T1244372282_H
#define GUISKIN_T1244372282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1244372282  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1956802104 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3956901511 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3956901511 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3956901511 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3956901511 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3956901511 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3956901511 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3956901511 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3956901511 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3956901511 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3956901511 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3956901511 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3956901511 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3956901511 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3956901511 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3956901511 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3956901511 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2383250302* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1774757634 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3742157810 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Font_2)); }
	inline Font_t1956802104 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t1956802104 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t1956802104 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_box_3)); }
	inline GUIStyle_t3956901511 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t3956901511 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t3956901511 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_button_4)); }
	inline GUIStyle_t3956901511 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t3956901511 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t3956901511 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_toggle_5)); }
	inline GUIStyle_t3956901511 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t3956901511 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_label_6)); }
	inline GUIStyle_t3956901511 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t3956901511 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t3956901511 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textField_7)); }
	inline GUIStyle_t3956901511 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t3956901511 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textArea_8)); }
	inline GUIStyle_t3956901511 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t3956901511 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_window_9)); }
	inline GUIStyle_t3956901511 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t3956901511 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t3956901511 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSlider_10)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSlider_12)); }
	inline GUIStyle_t3956901511 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t3956901511 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t3956901511 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t3956901511 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_ScrollView_22)); }
	inline GUIStyle_t3956901511 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t3956901511 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t3956901511 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2383250302* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2383250302* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Settings_24)); }
	inline GUISettings_t1774757634 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t1774757634 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t1774757634 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Styles_26)); }
	inline Dictionary_2_t3742157810 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3742157810 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3742157810 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1244372282_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3956901511 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1143955295 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1244372282 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t3956901511 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t3956901511 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t3956901511 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t1143955295 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t1143955295 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t1143955295 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___current_28)); }
	inline GUISkin_t1244372282 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1244372282 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1244372282 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1244372282_H
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
#ifndef LOGCALLBACK_T3588208630_H
#define LOGCALLBACK_T3588208630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3588208630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3588208630_H
#ifndef SETHANDLER_T2014308932_H
#define SETHANDLER_T2014308932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.SetHandler
struct  SetHandler_t2014308932  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETHANDLER_T2014308932_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_2_T907858853_H
#define ACTION_2_T907858853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.String,System.Object>
struct  Action_2_t907858853  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T907858853_H
#ifndef MEMBERMAPLOADER_T2688037604_H
#define MEMBERMAPLOADER_T2688037604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.MemberMapLoader
struct  MemberMapLoader_t2688037604  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMAPLOADER_T2688037604_H
#ifndef GETHANDLER_T3299076676_H
#define GETHANDLER_T3299076676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.GetHandler
struct  GetHandler_t3299076676  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETHANDLER_T3299076676_H
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
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef CTORDELEGATE_T2001148233_H
#define CTORDELEGATE_T2001148233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/CtorDelegate
struct  CtorDelegate_t2001148233  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CTORDELEGATE_T2001148233_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef MONOBEHAVIOURGUI_T3872523344_H
#define MONOBEHAVIOURGUI_T3872523344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.MonoBehaviourGUI
struct  MonoBehaviourGUI_t3872523344  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Prime31.MonoBehaviourGUI::_width
	float ____width_2;
	// System.Single Prime31.MonoBehaviourGUI::_buttonHeight
	float ____buttonHeight_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Prime31.MonoBehaviourGUI::_toggleButtons
	Dictionary_2_t4177511560 * ____toggleButtons_4;
	// System.Text.StringBuilder Prime31.MonoBehaviourGUI::_logBuilder
	StringBuilder_t * ____logBuilder_5;
	// System.Boolean Prime31.MonoBehaviourGUI::_logRegistered
	bool ____logRegistered_6;
	// UnityEngine.Vector2 Prime31.MonoBehaviourGUI::_logScrollPosition
	Vector2_t2156229523  ____logScrollPosition_7;
	// System.Boolean Prime31.MonoBehaviourGUI::_isShowingLogConsole
	bool ____isShowingLogConsole_8;
	// System.Single Prime31.MonoBehaviourGUI::_doubleClickDelay
	float ____doubleClickDelay_9;
	// System.Single Prime31.MonoBehaviourGUI::_previousClickTime
	float ____previousClickTime_10;
	// System.Boolean Prime31.MonoBehaviourGUI::_isWindowsPhone
	bool ____isWindowsPhone_11;

public:
	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__buttonHeight_3() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____buttonHeight_3)); }
	inline float get__buttonHeight_3() const { return ____buttonHeight_3; }
	inline float* get_address_of__buttonHeight_3() { return &____buttonHeight_3; }
	inline void set__buttonHeight_3(float value)
	{
		____buttonHeight_3 = value;
	}

	inline static int32_t get_offset_of__toggleButtons_4() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____toggleButtons_4)); }
	inline Dictionary_2_t4177511560 * get__toggleButtons_4() const { return ____toggleButtons_4; }
	inline Dictionary_2_t4177511560 ** get_address_of__toggleButtons_4() { return &____toggleButtons_4; }
	inline void set__toggleButtons_4(Dictionary_2_t4177511560 * value)
	{
		____toggleButtons_4 = value;
		Il2CppCodeGenWriteBarrier((&____toggleButtons_4), value);
	}

	inline static int32_t get_offset_of__logBuilder_5() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____logBuilder_5)); }
	inline StringBuilder_t * get__logBuilder_5() const { return ____logBuilder_5; }
	inline StringBuilder_t ** get_address_of__logBuilder_5() { return &____logBuilder_5; }
	inline void set__logBuilder_5(StringBuilder_t * value)
	{
		____logBuilder_5 = value;
		Il2CppCodeGenWriteBarrier((&____logBuilder_5), value);
	}

	inline static int32_t get_offset_of__logRegistered_6() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____logRegistered_6)); }
	inline bool get__logRegistered_6() const { return ____logRegistered_6; }
	inline bool* get_address_of__logRegistered_6() { return &____logRegistered_6; }
	inline void set__logRegistered_6(bool value)
	{
		____logRegistered_6 = value;
	}

	inline static int32_t get_offset_of__logScrollPosition_7() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____logScrollPosition_7)); }
	inline Vector2_t2156229523  get__logScrollPosition_7() const { return ____logScrollPosition_7; }
	inline Vector2_t2156229523 * get_address_of__logScrollPosition_7() { return &____logScrollPosition_7; }
	inline void set__logScrollPosition_7(Vector2_t2156229523  value)
	{
		____logScrollPosition_7 = value;
	}

	inline static int32_t get_offset_of__isShowingLogConsole_8() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____isShowingLogConsole_8)); }
	inline bool get__isShowingLogConsole_8() const { return ____isShowingLogConsole_8; }
	inline bool* get_address_of__isShowingLogConsole_8() { return &____isShowingLogConsole_8; }
	inline void set__isShowingLogConsole_8(bool value)
	{
		____isShowingLogConsole_8 = value;
	}

	inline static int32_t get_offset_of__doubleClickDelay_9() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____doubleClickDelay_9)); }
	inline float get__doubleClickDelay_9() const { return ____doubleClickDelay_9; }
	inline float* get_address_of__doubleClickDelay_9() { return &____doubleClickDelay_9; }
	inline void set__doubleClickDelay_9(float value)
	{
		____doubleClickDelay_9 = value;
	}

	inline static int32_t get_offset_of__previousClickTime_10() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____previousClickTime_10)); }
	inline float get__previousClickTime_10() const { return ____previousClickTime_10; }
	inline float* get_address_of__previousClickTime_10() { return &____previousClickTime_10; }
	inline void set__previousClickTime_10(float value)
	{
		____previousClickTime_10 = value;
	}

	inline static int32_t get_offset_of__isWindowsPhone_11() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t3872523344, ____isWindowsPhone_11)); }
	inline bool get__isWindowsPhone_11() const { return ____isWindowsPhone_11; }
	inline bool* get_address_of__isWindowsPhone_11() { return &____isWindowsPhone_11; }
	inline void set__isWindowsPhone_11(bool value)
	{
		____isWindowsPhone_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOURGUI_T3872523344_H
#ifndef ABSTRACTMANAGER_T1896924750_H
#define ABSTRACTMANAGER_T1896924750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.AbstractManager
struct  AbstractManager_t1896924750  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct AbstractManager_t1896924750_StaticFields
{
public:
	// UnityEngine.MonoBehaviour Prime31.AbstractManager::_prime31GameObjectMonobehaviourRef
	MonoBehaviour_t3962482529 * ____prime31GameObjectMonobehaviourRef_2;
	// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::_threadingCallbackHelper
	ThreadingCallbackHelper_t4258926486 * ____threadingCallbackHelper_3;
	// UnityEngine.GameObject Prime31.AbstractManager::_prime31GameObject
	GameObject_t1113636619 * ____prime31GameObject_4;

public:
	inline static int32_t get_offset_of__prime31GameObjectMonobehaviourRef_2() { return static_cast<int32_t>(offsetof(AbstractManager_t1896924750_StaticFields, ____prime31GameObjectMonobehaviourRef_2)); }
	inline MonoBehaviour_t3962482529 * get__prime31GameObjectMonobehaviourRef_2() const { return ____prime31GameObjectMonobehaviourRef_2; }
	inline MonoBehaviour_t3962482529 ** get_address_of__prime31GameObjectMonobehaviourRef_2() { return &____prime31GameObjectMonobehaviourRef_2; }
	inline void set__prime31GameObjectMonobehaviourRef_2(MonoBehaviour_t3962482529 * value)
	{
		____prime31GameObjectMonobehaviourRef_2 = value;
		Il2CppCodeGenWriteBarrier((&____prime31GameObjectMonobehaviourRef_2), value);
	}

	inline static int32_t get_offset_of__threadingCallbackHelper_3() { return static_cast<int32_t>(offsetof(AbstractManager_t1896924750_StaticFields, ____threadingCallbackHelper_3)); }
	inline ThreadingCallbackHelper_t4258926486 * get__threadingCallbackHelper_3() const { return ____threadingCallbackHelper_3; }
	inline ThreadingCallbackHelper_t4258926486 ** get_address_of__threadingCallbackHelper_3() { return &____threadingCallbackHelper_3; }
	inline void set__threadingCallbackHelper_3(ThreadingCallbackHelper_t4258926486 * value)
	{
		____threadingCallbackHelper_3 = value;
		Il2CppCodeGenWriteBarrier((&____threadingCallbackHelper_3), value);
	}

	inline static int32_t get_offset_of__prime31GameObject_4() { return static_cast<int32_t>(offsetof(AbstractManager_t1896924750_StaticFields, ____prime31GameObject_4)); }
	inline GameObject_t1113636619 * get__prime31GameObject_4() const { return ____prime31GameObject_4; }
	inline GameObject_t1113636619 ** get_address_of__prime31GameObject_4() { return &____prime31GameObject_4; }
	inline void set__prime31GameObject_4(GameObject_t1113636619 * value)
	{
		____prime31GameObject_4 = value;
		Il2CppCodeGenWriteBarrier((&____prime31GameObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTMANAGER_T1896924750_H
#ifndef THREADINGCALLBACKHELPER_T4258926486_H
#define THREADINGCALLBACKHELPER_T4258926486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.ThreadingCallbackHelper
struct  ThreadingCallbackHelper_t4258926486  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_actions
	List_1_t2736452219 * ____actions_2;
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_currentActions
	List_1_t2736452219 * ____currentActions_3;

public:
	inline static int32_t get_offset_of__actions_2() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t4258926486, ____actions_2)); }
	inline List_1_t2736452219 * get__actions_2() const { return ____actions_2; }
	inline List_1_t2736452219 ** get_address_of__actions_2() { return &____actions_2; }
	inline void set__actions_2(List_1_t2736452219 * value)
	{
		____actions_2 = value;
		Il2CppCodeGenWriteBarrier((&____actions_2), value);
	}

	inline static int32_t get_offset_of__currentActions_3() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t4258926486, ____currentActions_3)); }
	inline List_1_t2736452219 * get__currentActions_3() const { return ____currentActions_3; }
	inline List_1_t2736452219 ** get_address_of__currentActions_3() { return &____currentActions_3; }
	inline void set__currentActions_3(List_1_t2736452219 * value)
	{
		____currentActions_3 = value;
		Il2CppCodeGenWriteBarrier((&____currentActions_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGCALLBACKHELPER_T4258926486_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t811797299 * m_Items[1];

public:
	inline GUILayoutOption_t811797299 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t811797299 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m93346280_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t314722136  KeyCollection_GetEnumerator_m982770428_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m3687673883_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m76191888_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_m2356622719_gshared (Stack_1_t3320103523 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1716089596_gshared (Stack_1_t3320103523 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Peek()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m3875692595_gshared (Stack_1_t3320103523 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m3601772963_gshared (Stack_1_t3320103523 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Pop()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m1190955677_gshared (Stack_1_t3320103523 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m236774955_gshared (Dictionary_2_t1444694249 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1703962396_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m351745166_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, bool p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_m872229925_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m4187243487_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::add(TKey,TValue)
extern "C" IL2CPP_METHOD_ATTR void SafeDictionary_2_add_m2754764359_gshared (SafeDictionary_2_t1982373739 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SafeDictionary_2_GetEnumerator_m2088599304_gshared (SafeDictionary_2_t1982373739 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SafeDictionary_2__ctor_m2747444848_gshared (SafeDictionary_2_t1982373739 * __this, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::tryGetValue(TKey,TValue&)
extern "C" IL2CPP_METHOD_ATTR bool SafeDictionary_2_tryGetValue_m1397413251_gshared (SafeDictionary_2_t1982373739 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject Prime31.AbstractManager::getPrime31ManagerGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * AbstractManager_getPrime31ManagerGameObject_m1350319744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MonoBehaviour>()
#define GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400(__this, method) ((  MonoBehaviour_t3962482529 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_FindObjectOfType_m67275058 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Prime31.ThreadingCallbackHelper>()
#define GameObject_AddComponent_TisThreadingCallbackHelper_t4258926486_m234785792(__this, method) ((  ThreadingCallbackHelper_t4258926486 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m3071622864 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m2399864271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m2361978888 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void Prime31.ActionExtensions::invoke(System.Delegate,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void ActionExtensions_invoke_m1944200621 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___listener0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Object Prime31.SimpleJson::decode(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_decode_m1626785732 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::deserialize(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m3490139499 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Prime31.Utils::logObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Utils_logObject_m1352880344 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Prime31.SimpleJson::encode(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_encode_m2826025421 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Prime31.Json/Serializer::serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_serialize_m2113405956 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Void Prime31.Json/Deserializer::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Deserializer__ctor_m3061589585 (Deserializer_t1361861692 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::deserialize()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m718278151 (Deserializer_t1361861692 * __this, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::parseValue(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseValue_m275038268 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::lookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_lookAhead_m3895211948 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String Prime31.Json/Deserializer::parseString(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR String_t* Deserializer_parseString_m2542394221 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::parseNumber(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseNumber_m1002354842 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Collections.IDictionary Prime31.Json/Deserializer::parseObject(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseObject_m242742785 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Collections.IList Prime31.Json/Deserializer::parseArray(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseArray_m32602812 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::nextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_nextToken_m195645131 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Boolean System.Boolean::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Parse_m2370352694 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m303517795(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Prime31.Json/Deserializer::eatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Deserializer_eatWhitespace_m1682480516 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m354267551 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.Char::ConvertFromUtf32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ConvertFromUtf32_m2726544766 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 Prime31.Json/Deserializer::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_getLastIndexOfNumber_m133144268 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Double_Parse_m3456374109 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m4287989410 (Serializer_t2740194910 * __this, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeObject_m1661408100 (Serializer_t2740194910 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeString_m2125783434 (Serializer_t2740194910 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeIList(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeIList_m889817702 (Serializer_t2740194910 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeDictionary_m753622930 (Serializer_t2740194910 * __this, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeIDictionary(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeIDictionary_m1141959864 (Serializer_t2740194910 * __this, RuntimeObject* ___dict0, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DateTime_Subtract_m77007479 (DateTime_t3738529785 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m2429771311 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1282703378 (RuntimeObject * __this /* static, unused */, double p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeClass(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeClass_m1530331333 (Serializer_t2740194910 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m7908668(__this, method) ((  KeyCollection_t3055037934 * (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
#define KeyCollection_GetEnumerator_m565767158(__this, method) ((  Enumerator_t3047539447  (*) (KeyCollection_t3055037934 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m982770428_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
#define Enumerator_get_Current_m2500734324(__this, method) ((  String_t* (*) (Enumerator_t3047539447 *, const RuntimeMethod*))Enumerator_get_Current_m3687673883_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m1204235524(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
#define Enumerator_MoveNext_m1838953748(__this, method) ((  bool (*) (Enumerator_t3047539447 *, const RuntimeMethod*))Enumerator_MoveNext_m76191888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
#define Enumerator_Dispose_m294432494(__this, method) ((  void (*) (Enumerator_t3047539447 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method)
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m3211312035 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m2142825503 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* String_PadLeft_m1263950263 (String_t* __this, int32_t p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m1717932363 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.String Prime31.JsonFormatter::prettyPrint(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonFormatter_prettyPrint_m556974798 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method);
// System.String Prime31.Json::encode(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Json_encode_m1889278415 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Object Prime31.Json::decode(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_decode_m1423667791 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::.ctor()
#define Stack_1__ctor_m2356622719(__this, method) ((  void (*) (Stack_1_t3320103523 *, const RuntimeMethod*))Stack_1__ctor_m2356622719_gshared)(__this, method)
// System.Void Prime31.JsonFormatter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m3996231688 (JsonFormatter_t2365363476 * __this, const RuntimeMethod* method);
// System.String Prime31.JsonFormatter::print(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonFormatter_print_m2888455803 (JsonFormatter_t2365363476 * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean Prime31.JsonFormatter::inString()
extern "C" IL2CPP_METHOD_ATTR bool JsonFormatter_inString_m2472391709 (JsonFormatter_t2365363476 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::get_Count()
#define Stack_1_get_Count_m1716089596(__this, method) ((  int32_t (*) (Stack_1_t3320103523 *, const RuntimeMethod*))Stack_1_get_Count_m1716089596_gshared)(__this, method)
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Peek()
#define Stack_1_Peek_m3875692595(__this, method) ((  int32_t (*) (Stack_1_t3320103523 *, const RuntimeMethod*))Stack_1_Peek_m3875692595_gshared)(__this, method)
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Prime31.JsonFormatter::buildIndents(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void JsonFormatter_buildIndents_m987969659 (RuntimeObject * __this /* static, unused */, int32_t ___indents0, StringBuilder_t * ___output1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Push(!0)
#define Stack_1_Push_m3601772963(__this, p0, method) ((  void (*) (Stack_1_t3320103523 *, int32_t, const RuntimeMethod*))Stack_1_Push_m3601772963_gshared)(__this, p0, method)
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Pop()
#define Stack_1_Pop_m1190955677(__this, method) ((  int32_t (*) (Stack_1_t3320103523 *, const RuntimeMethod*))Stack_1_Pop_m1190955677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
#define Dictionary_2__ctor_m1500660071(__this, method) ((  void (*) (Dictionary_2_t4177511560 *, const RuntimeMethod*))Dictionary_2__ctor_m236774955_gshared)(__this, method)
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUISkin_get_label_m1693050720 (GUISkin_t1244372282 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  GUILayout_BeginScrollView_m3542895037 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, GUILayoutOptionU5BU5D_t2510215842* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR bool GUILayout_Button_m1340817034 (RuntimeObject * __this /* static, unused */, String_t* p0, GUILayoutOptionU5BU5D_t2510215842* p1, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m940064945 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayout_Label_m1960000298 (RuntimeObject * __this /* static, unused */, String_t* p0, GUILayoutOptionU5BU5D_t2510215842* p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" IL2CPP_METHOD_ATTR void GUILayout_EndScrollView_m1561653937 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_m484975236 (RuntimeObject * __this /* static, unused */, LogCallback_t3588208630 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void LogCallback__ctor_m144650965 (LogCallback_t3588208630 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaOrLargeScreen()
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaOrLargeScreen_m1925671948 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUISkin_get_button_m2792560996 (GUISkin_t1244372282 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_margin_m161080110 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_stretchWidth_m2564034386 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fixedHeight_m4105472229 (GUIStyle_t3956901511 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m3340577749 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_m1213265852 (RuntimeObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2510215842* p0, const RuntimeMethod* method);
// System.Void Prime31.MonoBehaviourGUI::endColumn(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m694865531 (MonoBehaviourGUI_t3872523344 * __this, bool ___hasSecondColumn0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" IL2CPP_METHOD_ATTR void GUILayout_EndVertical_m3051805938 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" IL2CPP_METHOD_ATTR void GUILayout_EndArea_m2046611416 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUILayout_Window_m4256324736 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, GUILayoutOptionU5BU5D_t2510215842* p4, const RuntimeMethod* method);
// System.Void Prime31.MonoBehaviourGUI::beginRightColumn()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginRightColumn_m3460824730 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m93706162(__this, p0, method) ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1703962396_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m4020705531(__this, p0, p1, method) ((  void (*) (Dictionary_2_t4177511560 *, String_t*, bool, const RuntimeMethod*))Dictionary_2_set_Item_m351745166_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
#define Dictionary_2_get_Item_m2314420255(__this, p0, method) ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m872229925_gshared)(__this, p0, method)
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m1497341802 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_contentColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_contentColor_m1403854338 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Prime31.P31Error::.ctor()
extern "C" IL2CPP_METHOD_ATTR void P31Error__ctor_m1686858238 (P31Error_t2299173450 * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void Prime31.P31Error::set_message(System.String)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_message_m2402050292 (P31Error_t2299173450 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1680405325(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void Prime31.P31Error::set_domain(System.String)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_domain_m2353820401 (P31Error_t2299173450 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Prime31.P31Error::set_code(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_code_m1794968022 (P31Error_t2299173450 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Prime31.P31Error::set_userInfo(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_userInfo_m3746872740 (P31Error_t2299173450 * __this, Dictionary_2_t2865362463 * ___value0, const RuntimeMethod* method);
// System.String Prime31.P31Error::get_message()
extern "C" IL2CPP_METHOD_ATTR String_t* P31Error_get_message_m3714158006 (P31Error_t2299173450 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Prime31.P31RestKit/<send>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsendU3Ec__Iterator0__ctor_m4236497672 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m1568726197(__this, method) ((  int32_t (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3695584085(__this, method) ((  Enumerator_t524577942  (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
#define Enumerator_get_Current_m1121422282(__this, method) ((  KeyValuePair_2_t968067334  (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m639768272(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1625637660(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m3250149150 (WWWForm_t4064702195 * __this, String_t* p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
#define Enumerator_MoveNext_m912154270(__this, method) ((  bool (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
#define Enumerator_Dispose_m2607424534(__this, method) ((  void (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m4251687403 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m2403596038 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" IL2CPP_METHOD_ATTR void WWW__ctor_m1562165 (WWW_t3688466362 * __this, String_t* p0, WWWForm_t4064702195 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.String,System.Object>::Invoke(!0,!1)
#define Action_2_Invoke_m4170584757(__this, p0, p1, method) ((  void (*) (Action_2_t907858853 *, String_t*, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_m4187243487_gshared)(__this, p0, p1, method)
// System.Boolean Prime31.P31RestKit::isResponseJson(UnityEngine.WWW)
extern "C" IL2CPP_METHOD_ATTR bool P31RestKit_isResponseJson_m2716641910 (P31RestKit_t3519255076 * __this, WWW_t3688466362 * ___www0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_text_m898164367 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * WWW_get_responseHeaders_m4105369968 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1883005577(__this, method) ((  Enumerator_t3586889763  (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
#define Enumerator_get_Current_m4125185638(__this, method) ((  KeyValuePair_2_t4030379155  (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
#define KeyValuePair_2_get_Key_m3938572407(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
#define KeyValuePair_2_get_Value_m2642806556(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m897800495(__this, method) ((  bool (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m2198401511(__this, method) ((  void (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// UnityEngine.MonoBehaviour Prime31.P31RestKit::get_surrogateMonobehaviour()
extern "C" IL2CPP_METHOD_ATTR MonoBehaviour_t3962482529 * P31RestKit_get_surrogateMonobehaviour_m3047038679 (P31RestKit_t3519255076 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WWW_Dispose_m2256148703 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.MemberMapLoader::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MemberMapLoader__ctor_m2662681142 (MemberMapLoader_t2688037604 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver::.ctor(Prime31.Reflection.MemberMapLoader)
extern "C" IL2CPP_METHOD_ATTR void CacheResolver__ctor_m3118824830 (CacheResolver_t2531652178 * __this, MemberMapLoader_t2688037604 * ___memberMapLoader0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR void MemberMap__ctor_m3179035751 (MemberMap_t836145089 * __this, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::add(TKey,TValue)
#define SafeDictionary_2_add_m3627088684(__this, p0, p1, method) ((  void (*) (SafeDictionary_2_t2471229975 *, String_t*, MemberMap_t836145089 *, const RuntimeMethod*))SafeDictionary_2_add_m2754764359_gshared)(__this, p0, p1, method)
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR void MemberMap__ctor_m440999168 (MemberMap_t836145089 * __this, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4017511472 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m2992030064 (DateTime_t3738529785 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m4056316049 (Guid_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Prime31.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m2436297384 (JsonObject_t3223138545 * __this, const RuntimeMethod* method);
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap> Prime31.Reflection.CacheResolver::loadMaps(System.Type)
extern "C" IL2CPP_METHOD_ATTR SafeDictionary_2_t2471229975 * CacheResolver_loadMaps_m2720418289 (CacheResolver_t2531652178 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::GetEnumerator()
#define SafeDictionary_2_GetEnumerator_m2877288426(__this, method) ((  RuntimeObject* (*) (SafeDictionary_2_t2471229975 *, const RuntimeMethod*))SafeDictionary_2_GetEnumerator_m2088599304_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::get_Value()
#define KeyValuePair_2_get_Value_m652726869(__this, method) ((  MemberMap_t836145089 * (*) (KeyValuePair_2_t3019073555 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::get_Key()
#define KeyValuePair_2_get_Key_m1492108111(__this, method) ((  String_t* (*) (KeyValuePair_2_t3019073555 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Object Prime31.Reflection.GetHandler::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_Invoke_m834614475 (GetHandler_t3299076676 * __this, RuntimeObject * ___source0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::.ctor()
#define SafeDictionary_2__ctor_m823189424(__this, method) ((  void (*) (SafeDictionary_2_t2470438330 *, const RuntimeMethod*))SafeDictionary_2__ctor_m2747444848_gshared)(__this, method)
// System.Boolean Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::tryGetValue(TKey,TValue&)
#define SafeDictionary_2_tryGetValue_m335560591(__this, p0, p1, method) ((  bool (*) (SafeDictionary_2_t2470438330 *, Type_t *, SafeDictionary_2_t2471229975 **, const RuntimeMethod*))SafeDictionary_2_tryGetValue_m1397413251_gshared)(__this, p0, p1, method)
// System.Void Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::.ctor()
#define SafeDictionary_2__ctor_m3987949131(__this, method) ((  void (*) (SafeDictionary_2_t2471229975 *, const RuntimeMethod*))SafeDictionary_2__ctor_m2747444848_gshared)(__this, method)
// System.Void Prime31.Reflection.MemberMapLoader::Invoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
extern "C" IL2CPP_METHOD_ATTR void MemberMapLoader_Invoke_m2151729912 (MemberMapLoader_t2688037604 * __this, Type_t * ___type0, SafeDictionary_2_t2471229975 * ___memberMaps1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::add(TKey,TValue)
#define SafeDictionary_2_add_m1486334210(__this, p0, p1, method) ((  void (*) (SafeDictionary_2_t2470438330 *, Type_t *, SafeDictionary_2_t2471229975 *, const RuntimeMethod*))SafeDictionary_2_add_m2754764359_gshared)(__this, p0, p1, method)
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey6__ctor_m1993602305 (U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.GetHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetHandler__ctor_m2564531840 (GetHandler_t3299076676 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey7__ctor_m1632384262 (U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_m534699794 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SetHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetHandler__ctor_m4159545462 (SetHandler_t2014308932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey8__ctor_m2068621480 (U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey9__ctor_m1231327959 (U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>::.ctor()
#define SafeDictionary_2__ctor_m120655008(__this, method) ((  void (*) (SafeDictionary_2_t2000356588 *, const RuntimeMethod*))SafeDictionary_2__ctor_m2747444848_gshared)(__this, method)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_Invoke_m120192598 (CtorDelegate_t2001148233 * __this, const RuntimeMethod* method);
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetHandler_t3299076676 * CacheResolver_createGetHandler_m3073072090 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetHandler_t2014308932 * CacheResolver_createSetHandler_m1896877026 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetHandler_t3299076676 * CacheResolver_createGetHandler_m2255824026 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetHandler_t2014308932 * CacheResolver_createSetHandler_m2231842901 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SetHandler::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetHandler_Invoke_m649192387 (SetHandler_t2014308932 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::get_pocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t352434764 * SimpleJson_get_pocoJsonSerializerStrategy_m73467356 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Prime31.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m70961122 (PocoJsonSerializerStrategy_t352434764 * __this, const RuntimeMethod* method);
// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::get_currentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_currentJsonSerializerStrategy_m3004021273 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeValue(Prime31.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeValue_m53220749 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Object Prime31.SimpleJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseValue_m203415862 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::tryDeserializeObject(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_tryDeserializeObject_m2550591590 (RuntimeObject * __this /* static, unused */, String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::nextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_nextToken_m2753128588 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::lookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_lookAhead_m2637538892 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String Prime31.SimpleJson::parseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_parseString_m895412165 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void Prime31.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m1280052619 (JsonArray_t3489669405 * __this, const RuntimeMethod* method);
// System.Object Prime31.SimpleJson::parseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseNumber_m1677018383 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Prime31.SimpleJson::parseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_parseObject_m1846159692 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// Prime31.JsonArray Prime31.SimpleJson::parseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3489669405 * SimpleJson_parseArray_m4163451773 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void Prime31.SimpleJson::eatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_eatWhitespace_m423768790 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, uint32_t* p3, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_getLastIndexOfNumber_m607293295 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeString_m941481939 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeObject(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeObject_m2553940162 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeArray(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeArray_m1886521706 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::isNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_isNumeric_m428706617 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeNumber_m614106910 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m623640997 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m3653216873 (Decimal_t2948259380 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3107811250 (float* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m3302800229(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m633427275(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
#define List_1__ctor_m1022708252(__this, method) ((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
#define List_1_Add_m3047321800(__this, p0, method) ((  void (*) (List_1_t2736452219 *, Action_t1264377477 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2553796114(__this, p0, method) ((  void (*) (List_1_t2736452219 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
#define List_1_Clear_m2660395247(__this, method) ((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
#define List_1_get_Item_m1090641809(__this, p0, method) ((  Action_t1264377477 * (*) (List_1_t2736452219 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
#define List_1_get_Count_m1660900424(__this, method) ((  int32_t (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void Prime31.Utils::prettyPrintJson(System.String)
extern "C" IL2CPP_METHOD_ATTR void Utils_prettyPrintJson_m112161862 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_m4182570127 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
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
// UnityEngine.MonoBehaviour Prime31.AbstractManager::get_coroutineSurrogate()
extern "C" IL2CPP_METHOD_ATTR MonoBehaviour_t3962482529 * AbstractManager_get_coroutineSurrogate_m4138890983 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_get_coroutineSurrogate_m4138890983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		MonoBehaviour_t3962482529 * L_0 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObjectMonobehaviourRef_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = AbstractManager_getPrime31ManagerGameObject_m1350319744(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		MonoBehaviour_t3962482529 * L_4 = GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400(L_3, /*hidden argument*/GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400_RuntimeMethod_var);
		((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->set__prime31GameObjectMonobehaviourRef_2(L_4);
	}

IL_0021:
	{
		MonoBehaviour_t3962482529 * L_5 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObjectMonobehaviourRef_2();
		return L_5;
	}
}
// System.Void Prime31.AbstractManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AbstractManager__ctor_m3256256275 (AbstractManager_t1896924750 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::getThreadingCallbackHelper()
extern "C" IL2CPP_METHOD_ATTR ThreadingCallbackHelper_t4258926486 * AbstractManager_getThreadingCallbackHelper_m1704635222 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_getThreadingCallbackHelper_m1704635222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThreadingCallbackHelper_t4258926486 * L_0 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_3();
		return L_0;
	}
}
// System.Void Prime31.AbstractManager::createThreadingCallbackHelper()
extern "C" IL2CPP_METHOD_ATTR void AbstractManager_createThreadingCallbackHelper_m2783934263 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_createThreadingCallbackHelper_m2783934263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		ThreadingCallbackHelper_t4258926486 * L_0 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (ThreadingCallbackHelper_t4258926486_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_4 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->set__threadingCallbackHelper_3(((ThreadingCallbackHelper_t4258926486 *)IsInstClass((RuntimeObject*)L_4, ThreadingCallbackHelper_t4258926486_il2cpp_TypeInfo_var)));
		ThreadingCallbackHelper_t4258926486 * L_5 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_3();
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		GameObject_t1113636619 * L_7 = AbstractManager_getPrime31ManagerGameObject_m1350319744(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		ThreadingCallbackHelper_t4258926486 * L_9 = GameObject_AddComponent_TisThreadingCallbackHelper_t4258926486_m234785792(L_8, /*hidden argument*/GameObject_AddComponent_TisThreadingCallbackHelper_t4258926486_m234785792_RuntimeMethod_var);
		((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->set__threadingCallbackHelper_3(L_9);
		return;
	}
}
// UnityEngine.GameObject Prime31.AbstractManager::getPrime31ManagerGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * AbstractManager_getPrime31ManagerGameObject_m1350319744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_getPrime31ManagerGameObject_m1350319744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		GameObject_t1113636619 * L_2 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObject_4();
		return L_2;
	}

IL_0016:
	{
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral735181246, /*hidden argument*/NULL);
		((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->set__prime31GameObject_4(L_3);
		GameObject_t1113636619 * L_4 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		GameObject_t1113636619 * L_6 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_6, _stringLiteral735181246, /*hidden argument*/NULL);
		((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->set__prime31GameObject_4(L_6);
		GameObject_t1113636619 * L_7 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		GameObject_t1113636619 * L_8 = ((AbstractManager_t1896924750_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t1896924750_il2cpp_TypeInfo_var))->get__prime31GameObject_4();
		return L_8;
	}
}
// System.Void Prime31.AbstractManager::initialize(System.Type)
extern "C" IL2CPP_METHOD_ATTR void AbstractManager_initialize_m1411619200 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_initialize_m1411619200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t3962482529 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_0 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_t631007953 * L_1 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			V_0 = ((MonoBehaviour_t3962482529 *)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t3962482529_il2cpp_TypeInfo_var));
			MonoBehaviour_t3962482529 * L_2 = V_0;
			bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_001d;
			}
		}

IL_0018:
		{
			goto IL_0089;
		}

IL_001d:
		{
			GameObject_t1113636619 * L_4 = AbstractManager_getPrime31ManagerGameObject_m1350319744(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_1 = L_4;
			Type_t * L_5 = ___type0;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
			GameObject_t1113636619 * L_7 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
			GameObject__ctor_m2093116449(L_7, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			GameObject_t1113636619 * L_8 = V_2;
			Type_t * L_9 = ___type0;
			NullCheck(L_8);
			GameObject_AddComponent_m136524825(L_8, L_9, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_10 = V_2;
			NullCheck(L_10);
			Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_12 = V_1;
			NullCheck(L_12);
			Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_set_parent_m786917804(L_11, L_13, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_14 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			goto IL_0089;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t3598173660_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0053;
		throw e;
	}

CATCH_0053:
	{ // begin catch(UnityEngine.UnityException)
		ObjectU5BU5D_t2843939325* L_15 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral4026664769);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4026664769);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		Type_t * L_17 = ___type0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral2742834599);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2742834599);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		Type_t * L_20 = ___type0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2796876051);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2796876051);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		goto IL_0089;
	} // end catch (depth: 1)

IL_0089:
	{
		return;
	}
}
// System.Void Prime31.AbstractManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void AbstractManager_Awake_m69806788 (AbstractManager_t1896924750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractManager_Awake_m69806788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NullCheck(L_0);
		Object_set_name_m291480324(L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.ActionExtensions::invoke(System.Delegate,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void ActionExtensions_invoke_m1944200621 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___listener0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActionExtensions_invoke_m1944200621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t1188392813 * L_0 = ___listener0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3071622864(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = MethodBase_get_IsStatic_m2399864271(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		Delegate_t1188392813 * L_3 = ___listener0;
		NullCheck(L_3);
		RuntimeObject * L_4 = Delegate_get_Target_m2361978888(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Delegate_t1188392813 * L_5 = ___listener0;
		NullCheck(L_5);
		RuntimeObject * L_6 = Delegate_get_Target_m2361978888(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}

IL_002c:
	{
		Delegate_t1188392813 * L_8 = ___listener0;
		NullCheck(L_8);
		MethodInfo_t * L_9 = Delegate_get_Method_m3071622864(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3719385308, L_10, _stringLiteral921018006, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0050:
	{
		Delegate_t1188392813 * L_12 = ___listener0;
		NullCheck(L_12);
		MethodInfo_t * L_13 = Delegate_get_Method_m3071622864(L_12, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_14 = ___listener0;
		NullCheck(L_14);
		RuntimeObject * L_15 = Delegate_get_Target_m2361978888(L_14, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_16 = ___args1;
		NullCheck(L_13);
		MethodBase_Invoke_m1776411915(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void Prime31.ActionExtensions::fire(System.Action)
extern "C" IL2CPP_METHOD_ATTR void ActionExtensions_fire_m3261000318 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActionExtensions_fire_m3261000318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	Delegate_t1188392813 * V_1 = NULL;
	DelegateU5BU5D_t1703627840* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Action_t1264377477 * L_0 = ___handler0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		V_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0));
		Action_t1264377477 * L_1 = ___handler0;
		NullCheck(L_1);
		DelegateU5BU5D_t1703627840* L_2 = VirtFuncInvoker0< DelegateU5BU5D_t1703627840* >::Invoke(6 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_1);
		V_2 = L_2;
		V_3 = 0;
		goto IL_002b;
	}

IL_001c:
	{
		DelegateU5BU5D_t1703627840* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Delegate_t1188392813 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		Delegate_t1188392813 * L_7 = V_1;
		ObjectU5BU5D_t2843939325* L_8 = V_0;
		ActionExtensions_invoke_m1944200621(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_10 = V_3;
		DelegateU5BU5D_t1703627840* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
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
// System.Object Prime31.Json::decode(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_decode_m1423667791 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Json_decode_m1423667791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		bool L_0 = ((Json_t2695587496_StaticFields*)il2cpp_codegen_static_fields_for(Json_t2695587496_il2cpp_TypeInfo_var))->get_useSimpleJson_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = SimpleJson_decode_m1626785732(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0011:
	{
		String_t* L_3 = ___json0;
		RuntimeObject * L_4 = Deserializer_deserialize_m3490139499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_6 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1937107660, L_6, /*hidden argument*/NULL);
		Utils_logObject_m1352880344(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// System.String Prime31.Json::encode(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Json_encode_m1889278415 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Json_encode_m1889278415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ((Json_t2695587496_StaticFields*)il2cpp_codegen_static_fields_for(Json_t2695587496_il2cpp_TypeInfo_var))->get_useSimpleJson_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		String_t* L_2 = SimpleJson_encode_m2826025421(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		RuntimeObject * L_3 = ___obj0;
		String_t* L_4 = Serializer_serialize_m2113405956(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		String_t* L_5 = V_0;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Utils_logObject_m1352880344(NULL /*static, unused*/, _stringLiteral3180690874, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___obj0;
		Utils_logObject_m1352880344(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Json/Deserializer::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Deserializer__ctor_m3061589585 (Deserializer_t1361861692 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___json0;
		NullCheck(L_0);
		CharU5BU5D_t3528271667* L_1 = String_ToCharArray_m1492846834(L_0, /*hidden argument*/NULL);
		__this->set_charArray_0(L_1);
		return;
	}
}
// System.Object Prime31.Json/Deserializer::deserialize(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m3490139499 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_deserialize_m3490139499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Deserializer_t1361861692 * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___json0;
		Deserializer_t1361861692 * L_2 = (Deserializer_t1361861692 *)il2cpp_codegen_object_new(Deserializer_t1361861692_il2cpp_TypeInfo_var);
		Deserializer__ctor_m3061589585(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Deserializer_t1361861692 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = Deserializer_deserialize_m718278151(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		return NULL;
	}
}
// System.Object Prime31.Json/Deserializer::deserialize()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m718278151 (Deserializer_t1361861692 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		CharU5BU5D_t3528271667* L_0 = __this->get_charArray_0();
		RuntimeObject * L_1 = Deserializer_parseValue_m275038268(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object Prime31.Json/Deserializer::parseValue(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseValue_m275038268 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_parseValue_m275038268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = Deserializer_lookAhead_m3895211948(__this, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_00ab;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_00ab;
			}
			case 5:
			{
				goto IL_00ab;
			}
			case 6:
			{
				goto IL_00ab;
			}
			case 7:
			{
				goto IL_0045;
			}
			case 8:
			{
				goto IL_004e;
			}
			case 9:
			{
				goto IL_0069;
			}
			case 10:
			{
				goto IL_0082;
			}
			case 11:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_0045:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		String_t* L_6 = Deserializer_parseString_m2542394221(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004e:
	{
		CharU5BU5D_t3528271667* L_7 = ___json0;
		int32_t* L_8 = ___index1;
		RuntimeObject * L_9 = Deserializer_parseNumber_m1002354842(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0057:
	{
		CharU5BU5D_t3528271667* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		RuntimeObject* L_12 = Deserializer_parseObject_m242742785(__this, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		CharU5BU5D_t3528271667* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		RuntimeObject* L_15 = Deserializer_parseArray_m32602812(__this, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0069:
	{
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_18 = Boolean_Parse_m2370352694(NULL /*static, unused*/, _stringLiteral107078765, /*hidden argument*/NULL);
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_0082:
	{
		CharU5BU5D_t3528271667* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_23 = Boolean_Parse_m2370352694(NULL /*static, unused*/, _stringLiteral47698025, /*hidden argument*/NULL);
		bool L_24 = L_23;
		RuntimeObject * L_25 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_009b:
	{
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_26, L_27, /*hidden argument*/NULL);
		return NULL;
	}

IL_00a6:
	{
		goto IL_00ab;
	}

IL_00ab:
	{
		return NULL;
	}
}
// System.Collections.IDictionary Prime31.Json/Deserializer::parseObject(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseObject_m242742785 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_parseObject_m242742785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m303517795(L_0, /*hidden argument*/Dictionary_2__ctor_m303517795_RuntimeMethod_var);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_1, L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0085;
	}

IL_0016:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = Deserializer_lookAhead_m3895211948(__this, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_003d:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t3528271667* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_11, L_12, /*hidden argument*/NULL);
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_004f:
	{
		CharU5BU5D_t3528271667* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		String_t* L_16 = Deserializer_parseString_m2542394221(__this, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0060:
	{
		CharU5BU5D_t3528271667* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		int32_t L_20 = Deserializer_nextToken_m195645131(__this, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)5)))
		{
			goto IL_0072;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0072:
	{
		CharU5BU5D_t3528271667* L_22 = ___json0;
		int32_t* L_23 = ___index1;
		RuntimeObject * L_24 = Deserializer_parseValue_m275038268(__this, L_22, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		RuntimeObject* L_25 = V_0;
		String_t* L_26 = V_3;
		RuntimeObject * L_27 = V_4;
		NullCheck(L_25);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_25, L_26, L_27);
	}

IL_0085:
	{
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_29 = V_0;
		return L_29;
	}
}
// System.Collections.IList Prime31.Json/Deserializer::parseArray(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseArray_m32602812 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_parseArray_m32602812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_0, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_0016:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = Deserializer_lookAhead_m3895211948(__this, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_003d:
	{
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0052;
		}
	}
	{
		CharU5BU5D_t3528271667* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		Deserializer_nextToken_m195645131(__this, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0052:
	{
		CharU5BU5D_t3528271667* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		RuntimeObject * L_15 = Deserializer_parseValue_m275038268(__this, L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		List_1_t257213610 * L_16 = V_0;
		RuntimeObject * L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_m3338814081(L_16, L_17, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
	}

IL_0062:
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0016;
		}
	}

IL_0068:
	{
		List_1_t257213610 * L_19 = V_0;
		return L_19;
	}
}
// System.String Prime31.Json/Deserializer::parseString(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR String_t* Deserializer_parseString_m2542394221 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_parseString_m2542394221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	CharU5BU5D_t3528271667* V_5 = NULL;
	uint32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	CharU5BU5D_t3528271667* V_8 = NULL;
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		Deserializer_eatWhitespace_m1682480516(__this, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_2 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		NullCheck(L_3);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		V_3 = (bool)0;
		goto IL_01f1;
	}

IL_0021:
	{
		int32_t* L_10 = ___index1;
		CharU5BU5D_t3528271667* L_11 = ___json0;
		NullCheck(L_11);
		if ((!(((uint32_t)(*((int32_t*)L_10))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_01f7;
	}

IL_0030:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		int32_t* L_14 = ___index1;
		int32_t L_15 = (*((int32_t*)L_14));
		V_2 = L_15;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		NullCheck(L_12);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Il2CppChar L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_01f7;
	}

IL_004b:
	{
		Il2CppChar L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t* L_21 = ___index1;
		CharU5BU5D_t3528271667* L_22 = ___json0;
		NullCheck(L_22);
		if ((!(((uint32_t)(*((int32_t*)L_21))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_01f7;
	}

IL_0062:
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t* L_25 = ___index1;
		int32_t L_26 = (*((int32_t*)L_25));
		V_2 = L_26;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_2;
		NullCheck(L_23);
		int32_t L_28 = L_27;
		uint16_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		Il2CppChar L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_31 = V_0;
		Il2CppChar L_32 = ((Il2CppChar)((int32_t)34));
		RuntimeObject * L_33 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m904156431(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_01df;
	}

IL_0089:
	{
		Il2CppChar L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_36 = V_0;
		Il2CppChar L_37 = ((Il2CppChar)((int32_t)92));
		RuntimeObject * L_38 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m904156431(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_01df;
	}

IL_00a4:
	{
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_41 = V_0;
		Il2CppChar L_42 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_43 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m904156431(NULL /*static, unused*/, L_41, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_01df;
	}

IL_00bf:
	{
		Il2CppChar L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00d9;
		}
	}
	{
		String_t* L_46 = V_0;
		Il2CppChar L_47 = ((Il2CppChar)8);
		RuntimeObject * L_48 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m904156431(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
		goto IL_01df;
	}

IL_00d9:
	{
		Il2CppChar L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00f4;
		}
	}
	{
		String_t* L_51 = V_0;
		Il2CppChar L_52 = ((Il2CppChar)((int32_t)12));
		RuntimeObject * L_53 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_52);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Concat_m904156431(NULL /*static, unused*/, L_51, L_53, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_01df;
	}

IL_00f4:
	{
		Il2CppChar L_55 = V_1;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_56 = V_0;
		Il2CppChar L_57 = ((Il2CppChar)((int32_t)10));
		RuntimeObject * L_58 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_57);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m904156431(NULL /*static, unused*/, L_56, L_58, /*hidden argument*/NULL);
		V_0 = L_59;
		goto IL_01df;
	}

IL_010f:
	{
		Il2CppChar L_60 = V_1;
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_012a;
		}
	}
	{
		String_t* L_61 = V_0;
		Il2CppChar L_62 = ((Il2CppChar)((int32_t)13));
		RuntimeObject * L_63 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_62);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_64 = String_Concat_m904156431(NULL /*static, unused*/, L_61, L_63, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_01df;
	}

IL_012a:
	{
		Il2CppChar L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0145;
		}
	}
	{
		String_t* L_66 = V_0;
		Il2CppChar L_67 = ((Il2CppChar)((int32_t)9));
		RuntimeObject * L_68 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_67);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_69 = String_Concat_m904156431(NULL /*static, unused*/, L_66, L_68, /*hidden argument*/NULL);
		V_0 = L_69;
		goto IL_01df;
	}

IL_0145:
	{
		Il2CppChar L_70 = V_1;
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01df;
		}
	}
	{
		CharU5BU5D_t3528271667* L_71 = ___json0;
		NullCheck(L_71);
		int32_t* L_72 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length)))), (int32_t)(*((int32_t*)L_72))));
		int32_t L_73 = V_4;
		if ((((int32_t)L_73) < ((int32_t)4)))
		{
			goto IL_01da;
		}
	}
	{
		V_5 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4));
		CharU5BU5D_t3528271667* L_74 = ___json0;
		int32_t* L_75 = ___index1;
		CharU5BU5D_t3528271667* L_76 = V_5;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_74, (*((int32_t*)L_75)), (RuntimeArray *)(RuntimeArray *)L_76, 0, 4, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_77 = V_5;
		String_t* L_78 = String_CreateString_m2818852475(NULL, L_77, /*hidden argument*/NULL);
		uint32_t L_79 = UInt32_Parse_m354267551(NULL /*static, unused*/, L_78, ((int32_t)515), /*hidden argument*/NULL);
		V_6 = L_79;
	}

IL_0184:
	try
	{ // begin try (depth: 1)
		String_t* L_80 = V_0;
		uint32_t L_81 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		String_t* L_82 = Char_ConvertFromUtf32_m2726544766(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_83 = String_Concat_m3937257545(NULL /*static, unused*/, L_80, L_82, /*hidden argument*/NULL);
		V_0 = L_83;
		goto IL_01cf;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0197;
		throw e;
	}

CATCH_0197:
	{ // begin catch(System.Exception)
		{
			CharU5BU5D_t3528271667* L_84 = V_5;
			V_8 = L_84;
			V_9 = 0;
			goto IL_01bf;
		}

IL_01a4:
		{
			CharU5BU5D_t3528271667* L_85 = V_8;
			int32_t L_86 = V_9;
			NullCheck(L_85);
			int32_t L_87 = L_86;
			uint16_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
			V_7 = L_88;
			String_t* L_89 = V_0;
			Il2CppChar L_90 = V_7;
			Il2CppChar L_91 = L_90;
			RuntimeObject * L_92 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_91);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_93 = String_Concat_m904156431(NULL /*static, unused*/, L_89, L_92, /*hidden argument*/NULL);
			V_0 = L_93;
			int32_t L_94 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		}

IL_01bf:
		{
			int32_t L_95 = V_9;
			CharU5BU5D_t3528271667* L_96 = V_8;
			NullCheck(L_96);
			if ((((int32_t)L_95) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_96)->max_length)))))))
			{
				goto IL_01a4;
			}
		}

IL_01ca:
		{
			goto IL_01cf;
		}
	} // end catch (depth: 1)

IL_01cf:
	{
		int32_t* L_97 = ___index1;
		int32_t* L_98 = ___index1;
		*((int32_t*)(L_97)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_98)), (int32_t)4));
		goto IL_01df;
	}

IL_01da:
	{
		goto IL_01f7;
	}

IL_01df:
	{
		goto IL_01f1;
	}

IL_01e4:
	{
		String_t* L_99 = V_0;
		Il2CppChar L_100 = V_1;
		Il2CppChar L_101 = L_100;
		RuntimeObject * L_102 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_101);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_103 = String_Concat_m904156431(NULL /*static, unused*/, L_99, L_102, /*hidden argument*/NULL);
		V_0 = L_103;
	}

IL_01f1:
	{
		bool L_104 = V_3;
		if (!L_104)
		{
			goto IL_0021;
		}
	}

IL_01f7:
	{
		bool L_105 = V_3;
		if (L_105)
		{
			goto IL_01ff;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_01ff:
	{
		String_t* L_106 = V_0;
		return L_106;
	}
}
// System.Object Prime31.Json/Deserializer::parseNumber(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseNumber_m1002354842 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_parseNumber_m1002354842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	String_t* V_3 = NULL;
	int64_t V_4 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		Deserializer_eatWhitespace_m1682480516(__this, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = Deserializer_getLastIndexOfNumber_m133144268(__this, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)(*((int32_t*)L_6)))), (int32_t)1));
		int32_t L_7 = V_1;
		V_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)L_7));
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		CharU5BU5D_t3528271667* L_10 = V_2;
		int32_t L_11 = V_1;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, (*((int32_t*)L_9)), (RuntimeArray *)(RuntimeArray *)L_10, 0, L_11, /*hidden argument*/NULL);
		int32_t* L_12 = ___index1;
		int32_t L_13 = V_0;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		CharU5BU5D_t3528271667* L_14 = V_2;
		String_t* L_15 = String_CreateString_m2818852475(NULL, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		String_t* L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = String_Contains_m1147431944(L_16, _stringLiteral3452614530, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_19 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_20 = Int64_TryParse_m3606398488(NULL /*static, unused*/, L_18, 7, L_19, (&V_4), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_21 = V_4;
		int64_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0062:
	{
		CharU5BU5D_t3528271667* L_24 = V_2;
		String_t* L_25 = String_CreateString_m2818852475(NULL, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_26 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_27 = Double_Parse_m3456374109(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		double L_28 = L_27;
		RuntimeObject * L_29 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_28);
		return L_29;
	}
}
// System.Int32 Prime31.Json/Deserializer::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_getLastIndexOfNumber_m133144268 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_getLastIndexOfNumber_m133144268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral2206812729);
		int32_t L_5 = String_IndexOf_m363431711(_stringLiteral2206812729, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void Prime31.Json/Deserializer::eatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Deserializer_eatWhitespace_m1682480516 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deserializer_eatWhitespace_m1682480516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = (*((int32_t*)L_1));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(_stringLiteral1596281288);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral1596281288, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_5 = ___index1;
		int32_t* L_6 = ___index1;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_6)), (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_7 = ___index1;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)(*((int32_t*)L_7))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::lookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_lookAhead_m3895211948 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = Deserializer_nextToken_m195645131(__this, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::nextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Deserializer_nextToken_m195645131 (Deserializer_t1361861692 * __this, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		Deserializer_eatWhitespace_m1682480516(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		CharU5BU5D_t3528271667* L_3 = ___json0;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))
		{
			goto IL_0014;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0014:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = (*((int32_t*)L_5));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		int32_t* L_8 = ___index1;
		int32_t* L_9 = ___index1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_9)), (int32_t)1));
		Il2CppChar L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0064;
			}
			case 4:
			{
				goto IL_00a7;
			}
			case 5:
			{
				goto IL_00a7;
			}
			case 6:
			{
				goto IL_00a7;
			}
			case 7:
			{
				goto IL_00a7;
			}
			case 8:
			{
				goto IL_00a7;
			}
			case 9:
			{
				goto IL_00a7;
			}
			case 10:
			{
				goto IL_00a7;
			}
			case 11:
			{
				goto IL_00a7;
			}
			case 12:
			{
				goto IL_00a7;
			}
			case 13:
			{
				goto IL_00a7;
			}
			case 14:
			{
				goto IL_00a9;
			}
		}
	}

IL_0064:
	{
		Il2CppChar L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009f;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_00a1;
			}
		}
	}

IL_0079:
	{
		Il2CppChar L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_009d;
			}
		}
	}

IL_008e:
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00ab;
	}

IL_009b:
	{
		return (int32_t)(1);
	}

IL_009d:
	{
		return (int32_t)(2);
	}

IL_009f:
	{
		return (int32_t)(3);
	}

IL_00a1:
	{
		return (int32_t)(4);
	}

IL_00a3:
	{
		return (int32_t)(6);
	}

IL_00a5:
	{
		return (int32_t)(7);
	}

IL_00a7:
	{
		return (int32_t)(8);
	}

IL_00a9:
	{
		return (int32_t)(5);
	}

IL_00ab:
	{
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_15)), (int32_t)1));
		CharU5BU5D_t3528271667* L_16 = ___json0;
		NullCheck(L_16);
		int32_t* L_17 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))), (int32_t)(*((int32_t*)L_17))));
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t3528271667* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = (*((int32_t*)L_20));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)1));
		uint16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t3528271667* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_28)), (int32_t)2));
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t3528271667* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_32)), (int32_t)3));
		uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t3528271667* L_35 = ___json0;
		int32_t* L_36 = ___index1;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_36)), (int32_t)4));
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t* L_39 = ___index1;
		int32_t* L_40 = ___index1;
		*((int32_t*)(L_39)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_40)), (int32_t)5));
		return (int32_t)(((int32_t)10));
	}

IL_0107:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)4)))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t3528271667* L_42 = ___json0;
		int32_t* L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = (*((int32_t*)L_43));
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t3528271667* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_47)), (int32_t)1));
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t3528271667* L_50 = ___json0;
		int32_t* L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_51)), (int32_t)2));
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t3528271667* L_54 = ___json0;
		int32_t* L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_55)), (int32_t)3));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t* L_58 = ___index1;
		int32_t* L_59 = ___index1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_59)), (int32_t)4));
		return (int32_t)(((int32_t)9));
	}

IL_0149:
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_61 = ___json0;
		int32_t* L_62 = ___index1;
		NullCheck(L_61);
		int32_t L_63 = (*((int32_t*)L_62));
		uint16_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_66)), (int32_t)1));
		uint16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2));
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_74)), (int32_t)3));
		uint16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018b;
		}
	}
	{
		int32_t* L_77 = ___index1;
		int32_t* L_78 = ___index1;
		*((int32_t*)(L_77)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_78)), (int32_t)4));
		return (int32_t)(((int32_t)11));
	}

IL_018b:
	{
		return (int32_t)(0);
	}
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
// System.Void Prime31.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m4287989410 (Serializer_t2740194910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m4287989410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set__builder_0(L_0);
		return;
	}
}
// System.String Prime31.Json/Serializer::serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_serialize_m2113405956 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serialize_m2113405956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t2740194910 * V_0 = NULL;
	{
		Serializer_t2740194910 * L_0 = (Serializer_t2740194910 *)il2cpp_codegen_object_new(Serializer_t2740194910_il2cpp_TypeInfo_var);
		Serializer__ctor_m4287989410(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t2740194910 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_serializeObject_m1661408100(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t2740194910 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get__builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Prime31.Json/Serializer::serializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeObject_m1661408100 (Serializer_t2740194910 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeObject_m1661408100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	double V_1 = 0.0;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TimeSpan_t881159249  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get__builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_001c:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		Serializer_serializeString_m2125783434(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0038:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, IList_t2094931216_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		Serializer_serializeIList_m889817702(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_t2094931216_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0054:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_6, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)))
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		Serializer_serializeDictionary_m753622930(__this, ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_7, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0070:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDictionary_t1363984059_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		Serializer_serializeIDictionary_m1141959864(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IDictionary_t1363984059_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_008c:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_11 = __this->get__builder_0();
		RuntimeObject * L_12 = ___value0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_13);
		String_t* L_14 = String_ToLower_m2029374922(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, L_14, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00b3:
	{
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m88164663(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = Type_get_IsPrimitive_m1114712797(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d5;
		}
	}
	{
		StringBuilder_t * L_18 = __this->get__builder_0();
		RuntimeObject * L_19 = ___value0;
		NullCheck(L_18);
		StringBuilder_Append_m1640838743(L_18, L_19, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00d5:
	{
		RuntimeObject * L_20 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, DateTime_t3738529785_il2cpp_TypeInfo_var)))
		{
			goto IL_0120;
		}
	}
	{
		DateTime__ctor_m2956360140((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		RuntimeObject * L_21 = ___value0;
		V_2 = ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_21, DateTime_t3738529785_il2cpp_TypeInfo_var))));
		DateTime_t3738529785  L_22 = V_0;
		TimeSpan_t881159249  L_23 = DateTime_Subtract_m77007479((&V_2), L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		double L_24 = TimeSpan_get_TotalMilliseconds_m2429771311((&V_3), /*hidden argument*/NULL);
		V_1 = L_24;
		double L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_26 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_27 = Convert_ToString_m1282703378(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Serializer_serializeString_m2125783434(__this, L_27, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0120:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_28 = ___value0;
		Serializer_serializeClass_m1530331333(__this, L_28, /*hidden argument*/NULL);
		goto IL_014a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012c;
		throw e;
	}

CATCH_012c:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		RuntimeObject * L_29 = ___value0;
		Exception_t * L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1903330124, L_29, L_31, /*hidden argument*/NULL);
		Utils_logObject_m1352880344(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		goto IL_014a;
	} // end catch (depth: 1)

IL_014a:
	{
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeIList(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeIList_m889817702 (Serializer_t2740194910 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeIList_m889817702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614645, /*hidden argument*/NULL);
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0046;
	}

IL_001a:
	{
		RuntimeObject* L_1 = ___anArray0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, L_1, L_2);
		V_2 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get__builder_0();
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_0039:
	{
		RuntimeObject * L_6 = V_2;
		Serializer_serializeObject_m1661408100(__this, L_6, /*hidden argument*/NULL);
		V_0 = (bool)0;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = ___anArray0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_11 = __this->get__builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3452614643, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeIDictionary(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeIDictionary_m1141959864 (Serializer_t2740194910 * __this, RuntimeObject* ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeIDictionary_m1141959864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___dict0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0024:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			StringBuilder_t * L_7 = __this->get__builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_0042:
		{
			RuntimeObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_serializeString_m2125783434(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get__builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614550, /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___dict0;
			RuntimeObject * L_12 = V_1;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_serializeObject_m1661408100(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006e:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0024;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x92, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0091;
			}
		}

IL_008b:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0092:
	{
		StringBuilder_t * L_19 = __this->get__builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m1965104174(L_19, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeDictionary_m753622930 (Serializer_t2740194910 * __this, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeDictionary_m753622930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyCollection_t3055037934 * V_1 = NULL;
	String_t* V_2 = NULL;
	Enumerator_t3047539447  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		V_0 = (bool)1;
		Dictionary_2_t2865362463 * L_1 = ___dict0;
		NullCheck(L_1);
		KeyCollection_t3055037934 * L_2 = Dictionary_2_get_Keys_m7908668(L_1, /*hidden argument*/Dictionary_2_get_Keys_m7908668_RuntimeMethod_var);
		V_1 = L_2;
		KeyCollection_t3055037934 * L_3 = V_1;
		NullCheck(L_3);
		Enumerator_t3047539447  L_4 = KeyCollection_GetEnumerator_m565767158(L_3, /*hidden argument*/KeyCollection_GetEnumerator_m565767158_RuntimeMethod_var);
		V_3 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0026:
		{
			String_t* L_5 = Enumerator_get_Current_m2500734324((&V_3), /*hidden argument*/Enumerator_get_Current_m2500734324_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0045;
			}
		}

IL_0034:
		{
			StringBuilder_t * L_7 = __this->get__builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_0045:
		{
			String_t* L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_serializeString_m2125783434(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get__builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614550, /*hidden argument*/NULL);
			Dictionary_2_t2865362463 * L_11 = ___dict0;
			String_t* L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = Dictionary_2_get_Item_m1204235524(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m1204235524_RuntimeMethod_var);
			Serializer_serializeObject_m1661408100(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0071:
		{
			bool L_14 = Enumerator_MoveNext_m1838953748((&V_3), /*hidden argument*/Enumerator_MoveNext_m1838953748_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0026;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m294432494((&V_3), /*hidden argument*/Enumerator_Dispose_m294432494_RuntimeMethod_var);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		StringBuilder_t * L_15 = __this->get__builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeString_m2125783434 (Serializer_t2740194910 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeString_m2125783434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0151;
	}

IL_001f:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0041;
		}
	}
	{
		StringBuilder_t * L_8 = __this->get__builder_0();
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0041:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_005f;
		}
	}
	{
		StringBuilder_t * L_10 = __this->get__builder_0();
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_005f:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t * L_12 = __this->get__builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_007c:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_14 = __this->get__builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_009a:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_16 = __this->get__builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00b8:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00d6;
		}
	}
	{
		StringBuilder_t * L_18 = __this->get__builder_0();
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00d6:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00f4;
		}
	}
	{
		StringBuilder_t * L_20 = __this->get__builder_0();
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00f4:
	{
		Il2CppChar L_21 = V_2;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_24 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_25 = Convert_ToInt32_m3211312035(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)32))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)126))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t * L_28 = __this->get__builder_0();
		Il2CppChar L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m2383614642(L_28, L_29, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0127:
	{
		StringBuilder_t * L_30 = __this->get__builder_0();
		int32_t L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_32 = Convert_ToString_m2142825503(NULL /*static, unused*/, L_31, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33 = String_PadLeft_m1263950263(L_32, 4, ((int32_t)48), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3455432692, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_34, /*hidden argument*/NULL);
	}

IL_014d:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0151:
	{
		int32_t L_36 = V_1;
		CharU5BU5D_t3528271667* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t * L_38 = __this->get__builder_0();
		NullCheck(L_38);
		StringBuilder_Append_m1965104174(L_38, _stringLiteral3452614526, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeClass(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_serializeClass_m1530331333 (Serializer_t2740194910 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_serializeClass_m1530331333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FieldInfo_t * V_1 = NULL;
	FieldInfoU5BU5D_t846150980* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_5 = NULL;
	int32_t V_6 = 0;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m88164663(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		FieldInfoU5BU5D_t846150980* L_3 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_2, ((int32_t)52));
		V_2 = L_3;
		V_3 = 0;
		goto IL_0098;
	}

IL_0028:
	{
		FieldInfoU5BU5D_t846150980* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FieldInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		FieldInfo_t * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = FieldInfo_get_IsPrivate_m1717932363(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		FieldInfo_t * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		NullCheck(L_11);
		bool L_12 = String_Contains_m1147431944(L_11, _stringLiteral1832000189, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0094;
	}

IL_0051:
	{
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_14 = __this->get__builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_0068:
	{
		FieldInfo_t * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		Serializer_serializeString_m2125783434(__this, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = __this->get__builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3452614550, /*hidden argument*/NULL);
		FieldInfo_t * L_18 = V_1;
		RuntimeObject * L_19 = ___value0;
		NullCheck(L_18);
		RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_18, L_19);
		Serializer_serializeObject_m1661408100(__this, L_20, /*hidden argument*/NULL);
		V_0 = (bool)0;
	}

IL_0094:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_22 = V_3;
		FieldInfoU5BU5D_t846150980* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_24 = ___value0;
		NullCheck(L_24);
		Type_t * L_25 = Object_GetType_m88164663(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		PropertyInfoU5BU5D_t1461822886* L_26 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_25, ((int32_t)52));
		V_5 = L_26;
		V_6 = 0;
		goto IL_010b;
	}

IL_00b8:
	{
		PropertyInfoU5BU5D_t1461822886* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		PropertyInfo_t * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_4 = L_30;
		bool L_31 = V_0;
		if (L_31)
		{
			goto IL_00d6;
		}
	}
	{
		StringBuilder_t * L_32 = __this->get__builder_0();
		NullCheck(L_32);
		StringBuilder_Append_m1965104174(L_32, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		PropertyInfo_t * L_33 = V_4;
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_33);
		Serializer_serializeString_m2125783434(__this, L_34, /*hidden argument*/NULL);
		StringBuilder_t * L_35 = __this->get__builder_0();
		NullCheck(L_35);
		StringBuilder_Append_m1965104174(L_35, _stringLiteral3452614550, /*hidden argument*/NULL);
		PropertyInfo_t * L_36 = V_4;
		RuntimeObject * L_37 = ___value0;
		NullCheck(L_36);
		RuntimeObject * L_38 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_36, L_37, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		Serializer_serializeObject_m1661408100(__this, L_38, /*hidden argument*/NULL);
		V_0 = (bool)0;
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_010b:
	{
		int32_t L_40 = V_6;
		PropertyInfoU5BU5D_t1461822886* L_41 = V_5;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_42 = __this->get__builder_0();
		NullCheck(L_42);
		StringBuilder_Append_m1965104174(L_42, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m1280052619 (JsonArray_t3489669405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray__ctor_m1280052619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(__this, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		return;
	}
}
// System.String Prime31.JsonArray::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonArray_ToString_m4088836291 (JsonArray_t3489669405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray_ToString_m4088836291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = SimpleJson_encode_m2826025421(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = JsonFormatter_prettyPrint_m556974798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Prime31.JsonExtensions::toJson(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonExtensions_toJson_m1503507267 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___obj0;
		String_t* L_1 = Json_encode_m1889278415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Prime31.JsonExtensions::toJson(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonExtensions_toJson_m1203632388 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___obj0;
		String_t* L_1 = Json_encode_m1889278415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Object> Prime31.JsonExtensions::listFromJson(System.String)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * JsonExtensions_listFromJson_m74214688 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonExtensions_listFromJson_m74214688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = Json_decode_m1423667791(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((List_1_t257213610 *)IsInstClass((RuntimeObject*)L_1, List_1_t257213610_il2cpp_TypeInfo_var));
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Prime31.JsonExtensions::dictionaryFromJson(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * JsonExtensions_dictionaryFromJson_m987059296 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonExtensions_dictionaryFromJson_m987059296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = Json_decode_m1423667791(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.JsonFormatter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonFormatter__ctor_m3996231688 (JsonFormatter_t2365363476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonFormatter__ctor_m3996231688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_inDoubleString_0((bool)0);
		__this->set_inSingleString_1((bool)0);
		__this->set_inVariableAssignment_2((bool)0);
		__this->set_prevChar_3(0);
		Stack_1_t3320103523 * L_0 = (Stack_1_t3320103523 *)il2cpp_codegen_object_new(Stack_1_t3320103523_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2356622719(L_0, /*hidden argument*/Stack_1__ctor_m2356622719_RuntimeMethod_var);
		__this->set_context_4(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Prime31.JsonFormatter::prettyPrint(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonFormatter_prettyPrint_m556974798 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonFormatter_prettyPrint_m556974798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		JsonFormatter_t2365363476 * L_0 = (JsonFormatter_t2365363476 *)il2cpp_codegen_object_new(JsonFormatter_t2365363476_il2cpp_TypeInfo_var);
		JsonFormatter__ctor_m3996231688(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2 = JsonFormatter_print_m2888455803(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		V_0 = (String_t*)NULL;
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Prime31.JsonFormatter::buildIndents(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void JsonFormatter_buildIndents_m987969659 (RuntimeObject * __this /* static, unused */, int32_t ___indents0, StringBuilder_t * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonFormatter_buildIndents_m987969659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___indents0;
		___indents0 = L_0;
		goto IL_0019;
	}

IL_0008:
	{
		StringBuilder_t * L_1 = ___output1;
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral3452614567, /*hidden argument*/NULL);
		int32_t L_2 = ___indents0;
		___indents0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_3 = ___indents0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Boolean Prime31.JsonFormatter::inString()
extern "C" IL2CPP_METHOD_ATTR bool JsonFormatter_inString_m2472391709 (JsonFormatter_t2365363476 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_inDoubleString_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_inSingleString_1();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.String Prime31.JsonFormatter::print(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonFormatter_print_m2888455803 (JsonFormatter_t2365363476 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonFormatter_print_m2888455803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_2;
		V_2 = 0;
		goto IL_0317;
	}

IL_0015:
	{
		String_t* L_3 = ___input0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_02e7;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_02b3;
			}
		}
	}

IL_0032:
	{
		Il2CppChar L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)58))))
		{
			case 0:
			{
				goto IL_027b;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_01c5;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0170;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0194;
			}
		}
	}

IL_0060:
	{
		Il2CppChar L_9 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0122;
			}
		}
	}

IL_0075:
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)39))))
		{
			goto IL_0247;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)44))))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_02ff;
	}

IL_008a:
	{
		bool L_12 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0115;
		}
	}
	{
		bool L_13 = __this->get_inVariableAssignment_2();
		if (L_13)
		{
			goto IL_00c2;
		}
	}
	{
		Stack_1_t3320103523 * L_14 = __this->get_context_4();
		NullCheck(L_14);
		int32_t L_15 = Stack_1_get_Count_m1716089596(L_14, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00df;
		}
	}
	{
		Stack_1_t3320103523 * L_16 = __this->get_context_4();
		NullCheck(L_16);
		int32_t L_17 = Stack_1_Peek_m3875692595(L_16, /*hidden argument*/Stack_1_Peek_m3875692595_RuntimeMethod_var);
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}

IL_00c2:
	{
		StringBuilder_t * L_18 = V_0;
		String_t* L_19 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, L_19, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_20 = __this->get_context_4();
		NullCheck(L_20);
		int32_t L_21 = Stack_1_get_Count_m1716089596(L_20, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		StringBuilder_t * L_22 = V_0;
		JsonFormatter_buildIndents_m987969659(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00df:
	{
		StringBuilder_t * L_23 = V_0;
		Il2CppChar L_24 = V_1;
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, L_24, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_25 = __this->get_context_4();
		NullCheck(L_25);
		Stack_1_Push_m3601772963(L_25, 0, /*hidden argument*/Stack_1_Push_m3601772963_RuntimeMethod_var);
		StringBuilder_t * L_26 = V_0;
		String_t* L_27 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, L_27, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_28 = __this->get_context_4();
		NullCheck(L_28);
		int32_t L_29 = Stack_1_get_Count_m1716089596(L_28, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		StringBuilder_t * L_30 = V_0;
		JsonFormatter_buildIndents_m987969659(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0115:
	{
		StringBuilder_t * L_31 = V_0;
		Il2CppChar L_32 = V_1;
		NullCheck(L_31);
		StringBuilder_Append_m2383614642(L_31, L_32, /*hidden argument*/NULL);
	}

IL_011d:
	{
		goto IL_030c;
	}

IL_0122:
	{
		bool L_33 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t * L_34 = V_0;
		String_t* L_35 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_Append_m1965104174(L_34, L_35, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_36 = __this->get_context_4();
		NullCheck(L_36);
		Stack_1_Pop_m1190955677(L_36, /*hidden argument*/Stack_1_Pop_m1190955677_RuntimeMethod_var);
		Stack_1_t3320103523 * L_37 = __this->get_context_4();
		NullCheck(L_37);
		int32_t L_38 = Stack_1_get_Count_m1716089596(L_37, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		StringBuilder_t * L_39 = V_0;
		JsonFormatter_buildIndents_m987969659(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_0;
		Il2CppChar L_41 = V_1;
		NullCheck(L_40);
		StringBuilder_Append_m2383614642(L_40, L_41, /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_0163:
	{
		StringBuilder_t * L_42 = V_0;
		Il2CppChar L_43 = V_1;
		NullCheck(L_42);
		StringBuilder_Append_m2383614642(L_42, L_43, /*hidden argument*/NULL);
	}

IL_016b:
	{
		goto IL_030c;
	}

IL_0170:
	{
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_Append_m2383614642(L_44, L_45, /*hidden argument*/NULL);
		bool L_46 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_018f;
		}
	}
	{
		Stack_1_t3320103523 * L_47 = __this->get_context_4();
		NullCheck(L_47);
		Stack_1_Push_m3601772963(L_47, 1, /*hidden argument*/Stack_1_Push_m3601772963_RuntimeMethod_var);
	}

IL_018f:
	{
		goto IL_030c;
	}

IL_0194:
	{
		bool L_48 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b8;
		}
	}
	{
		StringBuilder_t * L_49 = V_0;
		Il2CppChar L_50 = V_1;
		NullCheck(L_49);
		StringBuilder_Append_m2383614642(L_49, L_50, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_51 = __this->get_context_4();
		NullCheck(L_51);
		Stack_1_Pop_m1190955677(L_51, /*hidden argument*/Stack_1_Pop_m1190955677_RuntimeMethod_var);
		goto IL_01c0;
	}

IL_01b8:
	{
		StringBuilder_t * L_52 = V_0;
		Il2CppChar L_53 = V_1;
		NullCheck(L_52);
		StringBuilder_Append_m2383614642(L_52, L_53, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		goto IL_030c;
	}

IL_01c5:
	{
		StringBuilder_t * L_54 = V_0;
		Il2CppChar L_55 = V_1;
		NullCheck(L_54);
		StringBuilder_Append_m2383614642(L_54, L_55, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_01d2:
	{
		StringBuilder_t * L_56 = V_0;
		Il2CppChar L_57 = V_1;
		NullCheck(L_56);
		StringBuilder_Append_m2383614642(L_56, L_57, /*hidden argument*/NULL);
		bool L_58 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_01f1;
		}
	}
	{
		StringBuilder_t * L_59 = V_0;
		NullCheck(L_59);
		StringBuilder_Append_m1965104174(L_59, _stringLiteral3452614528, /*hidden argument*/NULL);
	}

IL_01f1:
	{
		bool L_60 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_0242;
		}
	}
	{
		Stack_1_t3320103523 * L_61 = __this->get_context_4();
		NullCheck(L_61);
		int32_t L_62 = Stack_1_Peek_m3875692595(L_61, /*hidden argument*/Stack_1_Peek_m3875692595_RuntimeMethod_var);
		if ((((int32_t)L_62) == ((int32_t)1)))
		{
			goto IL_0242;
		}
	}
	{
		Stack_1_t3320103523 * L_63 = __this->get_context_4();
		NullCheck(L_63);
		int32_t L_64 = Stack_1_get_Count_m1716089596(L_63, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		StringBuilder_t * L_65 = V_0;
		JsonFormatter_buildIndents_m987969659(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		StringBuilder_t * L_66 = V_0;
		String_t* L_67 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_66);
		StringBuilder_Append_m1965104174(L_66, L_67, /*hidden argument*/NULL);
		Stack_1_t3320103523 * L_68 = __this->get_context_4();
		NullCheck(L_68);
		int32_t L_69 = Stack_1_get_Count_m1716089596(L_68, /*hidden argument*/Stack_1_get_Count_m1716089596_RuntimeMethod_var);
		StringBuilder_t * L_70 = V_0;
		JsonFormatter_buildIndents_m987969659(NULL /*static, unused*/, L_69, L_70, /*hidden argument*/NULL);
		__this->set_inVariableAssignment_2((bool)0);
	}

IL_0242:
	{
		goto IL_030c;
	}

IL_0247:
	{
		bool L_71 = __this->get_inDoubleString_0();
		if (L_71)
		{
			goto IL_026e;
		}
	}
	{
		Il2CppChar L_72 = __this->get_prevChar_3();
		if ((((int32_t)L_72) == ((int32_t)((int32_t)92))))
		{
			goto IL_026e;
		}
	}
	{
		bool L_73 = __this->get_inSingleString_1();
		__this->set_inSingleString_1((bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0));
	}

IL_026e:
	{
		StringBuilder_t * L_74 = V_0;
		Il2CppChar L_75 = V_1;
		NullCheck(L_74);
		StringBuilder_Append_m2383614642(L_74, L_75, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_027b:
	{
		bool L_76 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_02a6;
		}
	}
	{
		__this->set_inVariableAssignment_2((bool)1);
		StringBuilder_t * L_77 = V_0;
		Il2CppChar L_78 = V_1;
		NullCheck(L_77);
		StringBuilder_Append_m2383614642(L_77, L_78, /*hidden argument*/NULL);
		StringBuilder_t * L_79 = V_0;
		NullCheck(L_79);
		StringBuilder_Append_m1965104174(L_79, _stringLiteral3452614528, /*hidden argument*/NULL);
		goto IL_02ae;
	}

IL_02a6:
	{
		StringBuilder_t * L_80 = V_0;
		Il2CppChar L_81 = V_1;
		NullCheck(L_80);
		StringBuilder_Append_m2383614642(L_80, L_81, /*hidden argument*/NULL);
	}

IL_02ae:
	{
		goto IL_030c;
	}

IL_02b3:
	{
		bool L_82 = __this->get_inSingleString_1();
		if (L_82)
		{
			goto IL_02da;
		}
	}
	{
		Il2CppChar L_83 = __this->get_prevChar_3();
		if ((((int32_t)L_83) == ((int32_t)((int32_t)92))))
		{
			goto IL_02da;
		}
	}
	{
		bool L_84 = __this->get_inDoubleString_0();
		__this->set_inDoubleString_0((bool)((((int32_t)L_84) == ((int32_t)0))? 1 : 0));
	}

IL_02da:
	{
		StringBuilder_t * L_85 = V_0;
		Il2CppChar L_86 = V_1;
		NullCheck(L_85);
		StringBuilder_Append_m2383614642(L_85, L_86, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_02e7:
	{
		bool L_87 = JsonFormatter_inString_m2472391709(__this, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_02fa;
		}
	}
	{
		StringBuilder_t * L_88 = V_0;
		Il2CppChar L_89 = V_1;
		NullCheck(L_88);
		StringBuilder_Append_m2383614642(L_88, L_89, /*hidden argument*/NULL);
	}

IL_02fa:
	{
		goto IL_030c;
	}

IL_02ff:
	{
		StringBuilder_t * L_90 = V_0;
		Il2CppChar L_91 = V_1;
		NullCheck(L_90);
		StringBuilder_Append_m2383614642(L_90, L_91, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_030c:
	{
		Il2CppChar L_92 = V_1;
		__this->set_prevChar_3(L_92);
		int32_t L_93 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0317:
	{
		int32_t L_94 = V_2;
		String_t* L_95 = ___input0;
		NullCheck(L_95);
		int32_t L_96 = String_get_Length_m3847582255(L_95, /*hidden argument*/NULL);
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_97 = V_0;
		NullCheck(L_97);
		String_t* L_98 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_97);
		return L_98;
	}
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
// System.Void Prime31.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m2436297384 (JsonObject_t3223138545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject__ctor_m2436297384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_m303517795(__this, /*hidden argument*/Dictionary_2__ctor_m303517795_RuntimeMethod_var);
		return;
	}
}
// System.String Prime31.JsonObject::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_m1836551772 (JsonObject_t3223138545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_ToString_m1836551772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = SimpleJson_encode_m2826025421(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = JsonFormatter_prettyPrint_m556974798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.MonoBehaviourGUI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI__ctor_m2509328926 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI__ctor_m2509328926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t4177511560 * L_0 = (Dictionary_2_t4177511560 *)il2cpp_codegen_object_new(Dictionary_2_t4177511560_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1500660071(L_0, /*hidden argument*/Dictionary_2__ctor_m1500660071_RuntimeMethod_var);
		__this->set__toggleButtons_4(L_0);
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		__this->set__logBuilder_5(L_1);
		__this->set__doubleClickDelay_9((0.15f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaOrLargeScreen()
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaOrLargeScreen_m1925671948 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = __this->get__isWindowsPhone_11();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)960))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)960)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		return (bool)G_B4_0;
	}
}
// System.Void Prime31.MonoBehaviourGUI::paintWindow(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_paintWindow_m1033582813 (MonoBehaviourGUI_t3872523344 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_paintWindow_m1033582813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_0 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t3956901511 * L_1 = GUISkin_get_label_m1693050720(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_set_alignment_m3944619660(L_1, 0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get__logScrollPosition_7();
		Vector2_t2156229523  L_3 = GUILayout_BeginScrollView_m3542895037(NULL /*static, unused*/, L_2, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		__this->set__logScrollPosition_7(L_3);
		bool L_4 = GUILayout_Button_m1340817034(NULL /*static, unused*/, _stringLiteral3662341286, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get__logBuilder_5();
		StringBuilder_t * L_6 = __this->get__logBuilder_5();
		NullCheck(L_6);
		int32_t L_7 = StringBuilder_get_Length_m3238060835(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Remove_m940064945(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_0054:
	{
		StringBuilder_t * L_8 = __this->get__logBuilder_5();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		GUILayout_Label_m1960000298(NULL /*static, unused*/, L_9, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		GUILayout_EndScrollView_m1561653937(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::handleLog(System.String,System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_handleLog_m603942292 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_handleLog_m603942292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get__logBuilder_5();
		String_t* L_1 = ___logString0;
		NullCheck(L_0);
		StringBuilder_AppendFormat_m3016532472(L_0, _stringLiteral1775096542, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_OnDestroy_m1183533740 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	{
		Application_RegisterLogCallback_m484975236(NULL /*static, unused*/, (LogCallback_t3588208630 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::Update()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_Update_m3668306016 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_Update_m3668306016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		bool L_0 = __this->get__logRegistered_6();
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_1 = (intptr_t)MonoBehaviourGUI_handleLog_m603942292_RuntimeMethod_var;
		LogCallback_t3588208630 * L_2 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_2, __this, L_1, /*hidden argument*/NULL);
		Application_RegisterLogCallback_m484975236(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set__logRegistered_6((bool)1);
		int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(RuntimePlatform_t4159857903_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m2029374922(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = String_Contains_m1147431944(L_7, _stringLiteral2722607755, /*hidden argument*/NULL);
		__this->set__isWindowsPhone_11(L_8);
	}

IL_0047:
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		float L_10 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get__previousClickTime_10();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		float L_12 = V_1;
		float L_13 = __this->get__doubleClickDelay_9();
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0074;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_007f;
	}

IL_0074:
	{
		float L_14 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__previousClickTime_10(L_14);
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_15 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_0090;
		}
	}
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_009f;
		}
	}

IL_0090:
	{
		bool L_17 = __this->get__isShowingLogConsole_8();
		__this->set__isShowingLogConsole_8((bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0));
	}

IL_009f:
	{
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::beginColumn()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginColumn_m4146504380 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_beginColumn_m4146504380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviourGUI_t3872523344 * G_B2_0 = NULL;
	MonoBehaviourGUI_t3872523344 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MonoBehaviourGUI_t3872523344 * G_B3_1 = NULL;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__width_2((((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_0/(int32_t)2)), (int32_t)((int32_t)15)))))));
		bool L_1 = MonoBehaviourGUI_isRetinaOrLargeScreen_m1925671948(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = ((int32_t)70);
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0024:
	{
		G_B3_0 = ((int32_t)30);
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__buttonHeight_3((((float)((float)G_B3_0))));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_2 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t3956901511 * L_3 = GUISkin_get_button_m2792560996(L_2, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_4 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_4, 0, 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_set_margin_m161080110(L_3, L_4, /*hidden argument*/NULL);
		GUISkin_t1244372282 * L_5 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyle_t3956901511 * L_6 = GUISkin_get_button_m2792560996(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_set_stretchWidth_m2564034386(L_6, (bool)1, /*hidden argument*/NULL);
		GUISkin_t1244372282 * L_7 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_t3956901511 * L_8 = GUISkin_get_button_m2792560996(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get__buttonHeight_3();
		NullCheck(L_8);
		GUIStyle_set_fixedHeight_m4105472229(L_8, L_9, /*hidden argument*/NULL);
		GUISkin_t1244372282 * L_10 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyle_t3956901511 * L_11 = GUISkin_get_button_m2792560996(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GUIStyle_set_wordWrap_m1419501823(L_11, (bool)0, /*hidden argument*/NULL);
		bool L_12 = __this->get__isShowingLogConsole_8();
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		Rect_t2360479859  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Rect__ctor_m2614021312((&L_13), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m3340577749(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_00c8;
	}

IL_00a8:
	{
		float L_14 = __this->get__width_2();
		int32_t L_15 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m2614021312((&L_16), (10.0f), (10.0f), L_14, (((float)((float)L_15))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m3340577749(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		GUILayout_BeginVertical_m1213265852(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::endColumn()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m2244467212 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourGUI_endColumn_m694865531(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::endColumn(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m694865531 (MonoBehaviourGUI_t3872523344 * __this, bool ___hasSecondColumn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_endColumn_m694865531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayout_EndVertical_m3051805938(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m2046611416(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_0 = __this->get__isShowingLogConsole_8();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)MonoBehaviourGUI_paintWindow_m1033582813_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		GUILayout_Window_m4256324736(NULL /*static, unused*/, 1, L_3, L_5, _stringLiteral3026423753, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_004e:
	{
		bool L_6 = ___hasSecondColumn0;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		MonoBehaviourGUI_beginRightColumn_m3460824730(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::beginRightColumn()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginRightColumn_m3460824730 (MonoBehaviourGUI_t3872523344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_beginRightColumn_m3460824730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isShowingLogConsole_8();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Rect_t2360479859  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Rect__ctor_m2614021312((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m3340577749(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_002e:
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get__width_2();
		float L_4 = __this->get__width_2();
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m2614021312((&L_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_2))), (float)L_3)), (float)(10.0f))), (10.0f), L_4, (((float)((float)L_5))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m3340577749(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_005c:
	{
		GUILayout_BeginVertical_m1213265852(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomRightButton(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomRightButton_m1164546401 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_bottomRightButton_m1164546401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___width1;
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get__buttonHeight_3();
		float L_4 = ___width1;
		float L_5 = __this->get__buttonHeight_3();
		Rect_t2360479859  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m2614021312((&L_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_1)), (float)(10.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_2))), (float)L_3)), (float)(10.0f))), L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_8 = GUI_Button_m1518979886(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomLeftButton(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomLeftButton_m2252721825 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_bottomLeftButton_m2252721825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get__buttonHeight_3();
		float L_2 = ___width1;
		float L_3 = __this->get__buttonHeight_3();
		Rect_t2360479859  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m2614021312((&L_4), (10.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_1)), (float)(10.0f))), L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_6 = GUI_Button_m1518979886(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomCenterButton(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomCenterButton_m3186389987 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_bottomCenterButton_m3186389987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___width1;
		V_0 = ((float)il2cpp_codegen_subtract((float)(((float)((float)((int32_t)((int32_t)L_0/(int32_t)2))))), (float)((float)((float)L_1/(float)(2.0f)))));
		float L_2 = V_0;
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get__buttonHeight_3();
		float L_5 = ___width1;
		float L_6 = __this->get__buttonHeight_3();
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m2614021312((&L_7), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_3))), (float)L_4)), (float)(10.0f))), L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m1518979886(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::toggleButton(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_toggleButton_m3317365033 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___defaultText0, String_t* ___selectedText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_toggleButton_m3317365033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		Dictionary_2_t4177511560 * L_0 = __this->get__toggleButtons_4();
		String_t* L_1 = ___defaultText0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m93706162(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m93706162_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t4177511560 * L_3 = __this->get__toggleButtons_4();
		String_t* L_4 = ___defaultText0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m4020705531(L_3, L_4, (bool)1, /*hidden argument*/Dictionary_2_set_Item_m4020705531_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_t4177511560 * L_5 = __this->get__toggleButtons_4();
		String_t* L_6 = ___defaultText0;
		NullCheck(L_5);
		bool L_7 = Dictionary_2_get_Item_m2314420255(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2314420255_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_8 = ___defaultText0;
		G_B5_0 = L_8;
		goto IL_0036;
	}

IL_0035:
	{
		String_t* L_9 = ___selectedText1;
		G_B5_0 = L_9;
	}

IL_0036:
	{
		V_0 = G_B5_0;
		Dictionary_2_t4177511560 * L_10 = __this->get__toggleButtons_4();
		String_t* L_11 = ___defaultText0;
		NullCheck(L_10);
		bool L_12 = Dictionary_2_get_Item_m2314420255(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m2314420255_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_13 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyle_t3956901511 * L_14 = GUISkin_get_button_m2792560996(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GUIStyle_set_fontStyle_m1497341802(L_14, 3, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_contentColor_m1403854338(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_16 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		GUIStyle_t3956901511 * L_17 = GUISkin_get_button_m2792560996(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GUIStyle_set_fontStyle_m1497341802(L_17, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_18 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_contentColor_m1403854338(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_0081:
	{
		String_t* L_19 = V_0;
		bool L_20 = GUILayout_Button_m1340817034(NULL /*static, unused*/, L_19, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a5;
		}
	}
	{
		Dictionary_2_t4177511560 * L_21 = __this->get__toggleButtons_4();
		String_t* L_22 = ___defaultText0;
		String_t* L_23 = V_0;
		String_t* L_24 = ___defaultText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Dictionary_2_set_Item_m4020705531(L_21, L_22, L_25, /*hidden argument*/Dictionary_2_set_Item_m4020705531_RuntimeMethod_var);
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_26 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		GUIStyle_t3956901511 * L_27 = GUISkin_get_button_m2792560996(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyle_set_fontStyle_m1497341802(L_27, 0, /*hidden argument*/NULL);
		Color_t2555686324  L_28 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_contentColor_m1403854338(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		Dictionary_2_t4177511560 * L_29 = __this->get__toggleButtons_4();
		String_t* L_30 = ___defaultText0;
		NullCheck(L_29);
		bool L_31 = Dictionary_2_get_Item_m2314420255(L_29, L_30, /*hidden argument*/Dictionary_2_get_Item_m2314420255_RuntimeMethod_var);
		return L_31;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::toggleButtonState(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_toggleButtonState_m615803482 (MonoBehaviourGUI_t3872523344 * __this, String_t* ___defaultText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviourGUI_toggleButtonState_m615803482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t4177511560 * L_0 = __this->get__toggleButtons_4();
		String_t* L_1 = ___defaultText0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m93706162(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m93706162_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t4177511560 * L_3 = __this->get__toggleButtons_4();
		String_t* L_4 = ___defaultText0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m4020705531(L_3, L_4, (bool)1, /*hidden argument*/Dictionary_2_set_Item_m4020705531_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_t4177511560 * L_5 = __this->get__toggleButtons_4();
		String_t* L_6 = ___defaultText0;
		NullCheck(L_5);
		bool L_7 = Dictionary_2_get_Item_m2314420255(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2314420255_RuntimeMethod_var);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Prime31.P31Error::get_message()
extern "C" IL2CPP_METHOD_ATTR String_t* P31Error_get_message_m3714158006 (P31Error_t2299173450 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CmessageU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Prime31.P31Error::set_message(System.String)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_message_m2402050292 (P31Error_t2299173450 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Prime31.P31Error::set_domain(System.String)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_domain_m2353820401 (P31Error_t2299173450 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdomainU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Prime31.P31Error::set_code(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_code_m1794968022 (P31Error_t2299173450 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcodeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Prime31.P31Error::set_userInfo(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void P31Error_set_userInfo_m3746872740 (P31Error_t2299173450 * __this, Dictionary_2_t2865362463 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2865362463 * L_0 = ___value0;
		__this->set_U3CuserInfoU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Prime31.P31Error::.ctor()
extern "C" IL2CPP_METHOD_ATTR void P31Error__ctor_m1686858238 (P31Error_t2299173450 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Prime31.P31Error Prime31.P31Error::errorFromJson(System.String)
extern "C" IL2CPP_METHOD_ATTR P31Error_t2299173450 * P31Error_errorFromJson_m222178292 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31Error_errorFromJson_m222178292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	P31Error_t2299173450 * V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	P31Error_t2299173450 * G_B6_0 = NULL;
	P31Error_t2299173450 * G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	P31Error_t2299173450 * G_B7_1 = NULL;
	P31Error_t2299173450 * G_B9_0 = NULL;
	P31Error_t2299173450 * G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	P31Error_t2299173450 * G_B10_1 = NULL;
	P31Error_t2299173450 * G_B12_0 = NULL;
	P31Error_t2299173450 * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	P31Error_t2299173450 * G_B13_1 = NULL;
	P31Error_t2299173450 * G_B15_0 = NULL;
	P31Error_t2299173450 * G_B14_0 = NULL;
	Dictionary_2_t2865362463 * G_B16_0 = NULL;
	P31Error_t2299173450 * G_B16_1 = NULL;
	{
		P31Error_t2299173450 * L_0 = (P31Error_t2299173450 *)il2cpp_codegen_object_new(P31Error_t2299173450_il2cpp_TypeInfo_var);
		P31Error__ctor_m1686858238(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m1759067526(L_1, _stringLiteral3452614613, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		P31Error_t2299173450 * L_3 = V_0;
		String_t* L_4 = ___json0;
		NullCheck(L_3);
		P31Error_set_message_m2402050292(L_3, L_4, /*hidden argument*/NULL);
		P31Error_t2299173450 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set__containsOnlyMessage_4((bool)1);
		P31Error_t2299173450 * L_6 = V_0;
		return L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___json0;
		RuntimeObject * L_8 = Json_decode_m1423667791(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_9 = V_1;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		P31Error_t2299173450 * L_10 = V_0;
		NullCheck(L_10);
		P31Error_set_message_m2402050292(L_10, _stringLiteral1471173669, /*hidden argument*/NULL);
		goto IL_00fd;
	}

IL_0048:
	{
		P31Error_t2299173450 * L_11 = V_0;
		Dictionary_2_t2865362463 * L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = Dictionary_2_ContainsKey_m1680405325(L_12, _stringLiteral3253941996, /*hidden argument*/Dictionary_2_ContainsKey_m1680405325_RuntimeMethod_var);
		G_B5_0 = L_11;
		if (!L_13)
		{
			G_B6_0 = L_11;
			goto IL_006e;
		}
	}
	{
		Dictionary_2_t2865362463 * L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_m1204235524(L_14, _stringLiteral3253941996, /*hidden argument*/Dictionary_2_get_Item_m1204235524_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		G_B7_0 = L_16;
		G_B7_1 = G_B5_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_006f:
	{
		NullCheck(G_B7_1);
		P31Error_set_message_m2402050292(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		P31Error_t2299173450 * L_17 = V_0;
		Dictionary_2_t2865362463 * L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = Dictionary_2_ContainsKey_m1680405325(L_18, _stringLiteral3929789730, /*hidden argument*/Dictionary_2_ContainsKey_m1680405325_RuntimeMethod_var);
		G_B8_0 = L_17;
		if (!L_19)
		{
			G_B9_0 = L_17;
			goto IL_009a;
		}
	}
	{
		Dictionary_2_t2865362463 * L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject * L_21 = Dictionary_2_get_Item_m1204235524(L_20, _stringLiteral3929789730, /*hidden argument*/Dictionary_2_get_Item_m1204235524_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		G_B10_0 = L_22;
		G_B10_1 = G_B8_0;
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_009b:
	{
		NullCheck(G_B10_1);
		P31Error_set_domain_m2353820401(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		P31Error_t2299173450 * L_23 = V_0;
		Dictionary_2_t2865362463 * L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = Dictionary_2_ContainsKey_m1680405325(L_24, _stringLiteral1985170611, /*hidden argument*/Dictionary_2_ContainsKey_m1680405325_RuntimeMethod_var);
		G_B11_0 = L_23;
		if (!L_25)
		{
			G_B12_0 = L_23;
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t2865362463 * L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject * L_27 = Dictionary_2_get_Item_m1204235524(L_26, _stringLiteral1985170611, /*hidden argument*/Dictionary_2_get_Item_m1204235524_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		int32_t L_29 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		G_B13_0 = L_29;
		G_B13_1 = G_B11_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B13_0 = (-1);
		G_B13_1 = G_B12_0;
	}

IL_00cc:
	{
		NullCheck(G_B13_1);
		P31Error_set_code_m1794968022(G_B13_1, G_B13_0, /*hidden argument*/NULL);
		P31Error_t2299173450 * L_30 = V_0;
		Dictionary_2_t2865362463 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = Dictionary_2_ContainsKey_m1680405325(L_31, _stringLiteral2324986263, /*hidden argument*/Dictionary_2_ContainsKey_m1680405325_RuntimeMethod_var);
		G_B14_0 = L_30;
		if (!L_32)
		{
			G_B15_0 = L_30;
			goto IL_00f7;
		}
	}
	{
		Dictionary_2_t2865362463 * L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject * L_34 = Dictionary_2_get_Item_m1204235524(L_33, _stringLiteral2324986263, /*hidden argument*/Dictionary_2_get_Item_m1204235524_RuntimeMethod_var);
		G_B16_0 = ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_34, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		G_B16_1 = G_B14_0;
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B16_0 = ((Dictionary_2_t2865362463 *)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00f8:
	{
		NullCheck(G_B16_1);
		P31Error_set_userInfo_m3746872740(G_B16_1, G_B16_0, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		P31Error_t2299173450 * L_35 = V_0;
		return L_35;
	}
}
// System.String Prime31.P31Error::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* P31Error_ToString_m3418559899 (P31Error_t2299173450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31Error_ToString_m3418559899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__containsOnlyMessage_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = P31Error_get_message_m3714158006(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1843019704, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		String_t* L_3 = Json_encode_m1889278415(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		String_t* L_5 = JsonFormatter_prettyPrint_m556974798(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1843019704, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0050;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		String_t* L_7 = P31Error_get_message_m3714158006(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1843019704, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Prime31.P31RestKit::get_surrogateGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * P31RestKit_get_surrogateGameObject_m1051919742 (P31RestKit_t3519255076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_get_surrogateGameObject_m1051919742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__surrogateGameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral28129332, /*hidden argument*/NULL);
		__this->set__surrogateGameObject_3(L_2);
		GameObject_t1113636619 * L_3 = __this->get__surrogateGameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GameObject_t1113636619 * L_5 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_5, _stringLiteral28129332, /*hidden argument*/NULL);
		__this->set__surrogateGameObject_3(L_5);
		GameObject_t1113636619 * L_6 = __this->get__surrogateGameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_004d:
	{
		GameObject_t1113636619 * L_7 = __this->get__surrogateGameObject_3();
		return L_7;
	}
}
// System.Void Prime31.P31RestKit::set_surrogateGameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void P31RestKit_set_surrogateGameObject_m1308967929 (P31RestKit_t3519255076 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set__surrogateGameObject_3(L_0);
		return;
	}
}
// UnityEngine.MonoBehaviour Prime31.P31RestKit::get_surrogateMonobehaviour()
extern "C" IL2CPP_METHOD_ATTR MonoBehaviour_t3962482529 * P31RestKit_get_surrogateMonobehaviour_m3047038679 (P31RestKit_t3519255076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_get_surrogateMonobehaviour_m3047038679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t3962482529 * L_0 = __this->get__surrogateMonobehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_2 = VirtFuncInvoker0< GameObject_t1113636619 * >::Invoke(4 /* UnityEngine.GameObject Prime31.P31RestKit::get_surrogateGameObject() */, __this);
		NullCheck(L_2);
		MonoBehaviour_t3962482529 * L_3 = GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400(L_2, /*hidden argument*/GameObject_AddComponent_TisMonoBehaviour_t3962482529_m2372218400_RuntimeMethod_var);
		__this->set__surrogateMonobehaviour_4(L_3);
	}

IL_0022:
	{
		MonoBehaviour_t3962482529 * L_4 = __this->get__surrogateMonobehaviour_4();
		return L_4;
	}
}
// System.Void Prime31.P31RestKit::set_surrogateMonobehaviour(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void P31RestKit_set_surrogateMonobehaviour_m4251423729 (P31RestKit_t3519255076 * __this, MonoBehaviour_t3962482529 * ___value0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = ___value0;
		__this->set__surrogateMonobehaviour_4(L_0);
		return;
	}
}
// System.Void Prime31.P31RestKit::.ctor()
extern "C" IL2CPP_METHOD_ATTR void P31RestKit__ctor_m3154993621 (P31RestKit_t3519255076 * __this, const RuntimeMethod* method)
{
	{
		__this->set_debugRequests_1((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Prime31.P31RestKit::send(System.String,Prime31.HTTPVerb,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Action`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* P31RestKit_send_m411001721 (P31RestKit_t3519255076 * __this, String_t* ___path0, int32_t ___httpVerb1, Dictionary_2_t2865362463 * ___parameters2, Action_2_t907858853 * ___onComplete3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_send_m411001721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CsendU3Ec__Iterator0_t1520858258 * V_0 = NULL;
	{
		U3CsendU3Ec__Iterator0_t1520858258 * L_0 = (U3CsendU3Ec__Iterator0_t1520858258 *)il2cpp_codegen_object_new(U3CsendU3Ec__Iterator0_t1520858258_il2cpp_TypeInfo_var);
		U3CsendU3Ec__Iterator0__ctor_m4236497672(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CsendU3Ec__Iterator0_t1520858258 * L_1 = V_0;
		String_t* L_2 = ___path0;
		NullCheck(L_1);
		L_1->set_path_0(L_2);
		U3CsendU3Ec__Iterator0_t1520858258 * L_3 = V_0;
		int32_t L_4 = ___httpVerb1;
		NullCheck(L_3);
		L_3->set_httpVerb_1(L_4);
		U3CsendU3Ec__Iterator0_t1520858258 * L_5 = V_0;
		Dictionary_2_t2865362463 * L_6 = ___parameters2;
		NullCheck(L_5);
		L_5->set_parameters_2(L_6);
		U3CsendU3Ec__Iterator0_t1520858258 * L_7 = V_0;
		Action_2_t907858853 * L_8 = ___onComplete3;
		NullCheck(L_7);
		L_7->set_onComplete_4(L_8);
		U3CsendU3Ec__Iterator0_t1520858258 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_U24this_5(__this);
		U3CsendU3Ec__Iterator0_t1520858258 * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.WWW Prime31.P31RestKit::processRequest(System.String,Prime31.HTTPVerb,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR WWW_t3688466362 * P31RestKit_processRequest_m3966119200 (P31RestKit_t3519255076 * __this, String_t* ___path0, int32_t ___httpVerb1, Dictionary_2_t2865362463 * ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_processRequest_m3966119200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	WWWForm_t4064702195 * V_2 = NULL;
	KeyValuePair_2_t968067334  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Enumerator_t524577942  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	KeyValuePair_2_t968067334  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Enumerator_t524577942  V_7;
	memset(&V_7, 0, sizeof(V_7));
	WWW_t3688466362 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	WWWForm_t4064702195 * G_B3_0 = NULL;
	String_t* G_B23_0 = NULL;
	StringBuilder_t * G_B23_1 = NULL;
	String_t* G_B22_0 = NULL;
	StringBuilder_t * G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	StringBuilder_t * G_B24_2 = NULL;
	WWW_t3688466362 * G_B33_0 = NULL;
	{
		String_t* L_0 = __this->get__baseUrl_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___httpVerb1;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		WWWForm_t4064702195 * L_6 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_6, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = ((WWWForm_t4064702195 *)(NULL));
	}

IL_002b:
	{
		V_2 = G_B3_0;
		Dictionary_2_t2865362463 * L_7 = ___parameters2;
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		Dictionary_2_t2865362463 * L_8 = ___parameters2;
		NullCheck(L_8);
		int32_t L_9 = Dictionary_2_get_Count_m1568726197(L_8, /*hidden argument*/Dictionary_2_get_Count_m1568726197_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0174;
		}
	}
	{
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00d6;
		}
	}
	{
		Dictionary_2_t2865362463 * L_11 = ___parameters2;
		NullCheck(L_11);
		Enumerator_t524577942  L_12 = Dictionary_2_GetEnumerator_m3695584085(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3695584085_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_0051:
		{
			KeyValuePair_2_t968067334  L_13 = Enumerator_get_Current_m1121422282((&V_4), /*hidden argument*/Enumerator_get_Current_m1121422282_RuntimeMethod_var);
			V_3 = L_13;
			RuntimeObject * L_14 = KeyValuePair_2_get_Value_m639768272((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			if (!((String_t*)IsInstSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0088;
			}
		}

IL_006a:
		{
			WWWForm_t4064702195 * L_15 = V_2;
			String_t* L_16 = KeyValuePair_2_get_Key_m1625637660((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1625637660_RuntimeMethod_var);
			RuntimeObject * L_17 = KeyValuePair_2_get_Value_m639768272((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			NullCheck(L_15);
			WWWForm_AddField_m2357902982(L_15, L_16, ((String_t*)IsInstSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_00b2;
		}

IL_0088:
		{
			RuntimeObject * L_18 = KeyValuePair_2_get_Value_m639768272((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			if (!((ByteU5BU5D_t4116647657*)IsInst((RuntimeObject*)L_18, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)))
			{
				goto IL_00b2;
			}
		}

IL_0099:
		{
			WWWForm_t4064702195 * L_19 = V_2;
			String_t* L_20 = KeyValuePair_2_get_Key_m1625637660((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1625637660_RuntimeMethod_var);
			RuntimeObject * L_21 = KeyValuePair_2_get_Value_m639768272((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			NullCheck(L_19);
			WWWForm_AddBinaryData_m3250149150(L_19, L_20, ((ByteU5BU5D_t4116647657*)IsInst((RuntimeObject*)L_21, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00b2:
		{
			bool L_22 = Enumerator_MoveNext_m912154270((&V_4), /*hidden argument*/Enumerator_MoveNext_m912154270_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0051;
			}
		}

IL_00be:
		{
			IL2CPP_LEAVE(0xD1, FINALLY_00c3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c3;
	}

FINALLY_00c3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2607424534((&V_4), /*hidden argument*/Enumerator_Dispose_m2607424534_RuntimeMethod_var);
		IL2CPP_END_FINALLY(195)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(195)
	{
		IL2CPP_JUMP_TBL(0xD1, IL_00d1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		goto IL_0174;
	}

IL_00d6:
	{
		V_5 = (bool)1;
		String_t* L_23 = ___path0;
		NullCheck(L_23);
		bool L_24 = String_Contains_m1147431944(L_23, _stringLiteral3452614545, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ec;
		}
	}
	{
		V_5 = (bool)0;
	}

IL_00ec:
	{
		Dictionary_2_t2865362463 * L_25 = ___parameters2;
		NullCheck(L_25);
		Enumerator_t524577942  L_26 = Dictionary_2_GetEnumerator_m3695584085(L_25, /*hidden argument*/Dictionary_2_GetEnumerator_m3695584085_RuntimeMethod_var);
		V_7 = L_26;
	}

IL_00f4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0155;
		}

IL_00f9:
		{
			KeyValuePair_2_t968067334  L_27 = Enumerator_get_Current_m1121422282((&V_7), /*hidden argument*/Enumerator_get_Current_m1121422282_RuntimeMethod_var);
			V_6 = L_27;
			RuntimeObject * L_28 = KeyValuePair_2_get_Value_m639768272((&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			if (!((String_t*)IsInstSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0155;
			}
		}

IL_0113:
		{
			StringBuilder_t * L_29 = V_0;
			bool L_30 = V_5;
			G_B22_0 = _stringLiteral4116493219;
			G_B22_1 = L_29;
			if (!L_30)
			{
				G_B23_0 = _stringLiteral4116493219;
				G_B23_1 = L_29;
				goto IL_012a;
			}
		}

IL_0120:
		{
			G_B24_0 = _stringLiteral3452614545;
			G_B24_1 = G_B22_0;
			G_B24_2 = G_B22_1;
			goto IL_012f;
		}

IL_012a:
		{
			G_B24_0 = _stringLiteral3452614522;
			G_B24_1 = G_B23_0;
			G_B24_2 = G_B23_1;
		}

IL_012f:
		{
			String_t* L_31 = KeyValuePair_2_get_Key_m1625637660((&V_6), /*hidden argument*/KeyValuePair_2_get_Key_m1625637660_RuntimeMethod_var);
			String_t* L_32 = WWW_EscapeURL_m4251687403(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			RuntimeObject * L_33 = KeyValuePair_2_get_Value_m639768272((&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m639768272_RuntimeMethod_var);
			String_t* L_34 = WWW_EscapeURL_m4251687403(NULL /*static, unused*/, ((String_t*)IsInstSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(G_B24_2);
			StringBuilder_AppendFormat_m2403596038(G_B24_2, G_B24_1, G_B24_0, L_32, L_34, /*hidden argument*/NULL);
			V_5 = (bool)0;
		}

IL_0155:
		{
			bool L_35 = Enumerator_MoveNext_m912154270((&V_7), /*hidden argument*/Enumerator_MoveNext_m912154270_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_00f9;
			}
		}

IL_0161:
		{
			IL2CPP_LEAVE(0x174, FINALLY_0166);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0166;
	}

FINALLY_0166:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2607424534((&V_7), /*hidden argument*/Enumerator_Dispose_m2607424534_RuntimeMethod_var);
		IL2CPP_END_FINALLY(358)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(358)
	{
		IL2CPP_JUMP_TBL(0x174, IL_0174)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0174:
	{
		bool L_36 = __this->get_debugRequests_1();
		if (!L_36)
		{
			goto IL_0194;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4131545663, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
	}

IL_0194:
	{
		bool L_40 = V_1;
		if (!L_40)
		{
			goto IL_01ab;
		}
	}
	{
		StringBuilder_t * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		WWWForm_t4064702195 * L_43 = V_2;
		WWW_t3688466362 * L_44 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m1562165(L_44, L_42, L_43, /*hidden argument*/NULL);
		G_B33_0 = L_44;
		goto IL_01b6;
	}

IL_01ab:
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		WWW_t3688466362 * L_47 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_47, L_46, /*hidden argument*/NULL);
		G_B33_0 = L_47;
	}

IL_01b6:
	{
		V_8 = G_B33_0;
		WWW_t3688466362 * L_48 = V_8;
		return L_48;
	}
}
// System.Void Prime31.P31RestKit::processResponse(UnityEngine.WWW,System.Action`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void P31RestKit_processResponse_m267050522 (P31RestKit_t3519255076 * __this, WWW_t3688466362 * ___www0, Action_2_t907858853 * ___onComplete1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_processResponse_m267050522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		WWW_t3688466362 * L_0 = ___www0;
		NullCheck(L_0);
		String_t* L_1 = WWW_get_error_m3055313367(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Action_2_t907858853 * L_2 = ___onComplete1;
		WWW_t3688466362 * L_3 = ___www0;
		NullCheck(L_3);
		String_t* L_4 = WWW_get_error_m3055313367(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_2_Invoke_m4170584757(L_2, L_4, NULL, /*hidden argument*/Action_2_Invoke_m4170584757_RuntimeMethod_var);
		goto IL_005c;
	}

IL_001d:
	{
		WWW_t3688466362 * L_5 = ___www0;
		bool L_6 = P31RestKit_isResponseJson_m2716641910(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		WWW_t3688466362 * L_7 = ___www0;
		NullCheck(L_7);
		String_t* L_8 = WWW_get_text_m898164367(L_7, /*hidden argument*/NULL);
		RuntimeObject * L_9 = Json_decode_m1423667791(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject * L_10 = V_0;
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		WWW_t3688466362 * L_11 = ___www0;
		NullCheck(L_11);
		String_t* L_12 = WWW_get_text_m898164367(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0042:
	{
		Action_2_t907858853 * L_13 = ___onComplete1;
		RuntimeObject * L_14 = V_0;
		NullCheck(L_13);
		Action_2_Invoke_m4170584757(L_13, (String_t*)NULL, L_14, /*hidden argument*/Action_2_Invoke_m4170584757_RuntimeMethod_var);
		goto IL_005c;
	}

IL_004f:
	{
		Action_2_t907858853 * L_15 = ___onComplete1;
		WWW_t3688466362 * L_16 = ___www0;
		NullCheck(L_16);
		String_t* L_17 = WWW_get_text_m898164367(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_2_Invoke_m4170584757(L_15, (String_t*)NULL, L_17, /*hidden argument*/Action_2_Invoke_m4170584757_RuntimeMethod_var);
	}

IL_005c:
	{
		return;
	}
}
// System.Boolean Prime31.P31RestKit::isResponseJson(UnityEngine.WWW)
extern "C" IL2CPP_METHOD_ATTR bool P31RestKit_isResponseJson_m2716641910 (P31RestKit_t3519255076 * __this, WWW_t3688466362 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (P31RestKit_isResponseJson_m2716641910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyValuePair_2_t4030379155  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t3586889763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		bool L_0 = __this->get_forceJsonResponse_2();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_000f:
	{
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_00a0;
		}
	}
	{
		WWW_t3688466362 * L_2 = ___www0;
		NullCheck(L_2);
		Dictionary_2_t1632706988 * L_3 = WWW_get_responseHeaders_m4105369968(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t3586889763  L_4 = Dictionary_2_GetEnumerator_m1883005577(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0026:
		{
			KeyValuePair_2_t4030379155  L_5 = Enumerator_get_Current_m4125185638((&V_2), /*hidden argument*/Enumerator_get_Current_m4125185638_RuntimeMethod_var);
			V_1 = L_5;
			String_t* L_6 = KeyValuePair_2_get_Key_m3938572407((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3938572407_RuntimeMethod_var);
			NullCheck(L_6);
			String_t* L_7 = String_ToLower_m2029374922(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, _stringLiteral2263759525, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0081;
			}
		}

IL_0049:
		{
			String_t* L_9 = KeyValuePair_2_get_Value_m2642806556((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2642806556_RuntimeMethod_var);
			NullCheck(L_9);
			String_t* L_10 = String_ToLower_m2029374922(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			bool L_11 = String_Contains_m1147431944(L_10, _stringLiteral2806922932, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0064:
		{
			String_t* L_12 = KeyValuePair_2_get_Value_m2642806556((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2642806556_RuntimeMethod_var);
			NullCheck(L_12);
			String_t* L_13 = String_ToLower_m2029374922(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			bool L_14 = String_Contains_m1147431944(L_13, _stringLiteral3666855714, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0081;
			}
		}

IL_007f:
		{
			V_0 = (bool)1;
		}

IL_0081:
		{
			bool L_15 = Enumerator_MoveNext_m897800495((&V_2), /*hidden argument*/Enumerator_MoveNext_m897800495_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0026;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA0, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((&V_2), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(146)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a0:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00d2;
		}
	}
	{
		WWW_t3688466362 * L_17 = ___www0;
		NullCheck(L_17);
		String_t* L_18 = WWW_get_text_m898164367(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = String_StartsWith_m1759067526(L_18, _stringLiteral3452614645, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00d2;
		}
	}
	{
		WWW_t3688466362 * L_20 = ___www0;
		NullCheck(L_20);
		String_t* L_21 = WWW_get_text_m898164367(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = String_StartsWith_m1759067526(L_21, _stringLiteral3452614613, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_00d2:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void Prime31.P31RestKit::get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Action`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void P31RestKit_get_m2478474286 (P31RestKit_t3519255076 * __this, String_t* ___path0, Dictionary_2_t2865362463 * ___parameters1, Action_2_t907858853 * ___completionHandler2, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = P31RestKit_get_surrogateMonobehaviour_m3047038679(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___path0;
		Dictionary_2_t2865362463 * L_2 = ___parameters1;
		Action_2_t907858853 * L_3 = ___completionHandler2;
		RuntimeObject* L_4 = VirtFuncInvoker4< RuntimeObject*, String_t*, int32_t, Dictionary_2_t2865362463 *, Action_2_t907858853 * >::Invoke(6 /* System.Collections.IEnumerator Prime31.P31RestKit::send(System.String,Prime31.HTTPVerb,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Action`2<System.String,System.Object>) */, __this, L_1, 0, L_2, L_3);
		NullCheck(L_0);
		MonoBehaviour_StartCoroutine_m3411253000(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.P31RestKit::post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Action`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void P31RestKit_post_m3309618252 (P31RestKit_t3519255076 * __this, String_t* ___path0, Dictionary_2_t2865362463 * ___parameters1, Action_2_t907858853 * ___completionHandler2, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = P31RestKit_get_surrogateMonobehaviour_m3047038679(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___path0;
		Dictionary_2_t2865362463 * L_2 = ___parameters1;
		Action_2_t907858853 * L_3 = ___completionHandler2;
		RuntimeObject* L_4 = VirtFuncInvoker4< RuntimeObject*, String_t*, int32_t, Dictionary_2_t2865362463 *, Action_2_t907858853 * >::Invoke(6 /* System.Collections.IEnumerator Prime31.P31RestKit::send(System.String,Prime31.HTTPVerb,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Action`2<System.String,System.Object>) */, __this, L_1, 1, L_2, L_3);
		NullCheck(L_0);
		MonoBehaviour_StartCoroutine_m3411253000(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Prime31.P31RestKit/<send>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CsendU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3983202456 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object Prime31.P31RestKit/<send>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CsendU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2809373077 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void Prime31.P31RestKit/<send>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsendU3Ec__Iterator0__ctor_m4236497672 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Prime31.P31RestKit/<send>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CsendU3Ec__Iterator0_MoveNext_m3694812149 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsendU3Ec__Iterator0_MoveNext_m3694812149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	KeyValuePair_2_t4030379155  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t3586889763  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_008b;
			}
		}
	}
	{
		goto IL_0177;
	}

IL_0021:
	{
		String_t* L_2 = __this->get_path_0();
		NullCheck(L_2);
		bool L_3 = String_StartsWith_m1759067526(L_2, _stringLiteral3452614529, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_4 = __this->get_path_0();
		NullCheck(L_4);
		String_t* L_5 = String_Substring_m2848979100(L_4, 1, /*hidden argument*/NULL);
		__this->set_path_0(L_5);
	}

IL_0048:
	{
		P31RestKit_t3519255076 * L_6 = __this->get_U24this_5();
		String_t* L_7 = __this->get_path_0();
		int32_t L_8 = __this->get_httpVerb_1();
		Dictionary_2_t2865362463 * L_9 = __this->get_parameters_2();
		NullCheck(L_6);
		WWW_t3688466362 * L_10 = VirtFuncInvoker3< WWW_t3688466362 *, String_t*, int32_t, Dictionary_2_t2865362463 * >::Invoke(7 /* UnityEngine.WWW Prime31.P31RestKit::processRequest(System.String,Prime31.HTTPVerb,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_6, L_7, L_8, L_9);
		__this->set_U3CwwwU3E__0_3(L_10);
		WWW_t3688466362 * L_11 = __this->get_U3CwwwU3E__0_3();
		__this->set_U24current_6(L_11);
		bool L_12 = __this->get_U24disposing_7();
		if (L_12)
		{
			goto IL_0086;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_0086:
	{
		goto IL_0179;
	}

IL_008b:
	{
		P31RestKit_t3519255076 * L_13 = __this->get_U24this_5();
		NullCheck(L_13);
		bool L_14 = L_13->get_debugRequests_1();
		if (!L_14)
		{
			goto IL_0143;
		}
	}
	{
		WWW_t3688466362 * L_15 = __this->get_U3CwwwU3E__0_3();
		NullCheck(L_15);
		String_t* L_16 = WWW_get_error_m3055313367(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2140354418, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		WWW_t3688466362 * L_18 = __this->get_U3CwwwU3E__0_3();
		NullCheck(L_18);
		String_t* L_19 = WWW_get_text_m898164367(L_18, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1231988422, L_19, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_21, /*hidden argument*/NULL);
		V_1 = L_21;
		StringBuilder_t * L_22 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m1965104174(L_22, _stringLiteral134007522, /*hidden argument*/NULL);
		WWW_t3688466362 * L_23 = __this->get_U3CwwwU3E__0_3();
		NullCheck(L_23);
		Dictionary_2_t1632706988 * L_24 = WWW_get_responseHeaders_m4105369968(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Enumerator_t3586889763  L_25 = Dictionary_2_GetEnumerator_m1883005577(L_24, /*hidden argument*/Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var);
		V_3 = L_25;
	}

IL_00f2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0119;
		}

IL_00f7:
		{
			KeyValuePair_2_t4030379155  L_26 = Enumerator_get_Current_m4125185638((&V_3), /*hidden argument*/Enumerator_get_Current_m4125185638_RuntimeMethod_var);
			V_2 = L_26;
			StringBuilder_t * L_27 = V_1;
			String_t* L_28 = KeyValuePair_2_get_Key_m3938572407((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3938572407_RuntimeMethod_var);
			String_t* L_29 = KeyValuePair_2_get_Value_m2642806556((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m2642806556_RuntimeMethod_var);
			NullCheck(L_27);
			StringBuilder_AppendFormat_m3255666490(L_27, _stringLiteral1707224250, L_28, L_29, /*hidden argument*/NULL);
		}

IL_0119:
		{
			bool L_30 = Enumerator_MoveNext_m897800495((&V_3), /*hidden argument*/Enumerator_MoveNext_m897800495_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_00f7;
			}
		}

IL_0125:
		{
			IL2CPP_LEAVE(0x138, FINALLY_012a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012a;
	}

FINALLY_012a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((&V_3), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(298)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(298)
	{
		IL2CPP_JUMP_TBL(0x138, IL_0138)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0138:
	{
		StringBuilder_t * L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_0143:
	{
		Action_2_t907858853 * L_33 = __this->get_onComplete_4();
		if (!L_33)
		{
			goto IL_0165;
		}
	}
	{
		P31RestKit_t3519255076 * L_34 = __this->get_U24this_5();
		WWW_t3688466362 * L_35 = __this->get_U3CwwwU3E__0_3();
		Action_2_t907858853 * L_36 = __this->get_onComplete_4();
		NullCheck(L_34);
		VirtActionInvoker2< WWW_t3688466362 *, Action_2_t907858853 * >::Invoke(8 /* System.Void Prime31.P31RestKit::processResponse(UnityEngine.WWW,System.Action`2<System.String,System.Object>) */, L_34, L_35, L_36);
	}

IL_0165:
	{
		WWW_t3688466362 * L_37 = __this->get_U3CwwwU3E__0_3();
		NullCheck(L_37);
		WWW_Dispose_m2256148703(L_37, /*hidden argument*/NULL);
		__this->set_U24PC_8((-1));
	}

IL_0177:
	{
		return (bool)0;
	}

IL_0179:
	{
		return (bool)1;
	}
}
// System.Void Prime31.P31RestKit/<send>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CsendU3Ec__Iterator0_Dispose_m2790316484 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void Prime31.P31RestKit/<send>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CsendU3Ec__Iterator0_Reset_m2794559029 (U3CsendU3Ec__Iterator0_t1520858258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsendU3Ec__Iterator0_Reset_m2794559029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CsendU3Ec__Iterator0_Reset_m2794559029_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m70961122 (PocoJsonSerializerStrategy_t352434764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__ctor_m70961122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 5);
		MemberMapLoader_t2688037604 * L_1 = (MemberMapLoader_t2688037604 *)il2cpp_codegen_object_new(MemberMapLoader_t2688037604_il2cpp_TypeInfo_var);
		MemberMapLoader__ctor_m2662681142(L_1, __this, L_0, /*hidden argument*/NULL);
		CacheResolver_t2531652178 * L_2 = (CacheResolver_t2531652178 *)il2cpp_codegen_object_new(CacheResolver_t2531652178_il2cpp_TypeInfo_var);
		CacheResolver__ctor_m3118824830(L_2, L_1, /*hidden argument*/NULL);
		__this->set_cacheResolver_0(L_2);
		return;
	}
}
// System.Void Prime31.PocoJsonSerializerStrategy::buildMap(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy_buildMap_m3661383421 (PocoJsonSerializerStrategy_t352434764 * __this, Type_t * ___type0, SafeDictionary_2_t2471229975 * ___memberMaps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_buildMap_m3661383421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t * V_3 = NULL;
	FieldInfoU5BU5D_t846150980* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1461822886* L_1 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)52));
		V_1 = L_1;
		V_2 = 0;
		goto IL_002a;
	}

IL_0010:
	{
		PropertyInfoU5BU5D_t1461822886* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		SafeDictionary_2_t2471229975 * L_6 = ___memberMaps1;
		PropertyInfo_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		PropertyInfo_t * L_9 = V_0;
		MemberMap_t836145089 * L_10 = (MemberMap_t836145089 *)il2cpp_codegen_object_new(MemberMap_t836145089_il2cpp_TypeInfo_var);
		MemberMap__ctor_m3179035751(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		SafeDictionary_2_add_m3627088684(L_6, L_8, L_10, /*hidden argument*/SafeDictionary_2_add_m3627088684_RuntimeMethod_var);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_12 = V_2;
		PropertyInfoU5BU5D_t1461822886* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_14 = ___type0;
		NullCheck(L_14);
		FieldInfoU5BU5D_t846150980* L_15 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_14, ((int32_t)52));
		V_4 = L_15;
		V_5 = 0;
		goto IL_0063;
	}

IL_0045:
	{
		FieldInfoU5BU5D_t846150980* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		FieldInfo_t * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		SafeDictionary_2_t2471229975 * L_20 = ___memberMaps1;
		FieldInfo_t * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		FieldInfo_t * L_23 = V_3;
		MemberMap_t836145089 * L_24 = (MemberMap_t836145089 *)il2cpp_codegen_object_new(MemberMap_t836145089_il2cpp_TypeInfo_var);
		MemberMap__ctor_m440999168(L_24, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		SafeDictionary_2_add_m3627088684(L_20, L_22, L_24, /*hidden argument*/SafeDictionary_2_add_m3627088684_RuntimeMethod_var);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_26 = V_5;
		FieldInfoU5BU5D_t846150980* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::serializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_serializeNonPrimitiveObject_m943071592 (PocoJsonSerializerStrategy_t352434764 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___input0;
		RuntimeObject ** L_1 = ___output1;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(8 /* System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_3 = ___input0;
		RuntimeObject ** L_4 = ___output1;
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(9 /* System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Object Prime31.PocoJsonSerializerStrategy::serializeEnum(System.Enum)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_serializeEnum_m3399850826 (PocoJsonSerializerStrategy_t352434764 * __this, Enum_t4135868527 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_serializeEnum_m3399850826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enum_t4135868527 * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeKnownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_trySerializeKnownTypes_m1714487706 (PocoJsonSerializerStrategy_t352434764 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_trySerializeKnownTypes_m1714487706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Guid_t  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, DateTime_t3738529785_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject ** L_1 = ___output1;
		RuntimeObject * L_2 = ___input0;
		V_1 = ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_2, DateTime_t3738529785_il2cpp_TypeInfo_var))));
		DateTime_t3738529785  L_3 = DateTime_ToUniversalTime_m1945318289((&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t352434764_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_4 = ((PocoJsonSerializerStrategy_t352434764_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t352434764_il2cpp_TypeInfo_var))->get_Iso8601Format_1();
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = DateTime_ToString_m2992030064((&V_2), L_6, L_7, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)L_8);
		goto IL_0096;
	}

IL_0036:
	{
		RuntimeObject * L_9 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject ** L_10 = ___output1;
		RuntimeObject * L_11 = ___input0;
		V_3 = ((*(Guid_t *)((Guid_t *)UnBox(L_11, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_12 = Guid_ToString_m4056316049((&V_3), _stringLiteral3452614620, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)L_12);
		goto IL_0096;
	}

IL_005b:
	{
		RuntimeObject * L_13 = ___input0;
		if (!((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_13, Uri_t100236324_il2cpp_TypeInfo_var)))
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject ** L_14 = ___output1;
		RuntimeObject * L_15 = ___input0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		*((RuntimeObject **)(L_14)) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_14), (RuntimeObject *)L_16);
		goto IL_0096;
	}

IL_0073:
	{
		RuntimeObject * L_17 = ___input0;
		if (!((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_17, Enum_t4135868527_il2cpp_TypeInfo_var)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject ** L_18 = ___output1;
		RuntimeObject * L_19 = ___input0;
		RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, Enum_t4135868527 * >::Invoke(7 /* System.Object Prime31.PocoJsonSerializerStrategy::serializeEnum(System.Enum) */, __this, ((Enum_t4135868527 *)CastclassClass((RuntimeObject*)L_19, Enum_t4135868527_il2cpp_TypeInfo_var)));
		*((RuntimeObject **)(L_18)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)L_20);
		goto IL_0096;
	}

IL_0091:
	{
		V_0 = (bool)0;
		RuntimeObject ** L_21 = ___output1;
		*((RuntimeObject **)(L_21)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_21), (RuntimeObject *)NULL);
	}

IL_0096:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeUnknownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_trySerializeUnknownTypes_m2642475014 (PocoJsonSerializerStrategy_t352434764 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_trySerializeUnknownTypes_m2642475014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SafeDictionary_2_t2471229975 * V_2 = NULL;
	KeyValuePair_2_t3019073555  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject ** L_0 = ___output1;
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)NULL);
		RuntimeObject * L_1 = ___input0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m88164663(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		JsonObject_t3223138545 * L_5 = (JsonObject_t3223138545 *)il2cpp_codegen_object_new(JsonObject_t3223138545_il2cpp_TypeInfo_var);
		JsonObject__ctor_m2436297384(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		CacheResolver_t2531652178 * L_6 = __this->get_cacheResolver_0();
		Type_t * L_7 = V_0;
		NullCheck(L_6);
		SafeDictionary_2_t2471229975 * L_8 = CacheResolver_loadMaps_m2720418289(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		SafeDictionary_2_t2471229975 * L_9 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_10 = SafeDictionary_2_GetEnumerator_m2877288426(L_9, /*hidden argument*/SafeDictionary_2_GetEnumerator_m2877288426_RuntimeMethod_var);
		V_4 = L_10;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_4;
			NullCheck(L_11);
			KeyValuePair_2_t3019073555  L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t3019073555  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::get_Current() */, IEnumerator_1_t3451644023_il2cpp_TypeInfo_var, L_11);
			V_3 = L_12;
			MemberMap_t836145089 * L_13 = KeyValuePair_2_get_Value_m652726869((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m652726869_RuntimeMethod_var);
			NullCheck(L_13);
			GetHandler_t3299076676 * L_14 = L_13->get_Getter_2();
			if (!L_14)
			{
				goto IL_006f;
			}
		}

IL_0050:
		{
			RuntimeObject* L_15 = V_1;
			String_t* L_16 = KeyValuePair_2_get_Key_m1492108111((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1492108111_RuntimeMethod_var);
			MemberMap_t836145089 * L_17 = KeyValuePair_2_get_Value_m652726869((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m652726869_RuntimeMethod_var);
			NullCheck(L_17);
			GetHandler_t3299076676 * L_18 = L_17->get_Getter_2();
			RuntimeObject * L_19 = ___input0;
			NullCheck(L_18);
			RuntimeObject * L_20 = GetHandler_Invoke_m834614475(L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_15);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_15, L_16, L_20);
		}

IL_006f:
		{
			RuntimeObject* L_21 = V_4;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0037;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			if (!L_23)
			{
				goto IL_008e;
			}
		}

IL_0087:
		{
			RuntimeObject* L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008f:
	{
		RuntimeObject ** L_25 = ___output1;
		RuntimeObject* L_26 = V_1;
		*((RuntimeObject **)(L_25)) = (RuntimeObject *)L_26;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_25), (RuntimeObject *)L_26);
		return (bool)1;
	}
}
// System.Void Prime31.PocoJsonSerializerStrategy::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__cctor_m198314538 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__cctor_m198314538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4081536298);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4081536298);
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1858654798);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1858654798);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1861407333);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1861407333);
		((PocoJsonSerializerStrategy_t352434764_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t352434764_il2cpp_TypeInfo_var))->set_Iso8601Format_1(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver::.ctor(Prime31.Reflection.MemberMapLoader)
extern "C" IL2CPP_METHOD_ATTR void CacheResolver__ctor_m3118824830 (CacheResolver_t2531652178 * __this, MemberMapLoader_t2688037604 * ___memberMapLoader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver__ctor_m3118824830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeDictionary_2_t2470438330 * L_0 = (SafeDictionary_2_t2470438330 *)il2cpp_codegen_object_new(SafeDictionary_2_t2470438330_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_m823189424(L_0, /*hidden argument*/SafeDictionary_2__ctor_m823189424_RuntimeMethod_var);
		__this->set__memberMapsCache_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MemberMapLoader_t2688037604 * L_1 = ___memberMapLoader0;
		__this->set__memberMapLoader_0(L_1);
		return;
	}
}
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap> Prime31.Reflection.CacheResolver::loadMaps(System.Type)
extern "C" IL2CPP_METHOD_ATTR SafeDictionary_2_t2471229975 * CacheResolver_loadMaps_m2720418289 (CacheResolver_t2531652178 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver_loadMaps_m2720418289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SafeDictionary_2_t2471229975 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = ___type0;
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (SafeDictionary_2_t2471229975 *)NULL;
	}

IL_0018:
	{
		SafeDictionary_2_t2470438330 * L_4 = __this->get__memberMapsCache_1();
		Type_t * L_5 = ___type0;
		NullCheck(L_4);
		bool L_6 = SafeDictionary_2_tryGetValue_m335560591(L_4, L_5, (&V_0), /*hidden argument*/SafeDictionary_2_tryGetValue_m335560591_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		SafeDictionary_2_t2471229975 * L_7 = V_0;
		return L_7;
	}

IL_002d:
	{
		SafeDictionary_2_t2471229975 * L_8 = (SafeDictionary_2_t2471229975 *)il2cpp_codegen_object_new(SafeDictionary_2_t2471229975_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_m3987949131(L_8, /*hidden argument*/SafeDictionary_2__ctor_m3987949131_RuntimeMethod_var);
		V_0 = L_8;
		MemberMapLoader_t2688037604 * L_9 = __this->get__memberMapLoader_0();
		Type_t * L_10 = ___type0;
		SafeDictionary_2_t2471229975 * L_11 = V_0;
		NullCheck(L_9);
		MemberMapLoader_Invoke_m2151729912(L_9, L_10, L_11, /*hidden argument*/NULL);
		SafeDictionary_2_t2470438330 * L_12 = __this->get__memberMapsCache_1();
		Type_t * L_13 = ___type0;
		SafeDictionary_2_t2471229975 * L_14 = V_0;
		NullCheck(L_12);
		SafeDictionary_2_add_m1486334210(L_12, L_13, L_14, /*hidden argument*/SafeDictionary_2_add_m1486334210_RuntimeMethod_var);
		SafeDictionary_2_t2471229975 * L_15 = V_0;
		return L_15;
	}
}
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetHandler_t3299076676 * CacheResolver_createGetHandler_m2255824026 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver_createGetHandler_m2255824026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * V_0 = NULL;
	{
		U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * L_0 = (U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 *)il2cpp_codegen_object_new(U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360_il2cpp_TypeInfo_var);
		U3CcreateGetHandlerU3Ec__AnonStorey6__ctor_m1993602305(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CcreateGetHandlerU3Ec__AnonStorey6_U3CU3Em__5_m2736408719_RuntimeMethod_var;
		GetHandler_t3299076676 * L_5 = (GetHandler_t3299076676 *)il2cpp_codegen_object_new(GetHandler_t3299076676_il2cpp_TypeInfo_var);
		GetHandler__ctor_m2564531840(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetHandler_t2014308932 * CacheResolver_createSetHandler_m2231842901 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver_createSetHandler_m2231842901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * V_0 = NULL;
	{
		U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * L_0 = (U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 *)il2cpp_codegen_object_new(U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609_il2cpp_TypeInfo_var);
		U3CcreateSetHandlerU3Ec__AnonStorey7__ctor_m1632384262(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t * L_4 = L_3->get_fieldInfo_0();
		NullCheck(L_4);
		bool L_5 = FieldInfo_get_IsInitOnly_m930369112(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * L_6 = V_0;
		NullCheck(L_6);
		FieldInfo_t * L_7 = L_6->get_fieldInfo_0();
		NullCheck(L_7);
		bool L_8 = FieldInfo_get_IsLiteral_m534699794(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		return (SetHandler_t2014308932 *)NULL;
	}

IL_002f:
	{
		U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CcreateSetHandlerU3Ec__AnonStorey7_U3CU3Em__6_m1746608410_RuntimeMethod_var;
		SetHandler_t2014308932 * L_11 = (SetHandler_t2014308932 *)il2cpp_codegen_object_new(SetHandler_t2014308932_il2cpp_TypeInfo_var);
		SetHandler__ctor_m4159545462(L_11, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetHandler_t3299076676 * CacheResolver_createGetHandler_m3073072090 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver_createGetHandler_m3073072090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * V_0 = NULL;
	{
		U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * L_0 = (U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 *)il2cpp_codegen_object_new(U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350_il2cpp_TypeInfo_var);
		U3CcreateGetHandlerU3Ec__AnonStorey8__ctor_m2068621480(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		NullCheck(L_2);
		MethodInfo_t * L_3 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_2, (bool)1);
		NullCheck(L_1);
		L_1->set_getMethodInfo_0(L_3);
		U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = L_4->get_getMethodInfo_0();
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (GetHandler_t3299076676 *)NULL;
	}

IL_0020:
	{
		U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)U3CcreateGetHandlerU3Ec__AnonStorey8_U3CU3Em__7_m3274381_RuntimeMethod_var;
		GetHandler_t3299076676 * L_8 = (GetHandler_t3299076676 *)il2cpp_codegen_object_new(GetHandler_t3299076676_il2cpp_TypeInfo_var);
		GetHandler__ctor_m2564531840(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetHandler_t2014308932 * CacheResolver_createSetHandler_m1896877026 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver_createSetHandler_m1896877026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * V_0 = NULL;
	{
		U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * L_0 = (U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 *)il2cpp_codegen_object_new(U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615_il2cpp_TypeInfo_var);
		U3CcreateSetHandlerU3Ec__AnonStorey9__ctor_m1231327959(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		NullCheck(L_2);
		MethodInfo_t * L_3 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_2, (bool)1);
		NullCheck(L_1);
		L_1->set_setMethodInfo_0(L_3);
		U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = L_4->get_setMethodInfo_0();
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (SetHandler_t2014308932 *)NULL;
	}

IL_0020:
	{
		U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)U3CcreateSetHandlerU3Ec__AnonStorey9_U3CU3Em__8_m2875638474_RuntimeMethod_var;
		SetHandler_t2014308932 * L_8 = (SetHandler_t2014308932 *)il2cpp_codegen_object_new(SetHandler_t2014308932_il2cpp_TypeInfo_var);
		SetHandler__ctor_m4159545462(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Prime31.Reflection.CacheResolver::.cctor()
extern "C" IL2CPP_METHOD_ATTR void CacheResolver__cctor_m518969891 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CacheResolver__cctor_m518969891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeDictionary_2_t2000356588 * L_0 = (SafeDictionary_2_t2000356588 *)il2cpp_codegen_object_new(SafeDictionary_2_t2000356588_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_m120655008(L_0, /*hidden argument*/SafeDictionary_2__ctor_m120655008_RuntimeMethod_var);
		((CacheResolver_t2531652178_StaticFields*)il2cpp_codegen_static_fields_for(CacheResolver_t2531652178_il2cpp_TypeInfo_var))->set_constructorCache_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey6__ctor_m1993602305 (U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey6::<>m__5(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateGetHandlerU3Ec__AnonStorey6_U3CU3Em__5_m2736408719 (U3CcreateGetHandlerU3Ec__AnonStorey6_t2995215360 * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___instance0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey8__ctor_m2068621480 (U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey8::<>m__7(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateGetHandlerU3Ec__AnonStorey8_U3CU3Em__7_m3274381 (U3CcreateGetHandlerU3Ec__AnonStorey8_t2995215350 * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcreateGetHandlerU3Ec__AnonStorey8_U3CU3Em__7_m3274381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_getMethodInfo_0();
		RuntimeObject * L_1 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_2 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_0, L_1, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey7__ctor_m1632384262 (U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey7::<>m__6(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey7_U3CU3Em__6_m1746608410 (U3CcreateSetHandlerU3Ec__AnonStorey7_t1441835609 * __this, RuntimeObject * ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___instance0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_m2460171138(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey9__ctor_m1231327959 (U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey9::<>m__8(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey9_U3CU3Em__8_m2875638474 (U3CcreateSetHandlerU3Ec__AnonStorey9_t1441835615 * __this, RuntimeObject * ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcreateSetHandlerU3Ec__AnonStorey9_U3CU3Em__8_m2875638474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_setMethodInfo_0();
		RuntimeObject * L_1 = ___instance0;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		MethodBase_Invoke_m1776411915(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/CtorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CtorDelegate__ctor_m2087891226 (CtorDelegate_t2001148233 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_Invoke_m120192598 (CtorDelegate_t2001148233 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		CtorDelegate_Invoke_m120192598((CtorDelegate_t2001148233 *)__this->get_prev_9(), method);
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
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Prime31.Reflection.CacheResolver/CtorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CtorDelegate_BeginInvoke_m3240006254 (CtorDelegate_t2001148233 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_EndInvoke_m3778198951 (CtorDelegate_t2001148233 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR void MemberMap__ctor_m3179035751 (MemberMap_t836145089 * __this, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemberMap__ctor_m3179035751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		PropertyInfo_t * L_0 = ___propertyInfo0;
		__this->set_MemberInfo_0(L_0);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_1);
		__this->set_Type_1(L_2);
		PropertyInfo_t * L_3 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t2531652178_il2cpp_TypeInfo_var);
		GetHandler_t3299076676 * L_4 = CacheResolver_createGetHandler_m3073072090(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_Getter_2(L_4);
		PropertyInfo_t * L_5 = ___propertyInfo0;
		SetHandler_t2014308932 * L_6 = CacheResolver_createSetHandler_m1896877026(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_Setter_3(L_6);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR void MemberMap__ctor_m440999168 (MemberMap_t836145089 * __this, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemberMap__ctor_m440999168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		FieldInfo_t * L_0 = ___fieldInfo0;
		__this->set_MemberInfo_0(L_0);
		FieldInfo_t * L_1 = ___fieldInfo0;
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_1);
		__this->set_Type_1(L_2);
		FieldInfo_t * L_3 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t2531652178_il2cpp_TypeInfo_var);
		GetHandler_t3299076676 * L_4 = CacheResolver_createGetHandler_m2255824026(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_Getter_2(L_4);
		FieldInfo_t * L_5 = ___fieldInfo0;
		SetHandler_t2014308932 * L_6 = CacheResolver_createSetHandler_m2231842901(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_Setter_3(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.GetHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetHandler__ctor_m2564531840 (GetHandler_t3299076676 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Prime31.Reflection.GetHandler::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_Invoke_m834614475 (GetHandler_t3299076676 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		GetHandler_Invoke_m834614475((GetHandler_t3299076676 *)__this->get_prev_9(), ___source0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___source0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Prime31.Reflection.GetHandler::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetHandler_BeginInvoke_m277020630 (GetHandler_t3299076676 * __this, RuntimeObject * ___source0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Prime31.Reflection.GetHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_EndInvoke_m3984911557 (GetHandler_t3299076676 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.MemberMapLoader::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MemberMapLoader__ctor_m2662681142 (MemberMapLoader_t2688037604 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Prime31.Reflection.MemberMapLoader::Invoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
extern "C" IL2CPP_METHOD_ATTR void MemberMapLoader_Invoke_m2151729912 (MemberMapLoader_t2688037604 * __this, Type_t * ___type0, SafeDictionary_2_t2471229975 * ___memberMaps1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MemberMapLoader_Invoke_m2151729912((MemberMapLoader_t2688037604 *)__this->get_prev_9(), ___type0, ___memberMaps1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Type_t *, SafeDictionary_2_t2471229975 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___type0, ___memberMaps1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Type_t *, SafeDictionary_2_t2471229975 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___type0, ___memberMaps1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Type_t *, SafeDictionary_2_t2471229975 * >::Invoke(targetMethod, targetThis, ___type0, ___memberMaps1);
					else
						GenericVirtActionInvoker2< Type_t *, SafeDictionary_2_t2471229975 * >::Invoke(targetMethod, targetThis, ___type0, ___memberMaps1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Type_t *, SafeDictionary_2_t2471229975 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___memberMaps1);
					else
						VirtActionInvoker2< Type_t *, SafeDictionary_2_t2471229975 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___memberMaps1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Type_t *, SafeDictionary_2_t2471229975 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___memberMaps1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SafeDictionary_2_t2471229975 * >::Invoke(targetMethod, ___type0, ___memberMaps1);
					else
						GenericVirtActionInvoker1< SafeDictionary_2_t2471229975 * >::Invoke(targetMethod, ___type0, ___memberMaps1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SafeDictionary_2_t2471229975 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___type0, ___memberMaps1);
					else
						VirtActionInvoker1< SafeDictionary_2_t2471229975 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___type0, ___memberMaps1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Type_t *, SafeDictionary_2_t2471229975 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___memberMaps1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Prime31.Reflection.MemberMapLoader::BeginInvoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemberMapLoader_BeginInvoke_m344981282 (MemberMapLoader_t2688037604 * __this, Type_t * ___type0, SafeDictionary_2_t2471229975 * ___memberMaps1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___type0;
	__d_args[1] = ___memberMaps1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Prime31.Reflection.MemberMapLoader::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void MemberMapLoader_EndInvoke_m2131247513 (MemberMapLoader_t2688037604 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Prime31.Reflection.SetHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetHandler__ctor_m4159545462 (SetHandler_t2014308932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Prime31.Reflection.SetHandler::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetHandler_Invoke_m649192387 (SetHandler_t2014308932 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SetHandler_Invoke_m649192387((SetHandler_t2014308932 *)__this->get_prev_9(), ___source0, ___value1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___value1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Prime31.Reflection.SetHandler::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SetHandler_BeginInvoke_m2508042200 (SetHandler_t2014308932 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Prime31.Reflection.SetHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SetHandler_EndInvoke_m1716106167 (SetHandler_t2014308932 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::get_currentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_currentJsonSerializerStrategy_m3004021273 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_currentJsonSerializerStrategy_m3004021273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ((SimpleJson_t2127621707_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t2127621707_il2cpp_TypeInfo_var))->get__currentJsonSerializerStrategy_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t352434764 * L_2 = SimpleJson_get_pocoJsonSerializerStrategy_m73467356(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t352434764 * L_3 = L_2;
		((SimpleJson_t2127621707_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t2127621707_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_0(L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::get_pocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t352434764 * SimpleJson_get_pocoJsonSerializerStrategy_m73467356 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_pocoJsonSerializerStrategy_m73467356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PocoJsonSerializerStrategy_t352434764 * G_B2_0 = NULL;
	PocoJsonSerializerStrategy_t352434764 * G_B1_0 = NULL;
	{
		PocoJsonSerializerStrategy_t352434764 * L_0 = ((SimpleJson_t2127621707_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t2127621707_il2cpp_TypeInfo_var))->get__pocoJsonSerializerStrategy_1();
		PocoJsonSerializerStrategy_t352434764 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t352434764 * L_2 = (PocoJsonSerializerStrategy_t352434764 *)il2cpp_codegen_object_new(PocoJsonSerializerStrategy_t352434764_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m70961122(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t352434764 * L_3 = L_2;
		((SimpleJson_t2127621707_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t2127621707_il2cpp_TypeInfo_var))->set__pocoJsonSerializerStrategy_1(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.String Prime31.SimpleJson::encode(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_encode_m2826025421 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_encode_m2826025421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = SimpleJson_get_currentJsonSerializerStrategy_m3004021273(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___obj0;
		StringBuilder_t * L_3 = V_0;
		bool L_4 = SimpleJson_serializeValue_m53220749(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Boolean Prime31.SimpleJson::tryDeserializeObject(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_tryDeserializeObject_m2550591590 (RuntimeObject * __this /* static, unused */, String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharU5BU5D_t3528271667* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (bool)1;
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		RuntimeObject ** L_3 = ___obj1;
		CharU5BU5D_t3528271667* L_4 = V_1;
		RuntimeObject * L_5 = SimpleJson_parseValue_m203415862(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_5);
		goto IL_0025;
	}

IL_0022:
	{
		RuntimeObject ** L_6 = ___obj1;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)NULL);
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Object Prime31.SimpleJson::decode(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_decode_m1626785732 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_decode_m1626785732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		bool L_1 = SimpleJson_tryDeserializeObject_m2550591590(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		String_t* L_3 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1937107660, L_3, /*hidden argument*/NULL);
		Utils_logObject_m1352880344(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return NULL;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Prime31.SimpleJson::parseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_parseObject_m1846159692 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_parseObject_m1846159692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		JsonObject_t3223138545 * L_0 = (JsonObject_t3223138545 *)il2cpp_codegen_object_new(JsonObject_t3223138545_il2cpp_TypeInfo_var);
		JsonObject__ctor_m2436297384(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_lookAhead_m2637538892(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		RuntimeObject* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t3528271667* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		bool* L_17 = ___success2;
		String_t* L_18 = SimpleJson_parseString_m895412165(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success2;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success2;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t3528271667* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		int32_t L_23 = SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success2;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		bool* L_28 = ___success2;
		RuntimeObject * L_29 = SimpleJson_parseValue_m203415862(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success2;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success2;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_008d:
	{
		RuntimeObject* L_32 = V_0;
		String_t* L_33 = V_3;
		RuntimeObject * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_36 = V_0;
		return L_36;
	}
}
// Prime31.JsonArray Prime31.SimpleJson::parseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3489669405 * SimpleJson_parseArray_m4163451773 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_parseArray_m4163451773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonArray_t3489669405 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		JsonArray_t3489669405 * L_0 = (JsonArray_t3489669405 *)il2cpp_codegen_object_new(JsonArray_t3489669405_il2cpp_TypeInfo_var);
		JsonArray__ctor_m1280052619(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_lookAhead_m2637538892(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t3489669405 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t3528271667* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		bool* L_16 = ___success2;
		RuntimeObject * L_17 = SimpleJson_parseValue_m203415862(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t3489669405 *)NULL;
	}

IL_0063:
	{
		JsonArray_t3489669405 * L_19 = V_0;
		RuntimeObject * L_20 = V_3;
		NullCheck(L_19);
		List_1_Add_m3338814081(L_19, L_20, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t3489669405 * L_22 = V_0;
		return L_22;
	}
}
// System.Object Prime31.SimpleJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseValue_m203415862 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_parseValue_m203415862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = SimpleJson_lookAhead_m2637538892(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_005f;
			}
			case 4:
			{
				goto IL_0095;
			}
			case 5:
			{
				goto IL_0095;
			}
			case 6:
			{
				goto IL_0095;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004d;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0077;
			}
			case 11:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		bool* L_6 = ___success2;
		String_t* L_7 = SimpleJson_parseString_m895412165(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		bool* L_10 = ___success2;
		RuntimeObject * L_11 = SimpleJson_parseNumber_m1677018383(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		bool* L_14 = ___success2;
		RuntimeObject* L_15 = SimpleJson_parseObject_m1846159692(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		bool* L_18 = ___success2;
		JsonArray_t3489669405 * L_19 = SimpleJson_parseArray_m4163451773(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t3528271667* L_20 = ___json0;
		int32_t* L_21 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = ((bool)1);
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t3528271667* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = ((bool)0);
		RuntimeObject * L_27 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t3528271667* L_28 = ___json0;
		int32_t* L_29 = ___index1;
		SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success2;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String Prime31.SimpleJson::parseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_parseString_m895412165 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_parseString_m895412165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_eatWhitespace_m423768790(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_2 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		NullCheck(L_3);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		V_3 = (bool)0;
		goto IL_0237;
	}

IL_0025:
	{
		int32_t* L_10 = ___index1;
		CharU5BU5D_t3528271667* L_11 = ___json0;
		NullCheck(L_11);
		if ((!(((uint32_t)(*((int32_t*)L_10))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_023d;
	}

IL_0034:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		int32_t* L_14 = ___index1;
		int32_t L_15 = (*((int32_t*)L_14));
		V_2 = L_15;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		NullCheck(L_12);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Il2CppChar L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_023d;
	}

IL_004f:
	{
		Il2CppChar L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t* L_21 = ___index1;
		CharU5BU5D_t3528271667* L_22 = ___json0;
		NullCheck(L_22);
		if ((!(((uint32_t)(*((int32_t*)L_21))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_023d;
	}

IL_0066:
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t* L_25 = ___index1;
		int32_t L_26 = (*((int32_t*)L_25));
		V_2 = L_26;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_2;
		NullCheck(L_23);
		int32_t L_28 = L_27;
		uint16_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		Il2CppChar L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_Append_m2383614642(L_31, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0088:
	{
		Il2CppChar L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_009e;
		}
	}
	{
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_Append_m2383614642(L_33, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_009e:
	{
		Il2CppChar L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_Append_m2383614642(L_35, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00b4:
	{
		Il2CppChar L_36 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00c9;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, 8, /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00c9:
	{
		Il2CppChar L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00df;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m2383614642(L_39, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00df:
	{
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00f5;
		}
	}
	{
		StringBuilder_t * L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00f5:
	{
		Il2CppChar L_42 = V_1;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t * L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_Append_m2383614642(L_43, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_010b:
	{
		Il2CppChar L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_Append_m2383614642(L_45, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0121:
	{
		Il2CppChar L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_47 = ___json0;
		NullCheck(L_47);
		int32_t* L_48 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))), (int32_t)(*((int32_t*)L_48))));
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) < ((int32_t)4)))
		{
			goto IL_0225;
		}
	}
	{
		bool* L_50 = ___success2;
		CharU5BU5D_t3528271667* L_51 = ___json0;
		int32_t* L_52 = ___index1;
		String_t* L_53 = String_CreateString_m860434552(NULL, L_51, (*((int32_t*)L_52)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_54 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_55 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_53, ((int32_t)515), L_54, (&V_5), /*hidden argument*/NULL);
		bool L_56 = L_55;
		V_6 = L_56;
		*((int8_t*)(L_50)) = (int8_t)L_56;
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_0165;
		}
	}
	{
		return _stringLiteral757602046;
	}

IL_0165:
	{
		uint32_t L_58 = V_5;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_58))))
		{
			goto IL_020c;
		}
	}
	{
		uint32_t L_59 = V_5;
		if ((!(((uint32_t)L_59) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t* L_60 = ___index1;
		int32_t* L_61 = ___index1;
		*((int32_t*)(L_60)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_61)), (int32_t)4));
		CharU5BU5D_t3528271667* L_62 = ___json0;
		NullCheck(L_62);
		int32_t* L_63 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_62)->max_length)))), (int32_t)(*((int32_t*)L_63))));
		int32_t L_64 = V_4;
		if ((((int32_t)L_64) < ((int32_t)6)))
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		String_t* L_67 = String_CreateString_m860434552(NULL, L_65, (*((int32_t*)L_66)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_68 = String_op_Equality_m920492651(NULL /*static, unused*/, L_67, _stringLiteral3455432692, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		String_t* L_71 = String_CreateString_m860434552(NULL, L_69, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_72 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_73 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_71, ((int32_t)515), L_72, (&V_7), /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_74 = V_7;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_74))))
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_75 = V_7;
		if ((!(((uint32_t)L_75) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m2383614642(L_76, (((int32_t)((uint16_t)L_77))), /*hidden argument*/NULL);
		StringBuilder_t * L_78 = V_0;
		uint32_t L_79 = V_7;
		NullCheck(L_78);
		StringBuilder_Append_m2383614642(L_78, (((int32_t)((uint16_t)L_79))), /*hidden argument*/NULL);
		int32_t* L_80 = ___index1;
		int32_t* L_81 = ___index1;
		*((int32_t*)(L_80)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_81)), (int32_t)6));
		goto IL_0237;
	}

IL_0203:
	{
		bool* L_82 = ___success2;
		*((int8_t*)(L_82)) = (int8_t)0;
		return _stringLiteral757602046;
	}

IL_020c:
	{
		StringBuilder_t * L_83 = V_0;
		uint32_t L_84 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		String_t* L_85 = Char_ConvertFromUtf32_m2726544766(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		StringBuilder_Append_m1965104174(L_83, L_85, /*hidden argument*/NULL);
		int32_t* L_86 = ___index1;
		int32_t* L_87 = ___index1;
		*((int32_t*)(L_86)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_87)), (int32_t)4));
		goto IL_022a;
	}

IL_0225:
	{
		goto IL_023d;
	}

IL_022a:
	{
		goto IL_0237;
	}

IL_022f:
	{
		StringBuilder_t * L_88 = V_0;
		Il2CppChar L_89 = V_1;
		NullCheck(L_88);
		StringBuilder_Append_m2383614642(L_88, L_89, /*hidden argument*/NULL);
	}

IL_0237:
	{
		bool L_90 = V_3;
		if (!L_90)
		{
			goto IL_0025;
		}
	}

IL_023d:
	{
		bool L_91 = V_3;
		if (L_91)
		{
			goto IL_0248;
		}
	}
	{
		bool* L_92 = ___success2;
		*((int8_t*)(L_92)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_0248:
	{
		StringBuilder_t * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_93);
		return L_94;
	}
}
// System.Object Prime31.SimpleJson::parseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseNumber_m1677018383 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_parseNumber_m1677018383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	String_t* V_3 = NULL;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_eatWhitespace_m423768790(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = SimpleJson_getLastIndexOfNumber_m607293295(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)(*((int32_t*)L_6)))), (int32_t)1));
		CharU5BU5D_t3528271667* L_7 = ___json0;
		int32_t* L_8 = ___index1;
		int32_t L_9 = V_1;
		String_t* L_10 = String_CreateString_m860434552(NULL, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1298810678(L_11, _stringLiteral3452614530, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m1298810678(L_13, _stringLiteral3452614587, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success2;
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		int32_t L_18 = V_1;
		String_t* L_19 = String_CreateString_m860434552(NULL, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m623190659(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		RuntimeObject * L_24 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success2;
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28 = V_1;
		String_t* L_29 = String_CreateString_m860434552(NULL, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_30 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m3606398488(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index1;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		RuntimeObject * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 Prime31.SimpleJson::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_getLastIndexOfNumber_m607293295 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_getLastIndexOfNumber_m607293295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral2206812729);
		int32_t L_5 = String_IndexOf_m363431711(_stringLiteral2206812729, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void Prime31.SimpleJson::eatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_eatWhitespace_m423768790 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_eatWhitespace_m423768790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = (*((int32_t*)L_1));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(_stringLiteral352322198);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral352322198, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_5 = ___index1;
		int32_t* L_6 = ___index1;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_6)), (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_7 = ___index1;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)(*((int32_t*)L_7))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 Prime31.SimpleJson::lookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_lookAhead_m2637538892 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = SimpleJson_nextToken_m2753128588(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Prime31.SimpleJson::nextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_nextToken_m2753128588 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_eatWhitespace_m423768790(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		CharU5BU5D_t3528271667* L_3 = ___json0;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = (*((int32_t*)L_5));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		int32_t* L_8 = ___index1;
		int32_t* L_9 = ___index1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_9)), (int32_t)1));
		Il2CppChar L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_00a6;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00a6;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a6;
			}
			case 11:
			{
				goto IL_00a6;
			}
			case 12:
			{
				goto IL_00a6;
			}
			case 13:
			{
				goto IL_00a6;
			}
			case 14:
			{
				goto IL_00a8;
			}
		}
	}

IL_0063:
	{
		Il2CppChar L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}

IL_0078:
	{
		Il2CppChar L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}

IL_008d:
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00aa;
	}

IL_009a:
	{
		return 1;
	}

IL_009c:
	{
		return 2;
	}

IL_009e:
	{
		return 3;
	}

IL_00a0:
	{
		return 4;
	}

IL_00a2:
	{
		return 6;
	}

IL_00a4:
	{
		return 7;
	}

IL_00a6:
	{
		return 8;
	}

IL_00a8:
	{
		return 5;
	}

IL_00aa:
	{
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_15)), (int32_t)1));
		CharU5BU5D_t3528271667* L_16 = ___json0;
		NullCheck(L_16);
		int32_t* L_17 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))), (int32_t)(*((int32_t*)L_17))));
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = (*((int32_t*)L_20));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)1));
		uint16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_28)), (int32_t)2));
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_32)), (int32_t)3));
		uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_35 = ___json0;
		int32_t* L_36 = ___index1;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_36)), (int32_t)4));
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_39 = ___index1;
		int32_t* L_40 = ___index1;
		*((int32_t*)(L_39)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_40)), (int32_t)5));
		return ((int32_t)10);
	}

IL_0106:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)4)))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_42 = ___json0;
		int32_t* L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = (*((int32_t*)L_43));
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_47)), (int32_t)1));
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_50 = ___json0;
		int32_t* L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_51)), (int32_t)2));
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_54 = ___json0;
		int32_t* L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_55)), (int32_t)3));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t* L_58 = ___index1;
		int32_t* L_59 = ___index1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_59)), (int32_t)4));
		return ((int32_t)9);
	}

IL_0148:
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_61 = ___json0;
		int32_t* L_62 = ___index1;
		NullCheck(L_61);
		int32_t L_63 = (*((int32_t*)L_62));
		uint16_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_66)), (int32_t)1));
		uint16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2));
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_74)), (int32_t)3));
		uint16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t* L_77 = ___index1;
		int32_t* L_78 = ___index1;
		*((int32_t*)(L_77)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_78)), (int32_t)4));
		return ((int32_t)11);
	}

IL_018a:
	{
		return 0;
	}
}
// System.Boolean Prime31.SimpleJson::serializeValue(Prime31.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeValue_m53220749 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_serializeValue_m53220749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	StringBuilder_t * G_B15_0 = NULL;
	StringBuilder_t * G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	StringBuilder_t * G_B16_1 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___value1;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___value1;
		StringBuilder_t * L_2 = ___builder2;
		bool L_3 = SimpleJson_serializeString_m941481939(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0138;
	}

IL_001f:
	{
		RuntimeObject * L_4 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDictionary_2_t1329213854_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject * L_5 = ___value1;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = ___jsonSerializerStrategy0;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_9);
		StringBuilder_t * L_11 = ___builder2;
		bool L_12 = SimpleJson_serializeObject_m2553940162(NULL /*static, unused*/, L_6, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0138;
	}

IL_004a:
	{
		RuntimeObject * L_13 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_2_t96558379_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		RuntimeObject * L_14 = ___value1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IDictionary_2_t96558379_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = ___jsonSerializerStrategy0;
		RuntimeObject* L_16 = V_2;
		NullCheck(L_16);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_18);
		StringBuilder_t * L_20 = ___builder2;
		bool L_21 = SimpleJson_serializeObject_m2553940162(NULL /*static, unused*/, L_15, L_17, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0138;
	}

IL_0075:
	{
		RuntimeObject * L_22 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDictionary_t1363984059_il2cpp_TypeInfo_var)))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_23 = ___value1;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = ___jsonSerializerStrategy0;
		RuntimeObject* L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_25);
		RuntimeObject* L_27 = V_3;
		NullCheck(L_27);
		RuntimeObject* L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.ICollection System.Collections.IDictionary::get_Values() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_27);
		StringBuilder_t * L_29 = ___builder2;
		bool L_30 = SimpleJson_serializeObject_m2553940162(NULL /*static, unused*/, L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0138;
	}

IL_00a0:
	{
		RuntimeObject * L_31 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_31, IEnumerable_t1941168011_il2cpp_TypeInfo_var)))
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_32 = ___jsonSerializerStrategy0;
		RuntimeObject * L_33 = ___value1;
		StringBuilder_t * L_34 = ___builder2;
		bool L_35 = SimpleJson_serializeArray_m1886521706(NULL /*static, unused*/, L_32, ((RuntimeObject*)Castclass((RuntimeObject*)L_33, IEnumerable_t1941168011_il2cpp_TypeInfo_var)), L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		goto IL_0138;
	}

IL_00be:
	{
		RuntimeObject * L_36 = ___value1;
		bool L_37 = SimpleJson_isNumeric_m428706617(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RuntimeObject * L_38 = ___value1;
		StringBuilder_t * L_39 = ___builder2;
		bool L_40 = SimpleJson_serializeNumber_m614106910(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0138;
	}

IL_00d6:
	{
		RuntimeObject * L_41 = ___value1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_41, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		StringBuilder_t * L_42 = ___builder2;
		RuntimeObject * L_43 = ___value1;
		G_B14_0 = L_42;
		if (!((*(bool*)((bool*)UnBox(L_43, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B15_0 = L_42;
			goto IL_00f7;
		}
	}
	{
		G_B16_0 = _stringLiteral4002445229;
		G_B16_1 = G_B14_0;
		goto IL_00fc;
	}

IL_00f7:
	{
		G_B16_0 = _stringLiteral3875954633;
		G_B16_1 = G_B15_0;
	}

IL_00fc:
	{
		NullCheck(G_B16_1);
		StringBuilder_Append_m1965104174(G_B16_1, G_B16_0, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_0107:
	{
		RuntimeObject * L_44 = ___value1;
		if (L_44)
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t * L_45 = ___builder2;
		NullCheck(L_45);
		StringBuilder_Append_m1965104174(L_45, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_011e:
	{
		RuntimeObject* L_46 = ___jsonSerializerStrategy0;
		RuntimeObject * L_47 = ___value1;
		NullCheck(L_46);
		bool L_48 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean Prime31.IJsonSerializerStrategy::serializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t749624350_il2cpp_TypeInfo_var, L_46, L_47, (&V_4));
		V_0 = L_48;
		bool L_49 = V_0;
		if (!L_49)
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_50 = ___jsonSerializerStrategy0;
		RuntimeObject * L_51 = V_4;
		StringBuilder_t * L_52 = ___builder2;
		SimpleJson_serializeValue_m53220749(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
	}

IL_0138:
	{
		bool L_53 = V_0;
		return L_53;
	}
}
// System.Boolean Prime31.SimpleJson::serializeObject(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeObject_m2553940162 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_serializeObject_m2553940162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		StringBuilder_t * L_0 = ___builder3;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___keys1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___values2;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = (bool)1;
		goto IL_008d;
	}

IL_0021:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder3;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_0042:
	{
		RuntimeObject * L_11 = V_3;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_12 = V_3;
		StringBuilder_t * L_13 = ___builder3;
		SimpleJson_serializeString_m941481939(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		RuntimeObject* L_14 = ___jsonSerializerStrategy0;
		RuntimeObject * L_15 = V_4;
		StringBuilder_t * L_16 = ___builder3;
		bool L_17 = SimpleJson_serializeValue_m53220749(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		StringBuilder_t * L_18 = ___builder3;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3452614550, /*hidden argument*/NULL);
		RuntimeObject* L_19 = ___jsonSerializerStrategy0;
		RuntimeObject * L_20 = V_4;
		StringBuilder_t * L_21 = ___builder3;
		bool L_22 = SimpleJson_serializeValue_m53220749(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		V_2 = (bool)0;
	}

IL_008d:
	{
		RuntimeObject* L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
		if (L_26)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t * L_27 = ___builder3;
		NullCheck(L_27);
		StringBuilder_Append_m1965104174(L_27, _stringLiteral3452614611, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::serializeArray(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeArray_m1886521706 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_serializeArray_m1886521706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = ___builder2;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614645, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t * L_6 = ___builder2;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3452614532, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_7 = ___jsonSerializerStrategy0;
			RuntimeObject * L_8 = V_1;
			StringBuilder_t * L_9 = ___builder2;
			bool L_10 = SimpleJson_serializeValue_m53220749(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x7D, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = (bool)0;
		}

IL_0049:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_14;
			if (!L_14)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		StringBuilder_t * L_16 = ___builder2;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3452614643, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_007d:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean Prime31.SimpleJson::serializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeString_m941481939 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_serializeString_m941481939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		StringBuilder_t * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_1 = ___aString0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_8 = ___builder1;
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t * L_21 = ___builder1;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00d8:
	{
		int32_t L_24 = V_1;
		CharU5BU5D_t3528271667* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3452614526, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::serializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_serializeNumber_m614106910 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_serializeNumber_m614106910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t2948259380  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		RuntimeObject * L_0 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_1 = ___builder1;
		RuntimeObject * L_2 = ___number0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t3736567304_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m623640997((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		RuntimeObject * L_5 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_6 = ___builder1;
		RuntimeObject * L_7 = ___number0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox(L_7, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m2623377370((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1965104174(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		RuntimeObject * L_10 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder1;
		RuntimeObject * L_12 = ___number0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_t2950945753_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1760361794((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		RuntimeObject * L_15 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		RuntimeObject * L_17 = ___number0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m4293943134((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		RuntimeObject * L_20 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_21 = ___builder1;
		RuntimeObject * L_22 = ___number0;
		V_4 = ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_22, Decimal_t2948259380_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_23 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m3653216873((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m1965104174(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		RuntimeObject * L_25 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		RuntimeObject * L_27 = ___number0;
		V_5 = ((*(float*)((float*)UnBox(L_27, Single_t1397266774_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m3107811250((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t * L_30 = ___builder1;
		RuntimeObject * L_31 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_32 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t4157843068 * L_34 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1051753975((&V_6), _stringLiteral3452614606, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::isNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_isNumeric_m428706617 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_isNumeric_m428706617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)1;
	}

IL_005b:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)1;
	}

IL_0068:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)1;
	}

IL_0075:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)1;
	}

IL_0082:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)1;
	}

IL_008f:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.String> Prime31.StringExtensions::parseQueryString(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * StringExtensions_parseQueryString_m2943211797 (RuntimeObject * __this /* static, unused */, String_t* ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtensions_parseQueryString_m2943211797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t1281789340* V_6 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3302800229(L_0, /*hidden argument*/Dictionary_2__ctor_m3302800229_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (StringU5BU5D_t1281789340*)NULL;
		String_t* L_1 = ___self0;
		CharU5BU5D_t3528271667* L_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)63));
		NullCheck(L_1);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_2;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_5 = ___self0;
		CharU5BU5D_t3528271667* L_6 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		NullCheck(L_5);
		StringU5BU5D_t1281789340* L_7 = String_Split_m3646115398(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_004e;
	}

IL_003a:
	{
		StringU5BU5D_t1281789340* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		CharU5BU5D_t3528271667* L_11 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		NullCheck(L_10);
		StringU5BU5D_t1281789340* L_12 = String_Split_m3646115398(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
	}

IL_004e:
	{
		StringU5BU5D_t1281789340* L_13 = V_1;
		V_4 = L_13;
		V_5 = 0;
		goto IL_0086;
	}

IL_0059:
	{
		StringU5BU5D_t1281789340* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		String_t* L_18 = V_3;
		CharU5BU5D_t3528271667* L_19 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)61));
		NullCheck(L_18);
		StringU5BU5D_t1281789340* L_20 = String_Split_m3646115398(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		Dictionary_2_t1632706988 * L_21 = V_0;
		StringU5BU5D_t1281789340* L_22 = V_6;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		StringU5BU5D_t1281789340* L_25 = V_6;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		Dictionary_2_Add_m633427275(L_21, L_24, L_27, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_29 = V_5;
		StringU5BU5D_t1281789340* L_30 = V_4;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_t1632706988 * L_31 = V_0;
		return L_31;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.ThreadingCallbackHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ThreadingCallbackHelper__ctor_m674210543 (ThreadingCallbackHelper_t4258926486 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadingCallbackHelper__ctor_m674210543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2736452219 * L_0 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m1022708252(L_0, /*hidden argument*/List_1__ctor_m1022708252_RuntimeMethod_var);
		__this->set__actions_2(L_0);
		List_1_t2736452219 * L_1 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m1022708252(L_1, /*hidden argument*/List_1__ctor_m1022708252_RuntimeMethod_var);
		__this->set__currentActions_3(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::addActionToQueue(System.Action)
extern "C" IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_addActionToQueue_m3924614348 (ThreadingCallbackHelper_t4258926486 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadingCallbackHelper_addActionToQueue_m3924614348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2736452219 * L_0 = __this->get__actions_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t2736452219 * L_2 = __this->get__actions_2();
		Action_t1264377477 * L_3 = ___action0;
		NullCheck(L_2);
		List_1_Add_m3047321800(L_2, L_3, /*hidden argument*/List_1_Add_m3047321800_RuntimeMethod_var);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::Update()
extern "C" IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_Update_m2959909921 (ThreadingCallbackHelper_t4258926486 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadingCallbackHelper_Update_m2959909921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2736452219 * L_0 = __this->get__actions_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t2736452219 * L_2 = __this->get__currentActions_3();
		List_1_t2736452219 * L_3 = __this->get__actions_2();
		NullCheck(L_2);
		List_1_AddRange_m2553796114(L_2, L_3, /*hidden argument*/List_1_AddRange_m2553796114_RuntimeMethod_var);
		List_1_t2736452219 * L_4 = __this->get__actions_2();
		NullCheck(L_4);
		List_1_Clear_m2660395247(L_4, /*hidden argument*/List_1_Clear_m2660395247_RuntimeMethod_var);
		IL2CPP_LEAVE(0x35, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_003c:
	{
		List_1_t2736452219 * L_6 = __this->get__currentActions_3();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Action_t1264377477 * L_8 = List_1_get_Item_m1090641809(L_6, L_7, /*hidden argument*/List_1_get_Item_m1090641809_RuntimeMethod_var);
		NullCheck(L_8);
		Action_Invoke_m937035532(L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		List_1_t2736452219 * L_11 = __this->get__currentActions_3();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m1660900424(L_11, /*hidden argument*/List_1_get_Count_m1660900424_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_003c;
		}
	}
	{
		List_1_t2736452219 * L_13 = __this->get__currentActions_3();
		NullCheck(L_13);
		List_1_Clear_m2660395247(L_13, /*hidden argument*/List_1_Clear_m2660395247_RuntimeMethod_var);
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::disableIfEmpty()
extern "C" IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_disableIfEmpty_m3481821992 (ThreadingCallbackHelper_t4258926486 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadingCallbackHelper_disableIfEmpty_m3481821992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2736452219 * L_0 = __this->get__actions_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2736452219 * L_2 = __this->get__actions_2();
			NullCheck(L_2);
			int32_t L_3 = List_1_get_Count_m1660900424(L_2, /*hidden argument*/List_1_get_Count_m1660900424_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x30, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Utils::logObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Utils_logObject_m1352880344 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Json_encode_m1889278415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Utils_prettyPrintJson_m112161862(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Utils::prettyPrintJson(System.String)
extern "C" IL2CPP_METHOD_ATTR void Utils_prettyPrintJson_m112161862 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_prettyPrintJson_m112161862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		String_t* L_1 = ___json0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___json0;
		String_t* L_3 = JsonFormatter_prettyPrint_m556974798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Exception)
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
