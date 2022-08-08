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

// EdgeData
struct EdgeData_t3624631600;
// FlyingText
struct FlyingText_t4265356488;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityEngine.Material
struct Material_t340375123;
// System.Collections.Generic.List`1<FlyingText3D.FontData>
struct List_1_t676973805;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// FlyingText3D.FontData
struct FontData_t3499866359;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// FlyingText3D.TTFFontInfo
struct TTFFontInfo_t2461483730;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>
struct Dictionary_2_t2385757591;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>
struct Dictionary_2_t3947907576;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// TextObjectData
struct TextObjectData_t178506778;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t811567916;
// System.Collections.Generic.List`1<FlyingText3D.CommandData>
struct List_1_t1625501175;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// FlyingText3D.CommandData
struct CommandData_t153426433;
// System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>
struct Dictionary_2_t2651833894;
// System.Collections.Generic.Dictionary`2<System.Char,System.Object>
struct Dictionary_2_t816877494;
// FlyingText3D.GlyphData
struct GlyphData_t620095268;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t2869341516;
// System.Collections.Generic.List`1<FlyingText3D.Justify>
struct List_1_t2288335961;
// System.Collections.Generic.List`1<EdgeData>
struct List_1_t801739046;
// System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>
struct Dictionary_2_t4026917929;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t2874185564;
// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t2614313359;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// FlyingText3D.ContourData
struct ContourData_t2198716925;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.List`1<UnityEngine.Vector2[]>
struct List_1_t2929260728;
// System.Collections.Generic.List`1<System.Boolean[]>
struct List_1_t74525638;
// System.Collections.Generic.List`1<FlyingText3D.ContourData>
struct List_1_t3670791667;
// System.Comparison`1<FlyingText3D.ContourData>
struct Comparison_1_t1973648104;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// FlyingText3D.InsideData
struct InsideData_t2359708509;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<FlyingText3D.InsideData>
struct List_1_t3831783251;
// System.Comparison`1<FlyingText3D.InsideData>
struct Comparison_1_t2134639688;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t1857321114;
// System.Exception
struct Exception_t;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1569362707;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Text.ASCIIEncoding
struct ASCIIEncoding_t3446586211;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1959134050;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// FlyingText3D.GlyphData[]
struct GlyphDataU5BU5D_t3821634509;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t1446825192;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,FlyingText3D.GlyphData,System.Collections.DictionaryEntry>
struct Transform_1_t2586911422;
// EdgeData[]
struct EdgeDataU5BU5D_t2548856849;
// FlyingText3D.Justify[]
struct JustifyU5BU5D_t2872849074;
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
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// FlyingText3D.KernPair[]
struct KernPairU5BU5D_t2970630583;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Collections.Generic.IEqualityComparer`1<FlyingText3D.KernPair>
struct IEqualityComparer_1_t4025250228;
// System.Collections.Generic.Dictionary`2/Transform`1<FlyingText3D.KernPair,System.Int16,System.Collections.DictionaryEntry>
struct Transform_1_t430486863;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// FlyingText3D.CommandData[]
struct CommandDataU5BU5D_t3458982108;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Text.Encoding
struct Encoding_t1523322056;
// FlyingText3D.ContourData[]
struct ContourDataU5BU5D_t4003007856;
// System.Boolean[][]
struct BooleanU5BU5DU5BU5D_t325517041;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t1870165495;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// FlyingText3D.InsideData[]
struct InsideDataU5BU5D_t1388663440;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color32,System.Collections.DictionaryEntry>
struct Transform_1_t2700880489;
// FlyingText3D.FontData[]
struct FontDataU5BU5D_t2776205646;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// FlyingText3D.TTFFontInfo[]
struct TTFFontInfoU5BU5D_t3022196135;

extern RuntimeClass* FlyingText_t4265356488_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B2a40e070U2De6cbU2D4f7eU2Dab21U2Da5af0f6d0f8dU7D_t2819133477____U24fieldU2D0_0_FieldInfo_var;
extern const uint32_t FlyingText__cctor_m3473427217_MetadataUsageId;
extern const RuntimeType* FlyingText_t4265356488_0_0_0_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t FlyingText_get_instance_m3338243538_MetadataUsageId;
extern const uint32_t FlyingText_Awake_m780345619_MetadataUsageId;
extern RuntimeClass* TTFFontInfoU5BU5D_t3022196135_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* TTFFontInfo_t2461483730_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2385757591_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m460904824_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1276114427_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1738906411_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3693932771_RuntimeMethod_var;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral3265678532;
extern String_t* _stringLiteral3552475490;
extern String_t* _stringLiteral4001789855;
extern String_t* _stringLiteral1960051689;
extern String_t* _stringLiteral1587586894;
extern String_t* _stringLiteral4875282;
extern String_t* _stringLiteral1580592866;
extern String_t* _stringLiteral2323481153;
extern String_t* _stringLiteral3447058142;
extern String_t* _stringLiteral1477689674;
extern const uint32_t FlyingText_Initialize_m1624881710_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3152496930;
extern String_t* _stringLiteral362372998;
extern const uint32_t FlyingText_SetMaterial_m3149165622_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral723428682;
extern String_t* _stringLiteral3067347936;
extern const uint32_t FlyingText_CheckSetup_m4017455319_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t FlyingText_PrimeText_m3693014073_MetadataUsageId;
extern const uint32_t FlyingText_PrimeText_m2915438810_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m3315582823_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m3470762325_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m990911204_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m1917729950_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m3547467298_MetadataUsageId;
extern const uint32_t FlyingText_GetObject_m4010545162_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m3873475979_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m1628715019_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m1954841082_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m1527065666_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m3923823142_MetadataUsageId;
extern const uint32_t FlyingText_GetObjects_m3829554265_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m238443179_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m800539841_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m2485236501_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m1790767407_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m1622996339_MetadataUsageId;
extern const uint32_t FlyingText_GetObjectsArray_m865239737_MetadataUsageId;
extern String_t* _stringLiteral128822896;
extern const uint32_t FlyingText_UpdateObject_m753321406_MetadataUsageId;
extern const RuntimeType* MeshFilter_t3523625662_0_0_0_var;
extern const RuntimeType* MeshRenderer_t587009260_0_0_0_var;
extern const RuntimeType* Rigidbody_t3916780224_0_0_0_var;
extern RuntimeClass* MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* Color32_t2600501292_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2869341516_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2288335961_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t801739046_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Justify_t816261219_il2cpp_TypeInfo_var;
extern RuntimeClass* EdgeData_t3624631600_il2cpp_TypeInfo_var;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTextObjectData_t178506778_m1785006120_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2424247778_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m991822646_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1434826200_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1333520732_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m945255793_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m323241701_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m463784026_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2047056320_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1951584216_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m23928396_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1294661644_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m3999071656_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m923632340_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3249932132_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1958734212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m649928991_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1363558904_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1394646794_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1480194675_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m573970714_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2456367083_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4119991052_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m3546787751_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m1376835033_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m3992501969_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3251163515_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3901971184_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1501045621_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m910824056_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2480192364_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3874229880_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2484968841_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_t903564387_m2114864196_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t3916780224_m92978080_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisTextObjectData_t178506778_m4200790527_RuntimeMethod_var;
extern String_t* _stringLiteral2433642745;
extern String_t* _stringLiteral702346024;
extern String_t* _stringLiteral734172964;
extern String_t* _stringLiteral1243886463;
extern String_t* _stringLiteral3881522328;
extern String_t* _stringLiteral2752739560;
extern String_t* _stringLiteral3451041664;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral1121077486;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452614560;
extern String_t* _stringLiteral3716569311;
extern const uint32_t FlyingText_GetObject_m2705320406_MetadataUsageId;
extern RuntimeClass* List_1_t1625501175_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandData_t153426433_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t811567916_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3109263299_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3775996449_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1814118575_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m162569096_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3444728237_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685117923_RuntimeMethod_var;
extern String_t* _stringLiteral3451828116;
extern String_t* _stringLiteral3451500448;
extern String_t* _stringLiteral3451697042;
extern String_t* _stringLiteral3451434912;
extern String_t* _stringLiteral3009223076;
extern String_t* _stringLiteral1586398788;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral4049040645;
extern String_t* _stringLiteral1586258015;
extern String_t* _stringLiteral3894120718;
extern String_t* _stringLiteral372704709;
extern String_t* _stringLiteral3141790020;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral1092707369;
extern String_t* _stringLiteral4249957872;
extern String_t* _stringLiteral742876383;
extern String_t* _stringLiteral2696825260;
extern String_t* _stringLiteral2697939349;
extern String_t* _stringLiteral3255741185;
extern String_t* _stringLiteral3451828128;
extern String_t* _stringLiteral3451697056;
extern const uint32_t FlyingText_ParseString_m426035362_MetadataUsageId;
extern const uint32_t FlyingText_GetTagData_m344544921_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614525;
extern const uint32_t FlyingText_TryParseColor_m2886930125_MetadataUsageId;
extern const uint32_t FontData__ctor_m3700381678_MetadataUsageId;
extern RuntimeClass* List_1_t3670791667_il2cpp_TypeInfo_var;
extern RuntimeClass* ContourData_t2198716925_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_t1973648104_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m3201839622_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3475034485_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4003898591_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2882277810_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4088210603_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1078179241_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1453868451_RuntimeMethod_var;
extern const RuntimeMethod* GlyphData_AreaCompare_m2601298532_RuntimeMethod_var;
extern const RuntimeMethod* Comparison_1__ctor_m74631376_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m4106579492_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m770919389_RuntimeMethod_var;
extern const uint32_t GlyphData_SortPointsList_m2678576955_MetadataUsageId;
extern RuntimeClass* List_1_t3628304265_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m4225053658_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1156250970_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3882770330_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3757356512_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3397699549_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3579297042_RuntimeMethod_var;
extern const uint32_t GlyphData_RenderContourPoints_m3775104664_MetadataUsageId;
extern RuntimeClass* List_1_t2929260728_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3831783251_il2cpp_TypeInfo_var;
extern RuntimeClass* InsideData_t2359708509_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_t2134639688_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1857321114_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m972700695_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m769708164_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1192004721_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1059557417_RuntimeMethod_var;
extern const RuntimeMethod* GlyphData_XMaxCompare_m541087491_RuntimeMethod_var;
extern const RuntimeMethod* Comparison_1__ctor_m2770657230_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m2560489683_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m17465144_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m317471029_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1294987271_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m906361947_RuntimeMethod_var;
extern const RuntimeMethod* Array_Resize_TisVector3_t3722313464_m3246197627_RuntimeMethod_var;
extern const RuntimeMethod* Array_Resize_TisInt32_t2950945753_m3147937642_RuntimeMethod_var;
extern String_t* _stringLiteral2534991464;
extern const uint32_t GlyphData_SetMeshData_m613466942_MetadataUsageId;
extern const uint32_t GlyphData_SetFrontTriData_m374792835_MetadataUsageId;
extern const uint32_t GlyphData_SetFrontAndEdgeTriData_m3360123618_MetadataUsageId;
extern const uint32_t GlyphData_SetTriData_m3881103674_MetadataUsageId;
extern const uint32_t GlyphData_LineToPointSqrDistance_m2036411270_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2209139272_RuntimeMethod_var;
extern String_t* _stringLiteral858184599;
extern const uint32_t Triangulate_Compute_m3325510674_MetadataUsageId;
extern const uint32_t Triangulate_IsReflex_m3585468626_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2651833894_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4026917929_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2537431136_RuntimeMethod_var;
extern const RuntimeMethod* TTFFontInfo__ctor_m4052784430_RuntimeMethod_var;
extern const RuntimeMethod* Array_IndexOf_TisInt32_t2950945753_m3764119789_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3220969239_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3493567640_RuntimeMethod_var;
extern String_t* _stringLiteral1887003842;
extern String_t* _stringLiteral2526560661;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral4170810657;
extern String_t* _stringLiteral1405581690;
extern String_t* _stringLiteral4255641314;
extern String_t* _stringLiteral1061540784;
extern String_t* _stringLiteral3842994077;
extern String_t* _stringLiteral431746797;
extern String_t* _stringLiteral1733099211;
extern String_t* _stringLiteral457804741;
extern String_t* _stringLiteral3538472377;
extern String_t* _stringLiteral20961311;
extern String_t* _stringLiteral2641334137;
extern String_t* _stringLiteral3276275798;
extern String_t* _stringLiteral2978562613;
extern String_t* _stringLiteral1184219481;
extern String_t* _stringLiteral3593503931;
extern String_t* _stringLiteral1918250128;
extern String_t* _stringLiteral374276878;
extern String_t* _stringLiteral3602666982;
extern String_t* _stringLiteral3595180501;
extern const uint32_t TTFFontInfo__ctor_m4052784430_MetadataUsageId;
extern RuntimeClass* GlyphData_t620095268_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t74525638_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m2135025057_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3936567386_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2294770810_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4272323567_RuntimeMethod_var;
extern String_t* _stringLiteral2199528729;
extern String_t* _stringLiteral2059435072;
extern String_t* _stringLiteral1453879471;
extern String_t* _stringLiteral1075229972;
extern String_t* _stringLiteral3786318033;
extern const uint32_t TTFFontInfo_SetGlyphData_m751504939_MetadataUsageId;
extern RuntimeClass* List_1_t1569362707_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2606371118_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m700075857_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1213329701_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m163275201_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2351159821_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2757296379_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2135705625_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2072125803_RuntimeMethod_var;
extern const uint32_t TTFFontInfo_ReadGlyphData_m2376183697_MetadataUsageId;
extern RuntimeClass* ASCIIEncoding_t3446586211_il2cpp_TypeInfo_var;
extern RuntimeClass* UnicodeEncoding_t1959134050_il2cpp_TypeInfo_var;
extern const uint32_t TTFFontInfo_GetName_m1038423694_MetadataUsageId;
extern const uint32_t TTFFontInfo_TagSearch_m2274390376_MetadataUsageId;
extern const uint32_t TTFFontInfo_GetTag_m1553678787_MetadataUsageId;
extern RuntimeClass* UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var;
extern const uint32_t TTFFontInfo_GetUshortArray_m2433521691_MetadataUsageId;
extern const uint32_t TTFFontInfo_GetUshortToIntArray_m4196438407_MetadataUsageId;
extern const uint32_t TTFFontInfo_GetShortToIntArray_m3276325465_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t TTFFontInfo_GetByteArray_m4077026987_MetadataUsageId;
extern const uint32_t TTFFontInfo_GetLittleEndianByteArray_m2053176639_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t1417781964;
struct TTFFontInfoU5BU5D_t3022196135;
struct StringU5BU5D_t1281789340;
struct ByteU5BU5D_t4116647657;
struct GameObjectU5BU5D_t3328599146;
struct MaterialU5BU5D_t561872642;
struct Vector3U5BU5D_t1718750761;
struct Int32U5BU5D_t385246372;
struct Vector2U5BU5D_t1457185986;
struct Color32U5BU5D_t3850468773;
struct ObjectU5BU5D_t2843939325;
struct TypeU5BU5D_t3940880105;
struct BooleanU5BU5D_t2897418192;
struct UInt32U5BU5D_t2770800703;
struct UInt16U5BU5D_t3326319531;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
#ifndef DICTIONARY_2_T2651833894_H
#define DICTIONARY_2_T2651833894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>
struct  Dictionary_2_t2651833894  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	CharU5BU5D_t3528271667* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GlyphDataU5BU5D_t3821634509* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___keySlots_6)); }
	inline CharU5BU5D_t3528271667* get_keySlots_6() const { return ___keySlots_6; }
	inline CharU5BU5D_t3528271667** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(CharU5BU5D_t3528271667* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___valueSlots_7)); }
	inline GlyphDataU5BU5D_t3821634509* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GlyphDataU5BU5D_t3821634509** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GlyphDataU5BU5D_t3821634509* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2651833894_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2586911422 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2651833894_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2586911422 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2586911422 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2586911422 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2651833894_H
#ifndef LIST_1_T801739046_H
#define LIST_1_T801739046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EdgeData>
struct  List_1_t801739046  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EdgeDataU5BU5D_t2548856849* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t801739046, ____items_1)); }
	inline EdgeDataU5BU5D_t2548856849* get__items_1() const { return ____items_1; }
	inline EdgeDataU5BU5D_t2548856849** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EdgeDataU5BU5D_t2548856849* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t801739046, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t801739046, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t801739046_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EdgeDataU5BU5D_t2548856849* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t801739046_StaticFields, ___EmptyArray_4)); }
	inline EdgeDataU5BU5D_t2548856849* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EdgeDataU5BU5D_t2548856849** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EdgeDataU5BU5D_t2548856849* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T801739046_H
#ifndef LIST_1_T2288335961_H
#define LIST_1_T2288335961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FlyingText3D.Justify>
struct  List_1_t2288335961  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JustifyU5BU5D_t2872849074* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2288335961, ____items_1)); }
	inline JustifyU5BU5D_t2872849074* get__items_1() const { return ____items_1; }
	inline JustifyU5BU5D_t2872849074** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JustifyU5BU5D_t2872849074* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2288335961, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2288335961, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2288335961_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JustifyU5BU5D_t2872849074* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2288335961_StaticFields, ___EmptyArray_4)); }
	inline JustifyU5BU5D_t2872849074* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JustifyU5BU5D_t2872849074** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JustifyU5BU5D_t2872849074* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2288335961_H
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
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
#ifndef DICTIONARY_2_T4026917929_H
#define DICTIONARY_2_T4026917929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>
struct  Dictionary_2_t4026917929  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	KernPairU5BU5D_t2970630583* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int16U5BU5D_t3686840178* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___keySlots_6)); }
	inline KernPairU5BU5D_t2970630583* get_keySlots_6() const { return ___keySlots_6; }
	inline KernPairU5BU5D_t2970630583** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(KernPairU5BU5D_t2970630583* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___valueSlots_7)); }
	inline Int16U5BU5D_t3686840178* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int16U5BU5D_t3686840178** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int16U5BU5D_t3686840178* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4026917929_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t430486863 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4026917929_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t430486863 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t430486863 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t430486863 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4026917929_H
#ifndef LIST_1_T2869341516_H
#define LIST_1_T2869341516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct  List_1_t2869341516  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t1444911251* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____items_1)); }
	inline SingleU5BU5D_t1444911251* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t1444911251** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t1444911251* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2869341516_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SingleU5BU5D_t1444911251* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2869341516_StaticFields, ___EmptyArray_4)); }
	inline SingleU5BU5D_t1444911251* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SingleU5BU5D_t1444911251* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2869341516_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T811567916_H
#define LIST_1_T811567916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Char>
struct  List_1_t811567916  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t3528271667* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____items_1)); }
	inline CharU5BU5D_t3528271667* get__items_1() const { return ____items_1; }
	inline CharU5BU5D_t3528271667** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CharU5BU5D_t3528271667* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t811567916_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CharU5BU5D_t3528271667* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t811567916_StaticFields, ___EmptyArray_4)); }
	inline CharU5BU5D_t3528271667* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CharU5BU5D_t3528271667** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CharU5BU5D_t3528271667* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T811567916_H
#ifndef LIST_1_T1625501175_H
#define LIST_1_T1625501175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FlyingText3D.CommandData>
struct  List_1_t1625501175  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CommandDataU5BU5D_t3458982108* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1625501175, ____items_1)); }
	inline CommandDataU5BU5D_t3458982108* get__items_1() const { return ____items_1; }
	inline CommandDataU5BU5D_t3458982108** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CommandDataU5BU5D_t3458982108* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1625501175, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1625501175, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1625501175_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CommandDataU5BU5D_t3458982108* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1625501175_StaticFields, ___EmptyArray_4)); }
	inline CommandDataU5BU5D_t3458982108* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CommandDataU5BU5D_t3458982108** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CommandDataU5BU5D_t3458982108* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1625501175_H
#ifndef FONTDATA_T3499866359_H
#define FONTDATA_T3499866359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.FontData
struct  FontData_t3499866359  : public RuntimeObject
{
public:
	// UnityEngine.TextAsset FlyingText3D.FontData::ttfFile
	TextAsset_t3022178571 * ___ttfFile_0;
	// System.String FlyingText3D.FontData::fontName
	String_t* ___fontName_1;

public:
	inline static int32_t get_offset_of_ttfFile_0() { return static_cast<int32_t>(offsetof(FontData_t3499866359, ___ttfFile_0)); }
	inline TextAsset_t3022178571 * get_ttfFile_0() const { return ___ttfFile_0; }
	inline TextAsset_t3022178571 ** get_address_of_ttfFile_0() { return &___ttfFile_0; }
	inline void set_ttfFile_0(TextAsset_t3022178571 * value)
	{
		___ttfFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___ttfFile_0), value);
	}

	inline static int32_t get_offset_of_fontName_1() { return static_cast<int32_t>(offsetof(FontData_t3499866359, ___fontName_1)); }
	inline String_t* get_fontName_1() const { return ___fontName_1; }
	inline String_t** get_address_of_fontName_1() { return &___fontName_1; }
	inline void set_fontName_1(String_t* value)
	{
		___fontName_1 = value;
		Il2CppCodeGenWriteBarrier((&___fontName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTDATA_T3499866359_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef GLYPHDATA_T620095268_H
#define GLYPHDATA_T620095268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.GlyphData
struct  GlyphData_t620095268  : public RuntimeObject
{
public:
	// System.Int32 FlyingText3D.GlyphData::_glyphIndex
	int32_t ____glyphIndex_0;
	// System.Boolean FlyingText3D.GlyphData::_isVisibleChar
	bool ____isVisibleChar_1;
	// System.Int32 FlyingText3D.GlyphData::_resolution
	int32_t ____resolution_2;
	// System.Single FlyingText3D.GlyphData::_scaleFactor
	float ____scaleFactor_3;
	// System.Single FlyingText3D.GlyphData::_extrudeDepth
	float ____extrudeDepth_4;
	// System.Int32 FlyingText3D.GlyphData::_vertexCount
	int32_t ____vertexCount_5;
	// System.Int32 FlyingText3D.GlyphData::_triCount
	int32_t ____triCount_6;
	// System.Int32 FlyingText3D.GlyphData::_triCount2
	int32_t ____triCount2_7;
	// UnityEngine.Vector3[] FlyingText3D.GlyphData::_baseVertices
	Vector3U5BU5D_t1718750761* ____baseVertices_8;
	// UnityEngine.Vector3[] FlyingText3D.GlyphData::_vertices
	Vector3U5BU5D_t1718750761* ____vertices_9;
	// System.Int32[] FlyingText3D.GlyphData::_baseTriangles
	Int32U5BU5D_t385246372* ____baseTriangles_10;
	// System.Int32[] FlyingText3D.GlyphData::_triangles
	Int32U5BU5D_t385246372* ____triangles_11;
	// System.Int32[] FlyingText3D.GlyphData::_triangles2
	Int32U5BU5D_t385246372* ____triangles2_12;
	// System.Boolean FlyingText3D.GlyphData::_useSubmesh
	bool ____useSubmesh_13;
	// System.Boolean FlyingText3D.GlyphData::_useBack
	bool ____useBack_14;
	// System.Boolean FlyingText3D.GlyphData::_triDataComputed
	bool ____triDataComputed_15;
	// System.Int32 FlyingText3D.GlyphData::_frontTriIndex
	int32_t ____frontTriIndex_16;
	// System.Int32 FlyingText3D.GlyphData::_frontVertIndex
	int32_t ____frontVertIndex_17;
	// System.Int32 FlyingText3D.GlyphData::_xMin
	int32_t ____xMin_18;
	// System.Int32 FlyingText3D.GlyphData::_yMin
	int32_t ____yMin_19;
	// System.Int32 FlyingText3D.GlyphData::_xMax
	int32_t ____xMax_20;
	// System.Int32 FlyingText3D.GlyphData::_yMax
	int32_t ____yMax_21;
	// System.Int32 FlyingText3D.GlyphData::_unitsPerEm
	int32_t ____unitsPerEm_22;
	// System.Boolean FlyingText3D.GlyphData::_reverse
	bool ____reverse_23;
	// System.Collections.Generic.List`1<FlyingText3D.ContourData> FlyingText3D.GlyphData::_contourList
	List_1_t3670791667 * ____contourList_24;

public:
	inline static int32_t get_offset_of__glyphIndex_0() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____glyphIndex_0)); }
	inline int32_t get__glyphIndex_0() const { return ____glyphIndex_0; }
	inline int32_t* get_address_of__glyphIndex_0() { return &____glyphIndex_0; }
	inline void set__glyphIndex_0(int32_t value)
	{
		____glyphIndex_0 = value;
	}

	inline static int32_t get_offset_of__isVisibleChar_1() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____isVisibleChar_1)); }
	inline bool get__isVisibleChar_1() const { return ____isVisibleChar_1; }
	inline bool* get_address_of__isVisibleChar_1() { return &____isVisibleChar_1; }
	inline void set__isVisibleChar_1(bool value)
	{
		____isVisibleChar_1 = value;
	}

	inline static int32_t get_offset_of__resolution_2() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____resolution_2)); }
	inline int32_t get__resolution_2() const { return ____resolution_2; }
	inline int32_t* get_address_of__resolution_2() { return &____resolution_2; }
	inline void set__resolution_2(int32_t value)
	{
		____resolution_2 = value;
	}

	inline static int32_t get_offset_of__scaleFactor_3() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____scaleFactor_3)); }
	inline float get__scaleFactor_3() const { return ____scaleFactor_3; }
	inline float* get_address_of__scaleFactor_3() { return &____scaleFactor_3; }
	inline void set__scaleFactor_3(float value)
	{
		____scaleFactor_3 = value;
	}

	inline static int32_t get_offset_of__extrudeDepth_4() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____extrudeDepth_4)); }
	inline float get__extrudeDepth_4() const { return ____extrudeDepth_4; }
	inline float* get_address_of__extrudeDepth_4() { return &____extrudeDepth_4; }
	inline void set__extrudeDepth_4(float value)
	{
		____extrudeDepth_4 = value;
	}

	inline static int32_t get_offset_of__vertexCount_5() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____vertexCount_5)); }
	inline int32_t get__vertexCount_5() const { return ____vertexCount_5; }
	inline int32_t* get_address_of__vertexCount_5() { return &____vertexCount_5; }
	inline void set__vertexCount_5(int32_t value)
	{
		____vertexCount_5 = value;
	}

	inline static int32_t get_offset_of__triCount_6() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____triCount_6)); }
	inline int32_t get__triCount_6() const { return ____triCount_6; }
	inline int32_t* get_address_of__triCount_6() { return &____triCount_6; }
	inline void set__triCount_6(int32_t value)
	{
		____triCount_6 = value;
	}

	inline static int32_t get_offset_of__triCount2_7() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____triCount2_7)); }
	inline int32_t get__triCount2_7() const { return ____triCount2_7; }
	inline int32_t* get_address_of__triCount2_7() { return &____triCount2_7; }
	inline void set__triCount2_7(int32_t value)
	{
		____triCount2_7 = value;
	}

	inline static int32_t get_offset_of__baseVertices_8() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____baseVertices_8)); }
	inline Vector3U5BU5D_t1718750761* get__baseVertices_8() const { return ____baseVertices_8; }
	inline Vector3U5BU5D_t1718750761** get_address_of__baseVertices_8() { return &____baseVertices_8; }
	inline void set__baseVertices_8(Vector3U5BU5D_t1718750761* value)
	{
		____baseVertices_8 = value;
		Il2CppCodeGenWriteBarrier((&____baseVertices_8), value);
	}

	inline static int32_t get_offset_of__vertices_9() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____vertices_9)); }
	inline Vector3U5BU5D_t1718750761* get__vertices_9() const { return ____vertices_9; }
	inline Vector3U5BU5D_t1718750761** get_address_of__vertices_9() { return &____vertices_9; }
	inline void set__vertices_9(Vector3U5BU5D_t1718750761* value)
	{
		____vertices_9 = value;
		Il2CppCodeGenWriteBarrier((&____vertices_9), value);
	}

	inline static int32_t get_offset_of__baseTriangles_10() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____baseTriangles_10)); }
	inline Int32U5BU5D_t385246372* get__baseTriangles_10() const { return ____baseTriangles_10; }
	inline Int32U5BU5D_t385246372** get_address_of__baseTriangles_10() { return &____baseTriangles_10; }
	inline void set__baseTriangles_10(Int32U5BU5D_t385246372* value)
	{
		____baseTriangles_10 = value;
		Il2CppCodeGenWriteBarrier((&____baseTriangles_10), value);
	}

	inline static int32_t get_offset_of__triangles_11() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____triangles_11)); }
	inline Int32U5BU5D_t385246372* get__triangles_11() const { return ____triangles_11; }
	inline Int32U5BU5D_t385246372** get_address_of__triangles_11() { return &____triangles_11; }
	inline void set__triangles_11(Int32U5BU5D_t385246372* value)
	{
		____triangles_11 = value;
		Il2CppCodeGenWriteBarrier((&____triangles_11), value);
	}

	inline static int32_t get_offset_of__triangles2_12() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____triangles2_12)); }
	inline Int32U5BU5D_t385246372* get__triangles2_12() const { return ____triangles2_12; }
	inline Int32U5BU5D_t385246372** get_address_of__triangles2_12() { return &____triangles2_12; }
	inline void set__triangles2_12(Int32U5BU5D_t385246372* value)
	{
		____triangles2_12 = value;
		Il2CppCodeGenWriteBarrier((&____triangles2_12), value);
	}

	inline static int32_t get_offset_of__useSubmesh_13() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____useSubmesh_13)); }
	inline bool get__useSubmesh_13() const { return ____useSubmesh_13; }
	inline bool* get_address_of__useSubmesh_13() { return &____useSubmesh_13; }
	inline void set__useSubmesh_13(bool value)
	{
		____useSubmesh_13 = value;
	}

	inline static int32_t get_offset_of__useBack_14() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____useBack_14)); }
	inline bool get__useBack_14() const { return ____useBack_14; }
	inline bool* get_address_of__useBack_14() { return &____useBack_14; }
	inline void set__useBack_14(bool value)
	{
		____useBack_14 = value;
	}

	inline static int32_t get_offset_of__triDataComputed_15() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____triDataComputed_15)); }
	inline bool get__triDataComputed_15() const { return ____triDataComputed_15; }
	inline bool* get_address_of__triDataComputed_15() { return &____triDataComputed_15; }
	inline void set__triDataComputed_15(bool value)
	{
		____triDataComputed_15 = value;
	}

	inline static int32_t get_offset_of__frontTriIndex_16() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____frontTriIndex_16)); }
	inline int32_t get__frontTriIndex_16() const { return ____frontTriIndex_16; }
	inline int32_t* get_address_of__frontTriIndex_16() { return &____frontTriIndex_16; }
	inline void set__frontTriIndex_16(int32_t value)
	{
		____frontTriIndex_16 = value;
	}

	inline static int32_t get_offset_of__frontVertIndex_17() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____frontVertIndex_17)); }
	inline int32_t get__frontVertIndex_17() const { return ____frontVertIndex_17; }
	inline int32_t* get_address_of__frontVertIndex_17() { return &____frontVertIndex_17; }
	inline void set__frontVertIndex_17(int32_t value)
	{
		____frontVertIndex_17 = value;
	}

	inline static int32_t get_offset_of__xMin_18() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____xMin_18)); }
	inline int32_t get__xMin_18() const { return ____xMin_18; }
	inline int32_t* get_address_of__xMin_18() { return &____xMin_18; }
	inline void set__xMin_18(int32_t value)
	{
		____xMin_18 = value;
	}

	inline static int32_t get_offset_of__yMin_19() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____yMin_19)); }
	inline int32_t get__yMin_19() const { return ____yMin_19; }
	inline int32_t* get_address_of__yMin_19() { return &____yMin_19; }
	inline void set__yMin_19(int32_t value)
	{
		____yMin_19 = value;
	}

	inline static int32_t get_offset_of__xMax_20() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____xMax_20)); }
	inline int32_t get__xMax_20() const { return ____xMax_20; }
	inline int32_t* get_address_of__xMax_20() { return &____xMax_20; }
	inline void set__xMax_20(int32_t value)
	{
		____xMax_20 = value;
	}

	inline static int32_t get_offset_of__yMax_21() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____yMax_21)); }
	inline int32_t get__yMax_21() const { return ____yMax_21; }
	inline int32_t* get_address_of__yMax_21() { return &____yMax_21; }
	inline void set__yMax_21(int32_t value)
	{
		____yMax_21 = value;
	}

	inline static int32_t get_offset_of__unitsPerEm_22() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____unitsPerEm_22)); }
	inline int32_t get__unitsPerEm_22() const { return ____unitsPerEm_22; }
	inline int32_t* get_address_of__unitsPerEm_22() { return &____unitsPerEm_22; }
	inline void set__unitsPerEm_22(int32_t value)
	{
		____unitsPerEm_22 = value;
	}

	inline static int32_t get_offset_of__reverse_23() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____reverse_23)); }
	inline bool get__reverse_23() const { return ____reverse_23; }
	inline bool* get_address_of__reverse_23() { return &____reverse_23; }
	inline void set__reverse_23(bool value)
	{
		____reverse_23 = value;
	}

	inline static int32_t get_offset_of__contourList_24() { return static_cast<int32_t>(offsetof(GlyphData_t620095268, ____contourList_24)); }
	inline List_1_t3670791667 * get__contourList_24() const { return ____contourList_24; }
	inline List_1_t3670791667 ** get_address_of__contourList_24() { return &____contourList_24; }
	inline void set__contourList_24(List_1_t3670791667 * value)
	{
		____contourList_24 = value;
		Il2CppCodeGenWriteBarrier((&____contourList_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLYPHDATA_T620095268_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef LIST_1_T1569362707_H
#define LIST_1_T1569362707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t1569362707  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t2897418192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____items_1)); }
	inline BooleanU5BU5D_t2897418192* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t2897418192* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1569362707_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BooleanU5BU5D_t2897418192* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1569362707_StaticFields, ___EmptyArray_4)); }
	inline BooleanU5BU5D_t2897418192* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BooleanU5BU5D_t2897418192* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1569362707_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef TRIANGULATE_T3395334539_H
#define TRIANGULATE_T3395334539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.Triangulate
struct  Triangulate_t3395334539  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIANGULATE_T3395334539_H
#ifndef LIST_1_T3670791667_H
#define LIST_1_T3670791667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FlyingText3D.ContourData>
struct  List_1_t3670791667  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContourDataU5BU5D_t4003007856* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3670791667, ____items_1)); }
	inline ContourDataU5BU5D_t4003007856* get__items_1() const { return ____items_1; }
	inline ContourDataU5BU5D_t4003007856** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContourDataU5BU5D_t4003007856* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3670791667, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3670791667, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3670791667_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ContourDataU5BU5D_t4003007856* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3670791667_StaticFields, ___EmptyArray_4)); }
	inline ContourDataU5BU5D_t4003007856* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ContourDataU5BU5D_t4003007856** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ContourDataU5BU5D_t4003007856* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3670791667_H
#ifndef LIST_1_T74525638_H
#define LIST_1_T74525638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean[]>
struct  List_1_t74525638  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5DU5BU5D_t325517041* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74525638, ____items_1)); }
	inline BooleanU5BU5DU5BU5D_t325517041* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5DU5BU5D_t325517041** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5DU5BU5D_t325517041* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74525638, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74525638, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t74525638_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BooleanU5BU5DU5BU5D_t325517041* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t74525638_StaticFields, ___EmptyArray_4)); }
	inline BooleanU5BU5DU5BU5D_t325517041* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BooleanU5BU5DU5BU5D_t325517041** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BooleanU5BU5DU5BU5D_t325517041* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T74525638_H
#ifndef LIST_1_T2929260728_H
#define LIST_1_T2929260728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2[]>
struct  List_1_t2929260728  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5DU5BU5D_t1870165495* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2929260728, ____items_1)); }
	inline Vector2U5BU5DU5BU5D_t1870165495* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5DU5BU5D_t1870165495** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5DU5BU5D_t1870165495* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2929260728, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2929260728, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2929260728_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5DU5BU5D_t1870165495* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2929260728_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5DU5BU5D_t1870165495* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5DU5BU5D_t1870165495** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5DU5BU5D_t1870165495* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2929260728_H
#ifndef LIST_1_T1857321114_H
#define LIST_1_T1857321114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32[]>
struct  List_1_t1857321114  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5DU5BU5D_t3365920845* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1857321114, ____items_1)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get__items_1() const { return ____items_1; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1857321114, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1857321114, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1857321114_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5DU5BU5D_t3365920845* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1857321114_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1857321114_H
#ifndef LIST_1_T3831783251_H
#define LIST_1_T3831783251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FlyingText3D.InsideData>
struct  List_1_t3831783251  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InsideDataU5BU5D_t1388663440* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3831783251, ____items_1)); }
	inline InsideDataU5BU5D_t1388663440* get__items_1() const { return ____items_1; }
	inline InsideDataU5BU5D_t1388663440** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InsideDataU5BU5D_t1388663440* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3831783251, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3831783251, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3831783251_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	InsideDataU5BU5D_t1388663440* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3831783251_StaticFields, ___EmptyArray_4)); }
	inline InsideDataU5BU5D_t1388663440* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline InsideDataU5BU5D_t1388663440** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(InsideDataU5BU5D_t1388663440* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3831783251_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef TTFFONTINFO_T2461483730_H
#define TTFFONTINFO_T2461483730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.TTFFontInfo
struct  TTFFontInfo_t2461483730  : public RuntimeObject
{
public:
	// System.Byte[] FlyingText3D.TTFFontInfo::_ttfData
	ByteU5BU5D_t4116647657* ____ttfData_20;
	// System.Boolean FlyingText3D.TTFFontInfo::_isAvailable
	bool ____isAvailable_21;
	// System.String FlyingText3D.TTFFontInfo::_name
	String_t* ____name_22;
	// System.Int32 FlyingText3D.TTFFontInfo::_unitsPerEm
	int32_t ____unitsPerEm_23;
	// System.Int32 FlyingText3D.TTFFontInfo::_ascent
	int32_t ____ascent_24;
	// System.Int32 FlyingText3D.TTFFontInfo::_descent
	int32_t ____descent_25;
	// System.Int32 FlyingText3D.TTFFontInfo::_lineHeight
	int32_t ____lineHeight_26;
	// System.Int32 FlyingText3D.TTFFontInfo::_fontXMin
	int32_t ____fontXMin_27;
	// System.Int32 FlyingText3D.TTFFontInfo::_fontYMin
	int32_t ____fontYMin_28;
	// System.Int32 FlyingText3D.TTFFontInfo::_fontXMax
	int32_t ____fontXMax_29;
	// System.Int32 FlyingText3D.TTFFontInfo::_fontYMax
	int32_t ____fontYMax_30;
	// System.UInt32 FlyingText3D.TTFFontInfo::_glyphDataOffset
	uint32_t ____glyphDataOffset_31;
	// System.Int32 FlyingText3D.TTFFontInfo::_cmapFormat
	int32_t ____cmapFormat_32;
	// System.Int32[] FlyingText3D.TTFFontInfo::_glyphIndexArray
	Int32U5BU5D_t385246372* ____glyphIndexArray_33;
	// System.Int32[] FlyingText3D.TTFFontInfo::_endCodeArray
	Int32U5BU5D_t385246372* ____endCodeArray_34;
	// System.Int32[] FlyingText3D.TTFFontInfo::_startCodeArray
	Int32U5BU5D_t385246372* ____startCodeArray_35;
	// System.Int32[] FlyingText3D.TTFFontInfo::_idDeltaArray
	Int32U5BU5D_t385246372* ____idDeltaArray_36;
	// System.Int32[] FlyingText3D.TTFFontInfo::_idRangeOffsetArray
	Int32U5BU5D_t385246372* ____idRangeOffsetArray_37;
	// System.Int32[] FlyingText3D.TTFFontInfo::_glyphIdArray
	Int32U5BU5D_t385246372* ____glyphIdArray_38;
	// System.UInt32[] FlyingText3D.TTFFontInfo::_locationIndexArray
	UInt32U5BU5D_t2770800703* ____locationIndexArray_39;
	// System.Int32[] FlyingText3D.TTFFontInfo::_advanceArray
	Int32U5BU5D_t385246372* ____advanceArray_40;
	// System.Boolean FlyingText3D.TTFFontInfo::_hasKerning
	bool ____hasKerning_41;
	// System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16> FlyingText3D.TTFFontInfo::_kernDictionary
	Dictionary_2_t4026917929 * ____kernDictionary_42;
	// System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData> FlyingText3D.TTFFontInfo::_glyphDictionary
	Dictionary_2_t2651833894 * ____glyphDictionary_43;

public:
	inline static int32_t get_offset_of__ttfData_20() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____ttfData_20)); }
	inline ByteU5BU5D_t4116647657* get__ttfData_20() const { return ____ttfData_20; }
	inline ByteU5BU5D_t4116647657** get_address_of__ttfData_20() { return &____ttfData_20; }
	inline void set__ttfData_20(ByteU5BU5D_t4116647657* value)
	{
		____ttfData_20 = value;
		Il2CppCodeGenWriteBarrier((&____ttfData_20), value);
	}

	inline static int32_t get_offset_of__isAvailable_21() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____isAvailable_21)); }
	inline bool get__isAvailable_21() const { return ____isAvailable_21; }
	inline bool* get_address_of__isAvailable_21() { return &____isAvailable_21; }
	inline void set__isAvailable_21(bool value)
	{
		____isAvailable_21 = value;
	}

	inline static int32_t get_offset_of__name_22() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____name_22)); }
	inline String_t* get__name_22() const { return ____name_22; }
	inline String_t** get_address_of__name_22() { return &____name_22; }
	inline void set__name_22(String_t* value)
	{
		____name_22 = value;
		Il2CppCodeGenWriteBarrier((&____name_22), value);
	}

	inline static int32_t get_offset_of__unitsPerEm_23() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____unitsPerEm_23)); }
	inline int32_t get__unitsPerEm_23() const { return ____unitsPerEm_23; }
	inline int32_t* get_address_of__unitsPerEm_23() { return &____unitsPerEm_23; }
	inline void set__unitsPerEm_23(int32_t value)
	{
		____unitsPerEm_23 = value;
	}

	inline static int32_t get_offset_of__ascent_24() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____ascent_24)); }
	inline int32_t get__ascent_24() const { return ____ascent_24; }
	inline int32_t* get_address_of__ascent_24() { return &____ascent_24; }
	inline void set__ascent_24(int32_t value)
	{
		____ascent_24 = value;
	}

	inline static int32_t get_offset_of__descent_25() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____descent_25)); }
	inline int32_t get__descent_25() const { return ____descent_25; }
	inline int32_t* get_address_of__descent_25() { return &____descent_25; }
	inline void set__descent_25(int32_t value)
	{
		____descent_25 = value;
	}

	inline static int32_t get_offset_of__lineHeight_26() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____lineHeight_26)); }
	inline int32_t get__lineHeight_26() const { return ____lineHeight_26; }
	inline int32_t* get_address_of__lineHeight_26() { return &____lineHeight_26; }
	inline void set__lineHeight_26(int32_t value)
	{
		____lineHeight_26 = value;
	}

	inline static int32_t get_offset_of__fontXMin_27() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____fontXMin_27)); }
	inline int32_t get__fontXMin_27() const { return ____fontXMin_27; }
	inline int32_t* get_address_of__fontXMin_27() { return &____fontXMin_27; }
	inline void set__fontXMin_27(int32_t value)
	{
		____fontXMin_27 = value;
	}

	inline static int32_t get_offset_of__fontYMin_28() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____fontYMin_28)); }
	inline int32_t get__fontYMin_28() const { return ____fontYMin_28; }
	inline int32_t* get_address_of__fontYMin_28() { return &____fontYMin_28; }
	inline void set__fontYMin_28(int32_t value)
	{
		____fontYMin_28 = value;
	}

	inline static int32_t get_offset_of__fontXMax_29() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____fontXMax_29)); }
	inline int32_t get__fontXMax_29() const { return ____fontXMax_29; }
	inline int32_t* get_address_of__fontXMax_29() { return &____fontXMax_29; }
	inline void set__fontXMax_29(int32_t value)
	{
		____fontXMax_29 = value;
	}

	inline static int32_t get_offset_of__fontYMax_30() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____fontYMax_30)); }
	inline int32_t get__fontYMax_30() const { return ____fontYMax_30; }
	inline int32_t* get_address_of__fontYMax_30() { return &____fontYMax_30; }
	inline void set__fontYMax_30(int32_t value)
	{
		____fontYMax_30 = value;
	}

	inline static int32_t get_offset_of__glyphDataOffset_31() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____glyphDataOffset_31)); }
	inline uint32_t get__glyphDataOffset_31() const { return ____glyphDataOffset_31; }
	inline uint32_t* get_address_of__glyphDataOffset_31() { return &____glyphDataOffset_31; }
	inline void set__glyphDataOffset_31(uint32_t value)
	{
		____glyphDataOffset_31 = value;
	}

	inline static int32_t get_offset_of__cmapFormat_32() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____cmapFormat_32)); }
	inline int32_t get__cmapFormat_32() const { return ____cmapFormat_32; }
	inline int32_t* get_address_of__cmapFormat_32() { return &____cmapFormat_32; }
	inline void set__cmapFormat_32(int32_t value)
	{
		____cmapFormat_32 = value;
	}

	inline static int32_t get_offset_of__glyphIndexArray_33() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____glyphIndexArray_33)); }
	inline Int32U5BU5D_t385246372* get__glyphIndexArray_33() const { return ____glyphIndexArray_33; }
	inline Int32U5BU5D_t385246372** get_address_of__glyphIndexArray_33() { return &____glyphIndexArray_33; }
	inline void set__glyphIndexArray_33(Int32U5BU5D_t385246372* value)
	{
		____glyphIndexArray_33 = value;
		Il2CppCodeGenWriteBarrier((&____glyphIndexArray_33), value);
	}

	inline static int32_t get_offset_of__endCodeArray_34() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____endCodeArray_34)); }
	inline Int32U5BU5D_t385246372* get__endCodeArray_34() const { return ____endCodeArray_34; }
	inline Int32U5BU5D_t385246372** get_address_of__endCodeArray_34() { return &____endCodeArray_34; }
	inline void set__endCodeArray_34(Int32U5BU5D_t385246372* value)
	{
		____endCodeArray_34 = value;
		Il2CppCodeGenWriteBarrier((&____endCodeArray_34), value);
	}

	inline static int32_t get_offset_of__startCodeArray_35() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____startCodeArray_35)); }
	inline Int32U5BU5D_t385246372* get__startCodeArray_35() const { return ____startCodeArray_35; }
	inline Int32U5BU5D_t385246372** get_address_of__startCodeArray_35() { return &____startCodeArray_35; }
	inline void set__startCodeArray_35(Int32U5BU5D_t385246372* value)
	{
		____startCodeArray_35 = value;
		Il2CppCodeGenWriteBarrier((&____startCodeArray_35), value);
	}

	inline static int32_t get_offset_of__idDeltaArray_36() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____idDeltaArray_36)); }
	inline Int32U5BU5D_t385246372* get__idDeltaArray_36() const { return ____idDeltaArray_36; }
	inline Int32U5BU5D_t385246372** get_address_of__idDeltaArray_36() { return &____idDeltaArray_36; }
	inline void set__idDeltaArray_36(Int32U5BU5D_t385246372* value)
	{
		____idDeltaArray_36 = value;
		Il2CppCodeGenWriteBarrier((&____idDeltaArray_36), value);
	}

	inline static int32_t get_offset_of__idRangeOffsetArray_37() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____idRangeOffsetArray_37)); }
	inline Int32U5BU5D_t385246372* get__idRangeOffsetArray_37() const { return ____idRangeOffsetArray_37; }
	inline Int32U5BU5D_t385246372** get_address_of__idRangeOffsetArray_37() { return &____idRangeOffsetArray_37; }
	inline void set__idRangeOffsetArray_37(Int32U5BU5D_t385246372* value)
	{
		____idRangeOffsetArray_37 = value;
		Il2CppCodeGenWriteBarrier((&____idRangeOffsetArray_37), value);
	}

	inline static int32_t get_offset_of__glyphIdArray_38() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____glyphIdArray_38)); }
	inline Int32U5BU5D_t385246372* get__glyphIdArray_38() const { return ____glyphIdArray_38; }
	inline Int32U5BU5D_t385246372** get_address_of__glyphIdArray_38() { return &____glyphIdArray_38; }
	inline void set__glyphIdArray_38(Int32U5BU5D_t385246372* value)
	{
		____glyphIdArray_38 = value;
		Il2CppCodeGenWriteBarrier((&____glyphIdArray_38), value);
	}

	inline static int32_t get_offset_of__locationIndexArray_39() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____locationIndexArray_39)); }
	inline UInt32U5BU5D_t2770800703* get__locationIndexArray_39() const { return ____locationIndexArray_39; }
	inline UInt32U5BU5D_t2770800703** get_address_of__locationIndexArray_39() { return &____locationIndexArray_39; }
	inline void set__locationIndexArray_39(UInt32U5BU5D_t2770800703* value)
	{
		____locationIndexArray_39 = value;
		Il2CppCodeGenWriteBarrier((&____locationIndexArray_39), value);
	}

	inline static int32_t get_offset_of__advanceArray_40() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____advanceArray_40)); }
	inline Int32U5BU5D_t385246372* get__advanceArray_40() const { return ____advanceArray_40; }
	inline Int32U5BU5D_t385246372** get_address_of__advanceArray_40() { return &____advanceArray_40; }
	inline void set__advanceArray_40(Int32U5BU5D_t385246372* value)
	{
		____advanceArray_40 = value;
		Il2CppCodeGenWriteBarrier((&____advanceArray_40), value);
	}

	inline static int32_t get_offset_of__hasKerning_41() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____hasKerning_41)); }
	inline bool get__hasKerning_41() const { return ____hasKerning_41; }
	inline bool* get_address_of__hasKerning_41() { return &____hasKerning_41; }
	inline void set__hasKerning_41(bool value)
	{
		____hasKerning_41 = value;
	}

	inline static int32_t get_offset_of__kernDictionary_42() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____kernDictionary_42)); }
	inline Dictionary_2_t4026917929 * get__kernDictionary_42() const { return ____kernDictionary_42; }
	inline Dictionary_2_t4026917929 ** get_address_of__kernDictionary_42() { return &____kernDictionary_42; }
	inline void set__kernDictionary_42(Dictionary_2_t4026917929 * value)
	{
		____kernDictionary_42 = value;
		Il2CppCodeGenWriteBarrier((&____kernDictionary_42), value);
	}

	inline static int32_t get_offset_of__glyphDictionary_43() { return static_cast<int32_t>(offsetof(TTFFontInfo_t2461483730, ____glyphDictionary_43)); }
	inline Dictionary_2_t2651833894 * get__glyphDictionary_43() const { return ____glyphDictionary_43; }
	inline Dictionary_2_t2651833894 ** get_address_of__glyphDictionary_43() { return &____glyphDictionary_43; }
	inline void set__glyphDictionary_43(Dictionary_2_t2651833894 * value)
	{
		____glyphDictionary_43 = value;
		Il2CppCodeGenWriteBarrier((&____glyphDictionary_43), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TTFFONTINFO_T2461483730_H
#ifndef DICTIONARY_2_T2385757591_H
#define DICTIONARY_2_T2385757591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>
struct  Dictionary_2_t2385757591  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Color32U5BU5D_t3850468773* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___valueSlots_7)); }
	inline Color32U5BU5D_t3850468773* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Color32U5BU5D_t3850468773** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Color32U5BU5D_t3850468773* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2385757591_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2700880489 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2385757591_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2700880489 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2700880489 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2700880489 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2385757591_H
#ifndef EDGEDATA_T3624631600_H
#define EDGEDATA_T3624631600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EdgeData
struct  EdgeData_t3624631600  : public RuntimeObject
{
public:
	// System.Int32 EdgeData::frontVertIndex
	int32_t ___frontVertIndex_0;
	// System.Int32 EdgeData::vertexCount
	int32_t ___vertexCount_1;

public:
	inline static int32_t get_offset_of_frontVertIndex_0() { return static_cast<int32_t>(offsetof(EdgeData_t3624631600, ___frontVertIndex_0)); }
	inline int32_t get_frontVertIndex_0() const { return ___frontVertIndex_0; }
	inline int32_t* get_address_of_frontVertIndex_0() { return &___frontVertIndex_0; }
	inline void set_frontVertIndex_0(int32_t value)
	{
		___frontVertIndex_0 = value;
	}

	inline static int32_t get_offset_of_vertexCount_1() { return static_cast<int32_t>(offsetof(EdgeData_t3624631600, ___vertexCount_1)); }
	inline int32_t get_vertexCount_1() const { return ___vertexCount_1; }
	inline int32_t* get_address_of_vertexCount_1() { return &___vertexCount_1; }
	inline void set_vertexCount_1(int32_t value)
	{
		___vertexCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGEDATA_T3624631600_H
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
#ifndef LIST_1_T676973805_H
#define LIST_1_T676973805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FlyingText3D.FontData>
struct  List_1_t676973805  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FontDataU5BU5D_t2776205646* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t676973805, ____items_1)); }
	inline FontDataU5BU5D_t2776205646* get__items_1() const { return ____items_1; }
	inline FontDataU5BU5D_t2776205646** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FontDataU5BU5D_t2776205646* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t676973805, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t676973805, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t676973805_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FontDataU5BU5D_t2776205646* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t676973805_StaticFields, ___EmptyArray_4)); }
	inline FontDataU5BU5D_t2776205646* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FontDataU5BU5D_t2776205646** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FontDataU5BU5D_t2776205646* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T676973805_H
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
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef KERNPAIR_T1917918210_H
#define KERNPAIR_T1917918210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.KernPair
struct  KernPair_t1917918210 
{
public:
	// System.Int32 FlyingText3D.KernPair::left
	int32_t ___left_0;
	// System.Int32 FlyingText3D.KernPair::right
	int32_t ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(KernPair_t1917918210, ___left_0)); }
	inline int32_t get_left_0() const { return ___left_0; }
	inline int32_t* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(int32_t value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(KernPair_t1917918210, ___right_1)); }
	inline int32_t get_right_1() const { return ___right_1; }
	inline int32_t* get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(int32_t value)
	{
		___right_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNPAIR_T1917918210_H
#ifndef U24ARRAYTYPEU3D12_T747442255_H
#define U24ARRAYTYPEU3D12_T747442255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{2a40e070-e6cb-4f7e-ab21-a5af0f6d0f8d}/$ArrayType=12
struct  U24ArrayTypeU3D12_t747442255 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D12_t747442255__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T747442255_H
#ifndef ASCIIENCODING_T3446586211_H
#define ASCIIENCODING_T3446586211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3446586211  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3446586211_H
#ifndef JUSTIFY_T816261219_H
#define JUSTIFY_T816261219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.Justify
struct  Justify_t816261219 
{
public:
	// System.Int32 FlyingText3D.Justify::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Justify_t816261219, ___value___1)); }
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
#endif // JUSTIFY_T816261219_H
#ifndef ZANCHOR_T3791036501_H
#define ZANCHOR_T3791036501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.ZAnchor
struct  ZAnchor_t3791036501 
{
public:
	// System.Int32 FlyingText3D.ZAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZAnchor_t3791036501, ___value___1)); }
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
#endif // ZANCHOR_T3791036501_H
#ifndef COLLIDERTYPE_T796285469_H
#define COLLIDERTYPE_T796285469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.ColliderType
struct  ColliderType_t796285469 
{
public:
	// System.Int32 FlyingText3D.ColliderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColliderType_t796285469, ___value___1)); }
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
#endif // COLLIDERTYPE_T796285469_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B2A40E070U2DE6CBU2D4F7EU2DAB21U2DA5AF0F6D0F8DU7D_T2819133477_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B2A40E070U2DE6CBU2D4F7EU2DAB21U2DA5AF0F6D0F8DU7D_T2819133477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{2a40e070-e6cb-4f7e-ab21-a5af0f6d0f8d}
struct  U3CPrivateImplementationDetailsU3EU7B2a40e070U2De6cbU2D4f7eU2Dab21U2Da5af0f6d0f8dU7D_t2819133477  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7B2a40e070U2De6cbU2D4f7eU2Dab21U2Da5af0f6d0f8dU7D_t2819133477_StaticFields
{
public:
	// <PrivateImplementationDetails>{2a40e070-e6cb-4f7e-ab21-a5af0f6d0f8d}/$ArrayType=12 <PrivateImplementationDetails>{2a40e070-e6cb-4f7e-ab21-a5af0f6d0f8d}::$field-0
	U24ArrayTypeU3D12_t747442255  ___U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B2a40e070U2De6cbU2D4f7eU2Dab21U2Da5af0f6d0f8dU7D_t2819133477_StaticFields, ___U24fieldU2D0_0)); }
	inline U24ArrayTypeU3D12_t747442255  get_U24fieldU2D0_0() const { return ___U24fieldU2D0_0; }
	inline U24ArrayTypeU3D12_t747442255 * get_address_of_U24fieldU2D0_0() { return &___U24fieldU2D0_0; }
	inline void set_U24fieldU2D0_0(U24ArrayTypeU3D12_t747442255  value)
	{
		___U24fieldU2D0_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B2A40E070U2DE6CBU2D4F7EU2DAB21U2DA5AF0F6D0F8DU7D_T2819133477_H
#ifndef SIDE_T3368664389_H
#define SIDE_T3368664389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.Side
struct  Side_t3368664389 
{
public:
	// System.Int32 FlyingText3D.Side::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Side_t3368664389, ___value___1)); }
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
#endif // SIDE_T3368664389_H
#ifndef INSIDEDATA_T2359708509_H
#define INSIDEDATA_T2359708509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.InsideData
struct  InsideData_t2359708509  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 FlyingText3D.InsideData::xMaxPoint
	Vector2_t2156229523  ___xMaxPoint_0;
	// System.Int32 FlyingText3D.InsideData::xMaxVertex
	int32_t ___xMaxVertex_1;
	// UnityEngine.Vector2[] FlyingText3D.InsideData::points
	Vector2U5BU5D_t1457185986* ___points_2;

public:
	inline static int32_t get_offset_of_xMaxPoint_0() { return static_cast<int32_t>(offsetof(InsideData_t2359708509, ___xMaxPoint_0)); }
	inline Vector2_t2156229523  get_xMaxPoint_0() const { return ___xMaxPoint_0; }
	inline Vector2_t2156229523 * get_address_of_xMaxPoint_0() { return &___xMaxPoint_0; }
	inline void set_xMaxPoint_0(Vector2_t2156229523  value)
	{
		___xMaxPoint_0 = value;
	}

	inline static int32_t get_offset_of_xMaxVertex_1() { return static_cast<int32_t>(offsetof(InsideData_t2359708509, ___xMaxVertex_1)); }
	inline int32_t get_xMaxVertex_1() const { return ___xMaxVertex_1; }
	inline int32_t* get_address_of_xMaxVertex_1() { return &___xMaxVertex_1; }
	inline void set_xMaxVertex_1(int32_t value)
	{
		___xMaxVertex_1 = value;
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(InsideData_t2359708509, ___points_2)); }
	inline Vector2U5BU5D_t1457185986* get_points_2() const { return ___points_2; }
	inline Vector2U5BU5D_t1457185986** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(Vector2U5BU5D_t1457185986* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier((&___points_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSIDEDATA_T2359708509_H
#ifndef COMMAND_T708814692_H
#define COMMAND_T708814692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.Command
struct  Command_t708814692 
{
public:
	// System.Int32 FlyingText3D.Command::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Command_t708814692, ___value___1)); }
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
#endif // COMMAND_T708814692_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef CONTOURDATA_T2198716925_H
#define CONTOURDATA_T2198716925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.ContourData
struct  ContourData_t2198716925  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 FlyingText3D.ContourData::maxPoint
	Vector2_t2156229523  ___maxPoint_0;
	// UnityEngine.Vector2 FlyingText3D.ContourData::minPoint
	Vector2_t2156229523  ___minPoint_1;
	// UnityEngine.Vector2[] FlyingText3D.ContourData::points
	Vector2U5BU5D_t1457185986* ___points_2;
	// System.Boolean[] FlyingText3D.ContourData::onCurves
	BooleanU5BU5D_t2897418192* ___onCurves_3;
	// UnityEngine.Vector2[] FlyingText3D.ContourData::renderedPoints
	Vector2U5BU5D_t1457185986* ___renderedPoints_4;
	// FlyingText3D.Side FlyingText3D.ContourData::side
	int32_t ___side_5;

public:
	inline static int32_t get_offset_of_maxPoint_0() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___maxPoint_0)); }
	inline Vector2_t2156229523  get_maxPoint_0() const { return ___maxPoint_0; }
	inline Vector2_t2156229523 * get_address_of_maxPoint_0() { return &___maxPoint_0; }
	inline void set_maxPoint_0(Vector2_t2156229523  value)
	{
		___maxPoint_0 = value;
	}

	inline static int32_t get_offset_of_minPoint_1() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___minPoint_1)); }
	inline Vector2_t2156229523  get_minPoint_1() const { return ___minPoint_1; }
	inline Vector2_t2156229523 * get_address_of_minPoint_1() { return &___minPoint_1; }
	inline void set_minPoint_1(Vector2_t2156229523  value)
	{
		___minPoint_1 = value;
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___points_2)); }
	inline Vector2U5BU5D_t1457185986* get_points_2() const { return ___points_2; }
	inline Vector2U5BU5D_t1457185986** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(Vector2U5BU5D_t1457185986* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier((&___points_2), value);
	}

	inline static int32_t get_offset_of_onCurves_3() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___onCurves_3)); }
	inline BooleanU5BU5D_t2897418192* get_onCurves_3() const { return ___onCurves_3; }
	inline BooleanU5BU5D_t2897418192** get_address_of_onCurves_3() { return &___onCurves_3; }
	inline void set_onCurves_3(BooleanU5BU5D_t2897418192* value)
	{
		___onCurves_3 = value;
		Il2CppCodeGenWriteBarrier((&___onCurves_3), value);
	}

	inline static int32_t get_offset_of_renderedPoints_4() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___renderedPoints_4)); }
	inline Vector2U5BU5D_t1457185986* get_renderedPoints_4() const { return ___renderedPoints_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_renderedPoints_4() { return &___renderedPoints_4; }
	inline void set_renderedPoints_4(Vector2U5BU5D_t1457185986* value)
	{
		___renderedPoints_4 = value;
		Il2CppCodeGenWriteBarrier((&___renderedPoints_4), value);
	}

	inline static int32_t get_offset_of_side_5() { return static_cast<int32_t>(offsetof(ContourData_t2198716925, ___side_5)); }
	inline int32_t get_side_5() const { return ___side_5; }
	inline int32_t* get_address_of_side_5() { return &___side_5; }
	inline void set_side_5(int32_t value)
	{
		___side_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTOURDATA_T2198716925_H
#ifndef COMMANDDATA_T153426433_H
#define COMMANDDATA_T153426433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText3D.CommandData
struct  CommandData_t153426433  : public RuntimeObject
{
public:
	// System.Int32 FlyingText3D.CommandData::index
	int32_t ___index_0;
	// FlyingText3D.Command FlyingText3D.CommandData::command
	int32_t ___command_1;
	// System.Object FlyingText3D.CommandData::data
	RuntimeObject * ___data_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CommandData_t153426433, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_command_1() { return static_cast<int32_t>(offsetof(CommandData_t153426433, ___command_1)); }
	inline int32_t get_command_1() const { return ___command_1; }
	inline int32_t* get_address_of_command_1() { return &___command_1; }
	inline void set_command_1(int32_t value)
	{
		___command_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(CommandData_t153426433, ___data_2)); }
	inline RuntimeObject * get_data_2() const { return ___data_2; }
	inline RuntimeObject ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(RuntimeObject * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDDATA_T153426433_H
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
#ifndef PHYSICMATERIAL_T2874185564_H
#define PHYSICMATERIAL_T2874185564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2874185564  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2874185564_H
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
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
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
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef COMPARISON_1_T2134639688_H
#define COMPARISON_1_T2134639688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<FlyingText3D.InsideData>
struct  Comparison_1_t2134639688  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2134639688_H
#ifndef COMPARISON_1_T1973648104_H
#define COMPARISON_1_T1973648104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<FlyingText3D.ContourData>
struct  Comparison_1_t1973648104  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T1973648104_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
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
#ifndef TEXTOBJECTDATA_T178506778_H
#define TEXTOBJECTDATA_T178506778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextObjectData
struct  TextObjectData_t178506778  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TextObjectData::size
	float ___size_2;
	// System.Single TextObjectData::extrudeDepth
	float ___extrudeDepth_3;
	// System.Int32 TextObjectData::resolution
	int32_t ___resolution_4;
	// System.Single TextObjectData::characterSpacing
	float ___characterSpacing_5;
	// System.Single TextObjectData::lineSpacing
	float ___lineSpacing_6;
	// System.Single TextObjectData::lineWidth
	float ___lineWidth_7;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_extrudeDepth_3() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___extrudeDepth_3)); }
	inline float get_extrudeDepth_3() const { return ___extrudeDepth_3; }
	inline float* get_address_of_extrudeDepth_3() { return &___extrudeDepth_3; }
	inline void set_extrudeDepth_3(float value)
	{
		___extrudeDepth_3 = value;
	}

	inline static int32_t get_offset_of_resolution_4() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___resolution_4)); }
	inline int32_t get_resolution_4() const { return ___resolution_4; }
	inline int32_t* get_address_of_resolution_4() { return &___resolution_4; }
	inline void set_resolution_4(int32_t value)
	{
		___resolution_4 = value;
	}

	inline static int32_t get_offset_of_characterSpacing_5() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___characterSpacing_5)); }
	inline float get_characterSpacing_5() const { return ___characterSpacing_5; }
	inline float* get_address_of_characterSpacing_5() { return &___characterSpacing_5; }
	inline void set_characterSpacing_5(float value)
	{
		___characterSpacing_5 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_6() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___lineSpacing_6)); }
	inline float get_lineSpacing_6() const { return ___lineSpacing_6; }
	inline float* get_address_of_lineSpacing_6() { return &___lineSpacing_6; }
	inline void set_lineSpacing_6(float value)
	{
		___lineSpacing_6 = value;
	}

	inline static int32_t get_offset_of_lineWidth_7() { return static_cast<int32_t>(offsetof(TextObjectData_t178506778, ___lineWidth_7)); }
	inline float get_lineWidth_7() const { return ___lineWidth_7; }
	inline float* get_address_of_lineWidth_7() { return &___lineWidth_7; }
	inline void set_lineWidth_7(float value)
	{
		___lineWidth_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTOBJECTDATA_T178506778_H
#ifndef FLYINGTEXT_T4265356488_H
#define FLYINGTEXT_T4265356488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingText
struct  FlyingText_t4265356488  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<FlyingText3D.FontData> FlyingText::m_fontData
	List_1_t676973805 * ___m_fontData_4;
	// System.Int32 FlyingText::m_defaultFont
	int32_t ___m_defaultFont_5;
	// UnityEngine.Material FlyingText::m_defaultMaterial
	Material_t340375123 * ___m_defaultMaterial_6;
	// UnityEngine.Material FlyingText::m_defaultEdgeMaterial
	Material_t340375123 * ___m_defaultEdgeMaterial_7;
	// System.Boolean FlyingText::m_useEdgeMaterial
	bool ___m_useEdgeMaterial_8;
	// UnityEngine.Color FlyingText::m_defaultColor
	Color_t2555686324  ___m_defaultColor_9;
	// System.Int32 FlyingText::m_defaultResolution
	int32_t ___m_defaultResolution_10;
	// System.Single FlyingText::m_defaultSize
	float ___m_defaultSize_11;
	// System.Single FlyingText::m_defaultDepth
	float ___m_defaultDepth_12;
	// System.Single FlyingText::m_defaultLetterSpacing
	float ___m_defaultLetterSpacing_13;
	// System.Single FlyingText::m_defaultLineSpacing
	float ___m_defaultLineSpacing_14;
	// System.Single FlyingText::m_defaultLineWidth
	float ___m_defaultLineWidth_15;
	// System.Single FlyingText::m_tabStop
	float ___m_tabStop_16;
	// System.Boolean FlyingText::m_wordWrap
	bool ___m_wordWrap_17;
	// FlyingText3D.Justify FlyingText::m_defaultJustification
	int32_t ___m_defaultJustification_18;
	// System.Boolean FlyingText::m_verticalLayout
	bool ___m_verticalLayout_19;
	// System.Boolean FlyingText::m_includeBackface
	bool ___m_includeBackface_20;
	// System.Boolean FlyingText::m_texturePerLetter
	bool ___m_texturePerLetter_21;
	// UnityEngine.TextAnchor FlyingText::m_anchor
	int32_t ___m_anchor_22;
	// FlyingText3D.ZAnchor FlyingText::m_zAnchor
	int32_t ___m_zAnchor_23;
	// FlyingText3D.ColliderType FlyingText::m_colliderType
	int32_t ___m_colliderType_24;
	// System.Boolean FlyingText::m_addRigidbodies
	bool ___m_addRigidbodies_25;
	// UnityEngine.PhysicMaterial FlyingText::m_physicsMaterial
	PhysicMaterial_t2874185564 * ___m_physicsMaterial_26;
	// System.Single FlyingText::m_smoothingAngle
	float ___m_smoothingAngle_27;

public:
	inline static int32_t get_offset_of_m_fontData_4() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_fontData_4)); }
	inline List_1_t676973805 * get_m_fontData_4() const { return ___m_fontData_4; }
	inline List_1_t676973805 ** get_address_of_m_fontData_4() { return &___m_fontData_4; }
	inline void set_m_fontData_4(List_1_t676973805 * value)
	{
		___m_fontData_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontData_4), value);
	}

	inline static int32_t get_offset_of_m_defaultFont_5() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultFont_5)); }
	inline int32_t get_m_defaultFont_5() const { return ___m_defaultFont_5; }
	inline int32_t* get_address_of_m_defaultFont_5() { return &___m_defaultFont_5; }
	inline void set_m_defaultFont_5(int32_t value)
	{
		___m_defaultFont_5 = value;
	}

	inline static int32_t get_offset_of_m_defaultMaterial_6() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultMaterial_6)); }
	inline Material_t340375123 * get_m_defaultMaterial_6() const { return ___m_defaultMaterial_6; }
	inline Material_t340375123 ** get_address_of_m_defaultMaterial_6() { return &___m_defaultMaterial_6; }
	inline void set_m_defaultMaterial_6(Material_t340375123 * value)
	{
		___m_defaultMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultMaterial_6), value);
	}

	inline static int32_t get_offset_of_m_defaultEdgeMaterial_7() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultEdgeMaterial_7)); }
	inline Material_t340375123 * get_m_defaultEdgeMaterial_7() const { return ___m_defaultEdgeMaterial_7; }
	inline Material_t340375123 ** get_address_of_m_defaultEdgeMaterial_7() { return &___m_defaultEdgeMaterial_7; }
	inline void set_m_defaultEdgeMaterial_7(Material_t340375123 * value)
	{
		___m_defaultEdgeMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultEdgeMaterial_7), value);
	}

	inline static int32_t get_offset_of_m_useEdgeMaterial_8() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_useEdgeMaterial_8)); }
	inline bool get_m_useEdgeMaterial_8() const { return ___m_useEdgeMaterial_8; }
	inline bool* get_address_of_m_useEdgeMaterial_8() { return &___m_useEdgeMaterial_8; }
	inline void set_m_useEdgeMaterial_8(bool value)
	{
		___m_useEdgeMaterial_8 = value;
	}

	inline static int32_t get_offset_of_m_defaultColor_9() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultColor_9)); }
	inline Color_t2555686324  get_m_defaultColor_9() const { return ___m_defaultColor_9; }
	inline Color_t2555686324 * get_address_of_m_defaultColor_9() { return &___m_defaultColor_9; }
	inline void set_m_defaultColor_9(Color_t2555686324  value)
	{
		___m_defaultColor_9 = value;
	}

	inline static int32_t get_offset_of_m_defaultResolution_10() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultResolution_10)); }
	inline int32_t get_m_defaultResolution_10() const { return ___m_defaultResolution_10; }
	inline int32_t* get_address_of_m_defaultResolution_10() { return &___m_defaultResolution_10; }
	inline void set_m_defaultResolution_10(int32_t value)
	{
		___m_defaultResolution_10 = value;
	}

	inline static int32_t get_offset_of_m_defaultSize_11() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultSize_11)); }
	inline float get_m_defaultSize_11() const { return ___m_defaultSize_11; }
	inline float* get_address_of_m_defaultSize_11() { return &___m_defaultSize_11; }
	inline void set_m_defaultSize_11(float value)
	{
		___m_defaultSize_11 = value;
	}

	inline static int32_t get_offset_of_m_defaultDepth_12() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultDepth_12)); }
	inline float get_m_defaultDepth_12() const { return ___m_defaultDepth_12; }
	inline float* get_address_of_m_defaultDepth_12() { return &___m_defaultDepth_12; }
	inline void set_m_defaultDepth_12(float value)
	{
		___m_defaultDepth_12 = value;
	}

	inline static int32_t get_offset_of_m_defaultLetterSpacing_13() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultLetterSpacing_13)); }
	inline float get_m_defaultLetterSpacing_13() const { return ___m_defaultLetterSpacing_13; }
	inline float* get_address_of_m_defaultLetterSpacing_13() { return &___m_defaultLetterSpacing_13; }
	inline void set_m_defaultLetterSpacing_13(float value)
	{
		___m_defaultLetterSpacing_13 = value;
	}

	inline static int32_t get_offset_of_m_defaultLineSpacing_14() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultLineSpacing_14)); }
	inline float get_m_defaultLineSpacing_14() const { return ___m_defaultLineSpacing_14; }
	inline float* get_address_of_m_defaultLineSpacing_14() { return &___m_defaultLineSpacing_14; }
	inline void set_m_defaultLineSpacing_14(float value)
	{
		___m_defaultLineSpacing_14 = value;
	}

	inline static int32_t get_offset_of_m_defaultLineWidth_15() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultLineWidth_15)); }
	inline float get_m_defaultLineWidth_15() const { return ___m_defaultLineWidth_15; }
	inline float* get_address_of_m_defaultLineWidth_15() { return &___m_defaultLineWidth_15; }
	inline void set_m_defaultLineWidth_15(float value)
	{
		___m_defaultLineWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_tabStop_16() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_tabStop_16)); }
	inline float get_m_tabStop_16() const { return ___m_tabStop_16; }
	inline float* get_address_of_m_tabStop_16() { return &___m_tabStop_16; }
	inline void set_m_tabStop_16(float value)
	{
		___m_tabStop_16 = value;
	}

	inline static int32_t get_offset_of_m_wordWrap_17() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_wordWrap_17)); }
	inline bool get_m_wordWrap_17() const { return ___m_wordWrap_17; }
	inline bool* get_address_of_m_wordWrap_17() { return &___m_wordWrap_17; }
	inline void set_m_wordWrap_17(bool value)
	{
		___m_wordWrap_17 = value;
	}

	inline static int32_t get_offset_of_m_defaultJustification_18() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_defaultJustification_18)); }
	inline int32_t get_m_defaultJustification_18() const { return ___m_defaultJustification_18; }
	inline int32_t* get_address_of_m_defaultJustification_18() { return &___m_defaultJustification_18; }
	inline void set_m_defaultJustification_18(int32_t value)
	{
		___m_defaultJustification_18 = value;
	}

	inline static int32_t get_offset_of_m_verticalLayout_19() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_verticalLayout_19)); }
	inline bool get_m_verticalLayout_19() const { return ___m_verticalLayout_19; }
	inline bool* get_address_of_m_verticalLayout_19() { return &___m_verticalLayout_19; }
	inline void set_m_verticalLayout_19(bool value)
	{
		___m_verticalLayout_19 = value;
	}

	inline static int32_t get_offset_of_m_includeBackface_20() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_includeBackface_20)); }
	inline bool get_m_includeBackface_20() const { return ___m_includeBackface_20; }
	inline bool* get_address_of_m_includeBackface_20() { return &___m_includeBackface_20; }
	inline void set_m_includeBackface_20(bool value)
	{
		___m_includeBackface_20 = value;
	}

	inline static int32_t get_offset_of_m_texturePerLetter_21() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_texturePerLetter_21)); }
	inline bool get_m_texturePerLetter_21() const { return ___m_texturePerLetter_21; }
	inline bool* get_address_of_m_texturePerLetter_21() { return &___m_texturePerLetter_21; }
	inline void set_m_texturePerLetter_21(bool value)
	{
		___m_texturePerLetter_21 = value;
	}

	inline static int32_t get_offset_of_m_anchor_22() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_anchor_22)); }
	inline int32_t get_m_anchor_22() const { return ___m_anchor_22; }
	inline int32_t* get_address_of_m_anchor_22() { return &___m_anchor_22; }
	inline void set_m_anchor_22(int32_t value)
	{
		___m_anchor_22 = value;
	}

	inline static int32_t get_offset_of_m_zAnchor_23() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_zAnchor_23)); }
	inline int32_t get_m_zAnchor_23() const { return ___m_zAnchor_23; }
	inline int32_t* get_address_of_m_zAnchor_23() { return &___m_zAnchor_23; }
	inline void set_m_zAnchor_23(int32_t value)
	{
		___m_zAnchor_23 = value;
	}

	inline static int32_t get_offset_of_m_colliderType_24() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_colliderType_24)); }
	inline int32_t get_m_colliderType_24() const { return ___m_colliderType_24; }
	inline int32_t* get_address_of_m_colliderType_24() { return &___m_colliderType_24; }
	inline void set_m_colliderType_24(int32_t value)
	{
		___m_colliderType_24 = value;
	}

	inline static int32_t get_offset_of_m_addRigidbodies_25() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_addRigidbodies_25)); }
	inline bool get_m_addRigidbodies_25() const { return ___m_addRigidbodies_25; }
	inline bool* get_address_of_m_addRigidbodies_25() { return &___m_addRigidbodies_25; }
	inline void set_m_addRigidbodies_25(bool value)
	{
		___m_addRigidbodies_25 = value;
	}

	inline static int32_t get_offset_of_m_physicsMaterial_26() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_physicsMaterial_26)); }
	inline PhysicMaterial_t2874185564 * get_m_physicsMaterial_26() const { return ___m_physicsMaterial_26; }
	inline PhysicMaterial_t2874185564 ** get_address_of_m_physicsMaterial_26() { return &___m_physicsMaterial_26; }
	inline void set_m_physicsMaterial_26(PhysicMaterial_t2874185564 * value)
	{
		___m_physicsMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_physicsMaterial_26), value);
	}

	inline static int32_t get_offset_of_m_smoothingAngle_27() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488, ___m_smoothingAngle_27)); }
	inline float get_m_smoothingAngle_27() const { return ___m_smoothingAngle_27; }
	inline float* get_address_of_m_smoothingAngle_27() { return &___m_smoothingAngle_27; }
	inline void set_m_smoothingAngle_27(float value)
	{
		___m_smoothingAngle_27 = value;
	}
};

struct FlyingText_t4265356488_StaticFields
{
public:
	// System.Int32 FlyingText::defaultFont
	int32_t ___defaultFont_28;
	// UnityEngine.Material FlyingText::defaultMaterial
	Material_t340375123 * ___defaultMaterial_29;
	// UnityEngine.Material FlyingText::defaultEdgeMaterial
	Material_t340375123 * ___defaultEdgeMaterial_30;
	// System.Boolean FlyingText::useEdgeMaterial
	bool ___useEdgeMaterial_31;
	// UnityEngine.Color FlyingText::defaultColor
	Color_t2555686324  ___defaultColor_32;
	// System.Int32 FlyingText::defaultResolution
	int32_t ___defaultResolution_33;
	// System.Single FlyingText::defaultSize
	float ___defaultSize_34;
	// System.Single FlyingText::defaultDepth
	float ___defaultDepth_35;
	// System.Single FlyingText::defaultLetterSpacing
	float ___defaultLetterSpacing_36;
	// System.Single FlyingText::defaultLineSpacing
	float ___defaultLineSpacing_37;
	// System.Single FlyingText::defaultLineWidth
	float ___defaultLineWidth_38;
	// System.Single FlyingText::tabStop
	float ___tabStop_39;
	// System.Boolean FlyingText::wordWrap
	bool ___wordWrap_40;
	// FlyingText3D.Justify FlyingText::defaultJustification
	int32_t ___defaultJustification_41;
	// System.Boolean FlyingText::verticalLayout
	bool ___verticalLayout_42;
	// System.Boolean FlyingText::includeBackface
	bool ___includeBackface_43;
	// System.Boolean FlyingText::texturePerLetter
	bool ___texturePerLetter_44;
	// UnityEngine.TextAnchor FlyingText::anchor
	int32_t ___anchor_45;
	// FlyingText3D.ZAnchor FlyingText::zAnchor
	int32_t ___zAnchor_46;
	// FlyingText3D.ColliderType FlyingText::colliderType
	int32_t ___colliderType_47;
	// System.Boolean FlyingText::addRigidbodies
	bool ___addRigidbodies_48;
	// UnityEngine.PhysicMaterial FlyingText::physicsMaterial
	PhysicMaterial_t2874185564 * ___physicsMaterial_49;
	// System.Single FlyingText::smoothingAngle
	float ___smoothingAngle_50;
	// FlyingText FlyingText::_instance
	FlyingText_t4265356488 * ____instance_51;
	// System.Boolean FlyingText::_initialized
	bool ____initialized_52;
	// System.Boolean FlyingText::_noFontsAvailable
	bool ____noFontsAvailable_53;
	// FlyingText3D.TTFFontInfo[] FlyingText::_fontInfo
	TTFFontInfoU5BU5D_t3022196135* ____fontInfo_54;
	// System.String[] FlyingText::_fontNames
	StringU5BU5D_t1281789340* ____fontNames_55;
	// System.Char[] FlyingText::_removeChars
	CharU5BU5D_t3528271667* ____removeChars_56;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32> FlyingText::_colorDictionary
	Dictionary_2_t2385757591 * ____colorDictionary_57;
	// UnityEngine.GameObject[] FlyingText::objectArray
	GameObjectU5BU5D_t3328599146* ___objectArray_58;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> FlyingText::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_59;

public:
	inline static int32_t get_offset_of_defaultFont_28() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultFont_28)); }
	inline int32_t get_defaultFont_28() const { return ___defaultFont_28; }
	inline int32_t* get_address_of_defaultFont_28() { return &___defaultFont_28; }
	inline void set_defaultFont_28(int32_t value)
	{
		___defaultFont_28 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_29() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultMaterial_29)); }
	inline Material_t340375123 * get_defaultMaterial_29() const { return ___defaultMaterial_29; }
	inline Material_t340375123 ** get_address_of_defaultMaterial_29() { return &___defaultMaterial_29; }
	inline void set_defaultMaterial_29(Material_t340375123 * value)
	{
		___defaultMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_29), value);
	}

	inline static int32_t get_offset_of_defaultEdgeMaterial_30() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultEdgeMaterial_30)); }
	inline Material_t340375123 * get_defaultEdgeMaterial_30() const { return ___defaultEdgeMaterial_30; }
	inline Material_t340375123 ** get_address_of_defaultEdgeMaterial_30() { return &___defaultEdgeMaterial_30; }
	inline void set_defaultEdgeMaterial_30(Material_t340375123 * value)
	{
		___defaultEdgeMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEdgeMaterial_30), value);
	}

	inline static int32_t get_offset_of_useEdgeMaterial_31() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___useEdgeMaterial_31)); }
	inline bool get_useEdgeMaterial_31() const { return ___useEdgeMaterial_31; }
	inline bool* get_address_of_useEdgeMaterial_31() { return &___useEdgeMaterial_31; }
	inline void set_useEdgeMaterial_31(bool value)
	{
		___useEdgeMaterial_31 = value;
	}

	inline static int32_t get_offset_of_defaultColor_32() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultColor_32)); }
	inline Color_t2555686324  get_defaultColor_32() const { return ___defaultColor_32; }
	inline Color_t2555686324 * get_address_of_defaultColor_32() { return &___defaultColor_32; }
	inline void set_defaultColor_32(Color_t2555686324  value)
	{
		___defaultColor_32 = value;
	}

	inline static int32_t get_offset_of_defaultResolution_33() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultResolution_33)); }
	inline int32_t get_defaultResolution_33() const { return ___defaultResolution_33; }
	inline int32_t* get_address_of_defaultResolution_33() { return &___defaultResolution_33; }
	inline void set_defaultResolution_33(int32_t value)
	{
		___defaultResolution_33 = value;
	}

	inline static int32_t get_offset_of_defaultSize_34() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultSize_34)); }
	inline float get_defaultSize_34() const { return ___defaultSize_34; }
	inline float* get_address_of_defaultSize_34() { return &___defaultSize_34; }
	inline void set_defaultSize_34(float value)
	{
		___defaultSize_34 = value;
	}

	inline static int32_t get_offset_of_defaultDepth_35() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultDepth_35)); }
	inline float get_defaultDepth_35() const { return ___defaultDepth_35; }
	inline float* get_address_of_defaultDepth_35() { return &___defaultDepth_35; }
	inline void set_defaultDepth_35(float value)
	{
		___defaultDepth_35 = value;
	}

	inline static int32_t get_offset_of_defaultLetterSpacing_36() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultLetterSpacing_36)); }
	inline float get_defaultLetterSpacing_36() const { return ___defaultLetterSpacing_36; }
	inline float* get_address_of_defaultLetterSpacing_36() { return &___defaultLetterSpacing_36; }
	inline void set_defaultLetterSpacing_36(float value)
	{
		___defaultLetterSpacing_36 = value;
	}

	inline static int32_t get_offset_of_defaultLineSpacing_37() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultLineSpacing_37)); }
	inline float get_defaultLineSpacing_37() const { return ___defaultLineSpacing_37; }
	inline float* get_address_of_defaultLineSpacing_37() { return &___defaultLineSpacing_37; }
	inline void set_defaultLineSpacing_37(float value)
	{
		___defaultLineSpacing_37 = value;
	}

	inline static int32_t get_offset_of_defaultLineWidth_38() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultLineWidth_38)); }
	inline float get_defaultLineWidth_38() const { return ___defaultLineWidth_38; }
	inline float* get_address_of_defaultLineWidth_38() { return &___defaultLineWidth_38; }
	inline void set_defaultLineWidth_38(float value)
	{
		___defaultLineWidth_38 = value;
	}

	inline static int32_t get_offset_of_tabStop_39() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___tabStop_39)); }
	inline float get_tabStop_39() const { return ___tabStop_39; }
	inline float* get_address_of_tabStop_39() { return &___tabStop_39; }
	inline void set_tabStop_39(float value)
	{
		___tabStop_39 = value;
	}

	inline static int32_t get_offset_of_wordWrap_40() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___wordWrap_40)); }
	inline bool get_wordWrap_40() const { return ___wordWrap_40; }
	inline bool* get_address_of_wordWrap_40() { return &___wordWrap_40; }
	inline void set_wordWrap_40(bool value)
	{
		___wordWrap_40 = value;
	}

	inline static int32_t get_offset_of_defaultJustification_41() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___defaultJustification_41)); }
	inline int32_t get_defaultJustification_41() const { return ___defaultJustification_41; }
	inline int32_t* get_address_of_defaultJustification_41() { return &___defaultJustification_41; }
	inline void set_defaultJustification_41(int32_t value)
	{
		___defaultJustification_41 = value;
	}

	inline static int32_t get_offset_of_verticalLayout_42() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___verticalLayout_42)); }
	inline bool get_verticalLayout_42() const { return ___verticalLayout_42; }
	inline bool* get_address_of_verticalLayout_42() { return &___verticalLayout_42; }
	inline void set_verticalLayout_42(bool value)
	{
		___verticalLayout_42 = value;
	}

	inline static int32_t get_offset_of_includeBackface_43() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___includeBackface_43)); }
	inline bool get_includeBackface_43() const { return ___includeBackface_43; }
	inline bool* get_address_of_includeBackface_43() { return &___includeBackface_43; }
	inline void set_includeBackface_43(bool value)
	{
		___includeBackface_43 = value;
	}

	inline static int32_t get_offset_of_texturePerLetter_44() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___texturePerLetter_44)); }
	inline bool get_texturePerLetter_44() const { return ___texturePerLetter_44; }
	inline bool* get_address_of_texturePerLetter_44() { return &___texturePerLetter_44; }
	inline void set_texturePerLetter_44(bool value)
	{
		___texturePerLetter_44 = value;
	}

	inline static int32_t get_offset_of_anchor_45() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___anchor_45)); }
	inline int32_t get_anchor_45() const { return ___anchor_45; }
	inline int32_t* get_address_of_anchor_45() { return &___anchor_45; }
	inline void set_anchor_45(int32_t value)
	{
		___anchor_45 = value;
	}

	inline static int32_t get_offset_of_zAnchor_46() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___zAnchor_46)); }
	inline int32_t get_zAnchor_46() const { return ___zAnchor_46; }
	inline int32_t* get_address_of_zAnchor_46() { return &___zAnchor_46; }
	inline void set_zAnchor_46(int32_t value)
	{
		___zAnchor_46 = value;
	}

	inline static int32_t get_offset_of_colliderType_47() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___colliderType_47)); }
	inline int32_t get_colliderType_47() const { return ___colliderType_47; }
	inline int32_t* get_address_of_colliderType_47() { return &___colliderType_47; }
	inline void set_colliderType_47(int32_t value)
	{
		___colliderType_47 = value;
	}

	inline static int32_t get_offset_of_addRigidbodies_48() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___addRigidbodies_48)); }
	inline bool get_addRigidbodies_48() const { return ___addRigidbodies_48; }
	inline bool* get_address_of_addRigidbodies_48() { return &___addRigidbodies_48; }
	inline void set_addRigidbodies_48(bool value)
	{
		___addRigidbodies_48 = value;
	}

	inline static int32_t get_offset_of_physicsMaterial_49() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___physicsMaterial_49)); }
	inline PhysicMaterial_t2874185564 * get_physicsMaterial_49() const { return ___physicsMaterial_49; }
	inline PhysicMaterial_t2874185564 ** get_address_of_physicsMaterial_49() { return &___physicsMaterial_49; }
	inline void set_physicsMaterial_49(PhysicMaterial_t2874185564 * value)
	{
		___physicsMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((&___physicsMaterial_49), value);
	}

	inline static int32_t get_offset_of_smoothingAngle_50() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___smoothingAngle_50)); }
	inline float get_smoothingAngle_50() const { return ___smoothingAngle_50; }
	inline float* get_address_of_smoothingAngle_50() { return &___smoothingAngle_50; }
	inline void set_smoothingAngle_50(float value)
	{
		___smoothingAngle_50 = value;
	}

	inline static int32_t get_offset_of__instance_51() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____instance_51)); }
	inline FlyingText_t4265356488 * get__instance_51() const { return ____instance_51; }
	inline FlyingText_t4265356488 ** get_address_of__instance_51() { return &____instance_51; }
	inline void set__instance_51(FlyingText_t4265356488 * value)
	{
		____instance_51 = value;
		Il2CppCodeGenWriteBarrier((&____instance_51), value);
	}

	inline static int32_t get_offset_of__initialized_52() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____initialized_52)); }
	inline bool get__initialized_52() const { return ____initialized_52; }
	inline bool* get_address_of__initialized_52() { return &____initialized_52; }
	inline void set__initialized_52(bool value)
	{
		____initialized_52 = value;
	}

	inline static int32_t get_offset_of__noFontsAvailable_53() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____noFontsAvailable_53)); }
	inline bool get__noFontsAvailable_53() const { return ____noFontsAvailable_53; }
	inline bool* get_address_of__noFontsAvailable_53() { return &____noFontsAvailable_53; }
	inline void set__noFontsAvailable_53(bool value)
	{
		____noFontsAvailable_53 = value;
	}

	inline static int32_t get_offset_of__fontInfo_54() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____fontInfo_54)); }
	inline TTFFontInfoU5BU5D_t3022196135* get__fontInfo_54() const { return ____fontInfo_54; }
	inline TTFFontInfoU5BU5D_t3022196135** get_address_of__fontInfo_54() { return &____fontInfo_54; }
	inline void set__fontInfo_54(TTFFontInfoU5BU5D_t3022196135* value)
	{
		____fontInfo_54 = value;
		Il2CppCodeGenWriteBarrier((&____fontInfo_54), value);
	}

	inline static int32_t get_offset_of__fontNames_55() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____fontNames_55)); }
	inline StringU5BU5D_t1281789340* get__fontNames_55() const { return ____fontNames_55; }
	inline StringU5BU5D_t1281789340** get_address_of__fontNames_55() { return &____fontNames_55; }
	inline void set__fontNames_55(StringU5BU5D_t1281789340* value)
	{
		____fontNames_55 = value;
		Il2CppCodeGenWriteBarrier((&____fontNames_55), value);
	}

	inline static int32_t get_offset_of__removeChars_56() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____removeChars_56)); }
	inline CharU5BU5D_t3528271667* get__removeChars_56() const { return ____removeChars_56; }
	inline CharU5BU5D_t3528271667** get_address_of__removeChars_56() { return &____removeChars_56; }
	inline void set__removeChars_56(CharU5BU5D_t3528271667* value)
	{
		____removeChars_56 = value;
		Il2CppCodeGenWriteBarrier((&____removeChars_56), value);
	}

	inline static int32_t get_offset_of__colorDictionary_57() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ____colorDictionary_57)); }
	inline Dictionary_2_t2385757591 * get__colorDictionary_57() const { return ____colorDictionary_57; }
	inline Dictionary_2_t2385757591 ** get_address_of__colorDictionary_57() { return &____colorDictionary_57; }
	inline void set__colorDictionary_57(Dictionary_2_t2385757591 * value)
	{
		____colorDictionary_57 = value;
		Il2CppCodeGenWriteBarrier((&____colorDictionary_57), value);
	}

	inline static int32_t get_offset_of_objectArray_58() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___objectArray_58)); }
	inline GameObjectU5BU5D_t3328599146* get_objectArray_58() const { return ___objectArray_58; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_objectArray_58() { return &___objectArray_58; }
	inline void set_objectArray_58(GameObjectU5BU5D_t3328599146* value)
	{
		___objectArray_58 = value;
		Il2CppCodeGenWriteBarrier((&___objectArray_58), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_59() { return static_cast<int32_t>(offsetof(FlyingText_t4265356488_StaticFields, ___U3CU3Ef__switchU24map0_59)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_59() const { return ___U3CU3Ef__switchU24map0_59; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_59() { return &___U3CU3Ef__switchU24map0_59; }
	inline void set_U3CU3Ef__switchU24map0_59(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_59 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_59), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLYINGTEXT_T4265356488_H
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
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// FlyingText3D.TTFFontInfo[]
struct TTFFontInfoU5BU5D_t3022196135  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TTFFontInfo_t2461483730 * m_Items[1];

public:
	inline TTFFontInfo_t2461483730 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTFFontInfo_t2461483730 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTFFontInfo_t2461483730 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TTFFontInfo_t2461483730 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTFFontInfo_t2461483730 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTFFontInfo_t2461483730 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
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
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4066995729_gshared (Dictionary_2_t3947907576 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2623529557_gshared (Dictionary_2_t3947907576 * __this, RuntimeObject * p0, Color32_t2600501292  p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m289627909_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2424247778_gshared (List_1_t811567916 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m991822646_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_m1333520732_gshared (List_1_t811567916 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2258151377_gshared (Dictionary_2_t816877494 * __this, Il2CppChar p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Char,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2906397365_gshared (Dictionary_2_t816877494 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1951584216_gshared (List_1_t2869341516 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.Justify>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m23928396_gshared (List_1_t2288335961 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m3999071656_gshared (List_1_t811567916 * __this, Il2CppChar p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<FlyingText3D.Justify>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m923632340_gshared (List_1_t2288335961 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3249932132_gshared (List_1_t2869341516 * __this, float p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.Justify>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1958734212_gshared (List_1_t2288335961 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.Justify>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m649928991_gshared (List_1_t2288335961 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1363558904_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1394646794_gshared (Dictionary_2_t4026917929 * __this, KernPair_t1917918210  p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR int16_t Dictionary_2_get_Item_m1480194675_gshared (Dictionary_2_t4026917929 * __this, KernPair_t1917918210  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float List_1_get_Item_m2456367083_gshared (List_1_t2869341516 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m93346280_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m3546787751_gshared (List_1_t811567916 * __this, int32_t p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m1376835033_gshared (List_1_t811567916 * __this, int32_t p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m3992501969_gshared (List_1_t128053199 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3251163515_gshared (List_1_t2869341516 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Char>::ToArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* List_1_ToArray_m3874229880_gshared (List_1_t811567916 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4053590885_gshared (Dictionary_2_t3947907576 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR Color32_t2600501292  Dictionary_2_get_Item_m1579238957_gshared (Dictionary_2_t3947907576 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3444728237_gshared (List_1_t811567916 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1685117923_gshared (List_1_t811567916 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m793514796_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_Sort_m2076177611_gshared (List_1_t257213610 * __this, Comparison_1_t2855037343 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m4225053658_gshared (List_1_t3628304265 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1156250970_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3882770330_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  List_1_get_Item_m3757356512_gshared (List_1_t3628304265 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3397699549_gshared (List_1_t3628304265 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* List_1_ToArray_m3579297042_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<UnityEngine.Vector3>(!!0[]&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Resize_TisVector3_t3722313464_m3246197627_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761** p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t2950945753_m3147937642_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372** p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2317624211_gshared (Dictionary_2_t816877494 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t2950945753_m3764119789_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3220969239_gshared (Dictionary_2_t4026917929 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3493567640_gshared (Dictionary_2_t4026917929 * __this, KernPair_t1917918210  p0, int16_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2466928617_gshared (Dictionary_2_t816877494 * __this, Il2CppChar p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m700075857_gshared (List_1_t1569362707 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1213329701_gshared (List_1_t2606371118 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m163275201_gshared (List_1_t2606371118 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2351159821_gshared (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
extern "C" IL2CPP_METHOD_ATTR BooleanU5BU5D_t2897418192* List_1_ToArray_m2757296379_gshared (List_1_t1569362707 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* List_1_ToArray_m2135705625_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_FindObjectOfType_m67275058 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void FlyingText::Initialize()
extern "C" IL2CPP_METHOD_ATTR void FlyingText_Initialize_m1624881710 (FlyingText_t4265356488 * __this, const RuntimeMethod* method);
// System.Void FlyingText::SetMaterial(UnityEngine.Material&)
extern "C" IL2CPP_METHOD_ATTR void FlyingText_SetMaterial_m3149165622 (FlyingText_t4265356488 * __this, Material_t340375123 ** ___thisMaterial0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.FontData>::get_Count()
#define List_1_get_Count_m460904824(__this, method) ((  int32_t (*) (List_1_t676973805 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<FlyingText3D.FontData>::get_Item(System.Int32)
#define List_1_get_Item_m1276114427(__this, p0, method) ((  FontData_t3499866359 * (*) (List_1_t676973805 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.TextAsset::get_bytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* TextAsset_get_bytes_m1826471440 (TextAsset_t3022178571 * __this, const RuntimeMethod* method);
// System.Void FlyingText3D.TTFFontInfo::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo__ctor_m4052784430 (TTFFontInfo_t2461483730 * __this, ByteU5BU5D_t4116647657* ___ttfData0, const RuntimeMethod* method);
// System.String FlyingText3D.TTFFontInfo::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_get_name_m629977104 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>::.ctor()
#define Dictionary_2__ctor_m1738906411(__this, method) ((  void (*) (Dictionary_2_t2385757591 *, const RuntimeMethod*))Dictionary_2__ctor_m4066995729_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Color32_t2600501292  Color32_op_Implicit_m2658259763 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>::Add(!0,!1)
#define Dictionary_2_Add_m3693932771(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2385757591 *, String_t*, Color32_t2600501292 , const RuntimeMethod*))Dictionary_2_Add_m2623529557_gshared)(__this, p0, p1, method)
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_magenta_m208363462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_gray_m1471337008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_grey_m3440705476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean FlyingText::CheckSetup()
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_CheckSetup_m4017455319 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.Boolean,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m2705320406 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, bool ___prime9, bool ___separateObjects10, bool ___useObjectsArray11, Vector3_t3722313464  ___position12, Quaternion_t2301928331  ___rotation13, GameObject_t1113636619 * ___gObject14, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
#define GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000(__this, method) ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_mesh_m3346355278 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_m3992802841 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TextObjectData>()
#define GameObject_GetComponent_TisTextObjectData_t178506778_m1785006120(__this, method) ((  TextObjectData_t178506778 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void TextObjectData::InitializeData(System.Single&,System.Single&,System.Int32&,System.Single&,System.Single&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void TextObjectData_InitializeData_m1736845510 (TextObjectData_t178506778 * __this, float* ___size0, float* ___extrudeDepth1, int32_t* ___resolution2, float* ___characterSpacing3, float* ___lineSpacing4, float* ___lineWidth5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Char> FlyingText::ParseString(System.String,System.Collections.Generic.List`1<FlyingText3D.CommandData>&)
extern "C" IL2CPP_METHOD_ATTR List_1_t811567916 * FlyingText_ParseString_m426035362 (RuntimeObject * __this /* static, unused */, String_t* ___s0, List_1_t1625501175 ** ___commandData1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
#define List_1_get_Count_m2424247778(__this, method) ((  int32_t (*) (List_1_t811567916 *, const RuntimeMethod*))List_1_get_Count_m2424247778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
#define List_1__ctor_m991822646(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1__ctor_m991822646_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<FlyingText3D.CommandData>::get_Item(System.Int32)
#define List_1_get_Item_m1434826200(__this, p0, method) ((  CommandData_t153426433 * (*) (List_1_t1625501175 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
#define List_1_get_Item_m1333520732(__this, p0, method) ((  Il2CppChar (*) (List_1_t811567916 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1333520732_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData> FlyingText3D.TTFFontInfo::get_glyphDictionary()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2651833894 * TTFFontInfo_get_glyphDictionary_m3439082376 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m945255793(__this, p0, method) ((  bool (*) (Dictionary_2_t2651833894 *, Il2CppChar, const RuntimeMethod*))Dictionary_2_ContainsKey_m2258151377_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.TTFFontInfo::SetGlyphData(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_SetGlyphData_m751504939 (TTFFontInfo_t2461483730 * __this, Il2CppChar ___character0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>::get_Item(!0)
#define Dictionary_2_get_Item_m323241701(__this, p0, method) ((  GlyphData_t620095268 * (*) (Dictionary_2_t2651833894 *, Il2CppChar, const RuntimeMethod*))Dictionary_2_get_Item_m2906397365_gshared)(__this, p0, method)
// System.Int32 FlyingText3D.GlyphData::get_glyphIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_glyphIndex_m2666095189 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.GlyphData::get_isVisibleChar()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_isVisibleChar_m2922145535 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_resolution()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_resolution_m1135084346 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Boolean FlyingText3D.GlyphData::SetMeshData(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_SetMeshData_m613466942 (GlyphData_t620095268 * __this, int32_t ___resolution0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean FlyingText3D.GlyphData::get_triDataComputed()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_triDataComputed_m775494336 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Boolean FlyingText3D.GlyphData::get_useSubmesh()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_useSubmesh_m3967471625 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Boolean FlyingText3D.GlyphData::get_useBack()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_useBack_m1545662753 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::SetFrontTriData()
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetFrontTriData_m374792835 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::SetTriData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetTriData_m3881103674 (GlyphData_t620095268 * __this, bool ___doSubmesh0, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::SetFrontAndEdgeTriData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetFrontAndEdgeTriData_m3360123618 (GlyphData_t620095268 * __this, bool ___doSubmesh0, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_vertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_vertexCount_m3966091887 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_triCount()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_triCount_m847416089 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_triCount2()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_triCount2_m2560667630 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m463784026(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color32_op_Implicit_m213813866 (RuntimeObject * __this /* static, unused */, Color32_t2600501292  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR bool Color_op_Equality_m1112359053 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR bool Color_op_Inequality_m3353772181 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.CommandData>::get_Count()
#define List_1_get_Count_m2047056320(__this, method) ((  int32_t (*) (List_1_t1625501175 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Int32 FlyingText3D.TTFFontInfo::get_unitsPerEm()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_unitsPerEm_m567972289 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
#define List_1__ctor_m1951584216(__this, method) ((  void (*) (List_1_t2869341516 *, const RuntimeMethod*))List_1__ctor_m1951584216_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.Justify>::.ctor()
#define List_1__ctor_m23928396(__this, method) ((  void (*) (List_1_t2288335961 *, const RuntimeMethod*))List_1__ctor_m23928396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EdgeData>::.ctor()
#define List_1__ctor_m1294661644(__this, method) ((  void (*) (List_1_t801739046 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(!0)
#define List_1_Contains_m3999071656(__this, p0, method) ((  bool (*) (List_1_t811567916 *, Il2CppChar, const RuntimeMethod*))List_1_Contains_m3999071656_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<FlyingText3D.Justify>::get_Item(System.Int32)
#define List_1_get_Item_m923632340(__this, p0, method) ((  int32_t (*) (List_1_t2288335961 *, int32_t, const RuntimeMethod*))List_1_get_Item_m923632340_gshared)(__this, p0, method)
// System.Int32 FlyingText3D.TTFFontInfo::get_lineHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_lineHeight_m4132344405 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
#define List_1_Add_m3249932132(__this, p0, method) ((  void (*) (List_1_t2869341516 *, float, const RuntimeMethod*))List_1_Add_m3249932132_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.Justify>::Add(!0)
#define List_1_Add_m1958734212(__this, p0, method) ((  void (*) (List_1_t2288335961 *, int32_t, const RuntimeMethod*))List_1_Add_m1958734212_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.Justify>::get_Count()
#define List_1_get_Count_m649928991(__this, method) ((  int32_t (*) (List_1_t2288335961 *, const RuntimeMethod*))List_1_get_Count_m649928991_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m1363558904(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1363558904_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.TTFFontInfo::get_hasKerning()
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_get_hasKerning_m1493146458 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16> FlyingText3D.TTFFontInfo::get_kernDictionary()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t4026917929 * TTFFontInfo_get_kernDictionary_m1736341401 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1394646794(__this, p0, method) ((  bool (*) (Dictionary_2_t4026917929 *, KernPair_t1917918210 , const RuntimeMethod*))Dictionary_2_ContainsKey_m1394646794_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::get_Item(!0)
#define Dictionary_2_get_Item_m1480194675(__this, p0, method) ((  int16_t (*) (Dictionary_2_t4026917929 *, KernPair_t1917918210 , const RuntimeMethod*))Dictionary_2_get_Item_m1480194675_gshared)(__this, p0, method)
// System.Int32 FlyingText3D.GlyphData::get_yMax()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_yMax_m2095962185 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_yMin()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_yMin_m2096879697 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Single FlyingText3D.GlyphData::get_scaleFactor()
extern "C" IL2CPP_METHOD_ATTR float GlyphData_get_scaleFactor_m481370193 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::ScaleVertices(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_ScaleVertices_m46715125 (GlyphData_t620095268 * __this, float ___scaleFactor0, bool ___extrude1, bool ___includeBackface2, const RuntimeMethod* method);
// System.Single FlyingText3D.GlyphData::get_extrudeDepth()
extern "C" IL2CPP_METHOD_ATTR float GlyphData_get_extrudeDepth_m1881518986 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::SetExtrudeDepth(System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetExtrudeDepth_m390707552 (GlyphData_t620095268 * __this, float ___depth0, bool ___includeBackface1, const RuntimeMethod* method);
// UnityEngine.Vector3[] FlyingText3D.GlyphData::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* GlyphData_get_vertices_m3909097520 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_xMax()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_xMax_m3682249102 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_xMin()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_xMin_m3683166614 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.TTFFontInfo::get_fontYMax()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_fontYMax_m2984688855 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.TTFFontInfo::get_fontYMin()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_fontYMin_m716773375 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Int32 FlyingText3D.GlyphData::get_frontVertIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_frontVertIndex_m2980225376 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Void EdgeData::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EdgeData__ctor_m2545318485 (EdgeData_t3624631600 * __this, int32_t ___frontVertIndex0, int32_t ___vertexCount1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EdgeData>::Add(!0)
#define List_1_Add_m573970714(__this, p0, method) ((  void (*) (List_1_t801739046 *, EdgeData_t3624631600 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32[] FlyingText3D.GlyphData::get_triangles()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* GlyphData_get_triangles_m224050330 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// System.Int32[] FlyingText3D.GlyphData::get_triangles2()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* GlyphData_get_triangles2_m3964612917 (GlyphData_t620095268 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
#define List_1_get_Item_m2456367083(__this, p0, method) ((  float (*) (List_1_t2869341516 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2456367083_gshared)(__this, p0, method)
// System.Void UnityEngine.Mesh::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_colors32_m645370667 (Mesh_t3648964284 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m3209867014 (Mesh_t3648964284 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Mesh_SetTriangles_m3871477336 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C" IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m467587154 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m1350607670 (GameObject_t1113636619 * __this, String_t* p0, TypeU5BU5D_t3940880105* p1, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m1415871686 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
#define GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895(__this, method) ((  MeshCollider_t903564387 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m1986498669 (MeshCollider_t903564387 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_convex_m840510835 (MeshCollider_t903564387 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m3714532353 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
#define GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355(__this, method) ((  BoxCollider_t1640800422 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(__this, method) ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m2162241463 (Renderer_t2627027031 * __this, MaterialU5BU5D_t561872642* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m4119991052(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32[] FlyingText3D.TTFFontInfo::get_advanceArray()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_get_advanceArray_m3947564005 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,!0)
#define List_1_set_Item_m3546787751(__this, p0, p1, method) ((  void (*) (List_1_t811567916 *, int32_t, Il2CppChar, const RuntimeMethod*))List_1_set_Item_m3546787751_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,!0)
#define List_1_Insert_m1376835033(__this, p0, p1, method) ((  void (*) (List_1_t811567916 *, int32_t, Il2CppChar, const RuntimeMethod*))List_1_Insert_m1376835033_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,!0)
#define List_1_Insert_m3992501969(__this, p0, p1, method) ((  void (*) (List_1_t128053199 *, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_m3992501969_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
#define List_1_get_Count_m3251163515(__this, method) ((  int32_t (*) (List_1_t2869341516 *, const RuntimeMethod*))List_1_get_Count_m3251163515_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<EdgeData>::get_Item(System.Int32)
#define List_1_get_Item_m3901971184(__this, p0, method) ((  EdgeData_t3624631600 * (*) (List_1_t801739046 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<EdgeData>::get_Count()
#define List_1_get_Count_m1501045621(__this, method) ((  int32_t (*) (List_1_t801739046 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m910824056(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2480192364(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0[] System.Collections.Generic.List`1<System.Char>::ToArray()
#define List_1_ToArray_m3874229880(__this, method) ((  CharU5BU5D_t3528271667* (*) (List_1_t811567916 *, const RuntimeMethod*))List_1_ToArray_m3874229880_gshared)(__this, method)
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m2484968841(__this, method) ((  GameObjectU5BU5D_t3328599146* (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Void UnityEngine.Mesh::Clear()
extern "C" IL2CPP_METHOD_ATTR void Mesh_Clear_m2630385472 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_m39931642 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
#define GameObject_GetComponent_TisMeshCollider_t903564387_m2114864196(__this, method) ((  MeshCollider_t903564387 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t3916780224_m92978080(__this, method) ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<TextObjectData>()
#define GameObject_AddComponent_TisTextObjectData_t178506778_m4200790527(__this, method) ((  TextObjectData_t178506778 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// System.Void TextObjectData::SetData(System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void TextObjectData_SetData_m3153036784 (TextObjectData_t178506778 * __this, float ___size0, float ___extrudeDepth1, int32_t ___resolution2, float ___characterSpacing3, float ___lineSpacing4, float ___lineWidth5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.CommandData>::.ctor()
#define List_1__ctor_m3109263299(__this, method) ((  void (*) (List_1_t1625501175 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m3406607758 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m562998446 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean FlyingText::GetTagData(System.String&,System.String&,System.String&)
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_GetTagData_m344544921 (RuntimeObject * __this /* static, unused */, String_t** ___s0, String_t** ___tag1, String_t** ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2392909825(__this, p0, method) ((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m282647386(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1013208020(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.Boolean System.Single::TryParse(System.String,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Single_TryParse_m4264970052 (RuntimeObject * __this /* static, unused */, String_t* p0, float* p1, const RuntimeMethod* method);
// System.Void FlyingText3D.CommandData::.ctor(System.Int32,FlyingText3D.Command,System.Object)
extern "C" IL2CPP_METHOD_ATTR void CommandData__ctor_m2231880892 (CommandData_t153426433 * __this, int32_t ___index0, int32_t ___command1, RuntimeObject * ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.CommandData>::Add(!0)
#define List_1_Add_m3775996449(__this, p0, method) ((  void (*) (List_1_t1625501175 *, CommandData_t153426433 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean FlyingText::TryParseColor(System.String&,UnityEngine.Color32&)
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_TryParseColor_m2886930125 (RuntimeObject * __this /* static, unused */, String_t** ___s0, Color32_t2600501292 * ___color1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1814118575(__this, p0, method) ((  bool (*) (Dictionary_2_t2385757591 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4053590885_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>::get_Item(!0)
#define Dictionary_2_get_Item_m162569096(__this, p0, method) ((  Color32_t2600501292  (*) (Dictionary_2_t2385757591 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m1579238957_gshared)(__this, p0, method)
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3444728237(__this, p0, method) ((  void (*) (List_1_t811567916 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m3444728237_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
#define List_1_Add_m1685117923(__this, p0, method) ((  void (*) (List_1_t811567916 *, Il2CppChar, const RuntimeMethod*))List_1_Add_m1685117923_gshared)(__this, p0, method)
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m4159774896 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m135955795 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int32_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void Color32__ctor_m4150508762 (Color32_t2600501292 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<FlyingText3D.ContourData> FlyingText3D.GlyphData::SortPointsList(System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>)
extern "C" IL2CPP_METHOD_ATTR List_1_t3670791667 * GlyphData_SortPointsList_m2678576955 (GlyphData_t620095268 * __this, List_1_t2929260728 * ___pointsList0, List_1_t74525638 * ___onCurvesList1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2[]>::get_Count()
#define List_1_get_Count_m3201839622(__this, method) ((  int32_t (*) (List_1_t2929260728 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.ContourData>::.ctor(System.Int32)
#define List_1__ctor_m3475034485(__this, p0, method) ((  void (*) (List_1_t3670791667 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2[]>::get_Item(System.Int32)
#define List_1_get_Item_m4003898591(__this, p0, method) ((  Vector2U5BU5D_t1457185986* (*) (List_1_t2929260728 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<System.Boolean[]>::get_Item(System.Int32)
#define List_1_get_Item_m2882277810(__this, p0, method) ((  BooleanU5BU5D_t2897418192* (*) (List_1_t74525638 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void FlyingText3D.ContourData::.ctor(UnityEngine.Vector2[],System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR void ContourData__ctor_m1936614288 (ContourData_t2198716925 * __this, Vector2U5BU5D_t1457185986* ___points0, BooleanU5BU5D_t2897418192* ___onCurves1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.ContourData>::Add(!0)
#define List_1_Add_m4088210603(__this, p0, method) ((  void (*) (List_1_t3670791667 *, ContourData_t2198716925 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.ContourData>::get_Count()
#define List_1_get_Count_m1078179241(__this, method) ((  int32_t (*) (List_1_t3670791667 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<FlyingText3D.ContourData>::get_Item(System.Int32)
#define List_1_get_Item_m1453868451(__this, p0, method) ((  ContourData_t2198716925 * (*) (List_1_t3670791667 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Vector2[] FlyingText3D.GlyphData::RenderContourPoints(FlyingText3D.ContourData,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* GlyphData_RenderContourPoints_m3775104664 (GlyphData_t620095268 * __this, ContourData_t2198716925 * ___contour0, int32_t ___resolution1, bool ___initialTest2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void System.Comparison`1<FlyingText3D.ContourData>::.ctor(System.Object,System.IntPtr)
#define Comparison_1__ctor_m74631376(__this, p0, p1, method) ((  void (*) (Comparison_1_t1973648104 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m793514796_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.ContourData>::Sort(System.Comparison`1<!0>)
#define List_1_Sort_m4106579492(__this, p0, method) ((  void (*) (List_1_t3670791667 *, Comparison_1_t1973648104 *, const RuntimeMethod*))List_1_Sort_m2076177611_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.GlyphData::IsClockwise(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_IsClockwise_m2293411107 (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___points0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m3714848183 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.ContourData>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m770919389(__this, p0, method) ((  void (*) (List_1_t3670791667 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.GlyphData::PolyContainsPoint(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_PolyContainsPoint_m886294331 (GlyphData_t620095268 * __this, Vector2U5BU5D_t1457185986* ___polyPoints0, Vector2_t2156229523  ___p1, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m189772128 (float* __this, float p0, const RuntimeMethod* method);
// System.Int32 System.Boolean::CompareTo(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_CompareTo_m3774767002 (bool* __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
#define List_1__ctor_m4225053658(__this, p0, method) ((  void (*) (List_1_t3628304265 *, int32_t, const RuntimeMethod*))List_1__ctor_m4225053658_gshared)(__this, p0, method)
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
#define List_1_Add_m1156250970(__this, p0, method) ((  void (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_Add_m1156250970_gshared)(__this, p0, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
#define List_1_get_Count_m3882770330(__this, method) ((  int32_t (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_get_Count_m3882770330_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
#define List_1_get_Item_m3757356512(__this, p0, method) ((  Vector2_t2156229523  (*) (List_1_t3628304265 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3757356512_gshared)(__this, p0, method)
// System.Single FlyingText3D.GlyphData::LineToPointSqrDistance(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR float GlyphData_LineToPointSqrDistance_m2036411270 (GlyphData_t620095268 * __this, Vector2_t2156229523 * ___p10, Vector2_t2156229523 * ___p21, Vector2_t2156229523 * ___p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3397699549(__this, p0, method) ((  void (*) (List_1_t3628304265 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3397699549_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
#define List_1_ToArray_m3579297042(__this, method) ((  Vector2U5BU5D_t1457185986* (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_ToArray_m3579297042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2[]>::.ctor(System.Int32)
#define List_1__ctor_m972700695(__this, p0, method) ((  void (*) (List_1_t2929260728 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2[]>::Add(!0)
#define List_1_Add_m769708164(__this, p0, method) ((  void (*) (List_1_t2929260728 *, Vector2U5BU5D_t1457185986*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.InsideData>::.ctor()
#define List_1__ctor_m1192004721(__this, method) ((  void (*) (List_1_t3831783251 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void FlyingText3D.InsideData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InsideData__ctor_m3340467756 (InsideData_t2359708509 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlyingText3D.InsideData>::Add(!0)
#define List_1_Add_m1059557417(__this, p0, method) ((  void (*) (List_1_t3831783251 *, InsideData_t2359708509 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Comparison`1<FlyingText3D.InsideData>::.ctor(System.Object,System.IntPtr)
#define Comparison_1__ctor_m2770657230(__this, p0, p1, method) ((  void (*) (Comparison_1_t2134639688 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m793514796_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<FlyingText3D.InsideData>::Sort(System.Comparison`1<!0>)
#define List_1_Sort_m2560489683(__this, p0, method) ((  void (*) (List_1_t3831783251 *, Comparison_1_t2134639688 *, const RuntimeMethod*))List_1_Sort_m2076177611_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<FlyingText3D.InsideData>::get_Item(System.Int32)
#define List_1_get_Item_m17465144(__this, p0, method) ((  InsideData_t2359708509 * (*) (List_1_t3831783251 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<FlyingText3D.InsideData>::get_Count()
#define List_1_get_Count_m317471029(__this, method) ((  int32_t (*) (List_1_t3831783251 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32[]>::.ctor(System.Int32)
#define List_1__ctor_m1294987271(__this, p0, method) ((  void (*) (List_1_t1857321114 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32[]>::Add(!0)
#define List_1_Add_m906361947(__this, p0, method) ((  void (*) (List_1_t1857321114 *, Int32U5BU5D_t385246372*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean FlyingText3D.Triangulate::Compute(System.Collections.Generic.List`1<FlyingText3D.ContourData>,System.Collections.Generic.List`1<System.Int32[]>,System.Int32[],System.Int32[],UnityEngine.Vector2[],System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Int32[],System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_Compute_m3325510674 (RuntimeObject * __this /* static, unused */, List_1_t3670791667 * ___contourList0, List_1_t1857321114 * ___vertexList1, Int32U5BU5D_t385246372* ___vertexCounts2, Int32U5BU5D_t385246372* ___xMaxVertices3, Vector2U5BU5D_t1457185986* ___xMaxPoints4, List_1_t2929260728 * ___pointsList5, Int32U5BU5D_t385246372* ___meshTriangles6, int32_t* ___triIdx7, int32_t* ___triAdd8, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::AddTriangle(System.Int32[],System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_AddTriangle_m398130210 (GlyphData_t620095268 * __this, Int32U5BU5D_t385246372* ___meshTriangles0, int32_t* ___triAdd1, int32_t* ___triIdx2, int32_t* ___edgeTriCount3, int32_t* ___vCount4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Angle_m4105581454 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void System.Array::Resize<UnityEngine.Vector3>(!!0[]&,System.Int32)
#define Array_Resize_TisVector3_t3722313464_m3246197627(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, Vector3U5BU5D_t1718750761**, int32_t, const RuntimeMethod*))Array_Resize_TisVector3_t3722313464_m3246197627_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
#define Array_Resize_TisInt32_t2950945753_m3147937642(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, Int32U5BU5D_t385246372**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t2950945753_m3147937642_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void FlyingText3D.GlyphData::CopyAndScale(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_CopyAndScale_m1278098342 (GlyphData_t620095268 * __this, float ___scaleFactor0, int32_t ___length1, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::CopyAndScale(System.Single,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_CopyAndScale_m1216584815 (GlyphData_t620095268 * __this, float ___scaleFactor0, int32_t ___source1, int32_t ___dest2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Dot_m1554553447 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void FlyingText3D.KernPair::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KernPair__ctor_m1498003365 (KernPair_t1917918210 * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32[]>::get_Item(System.Int32)
#define List_1_get_Item_m2209139272(__this, p0, method) ((  Int32U5BU5D_t385246372* (*) (List_1_t1857321114 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Cross_m418170344 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Boolean FlyingText3D.Triangulate::IsReflex(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_IsReflex_m3585468626 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___a0, Vector2_t2156229523 * ___b1, Vector2_t2156229523 * ___c2, const RuntimeMethod* method);
// System.Boolean FlyingText3D.Triangulate::PointInsideTriangle(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_PointInsideTriangle_m295648208 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___p0, Vector2_t2156229523 * ___a1, Vector2_t2156229523 * ___b2, Vector2_t2156229523 * ___c3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>::.ctor()
#define Dictionary_2__ctor_m2537431136(__this, method) ((  void (*) (Dictionary_2_t2651833894 *, const RuntimeMethod*))Dictionary_2__ctor_m2317624211_gshared)(__this, method)
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.UInt32 FlyingText3D.TTFFontInfo::GetUint(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR uint32_t TTFFontInfo_GetUint_m2273795948 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method);
// System.Boolean FlyingText3D.TTFFontInfo::TagSearch(System.Byte[],System.String,System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_TagSearch_m2274390376 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, String_t* ___tag1, uint32_t* ___offset2, uint32_t* ___length3, const RuntimeMethod* method);
// System.String FlyingText3D.TTFFontInfo::GetName(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_GetName_m1038423694 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method);
// System.UInt16 FlyingText3D.TTFFontInfo::GetUshort(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR uint16_t TTFFontInfo_GetUshort_m2370522159 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
#define Array_IndexOf_TisInt32_t2950945753_m3764119789(__this /* static, unused */, p0, p1, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, Int32U5BU5D_t385246372*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t2950945753_m3764119789_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void FlyingText3D.TTFFontInfo::SetFormat4(System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo_SetFormat4_m2930510947 (TTFFontInfo_t2461483730 * __this, uint32_t* ___idx0, const RuntimeMethod* method);
// System.Int16 FlyingText3D.TTFFontInfo::GetShort(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR int16_t TTFFontInfo_GetShort_m4182940442 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::.ctor(System.Int32)
#define Dictionary_2__ctor_m3220969239(__this, p0, method) ((  void (*) (Dictionary_2_t4026917929 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m3220969239_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16>::Add(!0,!1)
#define Dictionary_2_Add_m3493567640(__this, p0, p1, method) ((  void (*) (Dictionary_2_t4026917929 *, KernPair_t1917918210 , int16_t, const RuntimeMethod*))Dictionary_2_Add_m3493567640_gshared)(__this, p0, p1, method)
// System.Char System.Convert::ToChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void FlyingText3D.GlyphData::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData__ctor_m3832508344 (GlyphData_t620095268 * __this, List_1_t2929260728 * ___pointsList0, List_1_t74525638 * ___onCurvesList1, int32_t ___xMin2, int32_t ___yMin3, int32_t ___xMax4, int32_t ___yMax5, int32_t ___unitsPerEm6, int32_t ___glyphIndex7, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData>::Add(!0,!1)
#define Dictionary_2_Add_m2135025057(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2651833894 *, Il2CppChar, GlyphData_t620095268 *, const RuntimeMethod*))Dictionary_2_Add_m2466928617_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Boolean[]>::.ctor(System.Int32)
#define List_1__ctor_m3936567386(__this, p0, method) ((  void (*) (List_1_t74525638 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void FlyingText3D.TTFFontInfo::ReadGlyphData(System.UInt32,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo_ReadGlyphData_m2376183697 (TTFFontInfo_t2461483730 * __this, uint32_t ___idx0, int32_t ___numberOfContours1, List_1_t2929260728 * ___pointsList2, List_1_t74525638 * ___onCurvesList3, int32_t ___xOffset4, int32_t ___yOffset5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2[]>::.ctor()
#define List_1__ctor_m2294770810(__this, method) ((  void (*) (List_1_t2929260728 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean[]>::.ctor()
#define List_1__ctor_m4272323567(__this, method) ((  void (*) (List_1_t74525638 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.UInt16[] FlyingText3D.TTFFontInfo::GetUshortArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR UInt16U5BU5D_t3326319531* TTFFontInfo_GetUshortArray_m2433521691 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m700075857(__this, p0, method) ((  void (*) (List_1_t1569362707 *, int32_t, const RuntimeMethod*))List_1__ctor_m700075857_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
#define List_1__ctor_m1213329701(__this, p0, method) ((  void (*) (List_1_t2606371118 *, int32_t, const RuntimeMethod*))List_1__ctor_m1213329701_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
#define List_1_Add_m163275201(__this, p0, method) ((  void (*) (List_1_t2606371118 *, uint8_t, const RuntimeMethod*))List_1_Add_m163275201_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
#define List_1_Add_m2351159821(__this, p0, method) ((  void (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))List_1_Add_m2351159821_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m2757296379(__this, method) ((  BooleanU5BU5D_t2897418192* (*) (List_1_t1569362707 *, const RuntimeMethod*))List_1_ToArray_m2757296379_gshared)(__this, method)
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
#define List_1_ToArray_m2135705625(__this, method) ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_ToArray_m2135705625_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean[]>::Add(!0)
#define List_1_Add_m2072125803(__this, p0, method) ((  void (*) (List_1_t74525638 *, BooleanU5BU5D_t2897418192*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32[] FlyingText3D.TTFFontInfo::GetUshortToIntArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_GetUshortToIntArray_m4196438407 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method);
// System.Int32[] FlyingText3D.TTFFontInfo::GetShortToIntArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_GetShortToIntArray_m3276325465 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method);
// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ASCIIEncoding__ctor_m1380190655 (ASCIIEncoding_t3446586211 * __this, const RuntimeMethod* method);
// System.Byte[] FlyingText3D.TTFFontInfo::GetByteArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* TTFFontInfo_GetByteArray_m4077026987 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_m1074918879 (UnicodeEncoding_t1959134050 * __this, const RuntimeMethod* method);
// System.Byte[] FlyingText3D.TTFFontInfo::GetLittleEndianByteArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* TTFFontInfo_GetLittleEndianByteArray_m2053176639 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method);
// System.String FlyingText3D.TTFFontInfo::GetTag(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_GetTag_m1553678787 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m514679699 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int64_t p1, RuntimeArray * p2, int64_t p3, int64_t p4, const RuntimeMethod* method);
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
// System.Void EdgeData::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EdgeData__ctor_m2545318485 (EdgeData_t3624631600 * __this, int32_t ___frontVertIndex0, int32_t ___vertexCount1, const RuntimeMethod* method)
{
	{
		__this->set_frontVertIndex_0(0);
		__this->set_vertexCount_1(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___frontVertIndex0;
		__this->set_frontVertIndex_0(L_0);
		int32_t L_1 = ___vertexCount1;
		__this->set_vertexCount_1(L_1);
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
// System.Void FlyingText::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FlyingText__ctor_m4174619755 (FlyingText_t4265356488 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_defaultFont_5(0);
		__this->set_m_useEdgeMaterial_8((bool)0);
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_defaultColor_9(L_0);
		__this->set_m_defaultResolution_10(5);
		__this->set_m_defaultSize_11((2.0f));
		__this->set_m_defaultDepth_12((0.25f));
		__this->set_m_defaultLetterSpacing_13((1.0f));
		__this->set_m_defaultLineSpacing_14((1.0f));
		__this->set_m_defaultLineWidth_15((0.0f));
		__this->set_m_tabStop_16((0.0f));
		__this->set_m_wordWrap_17((bool)1);
		__this->set_m_defaultJustification_18(0);
		__this->set_m_verticalLayout_19((bool)0);
		__this->set_m_includeBackface_20((bool)1);
		__this->set_m_texturePerLetter_21((bool)1);
		__this->set_m_anchor_22(0);
		__this->set_m_zAnchor_23(0);
		__this->set_m_colliderType_24(0);
		__this->set_m_addRigidbodies_25((bool)0);
		__this->set_m_smoothingAngle_27((50.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingText::.cctor()
extern "C" IL2CPP_METHOD_ATTR void FlyingText__cctor_m3473427217 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText__cctor_m3473427217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_useEdgeMaterial_31((bool)0);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__initialized_52((bool)0);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__noFontsAvailable_53((bool)0);
		CharU5BU5D_t3528271667* L_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)6));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B2a40e070U2De6cbU2D4f7eU2Dab21U2Da5af0f6d0f8dU7D_t2819133477____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__removeChars_56(L_0);
		return;
	}
}
// FlyingText FlyingText::get_instance()
extern "C" IL2CPP_METHOD_ATTR FlyingText_t4265356488 * FlyingText_get_instance_m3338243538 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_get_instance_m3338243538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_t4265356488 * L_0 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__instance_51();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (FlyingText_t4265356488_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_4 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__instance_51(((FlyingText_t4265356488 *)IsInstClass((RuntimeObject*)L_4, FlyingText_t4265356488_il2cpp_TypeInfo_var)));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_t4265356488 * L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__instance_51();
		return L_5;
	}
}
// System.Void FlyingText::Awake()
extern "C" IL2CPP_METHOD_ATTR void FlyingText_Awake_m780345619 (FlyingText_t4265356488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_Awake_m780345619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (FlyingText_t4265356488_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__initialized_52();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		FlyingText_Initialize_m1624881710(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void FlyingText::Initialize()
extern "C" IL2CPP_METHOD_ATTR void FlyingText_Initialize_m1624881710 (FlyingText_t4265356488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_Initialize_m1624881710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Dictionary_2_t2385757591 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_m_defaultFont_5();
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultFont_28(L_0);
		Material_t340375123 * L_1 = __this->get_m_defaultMaterial_6();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultMaterial_29(L_1);
		Material_t340375123 * L_2 = __this->get_m_defaultEdgeMaterial_7();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultEdgeMaterial_30(L_2);
		bool L_3 = __this->get_m_useEdgeMaterial_8();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_useEdgeMaterial_31(L_3);
		Color_t2555686324  L_4 = __this->get_m_defaultColor_9();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultColor_32(L_4);
		int32_t L_5 = __this->get_m_defaultResolution_10();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultResolution_33(L_5);
		float L_6 = __this->get_m_defaultSize_11();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultSize_34(L_6);
		float L_7 = __this->get_m_defaultDepth_12();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultDepth_35(L_7);
		float L_8 = __this->get_m_defaultLetterSpacing_13();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultLetterSpacing_36(L_8);
		float L_9 = __this->get_m_defaultLineSpacing_14();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultLineSpacing_37(L_9);
		float L_10 = __this->get_m_defaultLineWidth_15();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultLineWidth_38(L_10);
		float L_11 = __this->get_m_tabStop_16();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_tabStop_39(L_11);
		bool L_12 = __this->get_m_wordWrap_17();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_wordWrap_40(L_12);
		int32_t L_13 = __this->get_m_defaultJustification_18();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultJustification_41(L_13);
		bool L_14 = __this->get_m_verticalLayout_19();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_verticalLayout_42(L_14);
		bool L_15 = __this->get_m_includeBackface_20();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_includeBackface_43(L_15);
		bool L_16 = __this->get_m_texturePerLetter_21();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_texturePerLetter_44(L_16);
		int32_t L_17 = __this->get_m_anchor_22();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_anchor_45(L_17);
		int32_t L_18 = __this->get_m_zAnchor_23();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_zAnchor_46(L_18);
		int32_t L_19 = __this->get_m_colliderType_24();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_colliderType_47(L_19);
		bool L_20 = __this->get_m_addRigidbodies_25();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_addRigidbodies_48(L_20);
		PhysicMaterial_t2874185564 * L_21 = __this->get_m_physicsMaterial_26();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_physicsMaterial_49(L_21);
		float L_22 = __this->get_m_smoothingAngle_27();
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_smoothingAngle_50(L_22);
		Material_t340375123 * L_23 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_SetMaterial_m3149165622(__this, (((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_address_of_defaultMaterial_29()), /*hidden argument*/NULL);
	}

IL_0118:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_25 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_25, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0133;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_SetMaterial_m3149165622(__this, (((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_address_of_defaultEdgeMaterial_30()), /*hidden argument*/NULL);
	}

IL_0133:
	{
		List_1_t676973805 * L_27 = __this->get_m_fontData_4();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m460904824(L_27, /*hidden argument*/List_1_get_Count_m460904824_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_0150;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__noFontsAvailable_53((bool)1);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__initialized_52((bool)0);
		return;
	}

IL_0150:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__noFontsAvailable_53((bool)0);
		List_1_t676973805 * L_29 = __this->get_m_fontData_4();
		NullCheck(L_29);
		int32_t L_30 = List_1_get_Count_m460904824(L_29, /*hidden argument*/List_1_get_Count_m460904824_RuntimeMethod_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__fontInfo_54(((TTFFontInfoU5BU5D_t3022196135*)SZArrayNew(TTFFontInfoU5BU5D_t3022196135_il2cpp_TypeInfo_var, (uint32_t)L_30)));
		List_1_t676973805 * L_31 = __this->get_m_fontData_4();
		NullCheck(L_31);
		int32_t L_32 = List_1_get_Count_m460904824(L_31, /*hidden argument*/List_1_get_Count_m460904824_RuntimeMethod_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__fontNames_55(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_32)));
		V_0 = 0;
		goto IL_01f6;
	}

IL_0187:
	{
		List_1_t676973805 * L_33 = __this->get_m_fontData_4();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		FontData_t3499866359 * L_35 = List_1_get_Item_m1276114427(L_33, L_34, /*hidden argument*/List_1_get_Item_m1276114427_RuntimeMethod_var);
		NullCheck(L_35);
		TextAsset_t3022178571 * L_36 = L_35->get_ttfFile_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_36, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_38 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_39 = V_0;
		List_1_t676973805 * L_40 = __this->get_m_fontData_4();
		int32_t L_41 = V_0;
		NullCheck(L_40);
		FontData_t3499866359 * L_42 = List_1_get_Item_m1276114427(L_40, L_41, /*hidden argument*/List_1_get_Item_m1276114427_RuntimeMethod_var);
		NullCheck(L_42);
		TextAsset_t3022178571 * L_43 = L_42->get_ttfFile_0();
		NullCheck(L_43);
		ByteU5BU5D_t4116647657* L_44 = TextAsset_get_bytes_m1826471440(L_43, /*hidden argument*/NULL);
		TTFFontInfo_t2461483730 * L_45 = (TTFFontInfo_t2461483730 *)il2cpp_codegen_object_new(TTFFontInfo_t2461483730_il2cpp_TypeInfo_var);
		TTFFontInfo__ctor_m4052784430(L_45, L_44, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_45);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (TTFFontInfo_t2461483730 *)L_45);
		TTFFontInfoU5BU5D_t3022196135* L_46 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		TTFFontInfo_t2461483730 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		String_t* L_50 = TTFFontInfo_get_name_m629977104(L_49, /*hidden argument*/NULL);
		V_1 = L_50;
		String_t* L_51 = V_1;
		NullCheck(L_51);
		String_t* L_52 = String_Replace_m1273907647(L_51, _stringLiteral3452614528, _stringLiteral757602046, /*hidden argument*/NULL);
		V_1 = L_52;
		String_t* L_53 = V_1;
		NullCheck(L_53);
		String_t* L_54 = String_ToLower_m2029374922(L_53, /*hidden argument*/NULL);
		V_1 = L_54;
		StringU5BU5D_t1281789340* L_55 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontNames_55();
		int32_t L_56 = V_0;
		String_t* L_57 = V_1;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (String_t*)L_57);
	}

IL_01f2:
	{
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_01f6:
	{
		int32_t L_59 = V_0;
		List_1_t676973805 * L_60 = __this->get_m_fontData_4();
		NullCheck(L_60);
		int32_t L_61 = List_1_get_Count_m460904824(L_60, /*hidden argument*/List_1_get_Count_m460904824_RuntimeMethod_var);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_0187;
		}
	}
	{
		Dictionary_2_t2385757591 * L_62 = (Dictionary_2_t2385757591 *)il2cpp_codegen_object_new(Dictionary_2_t2385757591_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1738906411(L_62, /*hidden argument*/Dictionary_2__ctor_m1738906411_RuntimeMethod_var);
		V_2 = L_62;
		Dictionary_2_t2385757591 * L_63 = V_2;
		Color_t2555686324  L_64 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_65 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		Dictionary_2_Add_m3693932771(L_63, _stringLiteral3265678532, L_65, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_66 = V_2;
		Color_t2555686324  L_67 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_68 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		Dictionary_2_Add_m3693932771(L_66, _stringLiteral3552475490, L_68, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_69 = V_2;
		Color_t2555686324  L_70 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_71 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		NullCheck(L_69);
		Dictionary_2_Add_m3693932771(L_69, _stringLiteral4001789855, L_71, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_72 = V_2;
		Color_t2555686324  L_73 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_74 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		Dictionary_2_Add_m3693932771(L_72, _stringLiteral1960051689, L_74, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_75 = V_2;
		Color_t2555686324  L_76 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_77 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		Dictionary_2_Add_m3693932771(L_75, _stringLiteral1587586894, L_77, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_78 = V_2;
		Color_t2555686324  L_79 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_80 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		Dictionary_2_Add_m3693932771(L_78, _stringLiteral4875282, L_80, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_81 = V_2;
		Color_t2555686324  L_82 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_83 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		NullCheck(L_81);
		Dictionary_2_Add_m3693932771(L_81, _stringLiteral1580592866, L_83, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_84 = V_2;
		Color_t2555686324  L_85 = Color_get_magenta_m208363462(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_86 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		NullCheck(L_84);
		Dictionary_2_Add_m3693932771(L_84, _stringLiteral2323481153, L_86, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_87 = V_2;
		Color_t2555686324  L_88 = Color_get_gray_m1471337008(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_89 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		NullCheck(L_87);
		Dictionary_2_Add_m3693932771(L_87, _stringLiteral3447058142, L_89, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_90 = V_2;
		Color_t2555686324  L_91 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_92 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		Dictionary_2_Add_m3693932771(L_90, _stringLiteral1477689674, L_92, /*hidden argument*/Dictionary_2_Add_m3693932771_RuntimeMethod_var);
		Dictionary_2_t2385757591 * L_93 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__colorDictionary_57(L_93);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set__initialized_52((bool)1);
		return;
	}
}
// System.Void FlyingText::SetMaterial(UnityEngine.Material&)
extern "C" IL2CPP_METHOD_ATTR void FlyingText_SetMaterial_m3149165622 (FlyingText_t4265356488 * __this, Material_t340375123 ** ___thisMaterial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_SetMaterial_m3149165622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t340375123 * V_0 = NULL;
	Shader_t4151988712 * V_1 = NULL;
	{
		Object_t631007953 * L_0 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3152496930, /*hidden argument*/NULL);
		V_0 = ((Material_t340375123 *)IsInstClass((RuntimeObject*)L_0, Material_t340375123_il2cpp_TypeInfo_var));
		Material_t340375123 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Material_t340375123 ** L_3 = ___thisMaterial0;
		Material_t340375123 * L_4 = V_0;
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_4);
		goto IL_0041;
	}

IL_0023:
	{
		Shader_t4151988712 * L_5 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral362372998, /*hidden argument*/NULL);
		V_1 = L_5;
		Shader_t4151988712 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Material_t340375123 ** L_8 = ___thisMaterial0;
		Shader_t4151988712 * L_9 = V_1;
		Material_t340375123 * L_10 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_10, L_9, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean FlyingText::CheckSetup()
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_CheckSetup_m4017455319 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_CheckSetup_m4017455319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__initialized_52();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_1 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__noFontsAvailable_53();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral723428682, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3067347936, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void FlyingText::PrimeText(System.String)
extern "C" IL2CPP_METHOD_ATTR void FlyingText_PrimeText_m3693014073 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_PrimeText_m3693014073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)1, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingText::PrimeText(System.String,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FlyingText_PrimeText_m2915438810 (RuntimeObject * __this /* static, unused */, String_t* ___text0, float ___size1, float ___extrudeDepth2, int32_t ___resolution3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_PrimeText_m2915438810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ___size1;
		float L_5 = ___extrudeDepth2;
		int32_t L_6 = ___resolution3;
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)1, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m3315582823 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m3315582823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m3470762325 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m3470762325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m990911204 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m990911204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m1917729950 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m1917729950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position1;
		Quaternion_t2301928331  L_11 = ___rotation2;
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m3547467298 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, Vector3_t3722313464  ___position6, Quaternion_t2301928331  ___rotation7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m3547467298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position6;
		Quaternion_t2301928331  L_11 = ___rotation7;
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m4010545162 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, Vector3_t3722313464  ___position9, Quaternion_t2301928331  ___rotation10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m4010545162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		Vector3_t3722313464  L_10 = ___position9;
		Quaternion_t2301928331  L_11 = ___rotation10;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)0, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m3873475979 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m3873475979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m1628715019 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m1628715019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m1954841082 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m1954841082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m1527065666 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m1527065666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position1;
		Quaternion_t2301928331  L_11 = ___rotation2;
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m3923823142 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, Vector3_t3722313464  ___position6, Quaternion_t2301928331  ___rotation7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m3923823142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position6;
		Quaternion_t2301928331  L_11 = ___rotation7;
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject FlyingText::GetObjects(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObjects_m3829554265 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, Vector3_t3722313464  ___position9, Quaternion_t2301928331  ___rotation10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjects_m3829554265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		Vector3_t3722313464  L_10 = ___position9;
		Quaternion_t2301928331  L_11 = ___rotation10;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)0, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m238443179 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m238443179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m800539841 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m800539841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m2485236501 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m2485236501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m1790767407 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m1790767407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position1;
		Quaternion_t2301928331  L_11 = ___rotation2;
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m1622996339 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, Vector3_t3722313464  ___position6, Quaternion_t2301928331  ___rotation7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m1622996339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		Vector3_t3722313464  L_10 = ___position6;
		Quaternion_t2301928331  L_11 = ___rotation7;
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// UnityEngine.GameObject[] FlyingText::GetObjectsArray(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* FlyingText_GetObjectsArray_m865239737 (RuntimeObject * __this /* static, unused */, String_t* ___text0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, Vector3_t3722313464  ___position9, Quaternion_t2301928331  ___rotation10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObjectsArray_m865239737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = FlyingText_CheckSetup_m4017455319(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (GameObjectU5BU5D_t3328599146*)NULL;
	}

IL_000c:
	{
		String_t* L_1 = ___text0;
		Material_t340375123 * L_2 = ___material1;
		Material_t340375123 * L_3 = ___edgeMaterial2;
		float L_4 = ___size3;
		float L_5 = ___extrudeDepth4;
		int32_t L_6 = ___resolution5;
		float L_7 = ___characterSpacing6;
		float L_8 = ___lineSpacing7;
		float L_9 = ___lineWidth8;
		Vector3_t3722313464  L_10 = ___position9;
		Quaternion_t2301928331  L_11 = ___rotation10;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (bool)1, (bool)1, L_10, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_12 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_objectArray_58();
		return L_12;
	}
}
// System.Void FlyingText::UpdateObject(UnityEngine.GameObject,System.String)
extern "C" IL2CPP_METHOD_ATTR void FlyingText_UpdateObject_m753321406 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_UpdateObject_m753321406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral128822896, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		String_t* L_2 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_3 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		Material_t340375123 * L_4 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		float L_5 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultSize_34();
		float L_6 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		int32_t L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultResolution_33();
		float L_8 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLetterSpacing_36();
		float L_9 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineSpacing_37();
		float L_10 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultLineWidth_38();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_12 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = ___go0;
		FlyingText_GetObject_m2705320406(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, (bool)0, (bool)0, (bool)0, L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject FlyingText::GetObject(System.String,UnityEngine.Material,UnityEngine.Material,System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.Boolean,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * FlyingText_GetObject_m2705320406 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Material_t340375123 * ___material1, Material_t340375123 * ___edgeMaterial2, float ___size3, float ___extrudeDepth4, int32_t ___resolution5, float ___characterSpacing6, float ___lineSpacing7, float ___lineWidth8, bool ___prime9, bool ___separateObjects10, bool ___useObjectsArray11, Vector3_t3722313464  ___position12, Quaternion_t2301928331  ___rotation13, GameObject_t1113636619 * ___gObject14, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetObject_m2705320406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Mesh_t3648964284 * V_2 = NULL;
	MeshFilter_t3523625662 * V_3 = NULL;
	TextObjectData_t178506778 * V_4 = NULL;
	MaterialU5BU5D_t561872642* V_5 = NULL;
	bool V_6 = false;
	List_1_t1625501175 * V_7 = NULL;
	int32_t V_8 = 0;
	List_1_t811567916 * V_9 = NULL;
	List_1_t128053199 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	TTFFontInfo_t2461483730 * V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	CommandData_t153426433 * V_20 = NULL;
	int32_t V_21 = 0;
	Il2CppChar V_22 = 0x0;
	GlyphData_t620095268 * V_23 = NULL;
	GameObject_t1113636619 * V_24 = NULL;
	List_1_t2585711361 * V_25 = NULL;
	Color32_t2600501292  V_26;
	memset(&V_26, 0, sizeof(V_26));
	bool V_27 = false;
	int32_t V_28 = 0;
	Vector3U5BU5D_t1718750761* V_29 = NULL;
	Int32U5BU5D_t385246372* V_30 = NULL;
	Int32U5BU5D_t385246372* V_31 = NULL;
	Vector2U5BU5D_t1457185986* V_32 = NULL;
	Color32U5BU5D_t3850468773* V_33 = NULL;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	float V_37 = 0.0f;
	bool V_38 = false;
	Vector3U5BU5D_t1718750761* V_39 = NULL;
	Int32U5BU5D_t385246372* V_40 = NULL;
	KernPair_t1917918210  V_41;
	memset(&V_41, 0, sizeof(V_41));
	float V_42 = 0.0f;
	float V_43 = 0.0f;
	float V_44 = 0.0f;
	float V_45 = 0.0f;
	List_1_t2869341516 * V_46 = NULL;
	List_1_t2288335961 * V_47 = NULL;
	List_1_t801739046 * V_48 = NULL;
	int32_t V_49 = 0;
	bool V_50 = false;
	int32_t V_51 = 0;
	float V_52 = 0.0f;
	int32_t V_53 = 0;
	float V_54 = 0.0f;
	float V_55 = 0.0f;
	float V_56 = 0.0f;
	int32_t V_57 = 0;
	float V_58 = 0.0f;
	float V_59 = 0.0f;
	float V_60 = 0.0f;
	float V_61 = 0.0f;
	Il2CppChar V_62 = 0x0;
	Il2CppChar V_63 = 0x0;
	TTFFontInfo_t2461483730 * V_64 = NULL;
	int32_t V_65 = 0;
	CommandData_t153426433 * V_66 = NULL;
	CommandData_t153426433 * V_67 = NULL;
	bool V_68 = false;
	float V_69 = 0.0f;
	int32_t V_70 = 0;
	int32_t V_71 = 0;
	float V_72 = 0.0f;
	int32_t V_73 = 0;
	GlyphData_t620095268 * V_74 = NULL;
	int32_t V_75 = 0;
	float V_76 = 0.0f;
	float V_77 = 0.0f;
	float V_78 = 0.0f;
	float V_79 = 0.0f;
	float V_80 = 0.0f;
	float V_81 = 0.0f;
	float V_82 = 0.0f;
	float V_83 = 0.0f;
	float V_84 = 0.0f;
	int32_t V_85 = 0;
	int32_t V_86 = 0;
	int32_t V_87 = 0;
	int32_t V_88 = 0;
	int32_t V_89 = 0;
	int32_t V_90 = 0;
	int32_t V_91 = 0;
	int32_t V_92 = 0;
	float V_93 = 0.0f;
	int32_t V_94 = 0;
	int32_t V_95 = 0;
	int32_t V_96 = 0;
	int32_t V_97 = 0;
	Mesh_t3648964284 * V_98 = NULL;
	GameObject_t1113636619 * V_99 = NULL;
	MeshCollider_t903564387 * V_100 = NULL;
	int32_t V_101 = 0;
	int32_t V_102 = 0;
	float V_103 = 0.0f;
	float V_104 = 0.0f;
	int32_t V_105 = 0;
	int32_t V_106 = 0;
	int32_t V_107 = 0;
	int32_t V_108 = 0;
	int32_t V_109 = 0;
	int32_t V_110 = 0;
	Vector3_t3722313464  V_111;
	memset(&V_111, 0, sizeof(V_111));
	int32_t V_112 = 0;
	int32_t V_113 = 0;
	int32_t V_114 = 0;
	RuntimeObject* V_115 = NULL;
	Transform_t3600365921 * V_116 = NULL;
	RuntimeObject* V_117 = NULL;
	int32_t V_118 = 0;
	String_t* V_119 = NULL;
	String_t* V_120 = NULL;
	int32_t V_121 = 0;
	Color32_t2600501292  V_122;
	memset(&V_122, 0, sizeof(V_122));
	int32_t V_123 = 0;
	MeshCollider_t903564387 * V_124 = NULL;
	GameObject_t1113636619 * V_125 = NULL;
	MeshCollider_t903564387 * V_126 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B13_0 = 0;
	MaterialU5BU5D_t561872642* G_B21_0 = NULL;
	float G_B37_0 = 0.0f;
	float G_B40_0 = 0.0f;
	float G_B44_0 = 0.0f;
	float G_B47_0 = 0.0f;
	GameObject_t1113636619 * G_B89_0 = NULL;
	List_1_t2585711361 * G_B92_0 = NULL;
	int32_t G_B104_0 = 0;
	int32_t G_B107_0 = 0;
	int32_t G_B206_0 = 0;
	int32_t G_B205_0 = 0;
	int32_t G_B207_0 = 0;
	int32_t G_B207_1 = 0;
	int32_t G_B217_0 = 0;
	List_1_t801739046 * G_B217_1 = NULL;
	int32_t G_B216_0 = 0;
	List_1_t801739046 * G_B216_1 = NULL;
	int32_t G_B218_0 = 0;
	int32_t G_B218_1 = 0;
	List_1_t801739046 * G_B218_2 = NULL;
	float G_B290_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_0 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__initialized_52();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2433642745, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0016:
	{
		String_t* L_1 = ___s0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral702346024, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0028:
	{
		GameObject_t1113636619 * L_2 = ___gObject14;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00a2;
		}
	}
	{
		GameObject_t1113636619 * L_5 = ___gObject14;
		NullCheck(L_5);
		MeshFilter_t3523625662 * L_6 = GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000(L_5, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000_RuntimeMethod_var);
		V_3 = L_6;
		MeshFilter_t3523625662 * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral734172964, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0057:
	{
		MeshFilter_t3523625662 * L_9 = V_3;
		NullCheck(L_9);
		Mesh_t3648964284 * L_10 = MeshFilter_get_mesh_m3346355278(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Mesh_t3648964284 * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = Mesh_get_subMeshCount_m3992802841(L_11, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		GameObject_t1113636619 * L_13 = ___gObject14;
		NullCheck(L_13);
		TextObjectData_t178506778 * L_14 = GameObject_GetComponent_TisTextObjectData_t178506778_m1785006120(L_13, /*hidden argument*/GameObject_GetComponent_TisTextObjectData_t178506778_m1785006120_RuntimeMethod_var);
		V_4 = L_14;
		TextObjectData_t178506778 * L_15 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1243886463, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_008a:
	{
		TextObjectData_t178506778 * L_17 = V_4;
		NullCheck(L_17);
		TextObjectData_InitializeData_m1736845510(L_17, (&___size3), (&___extrudeDepth4), (&___resolution5), (&___characterSpacing6), (&___lineSpacing7), (&___lineWidth8), /*hidden argument*/NULL);
		goto IL_00e1;
	}

IL_00a2:
	{
		V_2 = (Mesh_t3648964284 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_18 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_useEdgeMaterial_31();
		if (!L_18)
		{
			goto IL_00b9;
		}
	}
	{
		float L_19 = ___extrudeDepth4;
		G_B13_0 = ((((float)L_19) > ((float)(0.0f)))? 1 : 0);
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B13_0 = 0;
	}

IL_00ba:
	{
		V_1 = (bool)G_B13_0;
		Material_t340375123 * L_20 = ___material1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_22 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultMaterial_29();
		___material1 = L_22;
	}

IL_00ce:
	{
		Material_t340375123 * L_23 = ___edgeMaterial2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Material_t340375123 * L_25 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultEdgeMaterial_30();
		___edgeMaterial2 = L_25;
	}

IL_00e1:
	{
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_0100;
		}
	}
	{
		bool L_27 = V_0;
		if (L_27)
		{
			goto IL_0100;
		}
	}
	{
		MaterialU5BU5D_t561872642* L_28 = ((MaterialU5BU5D_t561872642*)SZArrayNew(MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var, (uint32_t)2));
		Material_t340375123 * L_29 = ___material1;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t340375123 *)L_29);
		MaterialU5BU5D_t561872642* L_30 = L_28;
		Material_t340375123 * L_31 = ___edgeMaterial2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Material_t340375123 *)L_31);
		G_B21_0 = L_30;
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = ((MaterialU5BU5D_t561872642*)(NULL));
	}

IL_0101:
	{
		V_5 = G_B21_0;
		int32_t L_32 = ___resolution5;
		if ((((int32_t)L_32) >= ((int32_t)1)))
		{
			goto IL_010e;
		}
	}
	{
		___resolution5 = 1;
	}

IL_010e:
	{
		float L_33 = ___size3;
		if ((!(((float)L_33) < ((float)(0.001f)))))
		{
			goto IL_0120;
		}
	}
	{
		___size3 = (0.001f);
	}

IL_0120:
	{
		float L_34 = ___extrudeDepth4;
		if ((!(((float)L_34) < ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		___extrudeDepth4 = (0.0f);
	}

IL_0133:
	{
		float L_35 = ___lineWidth8;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_0146;
		}
	}
	{
		___lineWidth8 = (0.0f);
	}

IL_0146:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_36 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_tabStop_39();
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_015f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_tabStop_39((0.0f));
	}

IL_015f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_37 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_wordWrap_40();
		V_6 = L_37;
		bool L_38 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (!L_38)
		{
			goto IL_017a;
		}
	}
	{
		V_6 = (bool)0;
		___lineWidth8 = (0.0f);
	}

IL_017a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_39 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultFont_28();
		TTFFontInfoU5BU5D_t3022196135* L_40 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		NullCheck(L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_41 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_39, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_defaultFont_28(L_41);
		V_8 = 0;
		String_t* L_42 = ___s0;
		List_1_t811567916 * L_43 = FlyingText_ParseString_m426035362(NULL /*static, unused*/, L_42, (&V_7), /*hidden argument*/NULL);
		V_9 = L_43;
		List_1_t811567916 * L_44 = V_9;
		NullCheck(L_44);
		int32_t L_45 = List_1_get_Count_m2424247778(L_44, /*hidden argument*/List_1_get_Count_m2424247778_RuntimeMethod_var);
		List_1_t128053199 * L_46 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m991822646(L_46, L_45, /*hidden argument*/List_1__ctor_m991822646_RuntimeMethod_var);
		V_10 = L_46;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		float L_47 = ___extrudeDepth4;
		V_14 = (bool)((((float)L_47) > ((float)(0.0f)))? 1 : 0);
		float L_48 = ___characterSpacing6;
		if ((!(((float)L_48) > ((float)(0.0f)))))
		{
			goto IL_020d;
		}
	}
	{
		float L_49 = ___characterSpacing6;
		if ((!(((float)L_49) < ((float)(1.0f)))))
		{
			goto IL_01e1;
		}
	}
	{
		float L_50 = ___characterSpacing6;
		G_B37_0 = L_50;
		goto IL_01e6;
	}

IL_01e1:
	{
		G_B37_0 = (1.0f);
	}

IL_01e6:
	{
		V_15 = G_B37_0;
		float L_51 = ___characterSpacing6;
		if ((!(((float)L_51) > ((float)(1.0f)))))
		{
			goto IL_0201;
		}
	}
	{
		float L_52 = ___characterSpacing6;
		G_B40_0 = ((float)il2cpp_codegen_subtract((float)L_52, (float)(1.0f)));
		goto IL_0206;
	}

IL_0201:
	{
		G_B40_0 = (0.0f);
	}

IL_0206:
	{
		V_16 = G_B40_0;
		goto IL_0248;
	}

IL_020d:
	{
		float L_53 = ___characterSpacing6;
		if ((!(((float)L_53) > ((float)(-1.0f)))))
		{
			goto IL_0221;
		}
	}
	{
		float L_54 = ___characterSpacing6;
		G_B44_0 = ((-L_54));
		goto IL_0226;
	}

IL_0221:
	{
		G_B44_0 = (1.0f);
	}

IL_0226:
	{
		V_15 = G_B44_0;
		float L_55 = ___characterSpacing6;
		if ((!(((float)L_55) < ((float)(-1.0f)))))
		{
			goto IL_0241;
		}
	}
	{
		float L_56 = ___characterSpacing6;
		G_B47_0 = ((float)il2cpp_codegen_add((float)L_56, (float)(1.0f)));
		goto IL_0246;
	}

IL_0241:
	{
		G_B47_0 = (0.0f);
	}

IL_0246:
	{
		V_16 = G_B47_0;
	}

IL_0248:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_57 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_58 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultFont_28();
		NullCheck(L_57);
		int32_t L_59 = L_58;
		TTFFontInfo_t2461483730 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_17 = L_60;
		int32_t L_61 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultFont_28();
		V_18 = L_61;
		V_19 = 0;
		goto IL_043d;
	}

IL_0264:
	{
		List_1_t1625501175 * L_62 = V_7;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		CommandData_t153426433 * L_64 = List_1_get_Item_m1434826200(L_62, L_63, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		V_20 = L_64;
		goto IL_02c3;
	}

IL_0274:
	{
		CommandData_t153426433 * L_65 = V_20;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_command_1();
		if ((!(((uint32_t)L_66) == ((uint32_t)3))))
		{
			goto IL_02b3;
		}
	}
	{
		CommandData_t153426433 * L_67 = V_20;
		NullCheck(L_67);
		RuntimeObject * L_68 = L_67->get_data_2();
		V_21 = ((*(int32_t*)((int32_t*)UnBox(L_68, Int32_t2950945753_il2cpp_TypeInfo_var))));
		int32_t L_69 = V_21;
		if ((((int32_t)L_69) < ((int32_t)0)))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_70 = V_21;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_71 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		NullCheck(L_71);
		if ((((int32_t)L_70) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length)))))))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_72 = V_21;
		V_18 = L_72;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_73 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_74 = V_18;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		TTFFontInfo_t2461483730 * L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_17 = L_76;
	}

IL_02b3:
	{
		List_1_t1625501175 * L_77 = V_7;
		int32_t L_78 = V_8;
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		V_8 = L_79;
		NullCheck(L_77);
		CommandData_t153426433 * L_80 = List_1_get_Item_m1434826200(L_77, L_79, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		V_20 = L_80;
	}

IL_02c3:
	{
		CommandData_t153426433 * L_81 = V_20;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_index_0();
		int32_t L_83 = V_19;
		if ((((int32_t)L_82) == ((int32_t)L_83)))
		{
			goto IL_0274;
		}
	}
	{
		TTFFontInfo_t2461483730 * L_84 = V_17;
		if (L_84)
		{
			goto IL_02e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3881522328, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_02e4:
	{
		List_1_t811567916 * L_85 = V_9;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		Il2CppChar L_87 = List_1_get_Item_m1333520732(L_85, L_86, /*hidden argument*/List_1_get_Item_m1333520732_RuntimeMethod_var);
		V_22 = L_87;
		Il2CppChar L_88 = V_22;
		if (L_88)
		{
			goto IL_02fb;
		}
	}
	{
		goto IL_0437;
	}

IL_02fb:
	{
		TTFFontInfo_t2461483730 * L_89 = V_17;
		NullCheck(L_89);
		Dictionary_2_t2651833894 * L_90 = TTFFontInfo_get_glyphDictionary_m3439082376(L_89, /*hidden argument*/NULL);
		Il2CppChar L_91 = V_22;
		NullCheck(L_90);
		bool L_92 = Dictionary_2_ContainsKey_m945255793(L_90, L_91, /*hidden argument*/Dictionary_2_ContainsKey_m945255793_RuntimeMethod_var);
		if (L_92)
		{
			goto IL_031e;
		}
	}
	{
		TTFFontInfo_t2461483730 * L_93 = V_17;
		Il2CppChar L_94 = V_22;
		NullCheck(L_93);
		bool L_95 = TTFFontInfo_SetGlyphData_m751504939(L_93, L_94, /*hidden argument*/NULL);
		if (L_95)
		{
			goto IL_031e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_031e:
	{
		TTFFontInfo_t2461483730 * L_96 = V_17;
		NullCheck(L_96);
		Dictionary_2_t2651833894 * L_97 = TTFFontInfo_get_glyphDictionary_m3439082376(L_96, /*hidden argument*/NULL);
		Il2CppChar L_98 = V_22;
		NullCheck(L_97);
		GlyphData_t620095268 * L_99 = Dictionary_2_get_Item_m323241701(L_97, L_98, /*hidden argument*/Dictionary_2_get_Item_m323241701_RuntimeMethod_var);
		V_23 = L_99;
		List_1_t128053199 * L_100 = V_10;
		GlyphData_t620095268 * L_101 = V_23;
		NullCheck(L_101);
		int32_t L_102 = GlyphData_get_glyphIndex_m2666095189(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		List_1_Add_m697420525(L_100, L_102, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		GlyphData_t620095268 * L_103 = V_23;
		NullCheck(L_103);
		bool L_104 = GlyphData_get_isVisibleChar_m2922145535(L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_0437;
		}
	}
	{
		GlyphData_t620095268 * L_105 = V_23;
		NullCheck(L_105);
		int32_t L_106 = GlyphData_get_resolution_m1135084346(L_105, /*hidden argument*/NULL);
		int32_t L_107 = ___resolution5;
		if ((((int32_t)L_106) == ((int32_t)L_107)))
		{
			goto IL_03aa;
		}
	}
	{
		GlyphData_t620095268 * L_108 = V_23;
		int32_t L_109 = ___resolution5;
		NullCheck(L_108);
		bool L_110 = GlyphData_SetMeshData_m613466942(L_108, L_109, /*hidden argument*/NULL);
		if (L_110)
		{
			goto IL_03aa;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_111 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, _stringLiteral2752739560);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2752739560);
		ObjectU5BU5D_t2843939325* L_112 = L_111;
		Il2CppChar L_113 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_114 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_113, /*hidden argument*/NULL);
		int32_t L_115 = L_114;
		RuntimeObject * L_116 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_115);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_116);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_116);
		ObjectU5BU5D_t2843939325* L_117 = L_112;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, _stringLiteral3451041664);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3451041664);
		ObjectU5BU5D_t2843939325* L_118 = L_117;
		Il2CppChar L_119 = V_22;
		Il2CppChar L_120 = L_119;
		RuntimeObject * L_121 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_120);
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_121);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_121);
		ObjectU5BU5D_t2843939325* L_122 = L_118;
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, _stringLiteral3452614535);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_123 = String_Concat_m2971454694(NULL /*static, unused*/, L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_123, /*hidden argument*/NULL);
		goto IL_0437;
	}

IL_03aa:
	{
		GlyphData_t620095268 * L_124 = V_23;
		NullCheck(L_124);
		bool L_125 = GlyphData_get_triDataComputed_m775494336(L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_03d4;
		}
	}
	{
		GlyphData_t620095268 * L_126 = V_23;
		NullCheck(L_126);
		bool L_127 = GlyphData_get_useSubmesh_m3967471625(L_126, /*hidden argument*/NULL);
		bool L_128 = V_1;
		if ((!(((uint32_t)L_127) == ((uint32_t)L_128))))
		{
			goto IL_03d4;
		}
	}
	{
		GlyphData_t620095268 * L_129 = V_23;
		NullCheck(L_129);
		bool L_130 = GlyphData_get_useBack_m1545662753(L_129, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_131 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		if ((((int32_t)L_130) == ((int32_t)L_131)))
		{
			goto IL_0406;
		}
	}

IL_03d4:
	{
		bool L_132 = V_14;
		if (L_132)
		{
			goto IL_03e7;
		}
	}
	{
		GlyphData_t620095268 * L_133 = V_23;
		NullCheck(L_133);
		GlyphData_SetFrontTriData_m374792835(L_133, /*hidden argument*/NULL);
		goto IL_0406;
	}

IL_03e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_134 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		if (!L_134)
		{
			goto IL_03fe;
		}
	}
	{
		GlyphData_t620095268 * L_135 = V_23;
		bool L_136 = V_1;
		NullCheck(L_135);
		GlyphData_SetTriData_m3881103674(L_135, L_136, /*hidden argument*/NULL);
		goto IL_0406;
	}

IL_03fe:
	{
		GlyphData_t620095268 * L_137 = V_23;
		bool L_138 = V_1;
		NullCheck(L_137);
		GlyphData_SetFrontAndEdgeTriData_m3360123618(L_137, L_138, /*hidden argument*/NULL);
	}

IL_0406:
	{
		bool L_139 = ___separateObjects10;
		if (L_139)
		{
			goto IL_0437;
		}
	}
	{
		int32_t L_140 = V_11;
		GlyphData_t620095268 * L_141 = V_23;
		NullCheck(L_141);
		int32_t L_142 = GlyphData_get_vertexCount_m3966091887(L_141, /*hidden argument*/NULL);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_142));
		int32_t L_143 = V_12;
		GlyphData_t620095268 * L_144 = V_23;
		NullCheck(L_144);
		int32_t L_145 = GlyphData_get_triCount_m847416089(L_144, /*hidden argument*/NULL);
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)L_145));
		bool L_146 = V_1;
		if (!L_146)
		{
			goto IL_0437;
		}
	}
	{
		int32_t L_147 = V_13;
		GlyphData_t620095268 * L_148 = V_23;
		NullCheck(L_148);
		int32_t L_149 = GlyphData_get_triCount2_m2560667630(L_148, /*hidden argument*/NULL);
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)L_149));
	}

IL_0437:
	{
		int32_t L_150 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_043d:
	{
		int32_t L_151 = V_19;
		List_1_t811567916 * L_152 = V_9;
		NullCheck(L_152);
		int32_t L_153 = List_1_get_Count_m2424247778(L_152, /*hidden argument*/List_1_get_Count_m2424247778_RuntimeMethod_var);
		if ((((int32_t)L_151) < ((int32_t)L_153)))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) <= ((int32_t)((int32_t)65534))))
		{
			goto IL_0463;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1121077486, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0463:
	{
		bool L_155 = ___prime9;
		if (!L_155)
		{
			goto IL_046c;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_046c:
	{
		bool L_156 = ___separateObjects10;
		if (!L_156)
		{
			goto IL_048a;
		}
	}
	{
		bool L_157 = ___useObjectsArray11;
		if (L_157)
		{
			goto IL_048a;
		}
	}
	{
		bool L_158 = V_0;
		if (L_158)
		{
			goto IL_048a;
		}
	}
	{
		GameObject_t1113636619 * L_159 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_159, /*hidden argument*/NULL);
		G_B89_0 = L_159;
		goto IL_048b;
	}

IL_048a:
	{
		G_B89_0 = ((GameObject_t1113636619 *)(NULL));
	}

IL_048b:
	{
		V_24 = G_B89_0;
		bool L_160 = ___useObjectsArray11;
		if (!L_160)
		{
			goto IL_049e;
		}
	}
	{
		List_1_t2585711361 * L_161 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m463784026(L_161, /*hidden argument*/List_1__ctor_m463784026_RuntimeMethod_var);
		G_B92_0 = L_161;
		goto IL_049f;
	}

IL_049e:
	{
		G_B92_0 = ((List_1_t2585711361 *)(NULL));
	}

IL_049f:
	{
		V_25 = G_B92_0;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Color_t2555686324  L_162 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultColor_32();
		Color32_t2600501292  L_163 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_162, /*hidden argument*/NULL);
		V_26 = L_163;
		V_27 = (bool)0;
		Color32_t2600501292  L_164 = V_26;
		Color_t2555686324  L_165 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_164, /*hidden argument*/NULL);
		Color_t2555686324  L_166 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_167 = Color_op_Equality_m1112359053(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_052a;
		}
	}
	{
		V_28 = 0;
		goto IL_0517;
	}

IL_04ce:
	{
		List_1_t1625501175 * L_168 = V_7;
		int32_t L_169 = V_28;
		NullCheck(L_168);
		CommandData_t153426433 * L_170 = List_1_get_Item_m1434826200(L_168, L_169, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		NullCheck(L_170);
		int32_t L_171 = L_170->get_command_1();
		if ((!(((uint32_t)L_171) == ((uint32_t)2))))
		{
			goto IL_0511;
		}
	}
	{
		List_1_t1625501175 * L_172 = V_7;
		int32_t L_173 = V_28;
		NullCheck(L_172);
		CommandData_t153426433 * L_174 = List_1_get_Item_m1434826200(L_172, L_173, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		NullCheck(L_174);
		RuntimeObject * L_175 = L_174->get_data_2();
		Color_t2555686324  L_176 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, ((*(Color32_t2600501292 *)((Color32_t2600501292 *)UnBox(L_175, Color32_t2600501292_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Color_t2555686324  L_177 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_178 = Color_op_Inequality_m3353772181(NULL /*static, unused*/, L_176, L_177, /*hidden argument*/NULL);
		if (!L_178)
		{
			goto IL_0511;
		}
	}
	{
		V_27 = (bool)1;
		goto IL_0525;
	}

IL_0511:
	{
		int32_t L_179 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)1));
	}

IL_0517:
	{
		int32_t L_180 = V_28;
		List_1_t1625501175 * L_181 = V_7;
		NullCheck(L_181);
		int32_t L_182 = List_1_get_Count_m2047056320(L_181, /*hidden argument*/List_1_get_Count_m2047056320_RuntimeMethod_var);
		if ((((int32_t)L_180) < ((int32_t)L_182)))
		{
			goto IL_04ce;
		}
	}

IL_0525:
	{
		goto IL_052d;
	}

IL_052a:
	{
		V_27 = (bool)1;
	}

IL_052d:
	{
		int32_t L_183 = V_11;
		V_29 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_183));
		int32_t L_184 = V_12;
		V_30 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_184));
		int32_t L_185 = V_13;
		V_31 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_185));
		int32_t L_186 = V_11;
		V_32 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_186));
		int32_t L_187 = V_11;
		V_33 = ((Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)L_187));
		V_34 = 0;
		V_35 = 0;
		V_36 = 0;
		TTFFontInfo_t2461483730 * L_188 = V_17;
		NullCheck(L_188);
		int32_t L_189 = TTFFontInfo_get_unitsPerEm_m567972289(L_188, /*hidden argument*/NULL);
		V_37 = ((float)((float)(1.0f)/(float)(((float)((float)L_189)))));
		bool L_190 = ___separateObjects10;
		if (!L_190)
		{
			goto IL_0580;
		}
	}
	{
		G_B104_0 = 1;
		goto IL_0585;
	}

IL_0580:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_191 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_texturePerLetter_44();
		G_B104_0 = ((int32_t)(L_191));
	}

IL_0585:
	{
		V_38 = (bool)G_B104_0;
		il2cpp_codegen_initobj((&V_41), sizeof(KernPair_t1917918210 ));
		V_42 = (std::numeric_limits<float>::max());
		V_43 = (-std::numeric_limits<float>::max());
		V_44 = (std::numeric_limits<float>::max());
		V_45 = (-std::numeric_limits<float>::max());
		List_1_t2869341516 * L_192 = (List_1_t2869341516 *)il2cpp_codegen_object_new(List_1_t2869341516_il2cpp_TypeInfo_var);
		List_1__ctor_m1951584216(L_192, /*hidden argument*/List_1__ctor_m1951584216_RuntimeMethod_var);
		V_46 = L_192;
		List_1_t2288335961 * L_193 = (List_1_t2288335961 *)il2cpp_codegen_object_new(List_1_t2288335961_il2cpp_TypeInfo_var);
		List_1__ctor_m23928396(L_193, /*hidden argument*/List_1__ctor_m23928396_RuntimeMethod_var);
		V_47 = L_193;
		List_1_t801739046 * L_194 = (List_1_t801739046 *)il2cpp_codegen_object_new(List_1_t801739046_il2cpp_TypeInfo_var);
		List_1__ctor_m1294661644(L_194, /*hidden argument*/List_1__ctor_m1294661644_RuntimeMethod_var);
		V_48 = L_194;
		V_49 = 1;
		V_50 = (bool)0;
		V_51 = 0;
		V_52 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_195 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (!L_195)
		{
			goto IL_05e0;
		}
	}
	{
		G_B107_0 = 0;
		goto IL_05e5;
	}

IL_05e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_196 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultJustification_41();
		G_B107_0 = ((int32_t)(L_196));
	}

IL_05e5:
	{
		V_53 = G_B107_0;
		List_1_t811567916 * L_197 = V_9;
		NullCheck(L_197);
		bool L_198 = List_1_Contains_m3999071656(L_197, ((int32_t)10), /*hidden argument*/List_1_Contains_m3999071656_RuntimeMethod_var);
		if (!L_198)
		{
			goto IL_05fb;
		}
	}
	{
		V_50 = (bool)1;
		V_49 = 2;
	}

IL_05fb:
	{
		float L_199 = ___lineWidth8;
		if ((!(((float)L_199) > ((float)(0.0f)))))
		{
			goto IL_060a;
		}
	}
	{
		V_49 = 2;
	}

IL_060a:
	{
		goto IL_13f6;
	}

IL_060f:
	{
		V_54 = (0.0f);
		V_55 = (0.0f);
		V_56 = (0.0f);
		V_57 = 0;
		V_58 = (0.0f);
		V_59 = (0.0f);
		float L_200 = ___size3;
		V_60 = L_200;
		float L_201 = ___size3;
		V_61 = L_201;
		V_62 = ((int32_t)32);
		V_63 = ((int32_t)32);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_202 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_203 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultFont_28();
		NullCheck(L_202);
		int32_t L_204 = L_203;
		TTFFontInfo_t2461483730 * L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		V_17 = L_205;
		TTFFontInfo_t2461483730 * L_206 = V_17;
		V_64 = L_206;
		V_8 = 0;
		V_65 = 0;
		int32_t L_207 = V_49;
		if ((!(((uint32_t)L_207) == ((uint32_t)1))))
		{
			goto IL_0673;
		}
	}
	{
		bool L_208 = V_50;
		if (!L_208)
		{
			goto IL_0673;
		}
	}
	{
		List_1_t2288335961 * L_209 = V_47;
		NullCheck(L_209);
		int32_t L_210 = List_1_get_Item_m923632340(L_209, 0, /*hidden argument*/List_1_get_Item_m923632340_RuntimeMethod_var);
		V_53 = L_210;
	}

IL_0673:
	{
		List_1_t1625501175 * L_211 = V_7;
		NullCheck(L_211);
		CommandData_t153426433 * L_212 = List_1_get_Item_m1434826200(L_211, 0, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		V_66 = L_212;
		CommandData_t153426433 * L_213 = V_66;
		V_67 = L_213;
		V_68 = (bool)1;
		V_69 = (0.0f);
		V_70 = 0;
		goto IL_137b;
	}

IL_0693:
	{
		goto IL_07f4;
	}

IL_0698:
	{
		CommandData_t153426433 * L_214 = V_66;
		NullCheck(L_214);
		int32_t L_215 = L_214->get_command_1();
		V_71 = L_215;
		int32_t L_216 = V_71;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_216, (int32_t)1)))
		{
			case 0:
			{
				goto IL_06cb;
			}
			case 1:
			{
				goto IL_06f1;
			}
			case 2:
			{
				goto IL_070c;
			}
			case 3:
			{
				goto IL_074f;
			}
			case 4:
			{
				goto IL_076a;
			}
			case 5:
			{
				goto IL_0798;
			}
			case 6:
			{
				goto IL_07bf;
			}
		}
	}
	{
		goto IL_07e4;
	}

IL_06cb:
	{
		CommandData_t153426433 * L_217 = V_66;
		NullCheck(L_217);
		RuntimeObject * L_218 = L_217->get_data_2();
		V_60 = ((*(float*)((float*)UnBox(L_218, Single_t1397266774_il2cpp_TypeInfo_var))));
		float L_219 = V_60;
		if ((!(((float)L_219) < ((float)(0.001f)))))
		{
			goto IL_06ec;
		}
	}
	{
		V_60 = (0.001f);
	}

IL_06ec:
	{
		goto IL_07e4;
	}

IL_06f1:
	{
		int32_t L_220 = V_49;
		if ((!(((uint32_t)L_220) == ((uint32_t)1))))
		{
			goto IL_0707;
		}
	}
	{
		CommandData_t153426433 * L_221 = V_66;
		NullCheck(L_221);
		RuntimeObject * L_222 = L_221->get_data_2();
		V_26 = ((*(Color32_t2600501292 *)((Color32_t2600501292 *)UnBox(L_222, Color32_t2600501292_il2cpp_TypeInfo_var))));
	}

IL_0707:
	{
		goto IL_07e4;
	}

IL_070c:
	{
		CommandData_t153426433 * L_223 = V_66;
		NullCheck(L_223);
		RuntimeObject * L_224 = L_223->get_data_2();
		V_18 = ((*(int32_t*)((int32_t*)UnBox(L_224, Int32_t2950945753_il2cpp_TypeInfo_var))));
		int32_t L_225 = V_18;
		if ((((int32_t)L_225) < ((int32_t)0)))
		{
			goto IL_074a;
		}
	}
	{
		int32_t L_226 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_227 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		NullCheck(L_227);
		if ((((int32_t)L_226) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_227)->max_length)))))))
		{
			goto IL_074a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		TTFFontInfoU5BU5D_t3022196135* L_228 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontInfo_54();
		int32_t L_229 = V_18;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		TTFFontInfo_t2461483730 * L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		V_17 = L_231;
		TTFFontInfo_t2461483730 * L_232 = V_17;
		NullCheck(L_232);
		int32_t L_233 = TTFFontInfo_get_unitsPerEm_m567972289(L_232, /*hidden argument*/NULL);
		V_37 = ((float)((float)(1.0f)/(float)(((float)((float)L_233)))));
	}

IL_074a:
	{
		goto IL_07e4;
	}

IL_074f:
	{
		int32_t L_234 = V_49;
		if ((!(((uint32_t)L_234) == ((uint32_t)1))))
		{
			goto IL_0765;
		}
	}
	{
		CommandData_t153426433 * L_235 = V_66;
		NullCheck(L_235);
		RuntimeObject * L_236 = L_235->get_data_2();
		V_59 = ((*(float*)((float*)UnBox(L_236, Single_t1397266774_il2cpp_TypeInfo_var))));
	}

IL_0765:
	{
		goto IL_07e4;
	}

IL_076a:
	{
		int32_t L_237 = V_49;
		if ((!(((uint32_t)L_237) == ((uint32_t)1))))
		{
			goto IL_0793;
		}
	}
	{
		CommandData_t153426433 * L_238 = V_66;
		NullCheck(L_238);
		RuntimeObject * L_239 = L_238->get_data_2();
		___extrudeDepth4 = ((*(float*)((float*)UnBox(L_239, Single_t1397266774_il2cpp_TypeInfo_var))));
		float L_240 = ___extrudeDepth4;
		if ((!(((float)L_240) < ((float)(0.0f)))))
		{
			goto IL_0793;
		}
	}
	{
		___extrudeDepth4 = (0.0f);
	}

IL_0793:
	{
		goto IL_07e4;
	}

IL_0798:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_241 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_241)
		{
			goto IL_07ba;
		}
	}
	{
		float L_242 = V_54;
		V_55 = L_242;
		float L_243 = V_54;
		CommandData_t153426433 * L_244 = V_66;
		NullCheck(L_244);
		RuntimeObject * L_245 = L_244->get_data_2();
		float L_246 = V_60;
		V_54 = ((float)il2cpp_codegen_add((float)L_243, (float)((float)il2cpp_codegen_multiply((float)((*(float*)((float*)UnBox(L_245, Single_t1397266774_il2cpp_TypeInfo_var)))), (float)L_246))));
	}

IL_07ba:
	{
		goto IL_07e4;
	}

IL_07bf:
	{
		int32_t L_247 = V_49;
		if ((!(((uint32_t)L_247) == ((uint32_t)2))))
		{
			goto IL_07df;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_248 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_248)
		{
			goto IL_07df;
		}
	}
	{
		CommandData_t153426433 * L_249 = V_66;
		NullCheck(L_249);
		RuntimeObject * L_250 = L_249->get_data_2();
		V_53 = ((*(int32_t*)((int32_t*)UnBox(L_250, Justify_t816261219_il2cpp_TypeInfo_var))));
	}

IL_07df:
	{
		goto IL_07e4;
	}

IL_07e4:
	{
		List_1_t1625501175 * L_251 = V_7;
		int32_t L_252 = V_8;
		int32_t L_253 = ((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1));
		V_8 = L_253;
		NullCheck(L_251);
		CommandData_t153426433 * L_254 = List_1_get_Item_m1434826200(L_251, L_253, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		V_66 = L_254;
	}

IL_07f4:
	{
		CommandData_t153426433 * L_255 = V_66;
		NullCheck(L_255);
		int32_t L_256 = L_255->get_index_0();
		int32_t L_257 = V_70;
		if ((((int32_t)L_256) == ((int32_t)L_257)))
		{
			goto IL_0698;
		}
	}
	{
		float L_258 = V_37;
		float L_259 = V_60;
		V_72 = ((float)il2cpp_codegen_multiply((float)L_258, (float)L_259));
		Il2CppChar L_260 = V_62;
		V_63 = L_260;
		List_1_t811567916 * L_261 = V_9;
		int32_t L_262 = V_70;
		NullCheck(L_261);
		Il2CppChar L_263 = List_1_get_Item_m1333520732(L_261, L_262, /*hidden argument*/List_1_get_Item_m1333520732_RuntimeMethod_var);
		V_62 = L_263;
		Il2CppChar L_264 = V_62;
		if (L_264)
		{
			goto IL_0824;
		}
	}
	{
		goto IL_1375;
	}

IL_0824:
	{
		Il2CppChar L_265 = V_62;
		if ((!(((uint32_t)L_265) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_086c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_266 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_266)
		{
			goto IL_0854;
		}
	}
	{
		float L_267 = V_54;
		V_56 = L_267;
		float L_268 = V_60;
		V_61 = L_268;
		TTFFontInfo_t2461483730 * L_269 = V_17;
		V_64 = L_269;
		int32_t L_270 = V_8;
		V_65 = L_270;
		CommandData_t153426433 * L_271 = V_66;
		V_67 = L_271;
		int32_t L_272 = V_70;
		V_57 = L_272;
		goto IL_0867;
	}

IL_0854:
	{
		float L_273 = V_58;
		TTFFontInfo_t2461483730 * L_274 = V_17;
		NullCheck(L_274);
		int32_t L_275 = TTFFontInfo_get_lineHeight_m4132344405(L_274, /*hidden argument*/NULL);
		float L_276 = ___lineSpacing7;
		float L_277 = V_72;
		V_58 = ((float)il2cpp_codegen_subtract((float)L_273, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_275))), (float)L_276)), (float)L_277))));
	}

IL_0867:
	{
		goto IL_094c;
	}

IL_086c:
	{
		Il2CppChar L_278 = V_62;
		if ((!(((uint32_t)L_278) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_08ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_279 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_tabStop_39();
		if ((!(((float)L_279) > ((float)(0.0f)))))
		{
			goto IL_08a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_280 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_280)
		{
			goto IL_08a8;
		}
	}
	{
		float L_281 = V_54;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_282 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_tabStop_39();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_283 = ceilf(((float)((float)L_281/(float)L_282)));
		float L_284 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_tabStop_39();
		V_54 = ((float)il2cpp_codegen_multiply((float)L_283, (float)L_284));
		goto IL_1375;
	}

IL_08a8:
	{
		goto IL_094c;
	}

IL_08ad:
	{
		Il2CppChar L_285 = V_62;
		if ((!(((uint32_t)L_285) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_094c;
		}
	}
	{
		int32_t L_286 = V_49;
		if ((!(((uint32_t)L_286) == ((uint32_t)2))))
		{
			goto IL_08dc;
		}
	}
	{
		List_1_t2869341516 * L_287 = V_46;
		float L_288 = V_54;
		NullCheck(L_287);
		List_1_Add_m3249932132(L_287, L_288, /*hidden argument*/List_1_Add_m3249932132_RuntimeMethod_var);
		List_1_t2288335961 * L_289 = V_47;
		int32_t L_290 = V_53;
		NullCheck(L_289);
		List_1_Add_m1958734212(L_289, L_290, /*hidden argument*/List_1_Add_m1958734212_RuntimeMethod_var);
		V_56 = (0.0f);
		goto IL_08fa;
	}

IL_08dc:
	{
		int32_t L_291 = V_51;
		int32_t L_292 = ((int32_t)il2cpp_codegen_add((int32_t)L_291, (int32_t)1));
		V_51 = L_292;
		List_1_t2288335961 * L_293 = V_47;
		NullCheck(L_293);
		int32_t L_294 = List_1_get_Count_m649928991(L_293, /*hidden argument*/List_1_get_Count_m649928991_RuntimeMethod_var);
		if ((((int32_t)L_292) >= ((int32_t)L_294)))
		{
			goto IL_08fa;
		}
	}
	{
		List_1_t2288335961 * L_295 = V_47;
		int32_t L_296 = V_51;
		NullCheck(L_295);
		int32_t L_297 = List_1_get_Item_m923632340(L_295, L_296, /*hidden argument*/List_1_get_Item_m923632340_RuntimeMethod_var);
		V_53 = L_297;
	}

IL_08fa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_298 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_298)
		{
			goto IL_0923;
		}
	}
	{
		float L_299 = V_58;
		TTFFontInfo_t2461483730 * L_300 = V_17;
		NullCheck(L_300);
		int32_t L_301 = TTFFontInfo_get_lineHeight_m4132344405(L_300, /*hidden argument*/NULL);
		float L_302 = ___lineSpacing7;
		float L_303 = V_72;
		V_58 = ((float)il2cpp_codegen_subtract((float)L_299, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_301))), (float)L_302)), (float)L_303))));
		V_54 = (0.0f);
		goto IL_0944;
	}

IL_0923:
	{
		V_58 = (0.0f);
		float L_304 = V_54;
		float L_305 = V_69;
		float L_306 = V_16;
		float L_307 = V_37;
		float L_308 = V_72;
		float L_309 = V_15;
		V_54 = ((float)il2cpp_codegen_add((float)L_304, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_305, (float)((float)((float)L_306/(float)L_307)))), (float)((float)il2cpp_codegen_multiply((float)L_308, (float)L_309))))));
		V_69 = (0.0f);
	}

IL_0944:
	{
		V_68 = (bool)1;
		goto IL_1375;
	}

IL_094c:
	{
		List_1_t128053199 * L_310 = V_10;
		int32_t L_311 = V_70;
		NullCheck(L_310);
		int32_t L_312 = List_1_get_Item_m1363558904(L_310, L_311, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		V_73 = L_312;
		TTFFontInfo_t2461483730 * L_313 = V_17;
		NullCheck(L_313);
		bool L_314 = TTFFontInfo_get_hasKerning_m1493146458(L_313, /*hidden argument*/NULL);
		if (!L_314)
		{
			goto IL_09b9;
		}
	}
	{
		bool L_315 = V_68;
		if (L_315)
		{
			goto IL_09b9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_316 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_316)
		{
			goto IL_09b9;
		}
	}
	{
		List_1_t128053199 * L_317 = V_10;
		int32_t L_318 = V_70;
		NullCheck(L_317);
		int32_t L_319 = List_1_get_Item_m1363558904(L_317, ((int32_t)il2cpp_codegen_subtract((int32_t)L_318, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		(&V_41)->set_left_0(L_319);
		int32_t L_320 = V_73;
		(&V_41)->set_right_1(L_320);
		TTFFontInfo_t2461483730 * L_321 = V_17;
		NullCheck(L_321);
		Dictionary_2_t4026917929 * L_322 = TTFFontInfo_get_kernDictionary_m1736341401(L_321, /*hidden argument*/NULL);
		KernPair_t1917918210  L_323 = V_41;
		NullCheck(L_322);
		bool L_324 = Dictionary_2_ContainsKey_m1394646794(L_322, L_323, /*hidden argument*/Dictionary_2_ContainsKey_m1394646794_RuntimeMethod_var);
		if (!L_324)
		{
			goto IL_09b9;
		}
	}
	{
		float L_325 = V_54;
		TTFFontInfo_t2461483730 * L_326 = V_17;
		NullCheck(L_326);
		Dictionary_2_t4026917929 * L_327 = TTFFontInfo_get_kernDictionary_m1736341401(L_326, /*hidden argument*/NULL);
		KernPair_t1917918210  L_328 = V_41;
		NullCheck(L_327);
		int16_t L_329 = Dictionary_2_get_Item_m1480194675(L_327, L_328, /*hidden argument*/Dictionary_2_get_Item_m1480194675_RuntimeMethod_var);
		float L_330 = V_72;
		V_54 = ((float)il2cpp_codegen_add((float)L_325, (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_329))), (float)L_330))));
	}

IL_09b9:
	{
		TTFFontInfo_t2461483730 * L_331 = V_17;
		NullCheck(L_331);
		Dictionary_2_t2651833894 * L_332 = TTFFontInfo_get_glyphDictionary_m3439082376(L_331, /*hidden argument*/NULL);
		Il2CppChar L_333 = V_62;
		NullCheck(L_332);
		GlyphData_t620095268 * L_334 = Dictionary_2_get_Item_m323241701(L_332, L_333, /*hidden argument*/Dictionary_2_get_Item_m323241701_RuntimeMethod_var);
		V_74 = L_334;
		GlyphData_t620095268 * L_335 = V_74;
		NullCheck(L_335);
		int32_t L_336 = GlyphData_get_vertexCount_m3966091887(L_335, /*hidden argument*/NULL);
		V_75 = L_336;
		int32_t L_337 = V_75;
		if ((((int32_t)L_337) <= ((int32_t)0)))
		{
			goto IL_124d;
		}
	}
	{
		int32_t L_338 = V_49;
		if ((!(((uint32_t)L_338) == ((uint32_t)1))))
		{
			goto IL_124d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_339 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (!L_339)
		{
			goto IL_0a24;
		}
	}
	{
		bool L_340 = V_68;
		if (L_340)
		{
			goto IL_0a24;
		}
	}
	{
		float L_341 = V_58;
		GlyphData_t620095268 * L_342 = V_74;
		NullCheck(L_342);
		int32_t L_343 = GlyphData_get_yMax_m2095962185(L_342, /*hidden argument*/NULL);
		float L_344 = V_72;
		GlyphData_t620095268 * L_345 = V_74;
		NullCheck(L_345);
		int32_t L_346 = GlyphData_get_yMin_m2096879697(L_345, /*hidden argument*/NULL);
		float L_347 = V_72;
		TTFFontInfo_t2461483730 * L_348 = V_17;
		NullCheck(L_348);
		int32_t L_349 = TTFFontInfo_get_lineHeight_m4132344405(L_348, /*hidden argument*/NULL);
		float L_350 = ___lineSpacing7;
		float L_351 = V_72;
		V_58 = ((float)il2cpp_codegen_subtract((float)L_341, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_343))), (float)L_344)), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_346))), (float)L_347)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_349))), (float)((float)il2cpp_codegen_subtract((float)L_350, (float)(1.0f))))), (float)L_351))))));
	}

IL_0a24:
	{
		GlyphData_t620095268 * L_352 = V_74;
		NullCheck(L_352);
		float L_353 = GlyphData_get_scaleFactor_m481370193(L_352, /*hidden argument*/NULL);
		float L_354 = V_72;
		if ((((float)L_353) == ((float)L_354)))
		{
			goto IL_0a42;
		}
	}
	{
		GlyphData_t620095268 * L_355 = V_74;
		float L_356 = V_72;
		bool L_357 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_358 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		NullCheck(L_355);
		GlyphData_ScaleVertices_m46715125(L_355, L_356, L_357, L_358, /*hidden argument*/NULL);
	}

IL_0a42:
	{
		bool L_359 = V_14;
		if (!L_359)
		{
			goto IL_0a65;
		}
	}
	{
		GlyphData_t620095268 * L_360 = V_74;
		NullCheck(L_360);
		float L_361 = GlyphData_get_extrudeDepth_m1881518986(L_360, /*hidden argument*/NULL);
		float L_362 = ___extrudeDepth4;
		if ((((float)L_361) == ((float)L_362)))
		{
			goto IL_0a65;
		}
	}
	{
		GlyphData_t620095268 * L_363 = V_74;
		float L_364 = ___extrudeDepth4;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_365 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		NullCheck(L_363);
		GlyphData_SetExtrudeDepth_m390707552(L_363, L_364, L_365, /*hidden argument*/NULL);
	}

IL_0a65:
	{
		GlyphData_t620095268 * L_366 = V_74;
		NullCheck(L_366);
		Vector3U5BU5D_t1718750761* L_367 = GlyphData_get_vertices_m3909097520(L_366, /*hidden argument*/NULL);
		V_39 = L_367;
		bool L_368 = ___separateObjects10;
		if (!L_368)
		{
			goto IL_0ac2;
		}
	}
	{
		int32_t L_369 = V_75;
		V_29 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_369));
		GlyphData_t620095268 * L_370 = V_74;
		NullCheck(L_370);
		int32_t L_371 = GlyphData_get_triCount_m847416089(L_370, /*hidden argument*/NULL);
		V_30 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_371));
		bool L_372 = V_1;
		if (!L_372)
		{
			goto IL_0aa3;
		}
	}
	{
		GlyphData_t620095268 * L_373 = V_74;
		NullCheck(L_373);
		int32_t L_374 = GlyphData_get_triCount2_m2560667630(L_373, /*hidden argument*/NULL);
		V_31 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_374));
		V_36 = 0;
	}

IL_0aa3:
	{
		int32_t L_375 = V_75;
		V_32 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_375));
		bool L_376 = V_27;
		if (!L_376)
		{
			goto IL_0abc;
		}
	}
	{
		int32_t L_377 = V_75;
		V_33 = ((Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)L_377));
	}

IL_0abc:
	{
		V_34 = 0;
		V_35 = 0;
	}

IL_0ac2:
	{
		GlyphData_t620095268 * L_378 = V_74;
		NullCheck(L_378);
		int32_t L_379 = GlyphData_get_xMax_m3682249102(L_378, /*hidden argument*/NULL);
		float L_380 = V_72;
		float L_381 = V_54;
		V_76 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_379))), (float)L_380)), (float)L_381));
		GlyphData_t620095268 * L_382 = V_74;
		NullCheck(L_382);
		int32_t L_383 = GlyphData_get_xMin_m3683166614(L_382, /*hidden argument*/NULL);
		float L_384 = V_72;
		float L_385 = V_54;
		V_77 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_383))), (float)L_384)), (float)L_385));
		float L_386 = V_76;
		float L_387 = V_43;
		if ((!(((float)L_386) > ((float)L_387))))
		{
			goto IL_0aef;
		}
	}
	{
		float L_388 = V_76;
		V_43 = L_388;
	}

IL_0aef:
	{
		float L_389 = V_77;
		float L_390 = V_42;
		if ((!(((float)L_389) < ((float)L_390))))
		{
			goto IL_0afc;
		}
	}
	{
		float L_391 = V_77;
		V_42 = L_391;
	}

IL_0afc:
	{
		TTFFontInfo_t2461483730 * L_392 = V_17;
		NullCheck(L_392);
		int32_t L_393 = TTFFontInfo_get_fontYMax_m2984688855(L_392, /*hidden argument*/NULL);
		float L_394 = V_72;
		float L_395 = V_58;
		V_76 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_393))), (float)L_394)), (float)L_395));
		TTFFontInfo_t2461483730 * L_396 = V_17;
		NullCheck(L_396);
		int32_t L_397 = TTFFontInfo_get_fontYMin_m716773375(L_396, /*hidden argument*/NULL);
		float L_398 = V_72;
		float L_399 = V_58;
		V_77 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_397))), (float)L_398)), (float)L_399));
		float L_400 = V_76;
		float L_401 = V_45;
		if ((!(((float)L_400) > ((float)L_401))))
		{
			goto IL_0b29;
		}
	}
	{
		float L_402 = V_76;
		V_45 = L_402;
	}

IL_0b29:
	{
		float L_403 = V_77;
		float L_404 = V_44;
		if ((!(((float)L_403) < ((float)L_404))))
		{
			goto IL_0b36;
		}
	}
	{
		float L_405 = V_77;
		V_44 = L_405;
	}

IL_0b36:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_406 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (!L_406)
		{
			goto IL_0b5f;
		}
	}
	{
		GlyphData_t620095268 * L_407 = V_74;
		NullCheck(L_407);
		int32_t L_408 = GlyphData_get_xMax_m3682249102(L_407, /*hidden argument*/NULL);
		GlyphData_t620095268 * L_409 = V_74;
		NullCheck(L_409);
		int32_t L_410 = GlyphData_get_xMin_m3683166614(L_409, /*hidden argument*/NULL);
		V_78 = (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_408, (int32_t)L_410)))));
		float L_411 = V_78;
		float L_412 = V_69;
		if ((!(((float)L_411) > ((float)L_412))))
		{
			goto IL_0b5f;
		}
	}
	{
		float L_413 = V_78;
		V_69 = L_413;
	}

IL_0b5f:
	{
		bool L_414 = V_38;
		if (!L_414)
		{
			goto IL_0d24;
		}
	}
	{
		GlyphData_t620095268 * L_415 = V_74;
		NullCheck(L_415);
		int32_t L_416 = GlyphData_get_xMax_m3682249102(L_415, /*hidden argument*/NULL);
		float L_417 = V_72;
		V_79 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_416))), (float)L_417));
		GlyphData_t620095268 * L_418 = V_74;
		NullCheck(L_418);
		int32_t L_419 = GlyphData_get_xMin_m3683166614(L_418, /*hidden argument*/NULL);
		float L_420 = V_72;
		V_80 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_419))), (float)L_420));
		GlyphData_t620095268 * L_421 = V_74;
		NullCheck(L_421);
		int32_t L_422 = GlyphData_get_yMax_m2095962185(L_421, /*hidden argument*/NULL);
		float L_423 = V_72;
		V_81 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_422))), (float)L_423));
		GlyphData_t620095268 * L_424 = V_74;
		NullCheck(L_424);
		int32_t L_425 = GlyphData_get_yMin_m2096879697(L_424, /*hidden argument*/NULL);
		float L_426 = V_72;
		V_82 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_425))), (float)L_426));
		float L_427 = V_79;
		float L_428 = V_80;
		V_83 = ((float)il2cpp_codegen_subtract((float)L_427, (float)L_428));
		float L_429 = V_81;
		float L_430 = V_82;
		V_84 = ((float)il2cpp_codegen_subtract((float)L_429, (float)L_430));
		bool L_431 = V_1;
		if (L_431)
		{
			goto IL_0c14;
		}
	}
	{
		V_85 = 0;
		goto IL_0c06;
	}

IL_0bb6:
	{
		Vector2U5BU5D_t1457185986* L_432 = V_32;
		int32_t L_433 = V_85;
		int32_t L_434 = V_34;
		NullCheck(L_432);
		Vector3U5BU5D_t1718750761* L_435 = V_39;
		int32_t L_436 = V_85;
		NullCheck(L_435);
		float L_437 = ((L_435)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_436)))->get_x_1();
		float L_438 = V_80;
		float L_439 = V_83;
		((L_432)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_433, (int32_t)L_434)))))->set_x_0(((float)((float)((float)il2cpp_codegen_subtract((float)L_437, (float)L_438))/(float)L_439)));
		Vector2U5BU5D_t1457185986* L_440 = V_32;
		int32_t L_441 = V_85;
		int32_t L_442 = V_34;
		NullCheck(L_440);
		Vector3U5BU5D_t1718750761* L_443 = V_39;
		int32_t L_444 = V_85;
		NullCheck(L_443);
		float L_445 = ((L_443)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_444)))->get_y_2();
		float L_446 = V_82;
		float L_447 = V_84;
		((L_440)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_441, (int32_t)L_442)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_445, (float)L_446))/(float)L_447)));
		int32_t L_448 = V_85;
		V_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_448, (int32_t)1));
	}

IL_0c06:
	{
		int32_t L_449 = V_85;
		int32_t L_450 = V_75;
		if ((((int32_t)L_449) < ((int32_t)L_450)))
		{
			goto IL_0bb6;
		}
	}
	{
		goto IL_0d24;
	}

IL_0c14:
	{
		GlyphData_t620095268 * L_451 = V_74;
		NullCheck(L_451);
		int32_t L_452 = GlyphData_get_frontVertIndex_m2980225376(L_451, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_453 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		G_B205_0 = L_452;
		if (!L_453)
		{
			G_B206_0 = L_452;
			goto IL_0c2b;
		}
	}
	{
		G_B207_0 = 2;
		G_B207_1 = G_B205_0;
		goto IL_0c2c;
	}

IL_0c2b:
	{
		G_B207_0 = 1;
		G_B207_1 = G_B206_0;
	}

IL_0c2c:
	{
		V_86 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B207_1, (int32_t)G_B207_0));
		V_87 = 0;
		goto IL_0c87;
	}

IL_0c37:
	{
		Vector2U5BU5D_t1457185986* L_454 = V_32;
		int32_t L_455 = V_87;
		int32_t L_456 = V_34;
		NullCheck(L_454);
		Vector3U5BU5D_t1718750761* L_457 = V_39;
		int32_t L_458 = V_87;
		NullCheck(L_457);
		float L_459 = ((L_457)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_458)))->get_x_1();
		float L_460 = V_80;
		float L_461 = V_83;
		((L_454)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_455, (int32_t)L_456)))))->set_x_0(((float)((float)((float)il2cpp_codegen_subtract((float)L_459, (float)L_460))/(float)L_461)));
		Vector2U5BU5D_t1457185986* L_462 = V_32;
		int32_t L_463 = V_87;
		int32_t L_464 = V_34;
		NullCheck(L_462);
		Vector3U5BU5D_t1718750761* L_465 = V_39;
		int32_t L_466 = V_87;
		NullCheck(L_465);
		float L_467 = ((L_465)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_466)))->get_y_2();
		float L_468 = V_82;
		float L_469 = V_84;
		((L_462)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_463, (int32_t)L_464)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_467, (float)L_468))/(float)L_469)));
		int32_t L_470 = V_87;
		V_87 = ((int32_t)il2cpp_codegen_add((int32_t)L_470, (int32_t)1));
	}

IL_0c87:
	{
		int32_t L_471 = V_87;
		int32_t L_472 = V_86;
		if ((((int32_t)L_471) < ((int32_t)L_472)))
		{
			goto IL_0c37;
		}
	}
	{
		int32_t L_473 = V_86;
		V_88 = L_473;
		goto IL_0d1b;
	}

IL_0c99:
	{
		Vector2U5BU5D_t1457185986* L_474 = V_32;
		int32_t L_475 = V_88;
		int32_t L_476 = V_34;
		NullCheck(L_474);
		((L_474)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_475, (int32_t)L_476)))))->set_x_0((0.0f));
		Vector2U5BU5D_t1457185986* L_477 = V_32;
		int32_t L_478 = V_88;
		int32_t L_479 = V_34;
		NullCheck(L_477);
		Vector3U5BU5D_t1718750761* L_480 = V_39;
		int32_t L_481 = V_88;
		NullCheck(L_480);
		float L_482 = ((L_480)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_481)))->get_y_2();
		float L_483 = V_82;
		float L_484 = V_84;
		((L_477)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_478, (int32_t)L_479)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_482, (float)L_483))/(float)L_484)));
		Vector2U5BU5D_t1457185986* L_485 = V_32;
		int32_t L_486 = V_88;
		int32_t L_487 = V_34;
		NullCheck(L_485);
		((L_485)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_486, (int32_t)L_487)), (int32_t)1)))))->set_x_0((1.0f));
		Vector2U5BU5D_t1457185986* L_488 = V_32;
		int32_t L_489 = V_88;
		int32_t L_490 = V_34;
		NullCheck(L_488);
		Vector3U5BU5D_t1718750761* L_491 = V_39;
		int32_t L_492 = V_88;
		NullCheck(L_491);
		float L_493 = ((L_491)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_492, (int32_t)1)))))->get_y_2();
		float L_494 = V_82;
		float L_495 = V_84;
		((L_488)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_489, (int32_t)L_490)), (int32_t)1)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_493, (float)L_494))/(float)L_495)));
		int32_t L_496 = V_88;
		V_88 = ((int32_t)il2cpp_codegen_add((int32_t)L_496, (int32_t)2));
	}

IL_0d1b:
	{
		int32_t L_497 = V_88;
		int32_t L_498 = V_75;
		if ((((int32_t)L_497) < ((int32_t)L_498)))
		{
			goto IL_0c99;
		}
	}

IL_0d24:
	{
		bool L_499 = V_38;
		if (L_499)
		{
			goto IL_0d58;
		}
	}
	{
		bool L_500 = V_1;
		if (!L_500)
		{
			goto IL_0d58;
		}
	}
	{
		List_1_t801739046 * L_501 = V_48;
		GlyphData_t620095268 * L_502 = V_74;
		NullCheck(L_502);
		int32_t L_503 = GlyphData_get_frontVertIndex_m2980225376(L_502, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_504 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_includeBackface_43();
		G_B216_0 = L_503;
		G_B216_1 = L_501;
		if (!L_504)
		{
			G_B217_0 = L_503;
			G_B217_1 = L_501;
			goto IL_0d4a;
		}
	}
	{
		G_B218_0 = 2;
		G_B218_1 = G_B216_0;
		G_B218_2 = G_B216_1;
		goto IL_0d4b;
	}

IL_0d4a:
	{
		G_B218_0 = 1;
		G_B218_1 = G_B217_0;
		G_B218_2 = G_B217_1;
	}

IL_0d4b:
	{
		int32_t L_505 = V_75;
		EdgeData_t3624631600 * L_506 = (EdgeData_t3624631600 *)il2cpp_codegen_object_new(EdgeData_t3624631600_il2cpp_TypeInfo_var);
		EdgeData__ctor_m2545318485(L_506, ((int32_t)il2cpp_codegen_multiply((int32_t)G_B218_1, (int32_t)G_B218_0)), L_505, /*hidden argument*/NULL);
		NullCheck(G_B218_2);
		List_1_Add_m573970714(G_B218_2, L_506, /*hidden argument*/List_1_Add_m573970714_RuntimeMethod_var);
	}

IL_0d58:
	{
		bool L_507 = V_27;
		if (!L_507)
		{
			goto IL_0d89;
		}
	}
	{
		V_89 = 0;
		goto IL_0d80;
	}

IL_0d67:
	{
		Color32U5BU5D_t3850468773* L_508 = V_33;
		int32_t L_509 = V_89;
		int32_t L_510 = V_34;
		NullCheck(L_508);
		Color32_t2600501292  L_511 = V_26;
		*(Color32_t2600501292 *)((L_508)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_509, (int32_t)L_510))))) = L_511;
		int32_t L_512 = V_89;
		V_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_512, (int32_t)1));
	}

IL_0d80:
	{
		int32_t L_513 = V_89;
		int32_t L_514 = V_75;
		if ((((int32_t)L_513) < ((int32_t)L_514)))
		{
			goto IL_0d67;
		}
	}

IL_0d89:
	{
		GlyphData_t620095268 * L_515 = V_74;
		NullCheck(L_515);
		Int32U5BU5D_t385246372* L_516 = GlyphData_get_triangles_m224050330(L_515, /*hidden argument*/NULL);
		V_40 = L_516;
		GlyphData_t620095268 * L_517 = V_74;
		NullCheck(L_517);
		int32_t L_518 = GlyphData_get_triCount_m847416089(L_517, /*hidden argument*/NULL);
		V_90 = L_518;
		V_91 = 0;
		goto IL_0dde;
	}

IL_0da3:
	{
		Int32U5BU5D_t385246372* L_519 = V_30;
		int32_t L_520 = V_35;
		Int32U5BU5D_t385246372* L_521 = V_40;
		int32_t L_522 = V_91;
		NullCheck(L_521);
		int32_t L_523 = L_522;
		int32_t L_524 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_523));
		int32_t L_525 = V_34;
		NullCheck(L_519);
		(L_519)->SetAt(static_cast<il2cpp_array_size_t>(L_520), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_524, (int32_t)L_525)));
		Int32U5BU5D_t385246372* L_526 = V_30;
		int32_t L_527 = V_35;
		Int32U5BU5D_t385246372* L_528 = V_40;
		int32_t L_529 = V_91;
		NullCheck(L_528);
		int32_t L_530 = ((int32_t)il2cpp_codegen_add((int32_t)L_529, (int32_t)1));
		int32_t L_531 = (L_528)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		int32_t L_532 = V_34;
		NullCheck(L_526);
		(L_526)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_527, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_531, (int32_t)L_532)));
		Int32U5BU5D_t385246372* L_533 = V_30;
		int32_t L_534 = V_35;
		Int32U5BU5D_t385246372* L_535 = V_40;
		int32_t L_536 = V_91;
		NullCheck(L_535);
		int32_t L_537 = ((int32_t)il2cpp_codegen_add((int32_t)L_536, (int32_t)2));
		int32_t L_538 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = V_34;
		NullCheck(L_533);
		(L_533)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_534, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_538, (int32_t)L_539)));
		int32_t L_540 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_540, (int32_t)3));
		int32_t L_541 = V_91;
		V_91 = ((int32_t)il2cpp_codegen_add((int32_t)L_541, (int32_t)3));
	}

IL_0dde:
	{
		int32_t L_542 = V_91;
		int32_t L_543 = V_90;
		if ((((int32_t)L_542) < ((int32_t)L_543)))
		{
			goto IL_0da3;
		}
	}
	{
		bool L_544 = V_1;
		if (!L_544)
		{
			goto IL_0e4b;
		}
	}
	{
		GlyphData_t620095268 * L_545 = V_74;
		NullCheck(L_545);
		Int32U5BU5D_t385246372* L_546 = GlyphData_get_triangles2_m3964612917(L_545, /*hidden argument*/NULL);
		V_40 = L_546;
		GlyphData_t620095268 * L_547 = V_74;
		NullCheck(L_547);
		int32_t L_548 = GlyphData_get_triCount2_m2560667630(L_547, /*hidden argument*/NULL);
		V_90 = L_548;
		V_92 = 0;
		goto IL_0e42;
	}

IL_0e07:
	{
		Int32U5BU5D_t385246372* L_549 = V_31;
		int32_t L_550 = V_36;
		Int32U5BU5D_t385246372* L_551 = V_40;
		int32_t L_552 = V_92;
		NullCheck(L_551);
		int32_t L_553 = L_552;
		int32_t L_554 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		int32_t L_555 = V_34;
		NullCheck(L_549);
		(L_549)->SetAt(static_cast<il2cpp_array_size_t>(L_550), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_554, (int32_t)L_555)));
		Int32U5BU5D_t385246372* L_556 = V_31;
		int32_t L_557 = V_36;
		Int32U5BU5D_t385246372* L_558 = V_40;
		int32_t L_559 = V_92;
		NullCheck(L_558);
		int32_t L_560 = ((int32_t)il2cpp_codegen_add((int32_t)L_559, (int32_t)1));
		int32_t L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		int32_t L_562 = V_34;
		NullCheck(L_556);
		(L_556)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_557, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_561, (int32_t)L_562)));
		Int32U5BU5D_t385246372* L_563 = V_31;
		int32_t L_564 = V_36;
		Int32U5BU5D_t385246372* L_565 = V_40;
		int32_t L_566 = V_92;
		NullCheck(L_565);
		int32_t L_567 = ((int32_t)il2cpp_codegen_add((int32_t)L_566, (int32_t)2));
		int32_t L_568 = (L_565)->GetAt(static_cast<il2cpp_array_size_t>(L_567));
		int32_t L_569 = V_34;
		NullCheck(L_563);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_564, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_568, (int32_t)L_569)));
		int32_t L_570 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_570, (int32_t)3));
		int32_t L_571 = V_92;
		V_92 = ((int32_t)il2cpp_codegen_add((int32_t)L_571, (int32_t)3));
	}

IL_0e42:
	{
		int32_t L_572 = V_92;
		int32_t L_573 = V_90;
		if ((((int32_t)L_572) < ((int32_t)L_573)))
		{
			goto IL_0e07;
		}
	}

IL_0e4b:
	{
		int32_t L_574 = V_53;
		if (!L_574)
		{
			goto IL_0f93;
		}
	}
	{
		V_93 = (0.0f);
		int32_t L_575 = V_53;
		if ((!(((uint32_t)L_575) == ((uint32_t)2))))
		{
			goto IL_0e74;
		}
	}
	{
		float L_576 = V_52;
		List_1_t2869341516 * L_577 = V_46;
		int32_t L_578 = V_51;
		NullCheck(L_577);
		float L_579 = List_1_get_Item_m2456367083(L_577, L_578, /*hidden argument*/List_1_get_Item_m2456367083_RuntimeMethod_var);
		V_93 = ((float)il2cpp_codegen_subtract((float)L_576, (float)L_579));
		goto IL_0e90;
	}

IL_0e74:
	{
		int32_t L_580 = V_53;
		if ((!(((uint32_t)L_580) == ((uint32_t)1))))
		{
			goto IL_0e90;
		}
	}
	{
		float L_581 = V_52;
		List_1_t2869341516 * L_582 = V_46;
		int32_t L_583 = V_51;
		NullCheck(L_582);
		float L_584 = List_1_get_Item_m2456367083(L_582, L_583, /*hidden argument*/List_1_get_Item_m2456367083_RuntimeMethod_var);
		V_93 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_581, (float)L_584))/(float)(2.0f)));
	}

IL_0e90:
	{
		bool L_585 = ___separateObjects10;
		if (L_585)
		{
			goto IL_0f18;
		}
	}
	{
		V_94 = 0;
		goto IL_0f0a;
	}

IL_0e9f:
	{
		Vector3U5BU5D_t1718750761* L_586 = V_29;
		int32_t L_587 = V_34;
		NullCheck(L_586);
		Vector3U5BU5D_t1718750761* L_588 = V_39;
		int32_t L_589 = V_94;
		NullCheck(L_588);
		float L_590 = ((L_588)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_589)))->get_x_1();
		float L_591 = V_54;
		float L_592 = V_93;
		((L_586)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_587)))->set_x_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_590, (float)L_591)), (float)L_592)));
		Vector3U5BU5D_t1718750761* L_593 = V_29;
		int32_t L_594 = V_34;
		NullCheck(L_593);
		Vector3U5BU5D_t1718750761* L_595 = V_39;
		int32_t L_596 = V_94;
		NullCheck(L_595);
		float L_597 = ((L_595)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_596)))->get_y_2();
		float L_598 = V_58;
		((L_593)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_594)))->set_y_2(((float)il2cpp_codegen_add((float)L_597, (float)L_598)));
		Vector3U5BU5D_t1718750761* L_599 = V_29;
		int32_t L_600 = V_34;
		int32_t L_601 = L_600;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_601, (int32_t)1));
		NullCheck(L_599);
		Vector3U5BU5D_t1718750761* L_602 = V_39;
		int32_t L_603 = V_94;
		NullCheck(L_602);
		float L_604 = ((L_602)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_603)))->get_z_3();
		float L_605 = V_59;
		((L_599)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_601)))->set_z_3(((float)il2cpp_codegen_add((float)L_604, (float)L_605)));
		int32_t L_606 = V_94;
		V_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_606, (int32_t)1));
	}

IL_0f0a:
	{
		int32_t L_607 = V_94;
		int32_t L_608 = V_75;
		if ((((int32_t)L_607) < ((int32_t)L_608)))
		{
			goto IL_0e9f;
		}
	}
	{
		goto IL_0f8e;
	}

IL_0f18:
	{
		V_95 = 0;
		goto IL_0f85;
	}

IL_0f20:
	{
		Vector3U5BU5D_t1718750761* L_609 = V_29;
		int32_t L_610 = V_34;
		NullCheck(L_609);
		Vector3U5BU5D_t1718750761* L_611 = V_39;
		int32_t L_612 = V_95;
		NullCheck(L_611);
		float L_613 = ((L_611)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_612)))->get_x_1();
		float L_614 = V_93;
		((L_609)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_610)))->set_x_1(((float)il2cpp_codegen_add((float)L_613, (float)L_614)));
		Vector3U5BU5D_t1718750761* L_615 = V_29;
		int32_t L_616 = V_34;
		NullCheck(L_615);
		Vector3U5BU5D_t1718750761* L_617 = V_39;
		int32_t L_618 = V_95;
		NullCheck(L_617);
		float L_619 = ((L_617)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_618)))->get_y_2();
		((L_615)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_616)))->set_y_2(L_619);
		Vector3U5BU5D_t1718750761* L_620 = V_29;
		int32_t L_621 = V_34;
		int32_t L_622 = L_621;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_622, (int32_t)1));
		NullCheck(L_620);
		Vector3U5BU5D_t1718750761* L_623 = V_39;
		int32_t L_624 = V_95;
		NullCheck(L_623);
		float L_625 = ((L_623)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_624)))->get_z_3();
		float L_626 = V_59;
		((L_620)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_622)))->set_z_3(((float)il2cpp_codegen_add((float)L_625, (float)L_626)));
		int32_t L_627 = V_95;
		V_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_627, (int32_t)1));
	}

IL_0f85:
	{
		int32_t L_628 = V_95;
		int32_t L_629 = V_75;
		if ((((int32_t)L_628) < ((int32_t)L_629)))
		{
			goto IL_0f20;
		}
	}

IL_0f8e:
	{
		goto IL_108b;
	}

IL_0f93:
	{
		bool L_630 = ___separateObjects10;
		if (L_630)
		{
			goto IL_1018;
		}
	}
	{
		V_96 = 0;
		goto IL_100a;
	}

IL_0fa2:
	{
		Vector3U5BU5D_t1718750761* L_631 = V_29;
		int32_t L_632 = V_34;
		NullCheck(L_631);
		Vector3U5BU5D_t1718750761* L_633 = V_39;
		int32_t L_634 = V_96;
		NullCheck(L_633);
		float L_635 = ((L_633)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_634)))->get_x_1();
		float L_636 = V_54;
		((L_631)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_632)))->set_x_1(((float)il2cpp_codegen_add((float)L_635, (float)L_636)));
		Vector3U5BU5D_t1718750761* L_637 = V_29;
		int32_t L_638 = V_34;
		NullCheck(L_637);
		Vector3U5BU5D_t1718750761* L_639 = V_39;
		int32_t L_640 = V_96;
		NullCheck(L_639);
		float L_641 = ((L_639)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_640)))->get_y_2();
		float L_642 = V_58;
		((L_637)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_638)))->set_y_2(((float)il2cpp_codegen_add((float)L_641, (float)L_642)));
		Vector3U5BU5D_t1718750761* L_643 = V_29;
		int32_t L_644 = V_34;
		int32_t L_645 = L_644;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_645, (int32_t)1));
		NullCheck(L_643);
		Vector3U5BU5D_t1718750761* L_646 = V_39;
		int32_t L_647 = V_96;
		NullCheck(L_646);
		float L_648 = ((L_646)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_647)))->get_z_3();
		float L_649 = V_59;
		((L_643)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_645)))->set_z_3(((float)il2cpp_codegen_add((float)L_648, (float)L_649)));
		int32_t L_650 = V_96;
		V_96 = ((int32_t)il2cpp_codegen_add((int32_t)L_650, (int32_t)1));
	}

IL_100a:
	{
		int32_t L_651 = V_96;
		int32_t L_652 = V_75;
		if ((((int32_t)L_651) < ((int32_t)L_652)))
		{
			goto IL_0fa2;
		}
	}
	{
		goto IL_108b;
	}

IL_1018:
	{
		V_97 = 0;
		goto IL_1082;
	}

IL_1020:
	{
		Vector3U5BU5D_t1718750761* L_653 = V_29;
		int32_t L_654 = V_34;
		NullCheck(L_653);
		Vector3U5BU5D_t1718750761* L_655 = V_39;
		int32_t L_656 = V_97;
		NullCheck(L_655);
		float L_657 = ((L_655)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_656)))->get_x_1();
		((L_653)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_654)))->set_x_1(L_657);
		Vector3U5BU5D_t1718750761* L_658 = V_29;
		int32_t L_659 = V_34;
		NullCheck(L_658);
		Vector3U5BU5D_t1718750761* L_660 = V_39;
		int32_t L_661 = V_97;
		NullCheck(L_660);
		float L_662 = ((L_660)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_661)))->get_y_2();
		((L_658)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_659)))->set_y_2(L_662);
		Vector3U5BU5D_t1718750761* L_663 = V_29;
		int32_t L_664 = V_34;
		int32_t L_665 = L_664;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_665, (int32_t)1));
		NullCheck(L_663);
		Vector3U5BU5D_t1718750761* L_666 = V_39;
		int32_t L_667 = V_97;
		NullCheck(L_666);
		float L_668 = ((L_666)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_667)))->get_z_3();
		float L_669 = V_59;
		((L_663)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_665)))->set_z_3(((float)il2cpp_codegen_add((float)L_668, (float)L_669)));
		int32_t L_670 = V_97;
		V_97 = ((int32_t)il2cpp_codegen_add((int32_t)L_670, (int32_t)1));
	}

IL_1082:
	{
		int32_t L_671 = V_97;
		int32_t L_672 = V_75;
		if ((((int32_t)L_671) < ((int32_t)L_672)))
		{
			goto IL_1020;
		}
	}

IL_108b:
	{
		bool L_673 = ___separateObjects10;
		if (!L_673)
		{
			goto IL_124d;
		}
	}
	{
		Mesh_t3648964284 * L_674 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_674, /*hidden argument*/NULL);
		V_98 = L_674;
		Mesh_t3648964284 * L_675 = V_98;
		String_t* L_676 = Char_ToString_m3588025615((&V_62), /*hidden argument*/NULL);
		NullCheck(L_675);
		Object_set_name_m291480324(L_675, L_676, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_677 = V_98;
		Vector3U5BU5D_t1718750761* L_678 = V_29;
		NullCheck(L_677);
		Mesh_set_vertices_m2084450642(L_677, L_678, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_679 = V_98;
		Vector2U5BU5D_t1457185986* L_680 = V_32;
		NullCheck(L_679);
		Mesh_set_uv_m1258646872(L_679, L_680, /*hidden argument*/NULL);
		bool L_681 = V_27;
		if (!L_681)
		{
			goto IL_10c9;
		}
	}
	{
		Mesh_t3648964284 * L_682 = V_98;
		Color32U5BU5D_t3850468773* L_683 = V_33;
		NullCheck(L_682);
		Mesh_set_colors32_m645370667(L_682, L_683, /*hidden argument*/NULL);
	}

IL_10c9:
	{
		bool L_684 = V_1;
		if (!L_684)
		{
			goto IL_10f0;
		}
	}
	{
		Mesh_t3648964284 * L_685 = V_98;
		NullCheck(L_685);
		Mesh_set_subMeshCount_m3209867014(L_685, 2, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_686 = V_98;
		Int32U5BU5D_t385246372* L_687 = V_30;
		NullCheck(L_686);
		Mesh_SetTriangles_m3871477336(L_686, L_687, 0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_688 = V_98;
		Int32U5BU5D_t385246372* L_689 = V_31;
		NullCheck(L_688);
		Mesh_SetTriangles_m3871477336(L_688, L_689, 1, /*hidden argument*/NULL);
		goto IL_10f9;
	}

IL_10f0:
	{
		Mesh_t3648964284 * L_690 = V_98;
		Int32U5BU5D_t385246372* L_691 = V_30;
		NullCheck(L_690);
		Mesh_set_triangles_m255556250(L_690, L_691, /*hidden argument*/NULL);
	}

IL_10f9:
	{
		Mesh_t3648964284 * L_692 = V_98;
		NullCheck(L_692);
		Mesh_RecalculateNormals_m467587154(L_692, /*hidden argument*/NULL);
		String_t* L_693 = Char_ToString_m3588025615((&V_62), /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_694 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_695 = { reinterpret_cast<intptr_t> (MeshFilter_t3523625662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_696 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_695, /*hidden argument*/NULL);
		NullCheck(L_694);
		ArrayElementTypeCheck (L_694, L_696);
		(L_694)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_696);
		TypeU5BU5D_t3940880105* L_697 = L_694;
		RuntimeTypeHandle_t3027515415  L_698 = { reinterpret_cast<intptr_t> (MeshRenderer_t587009260_0_0_0_var) };
		Type_t * L_699 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_698, /*hidden argument*/NULL);
		NullCheck(L_697);
		ArrayElementTypeCheck (L_697, L_699);
		(L_697)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_699);
		GameObject_t1113636619 * L_700 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m1350607670(L_700, L_693, L_697, /*hidden argument*/NULL);
		V_99 = L_700;
		GameObject_t1113636619 * L_701 = V_99;
		NullCheck(L_701);
		MeshFilter_t3523625662 * L_702 = GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000(L_701, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000_RuntimeMethod_var);
		Mesh_t3648964284 * L_703 = V_98;
		NullCheck(L_702);
		MeshFilter_set_mesh_m1415871686(L_702, L_703, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_704 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((((int32_t)L_704) == ((int32_t)3)))
		{
			goto IL_1152;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_705 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((!(((uint32_t)L_705) == ((uint32_t)2))))
		{
			goto IL_1184;
		}
	}

IL_1152:
	{
		GameObject_t1113636619 * L_706 = V_99;
		NullCheck(L_706);
		MeshCollider_t903564387 * L_707 = GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895(L_706, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895_RuntimeMethod_var);
		V_100 = L_707;
		MeshCollider_t903564387 * L_708 = V_100;
		Mesh_t3648964284 * L_709 = V_98;
		NullCheck(L_708);
		MeshCollider_set_sharedMesh_m1986498669(L_708, L_709, /*hidden argument*/NULL);
		MeshCollider_t903564387 * L_710 = V_100;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_711 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		NullCheck(L_710);
		MeshCollider_set_convex_m840510835(L_710, (bool)((((int32_t)L_711) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
		MeshCollider_t903564387 * L_712 = V_100;
		PhysicMaterial_t2874185564 * L_713 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_physicsMaterial_49();
		NullCheck(L_712);
		Collider_set_sharedMaterial_m3714532353(L_712, L_713, /*hidden argument*/NULL);
		goto IL_11a0;
	}

IL_1184:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_714 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((!(((uint32_t)L_714) == ((uint32_t)1))))
		{
			goto IL_11a0;
		}
	}
	{
		GameObject_t1113636619 * L_715 = V_99;
		NullCheck(L_715);
		BoxCollider_t1640800422 * L_716 = GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355(L_715, /*hidden argument*/GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		PhysicMaterial_t2874185564 * L_717 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_physicsMaterial_49();
		NullCheck(L_716);
		Collider_set_sharedMaterial_m3714532353(L_716, L_717, /*hidden argument*/NULL);
	}

IL_11a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_718 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_addRigidbodies_48();
		if (!L_718)
		{
			goto IL_11bc;
		}
	}
	{
		GameObject_t1113636619 * L_719 = V_99;
		RuntimeTypeHandle_t3027515415  L_720 = { reinterpret_cast<intptr_t> (Rigidbody_t3916780224_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_721 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_720, /*hidden argument*/NULL);
		NullCheck(L_719);
		GameObject_AddComponent_m136524825(L_719, L_721, /*hidden argument*/NULL);
	}

IL_11bc:
	{
		bool L_722 = V_1;
		if (!L_722)
		{
			goto IL_11d5;
		}
	}
	{
		GameObject_t1113636619 * L_723 = V_99;
		NullCheck(L_723);
		Renderer_t2627027031 * L_724 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_723, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		MaterialU5BU5D_t561872642* L_725 = V_5;
		NullCheck(L_724);
		Renderer_set_sharedMaterials_m2162241463(L_724, L_725, /*hidden argument*/NULL);
		goto IL_11e2;
	}

IL_11d5:
	{
		GameObject_t1113636619 * L_726 = V_99;
		NullCheck(L_726);
		Renderer_t2627027031 * L_727 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_726, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		Material_t340375123 * L_728 = ___material1;
		NullCheck(L_727);
		Renderer_set_sharedMaterial_m2374163090(L_727, L_728, /*hidden argument*/NULL);
	}

IL_11e2:
	{
		bool L_729 = ___useObjectsArray11;
		if (L_729)
		{
			goto IL_1218;
		}
	}
	{
		GameObject_t1113636619 * L_730 = V_99;
		NullCheck(L_730);
		Transform_t3600365921 * L_731 = GameObject_get_transform_m1369836730(L_730, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_732 = V_24;
		NullCheck(L_732);
		Transform_t3600365921 * L_733 = GameObject_get_transform_m1369836730(L_732, /*hidden argument*/NULL);
		NullCheck(L_731);
		Transform_set_parent_m786917804(L_731, L_733, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_734 = V_99;
		NullCheck(L_734);
		Transform_t3600365921 * L_735 = GameObject_get_transform_m1369836730(L_734, /*hidden argument*/NULL);
		float L_736 = V_54;
		float L_737 = V_58;
		float L_738 = V_59;
		Vector3_t3722313464  L_739;
		memset(&L_739, 0, sizeof(L_739));
		Vector3__ctor_m3353183577((&L_739), L_736, L_737, L_738, /*hidden argument*/NULL);
		NullCheck(L_735);
		Transform_set_position_m3387557959(L_735, L_739, /*hidden argument*/NULL);
		goto IL_124d;
	}

IL_1218:
	{
		GameObject_t1113636619 * L_740 = V_99;
		NullCheck(L_740);
		Transform_t3600365921 * L_741 = GameObject_get_transform_m1369836730(L_740, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_742 = ___rotation13;
		NullCheck(L_741);
		Transform_set_rotation_m3524318132(L_741, L_742, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_743 = V_99;
		NullCheck(L_743);
		Transform_t3600365921 * L_744 = GameObject_get_transform_m1369836730(L_743, /*hidden argument*/NULL);
		float L_745 = V_54;
		float L_746 = V_58;
		float L_747 = V_59;
		Vector3_t3722313464  L_748;
		memset(&L_748, 0, sizeof(L_748));
		Vector3__ctor_m3353183577((&L_748), L_745, L_746, L_747, /*hidden argument*/NULL);
		Vector3_t3722313464  L_749 = ___position12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_750 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_748, L_749, /*hidden argument*/NULL);
		NullCheck(L_744);
		Transform_Translate_m1810197270(L_744, L_750, /*hidden argument*/NULL);
		List_1_t2585711361 * L_751 = V_25;
		GameObject_t1113636619 * L_752 = V_99;
		NullCheck(L_751);
		List_1_Add_m4119991052(L_751, L_752, /*hidden argument*/List_1_Add_m4119991052_RuntimeMethod_var);
	}

IL_124d:
	{
		float L_753 = V_54;
		V_55 = L_753;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_754 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_verticalLayout_42();
		if (L_754)
		{
			goto IL_1277;
		}
	}
	{
		float L_755 = V_54;
		TTFFontInfo_t2461483730 * L_756 = V_17;
		NullCheck(L_756);
		Int32U5BU5D_t385246372* L_757 = TTFFontInfo_get_advanceArray_m3947564005(L_756, /*hidden argument*/NULL);
		int32_t L_758 = V_73;
		NullCheck(L_757);
		int32_t L_759 = L_758;
		int32_t L_760 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_759));
		float L_761 = V_16;
		float L_762 = V_37;
		float L_763 = V_72;
		float L_764 = V_15;
		V_54 = ((float)il2cpp_codegen_add((float)L_755, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(((float)((float)L_760))), (float)((float)((float)L_761/(float)L_762)))), (float)((float)il2cpp_codegen_multiply((float)L_763, (float)L_764))))));
	}

IL_1277:
	{
		int32_t L_765 = V_49;
		if ((!(((uint32_t)L_765) == ((uint32_t)2))))
		{
			goto IL_1372;
		}
	}
	{
		float L_766 = ___lineWidth8;
		if ((!(((float)L_766) > ((float)(0.0f)))))
		{
			goto IL_1372;
		}
	}
	{
		float L_767 = V_54;
		float L_768 = ___lineWidth8;
		if ((!(((float)L_767) > ((float)L_768))))
		{
			goto IL_1372;
		}
	}
	{
		bool L_769 = V_68;
		if (L_769)
		{
			goto IL_1372;
		}
	}
	{
		bool L_770 = V_6;
		if (!L_770)
		{
			goto IL_12df;
		}
	}
	{
		float L_771 = V_56;
		if ((!(((float)L_771) > ((float)(0.0f)))))
		{
			goto IL_12df;
		}
	}
	{
		List_1_t811567916 * L_772 = V_9;
		int32_t L_773 = V_57;
		NullCheck(L_772);
		List_1_set_Item_m3546787751(L_772, L_773, ((int32_t)10), /*hidden argument*/List_1_set_Item_m3546787751_RuntimeMethod_var);
		int32_t L_774 = V_57;
		V_70 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_774, (int32_t)1));
		float L_775 = V_56;
		V_54 = L_775;
		float L_776 = V_61;
		V_60 = L_776;
		TTFFontInfo_t2461483730 * L_777 = V_64;
		V_17 = L_777;
		int32_t L_778 = V_65;
		V_8 = L_778;
		CommandData_t153426433 * L_779 = V_67;
		V_66 = L_779;
		V_56 = (0.0f);
		goto IL_136f;
	}

IL_12df:
	{
		Il2CppChar L_780 = V_62;
		if ((!(((uint32_t)L_780) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_12f8;
		}
	}
	{
		List_1_t811567916 * L_781 = V_9;
		int32_t L_782 = V_70;
		NullCheck(L_781);
		List_1_set_Item_m3546787751(L_781, L_782, ((int32_t)10), /*hidden argument*/List_1_set_Item_m3546787751_RuntimeMethod_var);
		goto IL_1355;
	}

IL_12f8:
	{
		List_1_t811567916 * L_783 = V_9;
		int32_t L_784 = V_70;
		NullCheck(L_783);
		List_1_Insert_m1376835033(L_783, L_784, ((int32_t)10), /*hidden argument*/List_1_Insert_m1376835033_RuntimeMethod_var);
		List_1_t128053199 * L_785 = V_10;
		int32_t L_786 = V_70;
		int32_t L_787 = V_73;
		NullCheck(L_785);
		List_1_Insert_m3992501969(L_785, L_786, L_787, /*hidden argument*/List_1_Insert_m3992501969_RuntimeMethod_var);
		int32_t L_788 = V_8;
		V_101 = L_788;
		goto IL_1347;
	}

IL_1317:
	{
		List_1_t1625501175 * L_789 = V_7;
		int32_t L_790 = V_101;
		NullCheck(L_789);
		CommandData_t153426433 * L_791 = List_1_get_Item_m1434826200(L_789, L_790, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		NullCheck(L_791);
		int32_t L_792 = L_791->get_index_0();
		if ((((int32_t)L_792) == ((int32_t)(-1))))
		{
			goto IL_1341;
		}
	}
	{
		List_1_t1625501175 * L_793 = V_7;
		int32_t L_794 = V_101;
		NullCheck(L_793);
		CommandData_t153426433 * L_795 = List_1_get_Item_m1434826200(L_793, L_794, /*hidden argument*/List_1_get_Item_m1434826200_RuntimeMethod_var);
		CommandData_t153426433 * L_796 = L_795;
		NullCheck(L_796);
		int32_t L_797 = L_796->get_index_0();
		NullCheck(L_796);
		L_796->set_index_0(((int32_t)il2cpp_codegen_add((int32_t)L_797, (int32_t)1)));
	}

IL_1341:
	{
		int32_t L_798 = V_101;
		V_101 = ((int32_t)il2cpp_codegen_add((int32_t)L_798, (int32_t)1));
	}

IL_1347:
	{
		int32_t L_799 = V_101;
		List_1_t1625501175 * L_800 = V_7;
		NullCheck(L_800);
		int32_t L_801 = List_1_get_Count_m2047056320(L_800, /*hidden argument*/List_1_get_Count_m2047056320_RuntimeMethod_var);
		if ((((int32_t)L_799) < ((int32_t)L_801)))
		{
			goto IL_1317;
		}
	}

IL_1355:
	{
		Il2CppChar L_802 = V_63;
		if ((!(((uint32_t)L_802) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_1365;
		}
	}
	{
		float L_803 = V_56;
		G_B290_0 = L_803;
		goto IL_1367;
	}

IL_1365:
	{
		float L_804 = V_55;
		G_B290_0 = L_804;
	}

IL_1367:
	{
		V_54 = G_B290_0;
		int32_t L_805 = V_70;
		V_70 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_805, (int32_t)1));
	}

IL_136f:
	{
		V_50 = (bool)1;
	}

IL_1372:
	{
		V_68 = (bool)0;
	}

IL_1375:
	{
		int32_t L_806 = V_70;
		V_70 = ((int32_t)il2cpp_codegen_add((int32_t)L_806, (int32_t)1));
	}

IL_137b:
	{
		int32_t L_807 = V_70;
		List_1_t811567916 * L_808 = V_9;
		NullCheck(L_808);
		int32_t L_809 = List_1_get_Count_m2424247778(L_808, /*hidden argument*/List_1_get_Count_m2424247778_RuntimeMethod_var);
		if ((((int32_t)L_807) < ((int32_t)L_809)))
		{
			goto IL_0693;
		}
	}
	{
		int32_t L_810 = V_49;
		int32_t L_811 = L_810;
		V_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_811, (int32_t)1));
		if ((!(((uint32_t)L_811) == ((uint32_t)2))))
		{
			goto IL_13f6;
		}
	}
	{
		List_1_t2869341516 * L_812 = V_46;
		float L_813 = V_54;
		NullCheck(L_812);
		List_1_Add_m3249932132(L_812, L_813, /*hidden argument*/List_1_Add_m3249932132_RuntimeMethod_var);
		List_1_t2288335961 * L_814 = V_47;
		int32_t L_815 = V_53;
		NullCheck(L_814);
		List_1_Add_m1958734212(L_814, L_815, /*hidden argument*/List_1_Add_m1958734212_RuntimeMethod_var);
		List_1_t2869341516 * L_816 = V_46;
		NullCheck(L_816);
		float L_817 = List_1_get_Item_m2456367083(L_816, 0, /*hidden argument*/List_1_get_Item_m2456367083_RuntimeMethod_var);
		V_52 = L_817;
		V_102 = 1;
		goto IL_13db;
	}

IL_13ba:
	{
		List_1_t2869341516 * L_818 = V_46;
		int32_t L_819 = V_102;
		NullCheck(L_818);
		float L_820 = List_1_get_Item_m2456367083(L_818, L_819, /*hidden argument*/List_1_get_Item_m2456367083_RuntimeMethod_var);
		float L_821 = V_52;
		if ((!(((float)L_820) > ((float)L_821))))
		{
			goto IL_13d5;
		}
	}
	{
		List_1_t2869341516 * L_822 = V_46;
		int32_t L_823 = V_102;
		NullCheck(L_822);
		float L_824 = List_1_get_Item_m2456367083(L_822, L_823, /*hidden argument*/List_1_get_Item_m2456367083_RuntimeMethod_var);
		V_52 = L_824;
	}

IL_13d5:
	{
		int32_t L_825 = V_102;
		V_102 = ((int32_t)il2cpp_codegen_add((int32_t)L_825, (int32_t)1));
	}

IL_13db:
	{
		int32_t L_826 = V_102;
		List_1_t2869341516 * L_827 = V_46;
		NullCheck(L_827);
		int32_t L_828 = List_1_get_Count_m3251163515(L_827, /*hidden argument*/List_1_get_Count_m3251163515_RuntimeMethod_var);
		if ((((int32_t)L_826) < ((int32_t)L_828)))
		{
			goto IL_13ba;
		}
	}
	{
		float L_829 = V_52;
		float L_830 = ___lineWidth8;
		if ((!(((float)L_829) < ((float)L_830))))
		{
			goto IL_13f6;
		}
	}
	{
		float L_831 = ___lineWidth8;
		V_52 = L_831;
	}

IL_13f6:
	{
		int32_t L_832 = V_49;
		if ((((int32_t)L_832) > ((int32_t)0)))
		{
			goto IL_060f;
		}
	}
	{
		bool L_833 = V_38;
		if (L_833)
		{
			goto IL_15c0;
		}
	}
	{
		float L_834 = V_43;
		float L_835 = V_42;
		V_103 = ((float)il2cpp_codegen_subtract((float)L_834, (float)L_835));
		float L_836 = V_45;
		float L_837 = V_44;
		V_104 = ((float)il2cpp_codegen_subtract((float)L_836, (float)L_837));
		bool L_838 = V_1;
		if (L_838)
		{
			goto IL_1479;
		}
	}
	{
		V_105 = 0;
		goto IL_146b;
	}

IL_1421:
	{
		Vector2U5BU5D_t1457185986* L_839 = V_32;
		int32_t L_840 = V_105;
		NullCheck(L_839);
		Vector3U5BU5D_t1718750761* L_841 = V_29;
		int32_t L_842 = V_105;
		NullCheck(L_841);
		float L_843 = ((L_841)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_842)))->get_x_1();
		float L_844 = V_42;
		float L_845 = V_103;
		((L_839)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_840)))->set_x_0(((float)((float)((float)il2cpp_codegen_subtract((float)L_843, (float)L_844))/(float)L_845)));
		Vector2U5BU5D_t1457185986* L_846 = V_32;
		int32_t L_847 = V_105;
		NullCheck(L_846);
		Vector3U5BU5D_t1718750761* L_848 = V_29;
		int32_t L_849 = V_105;
		NullCheck(L_848);
		float L_850 = ((L_848)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_849)))->get_y_2();
		float L_851 = V_44;
		float L_852 = V_104;
		((L_846)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_847)))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_850, (float)L_851))/(float)L_852)));
		int32_t L_853 = V_105;
		V_105 = ((int32_t)il2cpp_codegen_add((int32_t)L_853, (int32_t)1));
	}

IL_146b:
	{
		int32_t L_854 = V_105;
		int32_t L_855 = V_11;
		if ((((int32_t)L_854) < ((int32_t)L_855)))
		{
			goto IL_1421;
		}
	}
	{
		goto IL_15c0;
	}

IL_1479:
	{
		V_34 = 0;
		V_106 = 0;
		goto IL_15b2;
	}

IL_1484:
	{
		List_1_t801739046 * L_856 = V_48;
		int32_t L_857 = V_106;
		NullCheck(L_856);
		EdgeData_t3624631600 * L_858 = List_1_get_Item_m3901971184(L_856, L_857, /*hidden argument*/List_1_get_Item_m3901971184_RuntimeMethod_var);
		NullCheck(L_858);
		int32_t L_859 = L_858->get_frontVertIndex_0();
		V_107 = L_859;
		V_108 = 0;
		goto IL_14f2;
	}

IL_149c:
	{
		Vector2U5BU5D_t1457185986* L_860 = V_32;
		int32_t L_861 = V_108;
		int32_t L_862 = V_34;
		NullCheck(L_860);
		Vector3U5BU5D_t1718750761* L_863 = V_29;
		int32_t L_864 = V_108;
		int32_t L_865 = V_34;
		NullCheck(L_863);
		float L_866 = ((L_863)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_864, (int32_t)L_865)))))->get_x_1();
		float L_867 = V_42;
		float L_868 = V_103;
		((L_860)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_861, (int32_t)L_862)))))->set_x_0(((float)((float)((float)il2cpp_codegen_subtract((float)L_866, (float)L_867))/(float)L_868)));
		Vector2U5BU5D_t1457185986* L_869 = V_32;
		int32_t L_870 = V_108;
		int32_t L_871 = V_34;
		NullCheck(L_869);
		Vector3U5BU5D_t1718750761* L_872 = V_29;
		int32_t L_873 = V_108;
		int32_t L_874 = V_34;
		NullCheck(L_872);
		float L_875 = ((L_872)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_873, (int32_t)L_874)))))->get_y_2();
		float L_876 = V_44;
		float L_877 = V_104;
		((L_869)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_870, (int32_t)L_871)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_875, (float)L_876))/(float)L_877)));
		int32_t L_878 = V_108;
		V_108 = ((int32_t)il2cpp_codegen_add((int32_t)L_878, (int32_t)1));
	}

IL_14f2:
	{
		int32_t L_879 = V_108;
		int32_t L_880 = V_107;
		if ((((int32_t)L_879) < ((int32_t)L_880)))
		{
			goto IL_149c;
		}
	}
	{
		List_1_t801739046 * L_881 = V_48;
		int32_t L_882 = V_106;
		NullCheck(L_881);
		EdgeData_t3624631600 * L_883 = List_1_get_Item_m3901971184(L_881, L_882, /*hidden argument*/List_1_get_Item_m3901971184_RuntimeMethod_var);
		NullCheck(L_883);
		int32_t L_884 = L_883->get_vertexCount_1();
		V_109 = L_884;
		int32_t L_885 = V_107;
		V_110 = L_885;
		goto IL_159c;
	}

IL_1514:
	{
		Vector2U5BU5D_t1457185986* L_886 = V_32;
		int32_t L_887 = V_110;
		int32_t L_888 = V_34;
		NullCheck(L_886);
		((L_886)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_887, (int32_t)L_888)))))->set_x_0((0.0f));
		Vector2U5BU5D_t1457185986* L_889 = V_32;
		int32_t L_890 = V_110;
		int32_t L_891 = V_34;
		NullCheck(L_889);
		Vector3U5BU5D_t1718750761* L_892 = V_29;
		int32_t L_893 = V_110;
		int32_t L_894 = V_34;
		NullCheck(L_892);
		float L_895 = ((L_892)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_893, (int32_t)L_894)))))->get_y_2();
		float L_896 = V_44;
		float L_897 = V_104;
		((L_889)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_890, (int32_t)L_891)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_895, (float)L_896))/(float)L_897)));
		Vector2U5BU5D_t1457185986* L_898 = V_32;
		int32_t L_899 = V_110;
		int32_t L_900 = V_34;
		NullCheck(L_898);
		((L_898)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_899, (int32_t)L_900)), (int32_t)1)))))->set_x_0((1.0f));
		Vector2U5BU5D_t1457185986* L_901 = V_32;
		int32_t L_902 = V_110;
		int32_t L_903 = V_34;
		NullCheck(L_901);
		Vector3U5BU5D_t1718750761* L_904 = V_29;
		int32_t L_905 = V_110;
		int32_t L_906 = V_34;
		NullCheck(L_904);
		float L_907 = ((L_904)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_905, (int32_t)L_906)), (int32_t)1)))))->get_y_2();
		float L_908 = V_44;
		float L_909 = V_104;
		((L_901)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_902, (int32_t)L_903)), (int32_t)1)))))->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_907, (float)L_908))/(float)L_909)));
		int32_t L_910 = V_110;
		V_110 = ((int32_t)il2cpp_codegen_add((int32_t)L_910, (int32_t)2));
	}

IL_159c:
	{
		int32_t L_911 = V_110;
		int32_t L_912 = V_109;
		if ((((int32_t)L_911) < ((int32_t)L_912)))
		{
			goto IL_1514;
		}
	}
	{
		int32_t L_913 = V_34;
		int32_t L_914 = V_109;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_913, (int32_t)L_914));
		int32_t L_915 = V_106;
		V_106 = ((int32_t)il2cpp_codegen_add((int32_t)L_915, (int32_t)1));
	}

IL_15b2:
	{
		int32_t L_916 = V_106;
		List_1_t801739046 * L_917 = V_48;
		NullCheck(L_917);
		int32_t L_918 = List_1_get_Count_m1501045621(L_917, /*hidden argument*/List_1_get_Count_m1501045621_RuntimeMethod_var);
		if ((((int32_t)L_916) < ((int32_t)L_918)))
		{
			goto IL_1484;
		}
	}

IL_15c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_919 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_111 = L_919;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_920 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_anchor_45();
		V_112 = L_920;
		int32_t L_921 = V_112;
		switch (L_921)
		{
			case 0:
			{
				goto IL_15fe;
			}
			case 1:
			{
				goto IL_160c;
			}
			case 2:
			{
				goto IL_162c;
			}
			case 3:
			{
				goto IL_1646;
			}
			case 4:
			{
				goto IL_1660;
			}
			case 5:
			{
				goto IL_168c;
			}
			case 6:
			{
				goto IL_16b2;
			}
			case 7:
			{
				goto IL_16c6;
			}
			case 8:
			{
				goto IL_16ec;
			}
		}
	}
	{
		goto IL_170c;
	}

IL_15fe:
	{
		float L_922 = V_45;
		(&V_111)->set_y_2(L_922);
		goto IL_170c;
	}

IL_160c:
	{
		float L_923 = V_43;
		float L_924 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_923, (float)L_924)), (float)(0.5f))));
		float L_925 = V_45;
		(&V_111)->set_y_2(L_925);
		goto IL_170c;
	}

IL_162c:
	{
		float L_926 = V_43;
		float L_927 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_subtract((float)L_926, (float)L_927)));
		float L_928 = V_45;
		(&V_111)->set_y_2(L_928);
		goto IL_170c;
	}

IL_1646:
	{
		float L_929 = V_44;
		float L_930 = V_45;
		float L_931 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_929, (float)L_930)), (float)(0.5f))), (float)L_931)));
		goto IL_170c;
	}

IL_1660:
	{
		float L_932 = V_43;
		float L_933 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_932, (float)L_933)), (float)(0.5f))));
		float L_934 = V_44;
		float L_935 = V_45;
		float L_936 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_934, (float)L_935)), (float)(0.5f))), (float)L_936)));
		goto IL_170c;
	}

IL_168c:
	{
		float L_937 = V_43;
		float L_938 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_subtract((float)L_937, (float)L_938)));
		float L_939 = V_44;
		float L_940 = V_45;
		float L_941 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_939, (float)L_940)), (float)(0.5f))), (float)L_941)));
		goto IL_170c;
	}

IL_16b2:
	{
		float L_942 = V_44;
		float L_943 = V_45;
		float L_944 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_942, (float)L_943)), (float)L_944)));
		goto IL_170c;
	}

IL_16c6:
	{
		float L_945 = V_43;
		float L_946 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_945, (float)L_946)), (float)(0.5f))));
		float L_947 = V_44;
		float L_948 = V_45;
		float L_949 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_947, (float)L_948)), (float)L_949)));
		goto IL_170c;
	}

IL_16ec:
	{
		float L_950 = V_43;
		float L_951 = V_42;
		(&V_111)->set_x_1(((float)il2cpp_codegen_subtract((float)L_950, (float)L_951)));
		float L_952 = V_44;
		float L_953 = V_45;
		float L_954 = V_45;
		(&V_111)->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_952, (float)L_953)), (float)L_954)));
		goto IL_170c;
	}

IL_170c:
	{
		bool L_955 = V_14;
		if (!L_955)
		{
			goto IL_1757;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_956 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_zAnchor_46();
		V_113 = L_956;
		int32_t L_957 = V_113;
		if ((((int32_t)L_957) == ((int32_t)1)))
		{
			goto IL_172f;
		}
	}
	{
		int32_t L_958 = V_113;
		if ((((int32_t)L_958) == ((int32_t)2)))
		{
			goto IL_1746;
		}
	}
	{
		goto IL_1757;
	}

IL_172f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_959 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		(&V_111)->set_z_3(((float)il2cpp_codegen_multiply((float)L_959, (float)(0.5f))));
		goto IL_1757;
	}

IL_1746:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_960 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_defaultDepth_35();
		(&V_111)->set_z_3(L_960);
		goto IL_1757;
	}

IL_1757:
	{
		bool L_961 = ___separateObjects10;
		if (L_961)
		{
			goto IL_1795;
		}
	}
	{
		V_114 = 0;
		goto IL_1787;
	}

IL_1766:
	{
		Vector3U5BU5D_t1718750761* L_962 = V_29;
		int32_t L_963 = V_114;
		NullCheck(L_962);
		Vector3_t3722313464 * L_964 = ((L_962)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_963)));
		Vector3_t3722313464  L_965 = V_111;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_966 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, (*(Vector3_t3722313464 *)L_964), L_965, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_964 = L_966;
		int32_t L_967 = V_114;
		V_114 = ((int32_t)il2cpp_codegen_add((int32_t)L_967, (int32_t)1));
	}

IL_1787:
	{
		int32_t L_968 = V_114;
		int32_t L_969 = V_11;
		if ((((int32_t)L_968) < ((int32_t)L_969)))
		{
			goto IL_1766;
		}
	}
	{
		goto IL_1834;
	}

IL_1795:
	{
		bool L_970 = ___useObjectsArray11;
		if (L_970)
		{
			goto IL_17fe;
		}
	}
	{
		GameObject_t1113636619 * L_971 = V_24;
		NullCheck(L_971);
		Transform_t3600365921 * L_972 = GameObject_get_transform_m1369836730(L_971, /*hidden argument*/NULL);
		NullCheck(L_972);
		RuntimeObject* L_973 = Transform_GetEnumerator_m2717073726(L_972, /*hidden argument*/NULL);
		V_115 = L_973;
	}

IL_17aa:
	try
	{ // begin try (depth: 1)
		{
			goto IL_17d1;
		}

IL_17af:
		{
			RuntimeObject* L_974 = V_115;
			NullCheck(L_974);
			RuntimeObject * L_975 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_974);
			V_116 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_975, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_976 = V_116;
			Transform_t3600365921 * L_977 = L_976;
			NullCheck(L_977);
			Vector3_t3722313464  L_978 = Transform_get_position_m36019626(L_977, /*hidden argument*/NULL);
			Vector3_t3722313464  L_979 = V_111;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_980 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_978, L_979, /*hidden argument*/NULL);
			NullCheck(L_977);
			Transform_set_position_m3387557959(L_977, L_980, /*hidden argument*/NULL);
		}

IL_17d1:
		{
			RuntimeObject* L_981 = V_115;
			NullCheck(L_981);
			bool L_982 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_981);
			if (L_982)
			{
				goto IL_17af;
			}
		}

IL_17dd:
		{
			IL2CPP_LEAVE(0x17F9, FINALLY_17e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_17e2;
	}

FINALLY_17e2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_983 = V_115;
			RuntimeObject* L_984 = ((RuntimeObject*)IsInst((RuntimeObject*)L_983, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_117 = L_984;
			if (!L_984)
			{
				goto IL_17f8;
			}
		}

IL_17f1:
		{
			RuntimeObject* L_985 = V_117;
			NullCheck(L_985);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_985);
		}

IL_17f8:
		{
			IL2CPP_END_FINALLY(6114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(6114)
	{
		IL2CPP_JUMP_TBL(0x17F9, IL_17f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_17f9:
	{
		goto IL_1834;
	}

IL_17fe:
	{
		V_118 = 0;
		goto IL_1826;
	}

IL_1806:
	{
		List_1_t2585711361 * L_986 = V_25;
		int32_t L_987 = V_118;
		NullCheck(L_986);
		GameObject_t1113636619 * L_988 = List_1_get_Item_m910824056(L_986, L_987, /*hidden argument*/List_1_get_Item_m910824056_RuntimeMethod_var);
		NullCheck(L_988);
		Transform_t3600365921 * L_989 = GameObject_get_transform_m1369836730(L_988, /*hidden argument*/NULL);
		Vector3_t3722313464  L_990 = V_111;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_991 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_990, /*hidden argument*/NULL);
		NullCheck(L_989);
		Transform_Translate_m1810197270(L_989, L_991, /*hidden argument*/NULL);
		int32_t L_992 = V_118;
		V_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_992, (int32_t)1));
	}

IL_1826:
	{
		int32_t L_993 = V_118;
		List_1_t2585711361 * L_994 = V_25;
		NullCheck(L_994);
		int32_t L_995 = List_1_get_Count_m2480192364(L_994, /*hidden argument*/List_1_get_Count_m2480192364_RuntimeMethod_var);
		if ((((int32_t)L_993) < ((int32_t)L_995)))
		{
			goto IL_1806;
		}
	}

IL_1834:
	{
		List_1_t811567916 * L_996 = V_9;
		NullCheck(L_996);
		CharU5BU5D_t3528271667* L_997 = List_1_ToArray_m3874229880(L_996, /*hidden argument*/List_1_ToArray_m3874229880_RuntimeMethod_var);
		String_t* L_998 = String_CreateString_m2818852475(NULL, L_997, /*hidden argument*/NULL);
		V_119 = L_998;
		String_t* L_999 = V_119;
		String_t* L_1000 = V_119;
		NullCheck(L_1000);
		int32_t L_1001 = String_get_Length_m3847582255(L_1000, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1002 = Mathf_Min_m18103608(NULL /*static, unused*/, ((int32_t)20), L_1001, /*hidden argument*/NULL);
		NullCheck(L_999);
		String_t* L_1003 = String_Substring_m1610150815(L_999, 0, L_1002, /*hidden argument*/NULL);
		V_120 = L_1003;
		String_t* L_1004 = V_120;
		NullCheck(L_1004);
		String_t* L_1005 = String_Replace_m1273907647(L_1004, _stringLiteral3452614566, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_120 = L_1005;
		String_t* L_1006 = V_120;
		NullCheck(L_1006);
		String_t* L_1007 = String_Replace_m1273907647(L_1006, _stringLiteral3452614560, _stringLiteral757602046, /*hidden argument*/NULL);
		V_120 = L_1007;
		bool L_1008 = ___separateObjects10;
		if (!L_1008)
		{
			goto IL_18ce;
		}
	}
	{
		bool L_1009 = ___useObjectsArray11;
		if (L_1009)
		{
			goto IL_18c0;
		}
	}
	{
		GameObject_t1113636619 * L_1010 = V_24;
		String_t* L_1011 = V_120;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1012 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3716569311, L_1011, /*hidden argument*/NULL);
		NullCheck(L_1010);
		Object_set_name_m291480324(L_1010, L_1012, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1013 = V_24;
		NullCheck(L_1013);
		Transform_t3600365921 * L_1014 = GameObject_get_transform_m1369836730(L_1013, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1015 = ___position12;
		NullCheck(L_1014);
		Transform_set_position_m3387557959(L_1014, L_1015, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1016 = V_24;
		NullCheck(L_1016);
		Transform_t3600365921 * L_1017 = GameObject_get_transform_m1369836730(L_1016, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1018 = ___rotation13;
		NullCheck(L_1017);
		Transform_set_rotation_m3524318132(L_1017, L_1018, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1019 = V_24;
		return L_1019;
	}

IL_18c0:
	{
		List_1_t2585711361 * L_1020 = V_25;
		NullCheck(L_1020);
		GameObjectU5BU5D_t3328599146* L_1021 = List_1_ToArray_m2484968841(L_1020, /*hidden argument*/List_1_ToArray_m2484968841_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_objectArray_58(L_1021);
		return (GameObject_t1113636619 *)NULL;
	}

IL_18ce:
	{
		bool L_1022 = V_0;
		if (L_1022)
		{
			goto IL_18e7;
		}
	}
	{
		Mesh_t3648964284 * L_1023 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_1023, /*hidden argument*/NULL);
		V_2 = L_1023;
		Mesh_t3648964284 * L_1024 = V_2;
		String_t* L_1025 = V_120;
		NullCheck(L_1024);
		Object_set_name_m291480324(L_1024, L_1025, /*hidden argument*/NULL);
		goto IL_18ed;
	}

IL_18e7:
	{
		Mesh_t3648964284 * L_1026 = V_2;
		NullCheck(L_1026);
		Mesh_Clear_m2630385472(L_1026, /*hidden argument*/NULL);
	}

IL_18ed:
	{
		Mesh_t3648964284 * L_1027 = V_2;
		Vector3U5BU5D_t1718750761* L_1028 = V_29;
		NullCheck(L_1027);
		Mesh_set_vertices_m2084450642(L_1027, L_1028, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_1029 = V_2;
		Vector2U5BU5D_t1457185986* L_1030 = V_32;
		NullCheck(L_1029);
		Mesh_set_uv_m1258646872(L_1029, L_1030, /*hidden argument*/NULL);
		bool L_1031 = V_27;
		if (!L_1031)
		{
			goto IL_1911;
		}
	}
	{
		Mesh_t3648964284 * L_1032 = V_2;
		Color32U5BU5D_t3850468773* L_1033 = V_33;
		NullCheck(L_1032);
		Mesh_set_colors32_m645370667(L_1032, L_1033, /*hidden argument*/NULL);
		goto IL_195b;
	}

IL_1911:
	{
		Vector3U5BU5D_t1718750761* L_1034 = V_29;
		NullCheck(L_1034);
		V_121 = (((int32_t)((int32_t)(((RuntimeArray *)L_1034)->max_length))));
		int32_t L_1035 = V_121;
		V_33 = ((Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)L_1035));
		Color_t2555686324  L_1036 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_1037 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_1036, /*hidden argument*/NULL);
		V_122 = L_1037;
		V_123 = 0;
		goto IL_194a;
	}

IL_1934:
	{
		Color32U5BU5D_t3850468773* L_1038 = V_33;
		int32_t L_1039 = V_123;
		NullCheck(L_1038);
		Color32_t2600501292  L_1040 = V_122;
		*(Color32_t2600501292 *)((L_1038)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1039))) = L_1040;
		int32_t L_1041 = V_123;
		V_123 = ((int32_t)il2cpp_codegen_add((int32_t)L_1041, (int32_t)1));
	}

IL_194a:
	{
		int32_t L_1042 = V_123;
		int32_t L_1043 = V_121;
		if ((((int32_t)L_1042) < ((int32_t)L_1043)))
		{
			goto IL_1934;
		}
	}
	{
		Mesh_t3648964284 * L_1044 = V_2;
		Color32U5BU5D_t3850468773* L_1045 = V_33;
		NullCheck(L_1044);
		Mesh_set_colors32_m645370667(L_1044, L_1045, /*hidden argument*/NULL);
	}

IL_195b:
	{
		bool L_1046 = V_1;
		if (!L_1046)
		{
			goto IL_197f;
		}
	}
	{
		Mesh_t3648964284 * L_1047 = V_2;
		NullCheck(L_1047);
		Mesh_set_subMeshCount_m3209867014(L_1047, 2, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_1048 = V_2;
		Int32U5BU5D_t385246372* L_1049 = V_30;
		NullCheck(L_1048);
		Mesh_SetTriangles_m3871477336(L_1048, L_1049, 0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_1050 = V_2;
		Int32U5BU5D_t385246372* L_1051 = V_31;
		NullCheck(L_1050);
		Mesh_SetTriangles_m3871477336(L_1050, L_1051, 1, /*hidden argument*/NULL);
		goto IL_1987;
	}

IL_197f:
	{
		Mesh_t3648964284 * L_1052 = V_2;
		Int32U5BU5D_t385246372* L_1053 = V_30;
		NullCheck(L_1052);
		Mesh_set_triangles_m255556250(L_1052, L_1053, /*hidden argument*/NULL);
	}

IL_1987:
	{
		Mesh_t3648964284 * L_1054 = V_2;
		NullCheck(L_1054);
		Mesh_RecalculateNormals_m467587154(L_1054, /*hidden argument*/NULL);
		bool L_1055 = V_0;
		if (!L_1055)
		{
			goto IL_19b9;
		}
	}
	{
		Mesh_t3648964284 * L_1056 = V_2;
		NullCheck(L_1056);
		Mesh_RecalculateBounds_m39931642(L_1056, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1057 = ___gObject14;
		NullCheck(L_1057);
		MeshCollider_t903564387 * L_1058 = GameObject_GetComponent_TisMeshCollider_t903564387_m2114864196(L_1057, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t903564387_m2114864196_RuntimeMethod_var);
		V_124 = L_1058;
		MeshCollider_t903564387 * L_1059 = V_124;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1060 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1059, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1060)
		{
			goto IL_19b7;
		}
	}
	{
		MeshCollider_t903564387 * L_1061 = V_124;
		Mesh_t3648964284 * L_1062 = V_2;
		NullCheck(L_1061);
		MeshCollider_set_sharedMesh_m1986498669(L_1061, L_1062, /*hidden argument*/NULL);
	}

IL_19b7:
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_19b9:
	{
		String_t* L_1063 = V_120;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1064 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3716569311, L_1063, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_1065 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_1066 = { reinterpret_cast<intptr_t> (MeshFilter_t3523625662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1067 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1066, /*hidden argument*/NULL);
		NullCheck(L_1065);
		ArrayElementTypeCheck (L_1065, L_1067);
		(L_1065)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_1067);
		TypeU5BU5D_t3940880105* L_1068 = L_1065;
		RuntimeTypeHandle_t3027515415  L_1069 = { reinterpret_cast<intptr_t> (MeshRenderer_t587009260_0_0_0_var) };
		Type_t * L_1070 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1069, /*hidden argument*/NULL);
		NullCheck(L_1068);
		ArrayElementTypeCheck (L_1068, L_1070);
		(L_1068)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_1070);
		GameObject_t1113636619 * L_1071 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m1350607670(L_1071, L_1064, L_1068, /*hidden argument*/NULL);
		V_125 = L_1071;
		GameObject_t1113636619 * L_1072 = V_125;
		NullCheck(L_1072);
		MeshFilter_t3523625662 * L_1073 = GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000(L_1072, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m384532000_RuntimeMethod_var);
		Mesh_t3648964284 * L_1074 = V_2;
		NullCheck(L_1073);
		MeshFilter_set_mesh_m1415871686(L_1073, L_1074, /*hidden argument*/NULL);
		bool L_1075 = V_1;
		if (!L_1075)
		{
			goto IL_1a12;
		}
	}
	{
		GameObject_t1113636619 * L_1076 = V_125;
		NullCheck(L_1076);
		Renderer_t2627027031 * L_1077 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_1076, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		MaterialU5BU5D_t561872642* L_1078 = V_5;
		NullCheck(L_1077);
		Renderer_set_sharedMaterials_m2162241463(L_1077, L_1078, /*hidden argument*/NULL);
		goto IL_1a1f;
	}

IL_1a12:
	{
		GameObject_t1113636619 * L_1079 = V_125;
		NullCheck(L_1079);
		Renderer_t2627027031 * L_1080 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_1079, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		Material_t340375123 * L_1081 = ___material1;
		NullCheck(L_1080);
		Renderer_set_sharedMaterial_m2374163090(L_1080, L_1081, /*hidden argument*/NULL);
	}

IL_1a1f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_1082 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((((int32_t)L_1082) == ((int32_t)3)))
		{
			goto IL_1a35;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_1083 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((!(((uint32_t)L_1083) == ((uint32_t)2))))
		{
			goto IL_1a66;
		}
	}

IL_1a35:
	{
		GameObject_t1113636619 * L_1084 = V_125;
		NullCheck(L_1084);
		MeshCollider_t903564387 * L_1085 = GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895(L_1084, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m1277597895_RuntimeMethod_var);
		V_126 = L_1085;
		MeshCollider_t903564387 * L_1086 = V_126;
		Mesh_t3648964284 * L_1087 = V_2;
		NullCheck(L_1086);
		MeshCollider_set_sharedMesh_m1986498669(L_1086, L_1087, /*hidden argument*/NULL);
		MeshCollider_t903564387 * L_1088 = V_126;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_1089 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		NullCheck(L_1088);
		MeshCollider_set_convex_m840510835(L_1088, (bool)((((int32_t)L_1089) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
		MeshCollider_t903564387 * L_1090 = V_126;
		PhysicMaterial_t2874185564 * L_1091 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_physicsMaterial_49();
		NullCheck(L_1090);
		Collider_set_sharedMaterial_m3714532353(L_1090, L_1091, /*hidden argument*/NULL);
		goto IL_1a82;
	}

IL_1a66:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		int32_t L_1092 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_colliderType_47();
		if ((!(((uint32_t)L_1092) == ((uint32_t)1))))
		{
			goto IL_1a82;
		}
	}
	{
		GameObject_t1113636619 * L_1093 = V_125;
		NullCheck(L_1093);
		BoxCollider_t1640800422 * L_1094 = GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355(L_1093, /*hidden argument*/GameObject_AddComponent_TisBoxCollider_t1640800422_m236311355_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		PhysicMaterial_t2874185564 * L_1095 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_physicsMaterial_49();
		NullCheck(L_1094);
		Collider_set_sharedMaterial_m3714532353(L_1094, L_1095, /*hidden argument*/NULL);
	}

IL_1a82:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_1096 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_addRigidbodies_48();
		if (!L_1096)
		{
			goto IL_1a94;
		}
	}
	{
		GameObject_t1113636619 * L_1097 = V_125;
		NullCheck(L_1097);
		GameObject_AddComponent_TisRigidbody_t3916780224_m92978080(L_1097, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t3916780224_m92978080_RuntimeMethod_var);
	}

IL_1a94:
	{
		GameObject_t1113636619 * L_1098 = V_125;
		NullCheck(L_1098);
		Transform_t3600365921 * L_1099 = GameObject_get_transform_m1369836730(L_1098, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1100 = ___position12;
		NullCheck(L_1099);
		Transform_set_position_m3387557959(L_1099, L_1100, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1101 = V_125;
		NullCheck(L_1101);
		Transform_t3600365921 * L_1102 = GameObject_get_transform_m1369836730(L_1101, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1103 = ___rotation13;
		NullCheck(L_1102);
		Transform_set_rotation_m3524318132(L_1102, L_1103, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1104 = V_125;
		NullCheck(L_1104);
		TextObjectData_t178506778 * L_1105 = GameObject_AddComponent_TisTextObjectData_t178506778_m4200790527(L_1104, /*hidden argument*/GameObject_AddComponent_TisTextObjectData_t178506778_m4200790527_RuntimeMethod_var);
		float L_1106 = ___size3;
		float L_1107 = ___extrudeDepth4;
		int32_t L_1108 = ___resolution5;
		float L_1109 = ___characterSpacing6;
		float L_1110 = ___lineSpacing7;
		float L_1111 = ___lineWidth8;
		NullCheck(L_1105);
		TextObjectData_SetData_m3153036784(L_1105, L_1106, L_1107, L_1108, L_1109, L_1110, L_1111, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1112 = V_125;
		return L_1112;
	}
}
// System.Collections.Generic.List`1<System.Char> FlyingText::ParseString(System.String,System.Collections.Generic.List`1<FlyingText3D.CommandData>&)
extern "C" IL2CPP_METHOD_ATTR List_1_t811567916 * FlyingText_ParseString_m426035362 (RuntimeObject * __this /* static, unused */, String_t* ___s0, List_1_t1625501175 ** ___commandData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_ParseString_m426035362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Dictionary_2_t2736202052 * V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	Color32_t2600501292  V_10;
	memset(&V_10, 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	List_1_t811567916 * V_13 = NULL;
	{
		List_1_t1625501175 ** L_0 = ___commandData1;
		List_1_t1625501175 * L_1 = (List_1_t1625501175 *)il2cpp_codegen_object_new(List_1_t1625501175_il2cpp_TypeInfo_var);
		List_1__ctor_m3109263299(L_1, /*hidden argument*/List_1__ctor_m3109263299_RuntimeMethod_var);
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_1);
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral3452614560, _stringLiteral757602046, /*hidden argument*/NULL);
		___s0 = L_3;
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m1273907647(L_4, _stringLiteral3451828116, _stringLiteral3451500448, /*hidden argument*/NULL);
		___s0 = L_5;
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		String_t* L_7 = String_Replace_m1273907647(L_6, _stringLiteral3451697042, _stringLiteral3451434912, /*hidden argument*/NULL);
		___s0 = L_7;
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m1273907647(L_8, _stringLiteral3009223076, _stringLiteral3452614566, /*hidden argument*/NULL);
		___s0 = L_9;
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral1586398788, _stringLiteral3452614566, /*hidden argument*/NULL);
		___s0 = L_11;
		V_0 = 0;
		String_t* L_12 = ___s0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = String_IndexOf_m3406607758(L_12, _stringLiteral3452614548, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_03bf;
	}

IL_0075:
	{
		String_t* L_15 = ___s0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = String_IndexOf_m3406607758(L_15, _stringLiteral3452614546, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0095;
		}
	}

IL_0090:
	{
		goto IL_03c6;
	}

IL_0095:
	{
		String_t* L_21 = ___s0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		int32_t L_24 = V_1;
		NullCheck(L_21);
		String_t* L_25 = String_Substring_m1610150815(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_25;
		String_t* L_26 = ___s0;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		String_t* L_30 = String_Remove_m562998446(L_26, L_27, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (int32_t)1)), /*hidden argument*/NULL);
		___s0 = L_30;
		int32_t L_31 = V_1;
		V_0 = L_31;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_32 = FlyingText_GetTagData_m344544921(NULL /*static, unused*/, (&V_3), (&V_4), (&V_5), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_03b2;
		}
	}
	{
		String_t* L_33 = V_4;
		NullCheck(L_33);
		String_t* L_34 = String_ToLower_m2029374922(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		String_t* L_35 = V_4;
		V_6 = L_35;
		String_t* L_36 = V_6;
		if (!L_36)
		{
			goto IL_039c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_37 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map0_59();
		if (L_37)
		{
			goto IL_014c;
		}
	}
	{
		Dictionary_2_t2736202052 * L_38 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_38, 7, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_7 = L_38;
		Dictionary_2_t2736202052 * L_39 = V_7;
		NullCheck(L_39);
		Dictionary_2_Add_m282647386(L_39, _stringLiteral4049040645, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_40 = V_7;
		NullCheck(L_40);
		Dictionary_2_Add_m282647386(L_40, _stringLiteral1586258015, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_41 = V_7;
		NullCheck(L_41);
		Dictionary_2_Add_m282647386(L_41, _stringLiteral3894120718, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_42 = V_7;
		NullCheck(L_42);
		Dictionary_2_Add_m282647386(L_42, _stringLiteral372704709, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_43 = V_7;
		NullCheck(L_43);
		Dictionary_2_Add_m282647386(L_43, _stringLiteral3141790020, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_44 = V_7;
		NullCheck(L_44);
		Dictionary_2_Add_m282647386(L_44, _stringLiteral1613539661, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_45 = V_7;
		NullCheck(L_45);
		Dictionary_2_Add_m282647386(L_45, _stringLiteral1092707369, 6, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_46 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map0_59(L_46);
	}

IL_014c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_47 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map0_59();
		String_t* L_48 = V_6;
		NullCheck(L_47);
		bool L_49 = Dictionary_2_TryGetValue_m1013208020(L_47, L_48, (&V_8), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_039c;
		}
	}
	{
		int32_t L_50 = V_8;
		switch (L_50)
		{
			case 0:
			{
				goto IL_0187;
			}
			case 1:
			{
				goto IL_01af;
			}
			case 2:
			{
				goto IL_0215;
			}
			case 3:
			{
				goto IL_0295;
			}
			case 4:
			{
				goto IL_02bd;
			}
			case 5:
			{
				goto IL_02e5;
			}
			case 6:
			{
				goto IL_030d;
			}
		}
	}
	{
		goto IL_039c;
	}

IL_0187:
	{
		String_t* L_51 = V_5;
		bool L_52 = Single_TryParse_m4264970052(NULL /*static, unused*/, L_51, (&V_9), /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01aa;
		}
	}
	{
		List_1_t1625501175 ** L_53 = ___commandData1;
		List_1_t1625501175 * L_54 = *((List_1_t1625501175 **)L_53);
		int32_t L_55 = V_1;
		float L_56 = V_9;
		float L_57 = L_56;
		RuntimeObject * L_58 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_57);
		CommandData_t153426433 * L_59 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_59, L_55, 1, L_58, /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_m3775996449(L_54, L_59, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_01aa:
	{
		goto IL_03b2;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		bool L_60 = FlyingText_TryParseColor_m2886930125(NULL /*static, unused*/, (&V_5), (&V_10), /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01d7;
		}
	}
	{
		List_1_t1625501175 ** L_61 = ___commandData1;
		List_1_t1625501175 * L_62 = *((List_1_t1625501175 **)L_61);
		int32_t L_63 = V_1;
		Color32_t2600501292  L_64 = V_10;
		Color32_t2600501292  L_65 = L_64;
		RuntimeObject * L_66 = Box(Color32_t2600501292_il2cpp_TypeInfo_var, &L_65);
		CommandData_t153426433 * L_67 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_67, L_63, 2, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		List_1_Add_m3775996449(L_62, L_67, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		goto IL_0210;
	}

IL_01d7:
	{
		String_t* L_68 = V_5;
		NullCheck(L_68);
		String_t* L_69 = String_ToLower_m2029374922(L_68, /*hidden argument*/NULL);
		V_5 = L_69;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Dictionary_2_t2385757591 * L_70 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__colorDictionary_57();
		String_t* L_71 = V_5;
		NullCheck(L_70);
		bool L_72 = Dictionary_2_ContainsKey_m1814118575(L_70, L_71, /*hidden argument*/Dictionary_2_ContainsKey_m1814118575_RuntimeMethod_var);
		if (!L_72)
		{
			goto IL_0210;
		}
	}
	{
		List_1_t1625501175 ** L_73 = ___commandData1;
		List_1_t1625501175 * L_74 = *((List_1_t1625501175 **)L_73);
		int32_t L_75 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		Dictionary_2_t2385757591 * L_76 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__colorDictionary_57();
		String_t* L_77 = V_5;
		NullCheck(L_76);
		Color32_t2600501292  L_78 = Dictionary_2_get_Item_m162569096(L_76, L_77, /*hidden argument*/Dictionary_2_get_Item_m162569096_RuntimeMethod_var);
		Color32_t2600501292  L_79 = L_78;
		RuntimeObject * L_80 = Box(Color32_t2600501292_il2cpp_TypeInfo_var, &L_79);
		CommandData_t153426433 * L_81 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_81, L_75, 2, L_80, /*hidden argument*/NULL);
		NullCheck(L_74);
		List_1_Add_m3775996449(L_74, L_81, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_0210:
	{
		goto IL_03b2;
	}

IL_0215:
	{
		String_t* L_82 = V_5;
		bool L_83 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_82, (&V_11), /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_023d;
		}
	}
	{
		List_1_t1625501175 ** L_84 = ___commandData1;
		List_1_t1625501175 * L_85 = *((List_1_t1625501175 **)L_84);
		int32_t L_86 = V_1;
		int32_t L_87 = V_11;
		int32_t L_88 = L_87;
		RuntimeObject * L_89 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_88);
		CommandData_t153426433 * L_90 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_90, L_86, 3, L_89, /*hidden argument*/NULL);
		NullCheck(L_85);
		List_1_Add_m3775996449(L_85, L_90, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		goto IL_0290;
	}

IL_023d:
	{
		String_t* L_91 = V_5;
		NullCheck(L_91);
		String_t* L_92 = String_ToLower_m2029374922(L_91, /*hidden argument*/NULL);
		V_5 = L_92;
		V_12 = 0;
		goto IL_0282;
	}

IL_024e:
	{
		String_t* L_93 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_94 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontNames_55();
		int32_t L_95 = V_12;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		String_t* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_98 = String_op_Equality_m920492651(NULL /*static, unused*/, L_93, L_97, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_027c;
		}
	}
	{
		List_1_t1625501175 ** L_99 = ___commandData1;
		List_1_t1625501175 * L_100 = *((List_1_t1625501175 **)L_99);
		int32_t L_101 = V_1;
		int32_t L_102 = V_12;
		int32_t L_103 = L_102;
		RuntimeObject * L_104 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_103);
		CommandData_t153426433 * L_105 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_105, L_101, 3, L_104, /*hidden argument*/NULL);
		NullCheck(L_100);
		List_1_Add_m3775996449(L_100, L_105, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		goto IL_0290;
	}

IL_027c:
	{
		int32_t L_106 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_0282:
	{
		int32_t L_107 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_108 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__fontNames_55();
		NullCheck(L_108);
		if ((((int32_t)L_107) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_108)->max_length)))))))
		{
			goto IL_024e;
		}
	}

IL_0290:
	{
		goto IL_03b2;
	}

IL_0295:
	{
		String_t* L_109 = V_5;
		bool L_110 = Single_TryParse_m4264970052(NULL /*static, unused*/, L_109, (&V_9), /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_02b8;
		}
	}
	{
		List_1_t1625501175 ** L_111 = ___commandData1;
		List_1_t1625501175 * L_112 = *((List_1_t1625501175 **)L_111);
		int32_t L_113 = V_1;
		float L_114 = V_9;
		float L_115 = L_114;
		RuntimeObject * L_116 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_115);
		CommandData_t153426433 * L_117 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_117, L_113, 4, L_116, /*hidden argument*/NULL);
		NullCheck(L_112);
		List_1_Add_m3775996449(L_112, L_117, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_02b8:
	{
		goto IL_03b2;
	}

IL_02bd:
	{
		String_t* L_118 = V_5;
		bool L_119 = Single_TryParse_m4264970052(NULL /*static, unused*/, L_118, (&V_9), /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_02e0;
		}
	}
	{
		List_1_t1625501175 ** L_120 = ___commandData1;
		List_1_t1625501175 * L_121 = *((List_1_t1625501175 **)L_120);
		int32_t L_122 = V_1;
		float L_123 = V_9;
		float L_124 = L_123;
		RuntimeObject * L_125 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_124);
		CommandData_t153426433 * L_126 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_126, L_122, 5, L_125, /*hidden argument*/NULL);
		NullCheck(L_121);
		List_1_Add_m3775996449(L_121, L_126, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_02e0:
	{
		goto IL_03b2;
	}

IL_02e5:
	{
		String_t* L_127 = V_5;
		bool L_128 = Single_TryParse_m4264970052(NULL /*static, unused*/, L_127, (&V_9), /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_0308;
		}
	}
	{
		List_1_t1625501175 ** L_129 = ___commandData1;
		List_1_t1625501175 * L_130 = *((List_1_t1625501175 **)L_129);
		int32_t L_131 = V_1;
		float L_132 = V_9;
		float L_133 = L_132;
		RuntimeObject * L_134 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_133);
		CommandData_t153426433 * L_135 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_135, L_131, 6, L_134, /*hidden argument*/NULL);
		NullCheck(L_130);
		List_1_Add_m3775996449(L_130, L_135, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_0308:
	{
		goto IL_03b2;
	}

IL_030d:
	{
		String_t* L_136 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_137 = String_op_Equality_m920492651(NULL /*static, unused*/, L_136, _stringLiteral4249957872, /*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_0337;
		}
	}
	{
		List_1_t1625501175 ** L_138 = ___commandData1;
		List_1_t1625501175 * L_139 = *((List_1_t1625501175 **)L_138);
		int32_t L_140 = V_1;
		int32_t L_141 = ((int32_t)0);
		RuntimeObject * L_142 = Box(Justify_t816261219_il2cpp_TypeInfo_var, &L_141);
		CommandData_t153426433 * L_143 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_143, L_140, 7, L_142, /*hidden argument*/NULL);
		NullCheck(L_139);
		List_1_Add_m3775996449(L_139, L_143, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		goto IL_0397;
	}

IL_0337:
	{
		String_t* L_144 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_145 = String_op_Equality_m920492651(NULL /*static, unused*/, L_144, _stringLiteral742876383, /*hidden argument*/NULL);
		if (!L_145)
		{
			goto IL_0361;
		}
	}
	{
		List_1_t1625501175 ** L_146 = ___commandData1;
		List_1_t1625501175 * L_147 = *((List_1_t1625501175 **)L_146);
		int32_t L_148 = V_1;
		int32_t L_149 = ((int32_t)2);
		RuntimeObject * L_150 = Box(Justify_t816261219_il2cpp_TypeInfo_var, &L_149);
		CommandData_t153426433 * L_151 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_151, L_148, 7, L_150, /*hidden argument*/NULL);
		NullCheck(L_147);
		List_1_Add_m3775996449(L_147, L_151, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		goto IL_0397;
	}

IL_0361:
	{
		String_t* L_152 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_153 = String_op_Equality_m920492651(NULL /*static, unused*/, L_152, _stringLiteral2696825260, /*hidden argument*/NULL);
		if (L_153)
		{
			goto IL_0383;
		}
	}
	{
		String_t* L_154 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_155 = String_op_Equality_m920492651(NULL /*static, unused*/, L_154, _stringLiteral2697939349, /*hidden argument*/NULL);
		if (!L_155)
		{
			goto IL_0397;
		}
	}

IL_0383:
	{
		List_1_t1625501175 ** L_156 = ___commandData1;
		List_1_t1625501175 * L_157 = *((List_1_t1625501175 **)L_156);
		int32_t L_158 = V_1;
		int32_t L_159 = ((int32_t)1);
		RuntimeObject * L_160 = Box(Justify_t816261219_il2cpp_TypeInfo_var, &L_159);
		CommandData_t153426433 * L_161 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_161, L_158, 7, L_160, /*hidden argument*/NULL);
		NullCheck(L_157);
		List_1_Add_m3775996449(L_157, L_161, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
	}

IL_0397:
	{
		goto IL_03b2;
	}

IL_039c:
	{
		String_t* L_162 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_163 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3255741185, L_162, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_163, /*hidden argument*/NULL);
		goto IL_03b2;
	}

IL_03b2:
	{
		String_t* L_164 = ___s0;
		int32_t L_165 = V_0;
		NullCheck(L_164);
		int32_t L_166 = String_IndexOf_m3406607758(L_164, _stringLiteral3452614548, L_165, /*hidden argument*/NULL);
		V_1 = L_166;
	}

IL_03bf:
	{
		int32_t L_167 = V_1;
		if ((!(((uint32_t)L_167) == ((uint32_t)(-1)))))
		{
			goto IL_0075;
		}
	}

IL_03c6:
	{
		List_1_t1625501175 ** L_168 = ___commandData1;
		List_1_t1625501175 * L_169 = *((List_1_t1625501175 **)L_168);
		CommandData_t153426433 * L_170 = (CommandData_t153426433 *)il2cpp_codegen_object_new(CommandData_t153426433_il2cpp_TypeInfo_var);
		CommandData__ctor_m2231880892(L_170, (-1), 0, NULL, /*hidden argument*/NULL);
		NullCheck(L_169);
		List_1_Add_m3775996449(L_169, L_170, /*hidden argument*/List_1_Add_m3775996449_RuntimeMethod_var);
		String_t* L_171 = ___s0;
		NullCheck(L_171);
		String_t* L_172 = String_Replace_m1273907647(L_171, _stringLiteral3451500448, _stringLiteral3451828128, /*hidden argument*/NULL);
		___s0 = L_172;
		String_t* L_173 = ___s0;
		NullCheck(L_173);
		String_t* L_174 = String_Replace_m1273907647(L_173, _stringLiteral3451434912, _stringLiteral3451697056, /*hidden argument*/NULL);
		___s0 = L_174;
		String_t* L_175 = ___s0;
		NullCheck(L_175);
		CharU5BU5D_t3528271667* L_176 = String_ToCharArray_m1492846834(L_175, /*hidden argument*/NULL);
		List_1_t811567916 * L_177 = (List_1_t811567916 *)il2cpp_codegen_object_new(List_1_t811567916_il2cpp_TypeInfo_var);
		List_1__ctor_m3444728237(L_177, (RuntimeObject*)(RuntimeObject*)L_176, /*hidden argument*/List_1__ctor_m3444728237_RuntimeMethod_var);
		V_13 = L_177;
		List_1_t811567916 * L_178 = V_13;
		NullCheck(L_178);
		List_1_Add_m1685117923(L_178, 0, /*hidden argument*/List_1_Add_m1685117923_RuntimeMethod_var);
		List_1_t811567916 * L_179 = V_13;
		return L_179;
	}
}
// System.Boolean FlyingText::GetTagData(System.String&,System.String&,System.String&)
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_GetTagData_m344544921 (RuntimeObject * __this /* static, unused */, String_t** ___s0, String_t** ___tag1, String_t** ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_GetTagData_m344544921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		String_t** L_0 = ___s0;
		String_t* L_1 = *((String_t**)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_2 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__removeChars_56();
		NullCheck(L_1);
		int32_t L_3 = String_IndexOfAny_m4159774896(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002a;
		}
	}
	{
		String_t** L_4 = ___s0;
		String_t** L_5 = ___s0;
		String_t* L_6 = *((String_t**)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_7 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get__removeChars_56();
		NullCheck(L_6);
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral757602046, L_8, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)L_9);
	}

IL_002a:
	{
		String_t** L_10 = ___s0;
		String_t* L_11 = *((String_t**)L_10);
		CharU5BU5D_t3528271667* L_12 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)61));
		NullCheck(L_11);
		StringU5BU5D_t1281789340* L_13 = String_Split_m3646115398(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		StringU5BU5D_t1281789340* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		String_t** L_15 = ___tag1;
		*((RuntimeObject **)(L_15)) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_15), (RuntimeObject *)_stringLiteral757602046);
		String_t** L_16 = ___data2;
		*((RuntimeObject **)(L_16)) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_16), (RuntimeObject *)_stringLiteral757602046);
		return (bool)0;
	}

IL_0056:
	{
		String_t** L_17 = ___tag1;
		StringU5BU5D_t1281789340* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		*((RuntimeObject **)(L_17)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_17), (RuntimeObject *)L_20);
		String_t** L_21 = ___data2;
		StringU5BU5D_t1281789340* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		*((RuntimeObject **)(L_21)) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_21), (RuntimeObject *)L_24);
		return (bool)1;
	}
}
// System.Boolean FlyingText::TryParseColor(System.String&,UnityEngine.Color32&)
extern "C" IL2CPP_METHOD_ATTR bool FlyingText_TryParseColor_m2886930125 (RuntimeObject * __this /* static, unused */, String_t** ___s0, Color32_t2600501292 * ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlyingText_TryParseColor_m2886930125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Color32_t2600501292 * L_0 = ___color1;
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_2 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*(Color32_t2600501292 *)L_0 = L_2;
		String_t** L_3 = ___s0;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_002e;
		}
	}
	{
		String_t** L_6 = ___s0;
		String_t* L_7 = *((String_t**)L_6);
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m1759067526(L_7, _stringLiteral3452614525, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		String_t** L_9 = ___s0;
		String_t* L_10 = *((String_t**)L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Substring_m1610150815(L_10, 1, 6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_12 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_13 = Int32_TryParse_m135955795(NULL /*static, unused*/, L_11, ((int32_t)515), L_12, (&V_0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		Color32_t2600501292 * L_14 = ___color1;
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		int32_t L_17 = V_0;
		Color32__ctor_m4150508762(L_14, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_15>>(int32_t)((int32_t)16)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)8))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)255)))))), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0073:
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
// System.Void FlyingText3D.CommandData::.ctor(System.Int32,FlyingText3D.Command,System.Object)
extern "C" IL2CPP_METHOD_ATTR void CommandData__ctor_m2231880892 (CommandData_t153426433 * __this, int32_t ___index0, int32_t ___command1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___index0;
		__this->set_index_0(L_0);
		int32_t L_1 = ___command1;
		__this->set_command_1(L_1);
		RuntimeObject * L_2 = ___data2;
		__this->set_data_2(L_2);
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
// System.Void FlyingText3D.ContourData::.ctor(UnityEngine.Vector2[],System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR void ContourData__ctor_m1936614288 (ContourData_t2198716925 * __this, Vector2U5BU5D_t1457185986* ___points0, BooleanU5BU5D_t2897418192* ___onCurves1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_t1457185986* L_0 = ___points0;
		__this->set_points_2(L_0);
		BooleanU5BU5D_t2897418192* L_1 = ___onCurves1;
		__this->set_onCurves_3(L_1);
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
// System.Void FlyingText3D.FontData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FontData__ctor_m3700381678 (FontData_t3499866359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FontData__ctor_m3700381678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_ttfFile_0((TextAsset_t3022178571 *)NULL);
		__this->set_fontName_1(_stringLiteral757602046);
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
// System.Void FlyingText3D.GlyphData::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData__ctor_m3832508344 (GlyphData_t620095268 * __this, List_1_t2929260728 * ___pointsList0, List_1_t74525638 * ___onCurvesList1, int32_t ___xMin2, int32_t ___yMin3, int32_t ___xMax4, int32_t ___yMax5, int32_t ___unitsPerEm6, int32_t ___glyphIndex7, const RuntimeMethod* method)
{
	{
		__this->set__isVisibleChar_1((bool)0);
		__this->set__extrudeDepth_4((0.0f));
		__this->set__triDataComputed_15((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___glyphIndex7;
		__this->set__glyphIndex_0(L_0);
		List_1_t2929260728 * L_1 = ___pointsList0;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_2 = ___xMin2;
		__this->set__xMin_18(L_2);
		int32_t L_3 = ___yMin3;
		__this->set__yMin_19(L_3);
		int32_t L_4 = ___xMax4;
		__this->set__xMax_20(L_4);
		int32_t L_5 = ___yMax5;
		__this->set__yMax_21(L_5);
		int32_t L_6 = ___unitsPerEm6;
		__this->set__unitsPerEm_22(L_6);
		List_1_t2929260728 * L_7 = ___pointsList0;
		List_1_t74525638 * L_8 = ___onCurvesList1;
		List_1_t3670791667 * L_9 = GlyphData_SortPointsList_m2678576955(__this, L_7, L_8, /*hidden argument*/NULL);
		__this->set__contourList_24(L_9);
		__this->set__isVisibleChar_1((bool)1);
	}

IL_0069:
	{
		__this->set__scaleFactor_3((-1.0f));
		__this->set__resolution_2((-1));
		return;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_glyphIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_glyphIndex_m2666095189 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__glyphIndex_0();
		return L_0;
	}
}
// System.Boolean FlyingText3D.GlyphData::get_isVisibleChar()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_isVisibleChar_m2922145535 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isVisibleChar_1();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_resolution()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_resolution_m1135084346 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__resolution_2();
		return L_0;
	}
}
// System.Single FlyingText3D.GlyphData::get_scaleFactor()
extern "C" IL2CPP_METHOD_ATTR float GlyphData_get_scaleFactor_m481370193 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__scaleFactor_3();
		return L_0;
	}
}
// System.Single FlyingText3D.GlyphData::get_extrudeDepth()
extern "C" IL2CPP_METHOD_ATTR float GlyphData_get_extrudeDepth_m1881518986 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__extrudeDepth_4();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_vertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_vertexCount_m3966091887 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__vertexCount_5();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_triCount()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_triCount_m847416089 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__triCount_6();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_triCount2()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_triCount2_m2560667630 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__triCount2_7();
		return L_0;
	}
}
// UnityEngine.Vector3[] FlyingText3D.GlyphData::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* GlyphData_get_vertices_m3909097520 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = __this->get__vertices_9();
		return L_0;
	}
}
// System.Int32[] FlyingText3D.GlyphData::get_triangles()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* GlyphData_get_triangles_m224050330 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = __this->get__triangles_11();
		return L_0;
	}
}
// System.Int32[] FlyingText3D.GlyphData::get_triangles2()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* GlyphData_get_triangles2_m3964612917 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = __this->get__triangles2_12();
		return L_0;
	}
}
// System.Boolean FlyingText3D.GlyphData::get_useSubmesh()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_useSubmesh_m3967471625 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__useSubmesh_13();
		return L_0;
	}
}
// System.Boolean FlyingText3D.GlyphData::get_useBack()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_useBack_m1545662753 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__useBack_14();
		return L_0;
	}
}
// System.Boolean FlyingText3D.GlyphData::get_triDataComputed()
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_get_triDataComputed_m775494336 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__triDataComputed_15();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_frontVertIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_frontVertIndex_m2980225376 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__frontVertIndex_17();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_xMin()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_xMin_m3683166614 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__xMin_18();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_yMin()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_yMin_m2096879697 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__yMin_19();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_xMax()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_xMax_m3682249102 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__xMax_20();
		return L_0;
	}
}
// System.Int32 FlyingText3D.GlyphData::get_yMax()
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_get_yMax_m2095962185 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__yMax_21();
		return L_0;
	}
}
// System.Collections.Generic.List`1<FlyingText3D.ContourData> FlyingText3D.GlyphData::SortPointsList(System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>)
extern "C" IL2CPP_METHOD_ATTR List_1_t3670791667 * GlyphData_SortPointsList_m2678576955 (GlyphData_t620095268 * __this, List_1_t2929260728 * ___pointsList0, List_1_t74525638 * ___onCurvesList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_SortPointsList_m2678576955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3670791667 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2U5BU5D_t1457185986* V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	List_1_t3670791667 * V_12 = NULL;
	int32_t V_13 = 0;
	ContourData_t2198716925 * V_14 = NULL;
	int32_t V_15 = 0;
	ContourData_t2198716925 * G_B23_0 = NULL;
	ContourData_t2198716925 * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	ContourData_t2198716925 * G_B24_1 = NULL;
	ContourData_t2198716925 * G_B27_0 = NULL;
	ContourData_t2198716925 * G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	ContourData_t2198716925 * G_B28_1 = NULL;
	{
		List_1_t2929260728 * L_0 = ___pointsList0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3201839622(L_0, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		List_1_t3670791667 * L_2 = (List_1_t3670791667 *)il2cpp_codegen_object_new(List_1_t3670791667_il2cpp_TypeInfo_var);
		List_1__ctor_m3475034485(L_2, L_1, /*hidden argument*/List_1__ctor_m3475034485_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0030;
	}

IL_0013:
	{
		List_1_t3670791667 * L_3 = V_0;
		List_1_t2929260728 * L_4 = ___pointsList0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Vector2U5BU5D_t1457185986* L_6 = List_1_get_Item_m4003898591(L_4, L_5, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		List_1_t74525638 * L_7 = ___onCurvesList1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		BooleanU5BU5D_t2897418192* L_9 = List_1_get_Item_m2882277810(L_7, L_8, /*hidden argument*/List_1_get_Item_m2882277810_RuntimeMethod_var);
		ContourData_t2198716925 * L_10 = (ContourData_t2198716925 *)il2cpp_codegen_object_new(ContourData_t2198716925_il2cpp_TypeInfo_var);
		ContourData__ctor_m1936614288(L_10, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m4088210603(L_3, L_10, /*hidden argument*/List_1_Add_m4088210603_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		List_1_t2929260728 * L_13 = ___pointsList0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3201839622(L_13, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t3670791667 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m1078179241(L_15, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_01ae;
		}
	}
	{
		V_3 = 0;
		goto IL_0195;
	}

IL_0051:
	{
		List_1_t3670791667 * L_18 = V_0;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		ContourData_t2198716925 * L_20 = List_1_get_Item_m1453868451(L_18, L_19, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		Vector2U5BU5D_t1457185986* L_21 = GlyphData_RenderContourPoints_m3775104664(__this, L_20, 1, (bool)1, /*hidden argument*/NULL);
		V_4 = L_21;
		List_1_t3670791667 * L_22 = V_0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		ContourData_t2198716925 * L_24 = List_1_get_Item_m1453868451(L_22, L_23, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		Vector2U5BU5D_t1457185986* L_25 = V_4;
		NullCheck(L_24);
		L_24->set_renderedPoints_4(L_25);
		Vector2U5BU5D_t1457185986* L_26 = V_4;
		NullCheck(L_26);
		float L_27 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		V_5 = L_27;
		Vector2U5BU5D_t1457185986* L_28 = V_4;
		NullCheck(L_28);
		float L_29 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		V_6 = L_29;
		Vector2U5BU5D_t1457185986* L_30 = V_4;
		NullCheck(L_30);
		float L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		V_7 = L_31;
		Vector2U5BU5D_t1457185986* L_32 = V_4;
		NullCheck(L_32);
		float L_33 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		V_8 = L_33;
		Vector2U5BU5D_t1457185986* L_34 = V_4;
		NullCheck(L_34);
		V_9 = (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length))));
		V_10 = 1;
		goto IL_015e;
	}

IL_00ba:
	{
		Vector2U5BU5D_t1457185986* L_35 = V_4;
		int32_t L_36 = V_10;
		NullCheck(L_35);
		float L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->get_x_0();
		float L_38 = V_5;
		if ((!(((float)L_37) > ((float)L_38))))
		{
			goto IL_00e4;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_39 = V_4;
		int32_t L_40 = V_10;
		NullCheck(L_39);
		float L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_x_0();
		V_5 = L_41;
		goto IL_0109;
	}

IL_00e4:
	{
		Vector2U5BU5D_t1457185986* L_42 = V_4;
		int32_t L_43 = V_10;
		NullCheck(L_42);
		float L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_x_0();
		float L_45 = V_6;
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_0109;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_46 = V_4;
		int32_t L_47 = V_10;
		NullCheck(L_46);
		float L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->get_x_0();
		V_6 = L_48;
	}

IL_0109:
	{
		Vector2U5BU5D_t1457185986* L_49 = V_4;
		int32_t L_50 = V_10;
		NullCheck(L_49);
		float L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->get_y_1();
		float L_52 = V_7;
		if ((!(((float)L_51) > ((float)L_52))))
		{
			goto IL_0133;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_53 = V_4;
		int32_t L_54 = V_10;
		NullCheck(L_53);
		float L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->get_y_1();
		V_7 = L_55;
		goto IL_0158;
	}

IL_0133:
	{
		Vector2U5BU5D_t1457185986* L_56 = V_4;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		float L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->get_y_1();
		float L_59 = V_8;
		if ((!(((float)L_58) < ((float)L_59))))
		{
			goto IL_0158;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_60 = V_4;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		float L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->get_y_1();
		V_8 = L_62;
	}

IL_0158:
	{
		int32_t L_63 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_015e:
	{
		int32_t L_64 = V_10;
		int32_t L_65 = V_9;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_00ba;
		}
	}
	{
		List_1_t3670791667 * L_66 = V_0;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		ContourData_t2198716925 * L_68 = List_1_get_Item_m1453868451(L_66, L_67, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		float L_69 = V_5;
		float L_70 = V_7;
		Vector2_t2156229523  L_71;
		memset(&L_71, 0, sizeof(L_71));
		Vector2__ctor_m3970636864((&L_71), L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		L_68->set_maxPoint_0(L_71);
		List_1_t3670791667 * L_72 = V_0;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		ContourData_t2198716925 * L_74 = List_1_get_Item_m1453868451(L_72, L_73, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		float L_75 = V_6;
		float L_76 = V_8;
		Vector2_t2156229523  L_77;
		memset(&L_77, 0, sizeof(L_77));
		Vector2__ctor_m3970636864((&L_77), L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		L_74->set_minPoint_1(L_77);
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_0195:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = V_2;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0051;
		}
	}
	{
		List_1_t3670791667 * L_81 = V_0;
		intptr_t L_82 = (intptr_t)GlyphData_AreaCompare_m2601298532_RuntimeMethod_var;
		Comparison_1_t1973648104 * L_83 = (Comparison_1_t1973648104 *)il2cpp_codegen_object_new(Comparison_1_t1973648104_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m74631376(L_83, __this, L_82, /*hidden argument*/Comparison_1__ctor_m74631376_RuntimeMethod_var);
		NullCheck(L_81);
		List_1_Sort_m4106579492(L_81, L_83, /*hidden argument*/List_1_Sort_m4106579492_RuntimeMethod_var);
	}

IL_01ae:
	{
		List_1_t3670791667 * L_84 = V_0;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		ContourData_t2198716925 * L_86 = List_1_get_Item_m1453868451(L_84, ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_86);
		Vector2U5BU5D_t1457185986* L_87 = L_86->get_points_2();
		bool L_88 = GlyphData_IsClockwise_m2293411107(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		__this->set__reverse_23((bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0));
		V_11 = 0;
		goto IL_0257;
	}

IL_01d2:
	{
		bool L_89 = __this->get__reverse_23();
		if (L_89)
		{
			goto IL_020d;
		}
	}
	{
		List_1_t3670791667 * L_90 = V_0;
		int32_t L_91 = V_11;
		NullCheck(L_90);
		ContourData_t2198716925 * L_92 = List_1_get_Item_m1453868451(L_90, L_91, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		List_1_t3670791667 * L_93 = V_0;
		int32_t L_94 = V_11;
		NullCheck(L_93);
		ContourData_t2198716925 * L_95 = List_1_get_Item_m1453868451(L_93, L_94, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_95);
		Vector2U5BU5D_t1457185986* L_96 = L_95->get_points_2();
		bool L_97 = GlyphData_IsClockwise_m2293411107(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		G_B22_0 = L_92;
		if (!L_97)
		{
			G_B23_0 = L_92;
			goto IL_0202;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		goto IL_0203;
	}

IL_0202:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0203:
	{
		NullCheck(G_B24_1);
		G_B24_1->set_side_5(G_B24_0);
		goto IL_0251;
	}

IL_020d:
	{
		List_1_t3670791667 * L_98 = V_0;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		ContourData_t2198716925 * L_100 = List_1_get_Item_m1453868451(L_98, L_99, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		List_1_t3670791667 * L_101 = V_0;
		int32_t L_102 = V_11;
		NullCheck(L_101);
		ContourData_t2198716925 * L_103 = List_1_get_Item_m1453868451(L_101, L_102, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_103);
		Vector2U5BU5D_t1457185986* L_104 = L_103->get_points_2();
		bool L_105 = GlyphData_IsClockwise_m2293411107(NULL /*static, unused*/, L_104, /*hidden argument*/NULL);
		G_B26_0 = L_100;
		if (!L_105)
		{
			G_B27_0 = L_100;
			goto IL_0232;
		}
	}
	{
		G_B28_0 = 0;
		G_B28_1 = G_B26_0;
		goto IL_0233;
	}

IL_0232:
	{
		G_B28_0 = 1;
		G_B28_1 = G_B27_0;
	}

IL_0233:
	{
		NullCheck(G_B28_1);
		G_B28_1->set_side_5(G_B28_0);
		int32_t L_106 = V_2;
		if ((((int32_t)L_106) <= ((int32_t)1)))
		{
			goto IL_0251;
		}
	}
	{
		List_1_t3670791667 * L_107 = V_0;
		int32_t L_108 = V_11;
		NullCheck(L_107);
		ContourData_t2198716925 * L_109 = List_1_get_Item_m1453868451(L_107, L_108, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_109);
		Vector2U5BU5D_t1457185986* L_110 = L_109->get_renderedPoints_4();
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_110, /*hidden argument*/NULL);
	}

IL_0251:
	{
		int32_t L_111 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
	}

IL_0257:
	{
		int32_t L_112 = V_11;
		int32_t L_113 = V_2;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_01d2;
		}
	}
	{
		int32_t L_114 = V_2;
		if ((!(((uint32_t)L_114) == ((uint32_t)1))))
		{
			goto IL_0268;
		}
	}
	{
		List_1_t3670791667 * L_115 = V_0;
		return L_115;
	}

IL_0268:
	{
		int32_t L_116 = V_2;
		List_1_t3670791667 * L_117 = (List_1_t3670791667 *)il2cpp_codegen_object_new(List_1_t3670791667_il2cpp_TypeInfo_var);
		List_1__ctor_m3475034485(L_117, L_116, /*hidden argument*/List_1__ctor_m3475034485_RuntimeMethod_var);
		V_12 = L_117;
		V_13 = 0;
		goto IL_0321;
	}

IL_0278:
	{
		List_1_t3670791667 * L_118 = V_0;
		int32_t L_119 = V_13;
		NullCheck(L_118);
		ContourData_t2198716925 * L_120 = List_1_get_Item_m1453868451(L_118, L_119, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		V_14 = L_120;
		ContourData_t2198716925 * L_121 = V_14;
		NullCheck(L_121);
		int32_t L_122 = L_121->get_side_5();
		if ((!(((uint32_t)L_122) == ((uint32_t)1))))
		{
			goto IL_031b;
		}
	}
	{
		List_1_t3670791667 * L_123 = V_12;
		ContourData_t2198716925 * L_124 = V_14;
		NullCheck(L_123);
		List_1_Add_m4088210603(L_123, L_124, /*hidden argument*/List_1_Add_m4088210603_RuntimeMethod_var);
		List_1_t3670791667 * L_125 = V_0;
		int32_t L_126 = V_13;
		int32_t L_127 = L_126;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)1));
		NullCheck(L_125);
		List_1_RemoveAt_m770919389(L_125, L_127, /*hidden argument*/List_1_RemoveAt_m770919389_RuntimeMethod_var);
		V_15 = 0;
		goto IL_030b;
	}

IL_02ad:
	{
		List_1_t3670791667 * L_128 = V_0;
		int32_t L_129 = V_15;
		NullCheck(L_128);
		ContourData_t2198716925 * L_130 = List_1_get_Item_m1453868451(L_128, L_129, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_130);
		int32_t L_131 = L_130->get_side_5();
		if (L_131)
		{
			goto IL_0305;
		}
	}
	{
		ContourData_t2198716925 * L_132 = V_14;
		NullCheck(L_132);
		Vector2U5BU5D_t1457185986* L_133 = L_132->get_renderedPoints_4();
		List_1_t3670791667 * L_134 = V_0;
		int32_t L_135 = V_15;
		NullCheck(L_134);
		ContourData_t2198716925 * L_136 = List_1_get_Item_m1453868451(L_134, L_135, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_136);
		Vector2U5BU5D_t1457185986* L_137 = L_136->get_renderedPoints_4();
		NullCheck(L_137);
		bool L_138 = GlyphData_PolyContainsPoint_m886294331(__this, L_133, (*(Vector2_t2156229523 *)((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		if (!L_138)
		{
			goto IL_0305;
		}
	}
	{
		List_1_t3670791667 * L_139 = V_12;
		List_1_t3670791667 * L_140 = V_0;
		int32_t L_141 = V_15;
		NullCheck(L_140);
		ContourData_t2198716925 * L_142 = List_1_get_Item_m1453868451(L_140, L_141, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_139);
		List_1_Add_m4088210603(L_139, L_142, /*hidden argument*/List_1_Add_m4088210603_RuntimeMethod_var);
		List_1_t3670791667 * L_143 = V_0;
		int32_t L_144 = V_15;
		int32_t L_145 = L_144;
		V_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)1));
		NullCheck(L_143);
		List_1_RemoveAt_m770919389(L_143, L_145, /*hidden argument*/List_1_RemoveAt_m770919389_RuntimeMethod_var);
	}

IL_0305:
	{
		int32_t L_146 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)1));
	}

IL_030b:
	{
		int32_t L_147 = V_15;
		List_1_t3670791667 * L_148 = V_0;
		NullCheck(L_148);
		int32_t L_149 = List_1_get_Count_m1078179241(L_148, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		if ((((int32_t)L_147) < ((int32_t)L_149)))
		{
			goto IL_02ad;
		}
	}
	{
		V_13 = (-1);
	}

IL_031b:
	{
		int32_t L_150 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_0321:
	{
		int32_t L_151 = V_13;
		List_1_t3670791667 * L_152 = V_0;
		NullCheck(L_152);
		int32_t L_153 = List_1_get_Count_m1078179241(L_152, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		if ((((int32_t)L_151) < ((int32_t)L_153)))
		{
			goto IL_0278;
		}
	}
	{
		List_1_t3670791667 * L_154 = V_12;
		return L_154;
	}
}
// System.Boolean FlyingText3D.GlyphData::PolyContainsPoint(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_PolyContainsPoint_m886294331 (GlyphData_t620095268 * __this, Vector2U5BU5D_t1457185986* ___polyPoints0, Vector2_t2156229523  ___p1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = (bool)0;
		Vector2U5BU5D_t1457185986* L_0 = ___polyPoints0;
		NullCheck(L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1));
		Vector2U5BU5D_t1457185986* L_1 = ___polyPoints0;
		NullCheck(L_1);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		V_3 = 0;
		goto IL_00df;
	}

IL_0013:
	{
		Vector2U5BU5D_t1457185986* L_2 = ___polyPoints0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		float L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_y_1();
		float L_5 = (&___p1)->get_y_1();
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0043;
		}
	}
	{
		float L_6 = (&___p1)->get_y_1();
		Vector2U5BU5D_t1457185986* L_7 = ___polyPoints0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_y_1();
		if ((((float)L_6) < ((float)L_9)))
		{
			goto IL_0073;
		}
	}

IL_0043:
	{
		Vector2U5BU5D_t1457185986* L_10 = ___polyPoints0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_1();
		float L_13 = (&___p1)->get_y_1();
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_00d9;
		}
	}
	{
		float L_14 = (&___p1)->get_y_1();
		Vector2U5BU5D_t1457185986* L_15 = ___polyPoints0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_y_1();
		if ((!(((float)L_14) < ((float)L_17))))
		{
			goto IL_00d9;
		}
	}

IL_0073:
	{
		float L_18 = (&___p1)->get_x_0();
		Vector2U5BU5D_t1457185986* L_19 = ___polyPoints0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		float L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_x_0();
		Vector2U5BU5D_t1457185986* L_22 = ___polyPoints0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_x_0();
		float L_25 = (&___p1)->get_y_1();
		Vector2U5BU5D_t1457185986* L_26 = ___polyPoints0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		float L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_y_1();
		Vector2U5BU5D_t1457185986* L_29 = ___polyPoints0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		float L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->get_y_1();
		Vector2U5BU5D_t1457185986* L_32 = ___polyPoints0;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		float L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_y_1();
		Vector2U5BU5D_t1457185986* L_35 = ___polyPoints0;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		float L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->get_x_0();
		if ((!(((float)L_18) < ((float)((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_24)), (float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_28))))/(float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_34)))), (float)L_37))))))
		{
			goto IL_00d9;
		}
	}
	{
		bool L_38 = V_0;
		V_0 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
	}

IL_00d9:
	{
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		V_1 = L_40;
	}

IL_00df:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0013;
		}
	}
	{
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Int32 FlyingText3D.GlyphData::AreaCompare(FlyingText3D.ContourData,FlyingText3D.ContourData)
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_AreaCompare_m2601298532 (GlyphData_t620095268 * __this, ContourData_t2198716925 * ___a0, ContourData_t2198716925 * ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		ContourData_t2198716925 * L_0 = ___a0;
		NullCheck(L_0);
		Vector2_t2156229523 * L_1 = L_0->get_address_of_maxPoint_0();
		float L_2 = L_1->get_x_0();
		ContourData_t2198716925 * L_3 = ___a0;
		NullCheck(L_3);
		Vector2_t2156229523 * L_4 = L_3->get_address_of_minPoint_1();
		float L_5 = L_4->get_x_0();
		ContourData_t2198716925 * L_6 = ___a0;
		NullCheck(L_6);
		Vector2_t2156229523 * L_7 = L_6->get_address_of_maxPoint_0();
		float L_8 = L_7->get_y_1();
		ContourData_t2198716925 * L_9 = ___a0;
		NullCheck(L_9);
		Vector2_t2156229523 * L_10 = L_9->get_address_of_minPoint_1();
		float L_11 = L_10->get_y_1();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_11))));
		ContourData_t2198716925 * L_12 = ___b1;
		NullCheck(L_12);
		Vector2_t2156229523 * L_13 = L_12->get_address_of_maxPoint_0();
		float L_14 = L_13->get_x_0();
		ContourData_t2198716925 * L_15 = ___b1;
		NullCheck(L_15);
		Vector2_t2156229523 * L_16 = L_15->get_address_of_minPoint_1();
		float L_17 = L_16->get_x_0();
		ContourData_t2198716925 * L_18 = ___b1;
		NullCheck(L_18);
		Vector2_t2156229523 * L_19 = L_18->get_address_of_maxPoint_0();
		float L_20 = L_19->get_y_1();
		ContourData_t2198716925 * L_21 = ___b1;
		NullCheck(L_21);
		Vector2_t2156229523 * L_22 = L_21->get_address_of_minPoint_1();
		float L_23 = L_22->get_y_1();
		int32_t L_24 = Single_CompareTo_m189772128((&V_0), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_17)), (float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_23)))), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Int32 FlyingText3D.GlyphData::XMaxCompare(FlyingText3D.InsideData,FlyingText3D.InsideData)
extern "C" IL2CPP_METHOD_ATTR int32_t GlyphData_XMaxCompare_m541087491 (GlyphData_t620095268 * __this, InsideData_t2359708509 * ___a0, InsideData_t2359708509 * ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		InsideData_t2359708509 * L_0 = ___a0;
		NullCheck(L_0);
		Vector2_t2156229523 * L_1 = L_0->get_address_of_xMaxPoint_0();
		float L_2 = L_1->get_x_0();
		InsideData_t2359708509 * L_3 = ___b1;
		NullCheck(L_3);
		Vector2_t2156229523 * L_4 = L_3->get_address_of_xMaxPoint_0();
		float L_5 = L_4->get_x_0();
		V_0 = (bool)((((float)L_2) < ((float)L_5))? 1 : 0);
		InsideData_t2359708509 * L_6 = ___b1;
		NullCheck(L_6);
		Vector2_t2156229523 * L_7 = L_6->get_address_of_xMaxPoint_0();
		float L_8 = L_7->get_x_0();
		InsideData_t2359708509 * L_9 = ___a0;
		NullCheck(L_9);
		Vector2_t2156229523 * L_10 = L_9->get_address_of_xMaxPoint_0();
		float L_11 = L_10->get_x_0();
		int32_t L_12 = Boolean_CompareTo_m3774767002((&V_0), (bool)((((float)L_8) < ((float)L_11))? 1 : 0), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector2[] FlyingText3D.GlyphData::RenderContourPoints(FlyingText3D.ContourData,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* GlyphData_RenderContourPoints_m3775104664 (GlyphData_t620095268 * __this, ContourData_t2198716925 * ___contour0, int32_t ___resolution1, bool ___initialTest2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_RenderContourPoints_m3775104664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	BooleanU5BU5D_t2897418192* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t3628304265 * V_3 = NULL;
	float V_4 = 0.0f;
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	Vector2_t2156229523  V_16;
	memset(&V_16, 0, sizeof(V_16));
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	float V_20 = 0.0f;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	Vector2_t2156229523  V_25;
	memset(&V_25, 0, sizeof(V_25));
	Vector2U5BU5D_t1457185986* V_26 = NULL;
	{
		int32_t L_0 = ___resolution1;
		__this->set__resolution_2(L_0);
		ContourData_t2198716925 * L_1 = ___contour0;
		NullCheck(L_1);
		Vector2U5BU5D_t1457185986* L_2 = L_1->get_points_2();
		V_0 = L_2;
		ContourData_t2198716925 * L_3 = ___contour0;
		NullCheck(L_3);
		BooleanU5BU5D_t2897418192* L_4 = L_3->get_onCurves_3();
		V_1 = L_4;
		Vector2U5BU5D_t1457185986* L_5 = V_0;
		NullCheck(L_5);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))));
		int32_t L_6 = V_2;
		int32_t L_7 = ___resolution1;
		List_1_t3628304265 * L_8 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m4225053658(L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/List_1__ctor_m4225053658_RuntimeMethod_var);
		V_3 = L_8;
		int32_t L_9 = __this->get__unitsPerEm_22();
		int32_t L_10 = ___resolution1;
		V_4 = ((float)((float)(((float)((float)((int32_t)((int32_t)L_9/(int32_t)2)))))/(float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)2)))))));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_11 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_11;
		V_9 = 0;
		V_10 = 0;
		goto IL_0286;
	}

IL_0044:
	{
		int32_t L_12 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_11;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0055;
		}
	}
	{
		V_11 = 0;
	}

IL_0055:
	{
		BooleanU5BU5D_t2897418192* L_15 = V_1;
		int32_t L_16 = V_10;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if (!L_18)
		{
			goto IL_0104;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_19 = V_1;
		int32_t L_20 = V_11;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		List_1_t3628304265 * L_23 = V_3;
		Vector2U5BU5D_t1457185986* L_24 = V_0;
		int32_t L_25 = V_10;
		NullCheck(L_24);
		NullCheck(L_23);
		List_1_Add_m1156250970(L_23, (*(Vector2_t2156229523 *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))), /*hidden argument*/List_1_Add_m1156250970_RuntimeMethod_var);
		int32_t L_26 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		goto IL_0286;
	}

IL_0085:
	{
		int32_t L_27 = V_11;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_12;
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0096;
		}
	}
	{
		V_12 = 0;
	}

IL_0096:
	{
		Vector2U5BU5D_t1457185986* L_30 = V_0;
		int32_t L_31 = V_10;
		NullCheck(L_30);
		V_5 = (*(Vector2_t2156229523 *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))));
		Vector2U5BU5D_t1457185986* L_32 = V_0;
		int32_t L_33 = V_11;
		NullCheck(L_32);
		V_6 = (*(Vector2_t2156229523 *)((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))));
		BooleanU5BU5D_t2897418192* L_34 = V_1;
		int32_t L_35 = V_12;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if (!L_37)
		{
			goto IL_00d1;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_38 = V_0;
		int32_t L_39 = V_12;
		NullCheck(L_38);
		V_7 = (*(Vector2_t2156229523 *)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39))));
		goto IL_00fc;
	}

IL_00d1:
	{
		Vector2U5BU5D_t1457185986* L_40 = V_0;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		Vector2U5BU5D_t1457185986* L_42 = V_0;
		int32_t L_43 = V_12;
		NullCheck(L_42);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_44 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))), (*(Vector2_t2156229523 *)((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_45 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_44, (2.0f), /*hidden argument*/NULL);
		V_7 = L_45;
	}

IL_00fc:
	{
		V_9 = 2;
		goto IL_019c;
	}

IL_0104:
	{
		int32_t L_46 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1));
		int32_t L_47 = V_13;
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_48 = V_2;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
	}

IL_0117:
	{
		Vector2U5BU5D_t1457185986* L_49 = V_0;
		int32_t L_50 = V_13;
		NullCheck(L_49);
		Vector2U5BU5D_t1457185986* L_51 = V_0;
		int32_t L_52 = V_10;
		NullCheck(L_51);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_53 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))), (*(Vector2_t2156229523 *)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_54 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_53, (2.0f), /*hidden argument*/NULL);
		V_5 = L_54;
		Vector2U5BU5D_t1457185986* L_55 = V_0;
		int32_t L_56 = V_10;
		NullCheck(L_55);
		V_6 = (*(Vector2_t2156229523 *)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56))));
		BooleanU5BU5D_t2897418192* L_57 = V_1;
		int32_t L_58 = V_11;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if (!L_60)
		{
			goto IL_016e;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_61 = V_0;
		int32_t L_62 = V_11;
		NullCheck(L_61);
		V_7 = (*(Vector2_t2156229523 *)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))));
		goto IL_0199;
	}

IL_016e:
	{
		Vector2U5BU5D_t1457185986* L_63 = V_0;
		int32_t L_64 = V_10;
		NullCheck(L_63);
		Vector2U5BU5D_t1457185986* L_65 = V_0;
		int32_t L_66 = V_11;
		NullCheck(L_65);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_67 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))), (*(Vector2_t2156229523 *)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_68 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_67, (2.0f), /*hidden argument*/NULL);
		V_7 = L_68;
	}

IL_0199:
	{
		V_9 = 1;
	}

IL_019c:
	{
		Vector2_t2156229523  L_69 = V_5;
		Vector2_t2156229523  L_70 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_71 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_69, L_70, /*hidden argument*/NULL);
		V_16 = L_71;
		float L_72 = Vector2_get_magnitude_m2752892833((&V_16), /*hidden argument*/NULL);
		V_15 = L_72;
		bool L_73 = ___initialTest2;
		if (L_73)
		{
			goto IL_01bf;
		}
	}
	{
		float L_74 = V_15;
		float L_75 = V_4;
		if ((!(((float)L_74) < ((float)L_75))))
		{
			goto IL_01c7;
		}
	}

IL_01bf:
	{
		V_14 = 1;
		goto IL_01cf;
	}

IL_01c7:
	{
		float L_76 = V_15;
		float L_77 = V_4;
		V_14 = (((int32_t)((int32_t)((float)((float)L_76/(float)L_77)))));
	}

IL_01cf:
	{
		V_17 = (0.0f);
		int32_t L_78 = V_14;
		V_18 = ((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1)))))));
		V_19 = 0;
		goto IL_0276;
	}

IL_01eb:
	{
		float L_79 = V_17;
		V_20 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_79));
		float L_80 = V_20;
		float L_81 = V_20;
		float L_82 = (&V_5)->get_x_0();
		float L_83 = V_17;
		float L_84 = V_20;
		float L_85 = (&V_6)->get_x_0();
		float L_86 = V_17;
		float L_87 = V_17;
		float L_88 = (&V_7)->get_x_0();
		(&V_8)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_80, (float)L_81)), (float)L_82)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_83)), (float)L_84)), (float)L_85)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_86, (float)L_87)), (float)L_88)))));
		float L_89 = V_20;
		float L_90 = V_20;
		float L_91 = (&V_5)->get_y_1();
		float L_92 = V_17;
		float L_93 = V_20;
		float L_94 = (&V_6)->get_y_1();
		float L_95 = V_17;
		float L_96 = V_17;
		float L_97 = (&V_7)->get_y_1();
		(&V_8)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_89, (float)L_90)), (float)L_91)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_92)), (float)L_93)), (float)L_94)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_95, (float)L_96)), (float)L_97)))));
		List_1_t3628304265 * L_98 = V_3;
		Vector2_t2156229523  L_99 = V_8;
		NullCheck(L_98);
		List_1_Add_m1156250970(L_98, L_99, /*hidden argument*/List_1_Add_m1156250970_RuntimeMethod_var);
		float L_100 = V_17;
		float L_101 = V_18;
		V_17 = ((float)il2cpp_codegen_add((float)L_100, (float)L_101));
		int32_t L_102 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_0276:
	{
		int32_t L_103 = V_19;
		int32_t L_104 = V_14;
		if ((((int32_t)L_103) <= ((int32_t)L_104)))
		{
			goto IL_01eb;
		}
	}
	{
		int32_t L_105 = V_10;
		int32_t L_106 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106));
	}

IL_0286:
	{
		int32_t L_107 = V_10;
		int32_t L_108 = V_2;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0044;
		}
	}
	{
		bool L_109 = ___initialTest2;
		if (L_109)
		{
			goto IL_0345;
		}
	}
	{
		List_1_t3628304265 * L_110 = V_3;
		NullCheck(L_110);
		int32_t L_111 = List_1_get_Count_m3882770330(L_110, /*hidden argument*/List_1_get_Count_m3882770330_RuntimeMethod_var);
		V_21 = L_111;
		float L_112 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_112, (float)(4.0f)));
		V_22 = 0;
		goto IL_033c;
	}

IL_02ae:
	{
		int32_t L_113 = V_22;
		V_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1));
		int32_t L_114 = V_23;
		if ((((int32_t)L_114) >= ((int32_t)0)))
		{
			goto IL_02c2;
		}
	}
	{
		int32_t L_115 = V_21;
		V_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)1));
	}

IL_02c2:
	{
		int32_t L_116 = V_22;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_117 = V_24;
		int32_t L_118 = V_21;
		if ((((int32_t)L_117) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)1)))))
		{
			goto IL_02d6;
		}
	}
	{
		V_24 = 0;
	}

IL_02d6:
	{
		List_1_t3628304265 * L_119 = V_3;
		int32_t L_120 = V_23;
		NullCheck(L_119);
		Vector2_t2156229523  L_121 = List_1_get_Item_m3757356512(L_119, L_120, /*hidden argument*/List_1_get_Item_m3757356512_RuntimeMethod_var);
		V_5 = L_121;
		List_1_t3628304265 * L_122 = V_3;
		int32_t L_123 = V_22;
		NullCheck(L_122);
		Vector2_t2156229523  L_124 = List_1_get_Item_m3757356512(L_122, L_123, /*hidden argument*/List_1_get_Item_m3757356512_RuntimeMethod_var);
		V_6 = L_124;
		List_1_t3628304265 * L_125 = V_3;
		int32_t L_126 = V_24;
		NullCheck(L_125);
		Vector2_t2156229523  L_127 = List_1_get_Item_m3757356512(L_125, L_126, /*hidden argument*/List_1_get_Item_m3757356512_RuntimeMethod_var);
		V_7 = L_127;
		Vector2_t2156229523  L_128 = V_5;
		Vector2_t2156229523  L_129 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_130 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_128, L_129, /*hidden argument*/NULL);
		V_25 = L_130;
		float L_131 = Vector2_get_magnitude_m2752892833((&V_25), /*hidden argument*/NULL);
		float L_132 = V_4;
		if ((!(((float)L_131) > ((float)L_132))))
		{
			goto IL_0336;
		}
	}
	{
		float L_133 = GlyphData_LineToPointSqrDistance_m2036411270(__this, (&V_5), (&V_7), (&V_6), /*hidden argument*/NULL);
		if ((!(((float)L_133) < ((float)(0.1f)))))
		{
			goto IL_0336;
		}
	}
	{
		List_1_t3628304265 * L_134 = V_3;
		int32_t L_135 = V_22;
		NullCheck(L_134);
		List_1_RemoveAt_m3397699549(L_134, L_135, /*hidden argument*/List_1_RemoveAt_m3397699549_RuntimeMethod_var);
		int32_t L_136 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)1));
		goto IL_033c;
	}

IL_0336:
	{
		int32_t L_137 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
	}

IL_033c:
	{
		int32_t L_138 = V_22;
		int32_t L_139 = V_21;
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_02ae;
		}
	}

IL_0345:
	{
		List_1_t3628304265 * L_140 = V_3;
		NullCheck(L_140);
		Vector2U5BU5D_t1457185986* L_141 = List_1_ToArray_m3579297042(L_140, /*hidden argument*/List_1_ToArray_m3579297042_RuntimeMethod_var);
		V_26 = L_141;
		bool L_142 = __this->get__reverse_23();
		if (!L_142)
		{
			goto IL_035f;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_143 = V_26;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_143, /*hidden argument*/NULL);
	}

IL_035f:
	{
		Vector2U5BU5D_t1457185986* L_144 = V_26;
		return L_144;
	}
}
// System.Boolean FlyingText3D.GlyphData::SetMeshData(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_SetMeshData_m613466942 (GlyphData_t620095268 * __this, int32_t ___resolution0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_SetMeshData_m613466942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2929260728 * V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_t3831783251 * V_4 = NULL;
	int32_t V_5 = 0;
	InsideData_t2359708509 * V_6 = NULL;
	Vector2U5BU5D_t1457185986* V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Int32U5BU5D_t385246372* V_14 = NULL;
	List_1_t1857321114 * V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	Vector2U5BU5D_t1457185986* V_21 = NULL;
	int32_t V_22 = 0;
	Int32U5BU5D_t385246372* V_23 = NULL;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	Vector3U5BU5D_t1718750761* V_28 = NULL;
	Int32U5BU5D_t385246372* V_29 = NULL;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	Vector2U5BU5D_t1457185986* V_32 = NULL;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	Vector2_t2156229523  V_41;
	memset(&V_41, 0, sizeof(V_41));
	Vector2_t2156229523  V_42;
	memset(&V_42, 0, sizeof(V_42));
	float V_43 = 0.0f;
	float V_44 = 0.0f;
	float V_45 = 0.0f;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	int32_t V_52 = 0;
	int32_t V_53 = 0;
	int32_t V_54 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B63_0 = 0;
	{
		__this->set__triDataComputed_15((bool)0);
		List_1_t3670791667 * L_0 = __this->get__contourList_24();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1078179241(L_0, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		List_1_t2929260728 * L_2 = (List_1_t2929260728 *)il2cpp_codegen_object_new(List_1_t2929260728_il2cpp_TypeInfo_var);
		List_1__ctor_m972700695(L_2, L_1, /*hidden argument*/List_1__ctor_m972700695_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t3670791667 * L_3 = __this->get__contourList_24();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m1078179241(L_3, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		V_1 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_4));
		List_1_t3670791667 * L_5 = __this->get__contourList_24();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m1078179241(L_5, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		V_2 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_6));
		V_3 = 0;
		goto IL_0209;
	}

IL_0041:
	{
		List_1_t3670791667 * L_7 = __this->get__contourList_24();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ContourData_t2198716925 * L_9 = List_1_get_Item_m1453868451(L_7, L_8, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_side_5();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		List_1_t2929260728 * L_11 = V_0;
		List_1_t3670791667 * L_12 = __this->get__contourList_24();
		int32_t L_13 = V_3;
		NullCheck(L_12);
		ContourData_t2198716925 * L_14 = List_1_get_Item_m1453868451(L_12, L_13, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		int32_t L_15 = ___resolution0;
		Vector2U5BU5D_t1457185986* L_16 = GlyphData_RenderContourPoints_m3775104664(__this, L_14, L_15, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m769708164(L_11, L_16, /*hidden argument*/List_1_Add_m769708164_RuntimeMethod_var);
		goto IL_0205;
	}

IL_0077:
	{
		List_1_t3831783251 * L_17 = (List_1_t3831783251 *)il2cpp_codegen_object_new(List_1_t3831783251_il2cpp_TypeInfo_var);
		List_1__ctor_m1192004721(L_17, /*hidden argument*/List_1__ctor_m1192004721_RuntimeMethod_var);
		V_4 = L_17;
		int32_t L_18 = V_3;
		V_5 = L_18;
		goto IL_01f4;
	}

IL_0086:
	{
		InsideData_t2359708509 * L_19 = (InsideData_t2359708509 *)il2cpp_codegen_object_new(InsideData_t2359708509_il2cpp_TypeInfo_var);
		InsideData__ctor_m3340467756(L_19, /*hidden argument*/NULL);
		V_6 = L_19;
		InsideData_t2359708509 * L_20 = V_6;
		List_1_t3670791667 * L_21 = __this->get__contourList_24();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		ContourData_t2198716925 * L_23 = List_1_get_Item_m1453868451(L_21, L_22, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		int32_t L_24 = ___resolution0;
		Vector2U5BU5D_t1457185986* L_25 = GlyphData_RenderContourPoints_m3775104664(__this, L_23, L_24, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_points_2(L_25);
		InsideData_t2359708509 * L_26 = V_6;
		NullCheck(L_26);
		Vector2U5BU5D_t1457185986* L_27 = L_26->get_points_2();
		V_7 = L_27;
		V_8 = 0;
		Vector2U5BU5D_t1457185986* L_28 = V_7;
		NullCheck(L_28);
		float L_29 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		V_9 = L_29;
		Vector2U5BU5D_t1457185986* L_30 = V_7;
		NullCheck(L_30);
		float L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		V_10 = L_31;
		Vector2U5BU5D_t1457185986* L_32 = V_7;
		NullCheck(L_32);
		V_11 = (((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length))));
		V_12 = 1;
		goto IL_011f;
	}

IL_00e0:
	{
		Vector2U5BU5D_t1457185986* L_33 = V_7;
		int32_t L_34 = V_12;
		NullCheck(L_33);
		float L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_x_0();
		float L_36 = V_9;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0119;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_37 = V_7;
		int32_t L_38 = V_12;
		NullCheck(L_37);
		float L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_x_0();
		V_9 = L_39;
		Vector2U5BU5D_t1457185986* L_40 = V_7;
		int32_t L_41 = V_12;
		NullCheck(L_40);
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_y_1();
		V_10 = L_42;
		int32_t L_43 = V_12;
		V_8 = L_43;
	}

IL_0119:
	{
		int32_t L_44 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_011f:
	{
		int32_t L_45 = V_12;
		int32_t L_46 = V_11;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00e0;
		}
	}
	{
		InsideData_t2359708509 * L_47 = V_6;
		float L_48 = V_9;
		float L_49 = V_10;
		Vector2_t2156229523  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3970636864((&L_50), L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		L_47->set_xMaxPoint_0(L_50);
		InsideData_t2359708509 * L_51 = V_6;
		int32_t L_52 = V_8;
		NullCheck(L_51);
		L_51->set_xMaxVertex_1(L_52);
		List_1_t3831783251 * L_53 = V_4;
		InsideData_t2359708509 * L_54 = V_6;
		NullCheck(L_53);
		List_1_Add_m1059557417(L_53, L_54, /*hidden argument*/List_1_Add_m1059557417_RuntimeMethod_var);
		int32_t L_55 = V_3;
		List_1_t3670791667 * L_56 = __this->get__contourList_24();
		NullCheck(L_56);
		int32_t L_57 = List_1_get_Count_m1078179241(L_56, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1))) == ((int32_t)L_57)))
		{
			goto IL_0176;
		}
	}
	{
		List_1_t3670791667 * L_58 = __this->get__contourList_24();
		int32_t L_59 = V_3;
		NullCheck(L_58);
		ContourData_t2198716925 * L_60 = List_1_get_Item_m1453868451(L_58, ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_60);
		int32_t L_61 = L_60->get_side_5();
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_01f0;
		}
	}

IL_0176:
	{
		List_1_t3831783251 * L_62 = V_4;
		intptr_t L_63 = (intptr_t)GlyphData_XMaxCompare_m541087491_RuntimeMethod_var;
		Comparison_1_t2134639688 * L_64 = (Comparison_1_t2134639688 *)il2cpp_codegen_object_new(Comparison_1_t2134639688_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m2770657230(L_64, __this, L_63, /*hidden argument*/Comparison_1__ctor_m2770657230_RuntimeMethod_var);
		NullCheck(L_62);
		List_1_Sort_m2560489683(L_62, L_64, /*hidden argument*/List_1_Sort_m2560489683_RuntimeMethod_var);
		V_13 = 0;
		goto IL_01dd;
	}

IL_0191:
	{
		List_1_t2929260728 * L_65 = V_0;
		List_1_t3831783251 * L_66 = V_4;
		int32_t L_67 = V_13;
		NullCheck(L_66);
		InsideData_t2359708509 * L_68 = List_1_get_Item_m17465144(L_66, L_67, /*hidden argument*/List_1_get_Item_m17465144_RuntimeMethod_var);
		NullCheck(L_68);
		Vector2U5BU5D_t1457185986* L_69 = L_68->get_points_2();
		NullCheck(L_65);
		List_1_Add_m769708164(L_65, L_69, /*hidden argument*/List_1_Add_m769708164_RuntimeMethod_var);
		Int32U5BU5D_t385246372* L_70 = V_1;
		int32_t L_71 = V_5;
		List_1_t3831783251 * L_72 = V_4;
		int32_t L_73 = V_13;
		NullCheck(L_72);
		InsideData_t2359708509 * L_74 = List_1_get_Item_m17465144(L_72, L_73, /*hidden argument*/List_1_get_Item_m17465144_RuntimeMethod_var);
		NullCheck(L_74);
		int32_t L_75 = L_74->get_xMaxVertex_1();
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (int32_t)L_75);
		Vector2U5BU5D_t1457185986* L_76 = V_2;
		int32_t L_77 = V_5;
		int32_t L_78 = L_77;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		NullCheck(L_76);
		List_1_t3831783251 * L_79 = V_4;
		int32_t L_80 = V_13;
		NullCheck(L_79);
		InsideData_t2359708509 * L_81 = List_1_get_Item_m17465144(L_79, L_80, /*hidden argument*/List_1_get_Item_m17465144_RuntimeMethod_var);
		NullCheck(L_81);
		Vector2_t2156229523  L_82 = L_81->get_xMaxPoint_0();
		*(Vector2_t2156229523 *)((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78))) = L_82;
		int32_t L_83 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_01dd:
	{
		int32_t L_84 = V_13;
		List_1_t3831783251 * L_85 = V_4;
		NullCheck(L_85);
		int32_t L_86 = List_1_get_Count_m317471029(L_85, /*hidden argument*/List_1_get_Count_m317471029_RuntimeMethod_var);
		if ((((int32_t)L_84) < ((int32_t)L_86)))
		{
			goto IL_0191;
		}
	}
	{
		goto IL_0205;
	}

IL_01f0:
	{
		int32_t L_87 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01f4:
	{
		int32_t L_88 = V_3;
		List_1_t3670791667 * L_89 = __this->get__contourList_24();
		NullCheck(L_89);
		int32_t L_90 = List_1_get_Count_m1078179241(L_89, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		if ((((int32_t)L_88) < ((int32_t)L_90)))
		{
			goto IL_0086;
		}
	}

IL_0205:
	{
		int32_t L_91 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_0209:
	{
		int32_t L_92 = V_3;
		List_1_t3670791667 * L_93 = __this->get__contourList_24();
		NullCheck(L_93);
		int32_t L_94 = List_1_get_Count_m1078179241(L_93, /*hidden argument*/List_1_get_Count_m1078179241_RuntimeMethod_var);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_0041;
		}
	}
	{
		List_1_t2929260728 * L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = List_1_get_Count_m3201839622(L_95, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		V_14 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_96));
		List_1_t2929260728 * L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = List_1_get_Count_m3201839622(L_97, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		List_1_t1857321114 * L_99 = (List_1_t1857321114 *)il2cpp_codegen_object_new(List_1_t1857321114_il2cpp_TypeInfo_var);
		List_1__ctor_m1294987271(L_99, L_98, /*hidden argument*/List_1__ctor_m1294987271_RuntimeMethod_var);
		V_15 = L_99;
		V_16 = 0;
		V_17 = 0;
		V_18 = 0;
		V_19 = 0;
		V_20 = 0;
		goto IL_035f;
	}

IL_0248:
	{
		List_1_t3670791667 * L_100 = __this->get__contourList_24();
		int32_t L_101 = V_20;
		NullCheck(L_100);
		ContourData_t2198716925 * L_102 = List_1_get_Item_m1453868451(L_100, L_101, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_102);
		int32_t L_103 = L_102->get_side_5();
		if ((!(((uint32_t)L_103) == ((uint32_t)1))))
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_104 = V_20;
		if ((((int32_t)L_104) <= ((int32_t)0)))
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_105 = V_19;
		int32_t L_106 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)2)), (int32_t)3))));
		V_18 = 0;
	}

IL_0276:
	{
		List_1_t2929260728 * L_107 = V_0;
		int32_t L_108 = V_20;
		NullCheck(L_107);
		Vector2U5BU5D_t1457185986* L_109 = List_1_get_Item_m4003898591(L_107, L_108, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		V_21 = L_109;
		Vector2U5BU5D_t1457185986* L_110 = V_21;
		NullCheck(L_110);
		V_22 = (((int32_t)((int32_t)(((RuntimeArray *)L_110)->max_length))));
		Vector2U5BU5D_t1457185986* L_111 = V_21;
		NullCheck(L_111);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_111)->max_length))))) <= ((int32_t)2)))
		{
			goto IL_02bd;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_112 = V_21;
		NullCheck(L_112);
		Vector2U5BU5D_t1457185986* L_113 = V_21;
		int32_t L_114 = V_22;
		NullCheck(L_113);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_115 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), (*(Vector2_t2156229523 *)((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1)))))), /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_116 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1));
	}

IL_02bd:
	{
		int32_t L_117 = V_22;
		if ((((int32_t)L_117) >= ((int32_t)3)))
		{
			goto IL_02d2;
		}
	}
	{
		List_1_t1857321114 * L_118 = V_15;
		NullCheck(L_118);
		List_1_Add_m906361947(L_118, (Int32U5BU5D_t385246372*)(Int32U5BU5D_t385246372*)NULL, /*hidden argument*/List_1_Add_m906361947_RuntimeMethod_var);
		goto IL_0359;
	}

IL_02d2:
	{
		Int32U5BU5D_t385246372* L_119 = V_14;
		int32_t L_120 = V_20;
		int32_t L_121 = V_22;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (int32_t)L_121);
		int32_t L_122 = V_17;
		int32_t L_123 = V_22;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)L_123));
		List_1_t3670791667 * L_124 = __this->get__contourList_24();
		int32_t L_125 = V_20;
		NullCheck(L_124);
		ContourData_t2198716925 * L_126 = List_1_get_Item_m1453868451(L_124, L_125, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_126);
		int32_t L_127 = L_126->get_side_5();
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_02fb;
		}
	}
	{
		V_16 = 0;
	}

IL_02fb:
	{
		int32_t L_128 = V_22;
		V_23 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_128));
		V_24 = 0;
		goto IL_031c;
	}

IL_030c:
	{
		Int32U5BU5D_t385246372* L_129 = V_23;
		int32_t L_130 = V_24;
		int32_t L_131 = V_24;
		int32_t L_132 = V_16;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)L_132)));
		int32_t L_133 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
	}

IL_031c:
	{
		int32_t L_134 = V_24;
		int32_t L_135 = V_22;
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_136 = V_16;
		int32_t L_137 = V_22;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)L_137));
		List_1_t1857321114 * L_138 = V_15;
		Int32U5BU5D_t385246372* L_139 = V_23;
		NullCheck(L_138);
		List_1_Add_m906361947(L_138, L_139, /*hidden argument*/List_1_Add_m906361947_RuntimeMethod_var);
		int32_t L_140 = V_18;
		int32_t L_141 = V_22;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_141));
		List_1_t3670791667 * L_142 = __this->get__contourList_24();
		int32_t L_143 = V_20;
		NullCheck(L_142);
		ContourData_t2198716925 * L_144 = List_1_get_Item_m1453868451(L_142, L_143, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_144);
		int32_t L_145 = L_144->get_side_5();
		if (L_145)
		{
			goto IL_0359;
		}
	}
	{
		int32_t L_146 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)2));
	}

IL_0359:
	{
		int32_t L_147 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
	}

IL_035f:
	{
		int32_t L_148 = V_20;
		List_1_t2929260728 * L_149 = V_0;
		NullCheck(L_149);
		int32_t L_150 = List_1_get_Count_m3201839622(L_149, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_148) < ((int32_t)L_150)))
		{
			goto IL_0248;
		}
	}
	{
		int32_t L_151 = V_19;
		int32_t L_152 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_152, (int32_t)2)), (int32_t)3))));
		int32_t L_153 = V_17;
		V_25 = L_153;
		int32_t L_154 = V_19;
		V_26 = L_154;
		int32_t L_155 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_155, (int32_t)2));
		int32_t L_156 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_156, (int32_t)2));
		V_27 = 0;
		goto IL_03b1;
	}

IL_0393:
	{
		int32_t L_157 = V_17;
		Int32U5BU5D_t385246372* L_158 = V_14;
		int32_t L_159 = V_27;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		int32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_161, (int32_t)4))));
		int32_t L_162 = V_19;
		Int32U5BU5D_t385246372* L_163 = V_14;
		int32_t L_164 = V_27;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		int32_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_166, (int32_t)6))));
		int32_t L_167 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1));
	}

IL_03b1:
	{
		int32_t L_168 = V_27;
		Int32U5BU5D_t385246372* L_169 = V_14;
		NullCheck(L_169);
		if ((((int32_t)L_168) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_169)->max_length)))))))
		{
			goto IL_0393;
		}
	}
	{
		int32_t L_170 = V_17;
		if ((((int32_t)L_170) <= ((int32_t)((int32_t)65534))))
		{
			goto IL_03d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2534991464, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_03d4:
	{
		int32_t L_171 = V_17;
		V_28 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_171));
		int32_t L_172 = V_19;
		V_29 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_172));
		V_30 = 0;
		V_31 = 0;
		goto IL_045c;
	}

IL_03f1:
	{
		List_1_t2929260728 * L_173 = V_0;
		int32_t L_174 = V_31;
		NullCheck(L_173);
		Vector2U5BU5D_t1457185986* L_175 = List_1_get_Item_m4003898591(L_173, L_174, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		V_32 = L_175;
		Int32U5BU5D_t385246372* L_176 = V_14;
		int32_t L_177 = V_31;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		int32_t L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		V_33 = L_179;
		V_34 = 0;
		goto IL_044d;
	}

IL_040a:
	{
		Vector3U5BU5D_t1718750761* L_180 = V_28;
		int32_t L_181 = V_30;
		NullCheck(L_180);
		Vector2U5BU5D_t1457185986* L_182 = V_32;
		int32_t L_183 = V_34;
		NullCheck(L_182);
		float L_184 = ((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_183)))->get_x_0();
		((L_180)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_181)))->set_x_1(L_184);
		Vector3U5BU5D_t1718750761* L_185 = V_28;
		int32_t L_186 = V_30;
		int32_t L_187 = L_186;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1));
		NullCheck(L_185);
		Vector2U5BU5D_t1457185986* L_188 = V_32;
		int32_t L_189 = V_34;
		NullCheck(L_188);
		float L_190 = ((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189)))->get_y_1();
		((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_187)))->set_y_2(L_190);
		int32_t L_191 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
	}

IL_044d:
	{
		int32_t L_192 = V_34;
		int32_t L_193 = V_33;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_040a;
		}
	}
	{
		int32_t L_194 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
	}

IL_045c:
	{
		int32_t L_195 = V_31;
		List_1_t2929260728 * L_196 = V_0;
		NullCheck(L_196);
		int32_t L_197 = List_1_get_Count_m3201839622(L_196, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_195) < ((int32_t)L_197)))
		{
			goto IL_03f1;
		}
	}
	{
		V_35 = 0;
		V_36 = 0;
		List_1_t3670791667 * L_198 = __this->get__contourList_24();
		List_1_t1857321114 * L_199 = V_15;
		Int32U5BU5D_t385246372* L_200 = V_14;
		Int32U5BU5D_t385246372* L_201 = V_1;
		Vector2U5BU5D_t1457185986* L_202 = V_2;
		List_1_t2929260728 * L_203 = V_0;
		Int32U5BU5D_t385246372* L_204 = V_29;
		bool L_205 = Triangulate_Compute_m3325510674(NULL /*static, unused*/, L_198, L_199, L_200, L_201, L_202, L_203, L_204, (&V_35), (&V_36), /*hidden argument*/NULL);
		if (L_205)
		{
			goto IL_048e;
		}
	}
	{
		return (bool)0;
	}

IL_048e:
	{
		Vector3U5BU5D_t1718750761* L_206 = V_28;
		Vector3U5BU5D_t1718750761* L_207 = V_28;
		int32_t L_208 = V_25;
		int32_t L_209 = V_25;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_206, 0, (RuntimeArray *)(RuntimeArray *)L_207, L_208, L_209, /*hidden argument*/NULL);
		V_37 = 0;
		goto IL_04e2;
	}

IL_04a4:
	{
		Int32U5BU5D_t385246372* L_210 = V_29;
		int32_t L_211 = V_37;
		int32_t L_212 = V_26;
		Int32U5BU5D_t385246372* L_213 = V_29;
		int32_t L_214 = V_37;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add((int32_t)L_214, (int32_t)2));
		int32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_25;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)L_212))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)L_217)));
		Int32U5BU5D_t385246372* L_218 = V_29;
		int32_t L_219 = V_37;
		int32_t L_220 = V_26;
		Int32U5BU5D_t385246372* L_221 = V_29;
		int32_t L_222 = V_37;
		NullCheck(L_221);
		int32_t L_223 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)1));
		int32_t L_224 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		int32_t L_225 = V_25;
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)L_220)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)L_225)));
		Int32U5BU5D_t385246372* L_226 = V_29;
		int32_t L_227 = V_37;
		int32_t L_228 = V_26;
		Int32U5BU5D_t385246372* L_229 = V_29;
		int32_t L_230 = V_37;
		NullCheck(L_229);
		int32_t L_231 = L_230;
		int32_t L_232 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		int32_t L_233 = V_25;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)L_228)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_232, (int32_t)L_233)));
		int32_t L_234 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, (int32_t)3));
	}

IL_04e2:
	{
		int32_t L_235 = V_37;
		int32_t L_236 = V_26;
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_04a4;
		}
	}
	{
		V_38 = 0;
		int32_t L_237 = V_25;
		V_39 = L_237;
		int32_t L_238 = V_25;
		V_40 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_238, (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(FlyingText_t4265356488_il2cpp_TypeInfo_var);
		float L_239 = ((FlyingText_t4265356488_StaticFields*)il2cpp_codegen_static_fields_for(FlyingText_t4265356488_il2cpp_TypeInfo_var))->get_smoothingAngle_50();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_240 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_239, (0.0f), (180.0f), /*hidden argument*/NULL);
		V_45 = L_240;
		int32_t L_241 = V_26;
		V_35 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_241, (int32_t)2));
		int32_t L_242 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_242, (int32_t)2));
		V_46 = 0;
		V_47 = 0;
		V_48 = 0;
		goto IL_077a;
	}

IL_0528:
	{
		Int32U5BU5D_t385246372* L_243 = V_14;
		int32_t L_244 = V_48;
		NullCheck(L_243);
		int32_t L_245 = L_244;
		int32_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		if ((((int32_t)L_246) >= ((int32_t)3)))
		{
			goto IL_0538;
		}
	}
	{
		goto IL_0774;
	}

IL_0538:
	{
		Int32U5BU5D_t385246372* L_247 = V_14;
		int32_t L_248 = V_48;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_49 = L_250;
		V_50 = 0;
		V_51 = 0;
		int32_t L_251 = V_36;
		V_52 = L_251;
		V_53 = 0;
		V_54 = 0;
		goto IL_06ec;
	}

IL_0554:
	{
		int32_t L_252 = V_54;
		int32_t L_253 = V_49;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1))) == ((uint32_t)L_253))))
		{
			goto IL_0565;
		}
	}
	{
		G_B60_0 = 0;
		goto IL_0569;
	}

IL_0565:
	{
		int32_t L_254 = V_54;
		G_B60_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_254, (int32_t)1));
	}

IL_0569:
	{
		V_50 = G_B60_0;
		int32_t L_255 = V_50;
		int32_t L_256 = V_49;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)1))) == ((uint32_t)L_256))))
		{
			goto IL_057c;
		}
	}
	{
		G_B63_0 = 0;
		goto IL_0580;
	}

IL_057c:
	{
		int32_t L_257 = V_50;
		G_B63_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)1));
	}

IL_0580:
	{
		V_51 = G_B63_0;
		Vector3U5BU5D_t1718750761* L_258 = V_28;
		int32_t L_259 = V_38;
		int32_t L_260 = V_50;
		NullCheck(L_258);
		float L_261 = ((L_258)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_259, (int32_t)L_260)))))->get_x_1();
		V_43 = L_261;
		Vector3U5BU5D_t1718750761* L_262 = V_28;
		int32_t L_263 = V_38;
		int32_t L_264 = V_50;
		NullCheck(L_262);
		float L_265 = ((L_262)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)L_264)))))->get_y_2();
		V_44 = L_265;
		Vector3U5BU5D_t1718750761* L_266 = V_28;
		int32_t L_267 = V_38;
		int32_t L_268 = V_54;
		NullCheck(L_266);
		float L_269 = ((L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_267, (int32_t)L_268)))))->get_x_1();
		float L_270 = V_43;
		(&V_41)->set_x_0(((float)il2cpp_codegen_subtract((float)L_269, (float)L_270)));
		Vector3U5BU5D_t1718750761* L_271 = V_28;
		int32_t L_272 = V_38;
		int32_t L_273 = V_54;
		NullCheck(L_271);
		float L_274 = ((L_271)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)L_273)))))->get_y_2();
		float L_275 = V_44;
		(&V_41)->set_y_1(((float)il2cpp_codegen_subtract((float)L_274, (float)L_275)));
		Vector3U5BU5D_t1718750761* L_276 = V_28;
		int32_t L_277 = V_38;
		int32_t L_278 = V_51;
		NullCheck(L_276);
		float L_279 = ((L_276)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_277, (int32_t)L_278)))))->get_x_1();
		float L_280 = V_43;
		(&V_42)->set_x_0(((float)il2cpp_codegen_subtract((float)L_279, (float)L_280)));
		Vector3U5BU5D_t1718750761* L_281 = V_28;
		int32_t L_282 = V_38;
		int32_t L_283 = V_51;
		NullCheck(L_281);
		float L_284 = ((L_281)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_282, (int32_t)L_283)))))->get_y_2();
		float L_285 = V_44;
		(&V_42)->set_y_1(((float)il2cpp_codegen_subtract((float)L_284, (float)L_285)));
		Vector3U5BU5D_t1718750761* L_286 = V_28;
		int32_t L_287 = V_40;
		NullCheck(L_286);
		Vector3U5BU5D_t1718750761* L_288 = V_28;
		int32_t L_289 = V_38;
		int32_t L_290 = V_54;
		NullCheck(L_288);
		*(Vector3_t3722313464 *)((L_286)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_287))) = (*(Vector3_t3722313464 *)((L_288)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_289, (int32_t)L_290))))));
		Vector3U5BU5D_t1718750761* L_291 = V_28;
		int32_t L_292 = V_40;
		NullCheck(L_291);
		Vector3U5BU5D_t1718750761* L_293 = V_28;
		int32_t L_294 = V_39;
		int32_t L_295 = V_54;
		NullCheck(L_293);
		*(Vector3_t3722313464 *)((L_291)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_292, (int32_t)1))))) = (*(Vector3_t3722313464 *)((L_293)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)L_295))))));
		int32_t L_296 = V_53;
		if (!L_296)
		{
			goto IL_066b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_297 = V_29;
		GlyphData_AddTriangle_m398130210(__this, L_297, (&V_36), (&V_35), (&V_47), (&V_53), /*hidden argument*/NULL);
	}

IL_066b:
	{
		Vector2_t2156229523  L_298 = V_41;
		Vector2_t2156229523  L_299 = V_42;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_300 = Vector2_Angle_m4105581454(NULL /*static, unused*/, L_298, L_299, /*hidden argument*/NULL);
		float L_301 = V_45;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_300))) >= ((float)L_301))))
		{
			goto IL_06d7;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_302 = V_28;
		int32_t L_303 = V_40;
		NullCheck(L_302);
		Vector3U5BU5D_t1718750761* L_304 = V_28;
		int32_t L_305 = V_38;
		int32_t L_306 = V_50;
		NullCheck(L_304);
		*(Vector3_t3722313464 *)((L_302)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_303, (int32_t)2))))) = (*(Vector3_t3722313464 *)((L_304)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_305, (int32_t)L_306))))));
		Vector3U5BU5D_t1718750761* L_307 = V_28;
		int32_t L_308 = V_40;
		NullCheck(L_307);
		Vector3U5BU5D_t1718750761* L_309 = V_28;
		int32_t L_310 = V_39;
		int32_t L_311 = V_50;
		NullCheck(L_309);
		*(Vector3_t3722313464 *)((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_308, (int32_t)3))))) = (*(Vector3_t3722313464 *)((L_309)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)L_311))))));
		int32_t L_312 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_312, (int32_t)4));
		V_53 = 4;
		int32_t L_313 = V_46;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_313, (int32_t)4));
		goto IL_06e6;
	}

IL_06d7:
	{
		int32_t L_314 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)2));
		V_53 = 2;
		int32_t L_315 = V_46;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_315, (int32_t)2));
	}

IL_06e6:
	{
		int32_t L_316 = V_54;
		V_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_316, (int32_t)1));
	}

IL_06ec:
	{
		int32_t L_317 = V_54;
		int32_t L_318 = V_49;
		if ((((int32_t)L_317) < ((int32_t)L_318)))
		{
			goto IL_0554;
		}
	}
	{
		int32_t L_319 = V_53;
		if ((!(((uint32_t)L_319) == ((uint32_t)4))))
		{
			goto IL_0712;
		}
	}
	{
		Int32U5BU5D_t385246372* L_320 = V_29;
		GlyphData_AddTriangle_m398130210(__this, L_320, (&V_36), (&V_35), (&V_47), (&V_53), /*hidden argument*/NULL);
		goto IL_075f;
	}

IL_0712:
	{
		Int32U5BU5D_t385246372* L_321 = V_29;
		int32_t L_322 = V_35;
		int32_t L_323 = V_36;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(L_322), (int32_t)L_323);
		Int32U5BU5D_t385246372* L_324 = V_29;
		int32_t L_325 = V_35;
		int32_t L_326 = V_36;
		NullCheck(L_324);
		(L_324)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_325, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_326, (int32_t)1)));
		Int32U5BU5D_t385246372* L_327 = V_29;
		int32_t L_328 = V_35;
		int32_t L_329 = V_52;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)2))), (int32_t)L_329);
		Int32U5BU5D_t385246372* L_330 = V_29;
		int32_t L_331 = V_35;
		int32_t L_332 = V_36;
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_331, (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_332, (int32_t)1)));
		Int32U5BU5D_t385246372* L_333 = V_29;
		int32_t L_334 = V_35;
		int32_t L_335 = V_52;
		NullCheck(L_333);
		(L_333)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_335, (int32_t)1)));
		Int32U5BU5D_t385246372* L_336 = V_29;
		int32_t L_337 = V_35;
		int32_t L_338 = V_52;
		NullCheck(L_336);
		(L_336)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_337, (int32_t)5))), (int32_t)L_338);
		int32_t L_339 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_339, (int32_t)6));
		int32_t L_340 = V_36;
		int32_t L_341 = V_53;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_340, (int32_t)L_341));
		int32_t L_342 = V_47;
		V_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_342, (int32_t)6));
	}

IL_075f:
	{
		int32_t L_343 = V_30;
		int32_t L_344 = V_49;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_344));
		int32_t L_345 = V_38;
		int32_t L_346 = V_49;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_345, (int32_t)L_346));
		int32_t L_347 = V_39;
		int32_t L_348 = V_49;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_347, (int32_t)L_348));
	}

IL_0774:
	{
		int32_t L_349 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_349, (int32_t)1));
	}

IL_077a:
	{
		int32_t L_350 = V_48;
		List_1_t2929260728 * L_351 = V_0;
		NullCheck(L_351);
		int32_t L_352 = List_1_get_Count_m3201839622(L_351, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_350) < ((int32_t)L_352)))
		{
			goto IL_0528;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_353 = V_28;
		NullCheck(L_353);
		int32_t L_354 = V_25;
		int32_t L_355 = V_46;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_353)->max_length))))) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_354, (int32_t)2)), (int32_t)L_355)))))
		{
			goto IL_07a5;
		}
	}
	{
		int32_t L_356 = V_25;
		int32_t L_357 = V_46;
		Array_Resize_TisVector3_t3722313464_m3246197627(NULL /*static, unused*/, (&V_28), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_356, (int32_t)2)), (int32_t)L_357)), /*hidden argument*/Array_Resize_TisVector3_t3722313464_m3246197627_RuntimeMethod_var);
	}

IL_07a5:
	{
		Int32U5BU5D_t385246372* L_358 = V_29;
		NullCheck(L_358);
		int32_t L_359 = V_26;
		int32_t L_360 = V_47;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_358)->max_length))))) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_359, (int32_t)2)), (int32_t)L_360)))))
		{
			goto IL_07c3;
		}
	}
	{
		int32_t L_361 = V_26;
		int32_t L_362 = V_47;
		Array_Resize_TisInt32_t2950945753_m3147937642(NULL /*static, unused*/, (&V_29), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_361, (int32_t)2)), (int32_t)L_362)), /*hidden argument*/Array_Resize_TisInt32_t2950945753_m3147937642_RuntimeMethod_var);
	}

IL_07c3:
	{
		Vector3U5BU5D_t1718750761* L_363 = V_28;
		__this->set__baseVertices_8(L_363);
		Int32U5BU5D_t385246372* L_364 = V_29;
		__this->set__baseTriangles_10(L_364);
		int32_t L_365 = V_25;
		__this->set__frontVertIndex_17(L_365);
		int32_t L_366 = V_26;
		__this->set__frontTriIndex_16(L_366);
		__this->set__scaleFactor_3((-1.0f));
		return (bool)1;
	}
}
// System.Void FlyingText3D.GlyphData::AddTriangle(System.Int32[],System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_AddTriangle_m398130210 (GlyphData_t620095268 * __this, Int32U5BU5D_t385246372* ___meshTriangles0, int32_t* ___triAdd1, int32_t* ___triIdx2, int32_t* ___edgeTriCount3, int32_t* ___vCount4, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = ___meshTriangles0;
		int32_t* L_1 = ___triIdx2;
		int32_t* L_2 = ___triAdd1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>((*((int32_t*)L_1))), (int32_t)(*((int32_t*)L_2)));
		Int32U5BU5D_t385246372* L_3 = ___meshTriangles0;
		int32_t* L_4 = ___triIdx2;
		int32_t* L_5 = ___triAdd1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_4)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_5)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_6 = ___meshTriangles0;
		int32_t* L_7 = ___triIdx2;
		int32_t* L_8 = ___triAdd1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_7)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_8)), (int32_t)2)));
		Int32U5BU5D_t385246372* L_9 = ___meshTriangles0;
		int32_t* L_10 = ___triIdx2;
		int32_t* L_11 = ___triAdd1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_10)), (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_11)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_12 = ___meshTriangles0;
		int32_t* L_13 = ___triIdx2;
		int32_t* L_14 = ___triAdd1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_13)), (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_14)), (int32_t)3)));
		Int32U5BU5D_t385246372* L_15 = ___meshTriangles0;
		int32_t* L_16 = ___triIdx2;
		int32_t* L_17 = ___triAdd1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_16)), (int32_t)5))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_17)), (int32_t)2)));
		int32_t* L_18 = ___triIdx2;
		int32_t* L_19 = ___triIdx2;
		*((int32_t*)(L_18)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_19)), (int32_t)6));
		int32_t* L_20 = ___triAdd1;
		int32_t* L_21 = ___triAdd1;
		int32_t* L_22 = ___vCount4;
		*((int32_t*)(L_20)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_21)), (int32_t)(*((int32_t*)L_22))));
		int32_t* L_23 = ___edgeTriCount3;
		int32_t* L_24 = ___edgeTriCount3;
		*((int32_t*)(L_23)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)6));
		return;
	}
}
// System.Void FlyingText3D.GlyphData::ScaleVertices(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_ScaleVertices_m46715125 (GlyphData_t620095268 * __this, float ___scaleFactor0, bool ___extrude1, bool ___includeBackface2, const RuntimeMethod* method)
{
	{
		bool L_0 = ___extrude1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___scaleFactor0;
		int32_t L_2 = __this->get__frontVertIndex_17();
		GlyphData_CopyAndScale_m1278098342(__this, L_1, L_2, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_0018:
	{
		bool L_3 = ___includeBackface2;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		float L_4 = ___scaleFactor0;
		Vector3U5BU5D_t1718750761* L_5 = __this->get__baseVertices_8();
		NullCheck(L_5);
		GlyphData_CopyAndScale_m1278098342(__this, L_4, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_0032:
	{
		float L_6 = ___scaleFactor0;
		int32_t L_7 = __this->get__frontVertIndex_17();
		GlyphData_CopyAndScale_m1278098342(__this, L_6, L_7, /*hidden argument*/NULL);
		float L_8 = ___scaleFactor0;
		int32_t L_9 = __this->get__frontVertIndex_17();
		int32_t L_10 = __this->get__frontVertIndex_17();
		Vector3U5BU5D_t1718750761* L_11 = __this->get__baseVertices_8();
		NullCheck(L_11);
		int32_t L_12 = __this->get__frontVertIndex_17();
		GlyphData_CopyAndScale_m1216584815(__this, L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)), L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)))), /*hidden argument*/NULL);
	}

IL_0065:
	{
		float L_13 = ___scaleFactor0;
		__this->set__scaleFactor_3(L_13);
		return;
	}
}
// System.Void FlyingText3D.GlyphData::CopyAndScale(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_CopyAndScale_m1278098342 (GlyphData_t620095268 * __this, float ___scaleFactor0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0053;
	}

IL_0007:
	{
		Vector3U5BU5D_t1718750761* L_0 = __this->get__vertices_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Vector3U5BU5D_t1718750761* L_2 = __this->get__baseVertices_8();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		float L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_x_1();
		float L_5 = ___scaleFactor0;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->set_x_1(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		Vector3U5BU5D_t1718750761* L_6 = __this->get__vertices_9();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector3U5BU5D_t1718750761* L_8 = __this->get__baseVertices_8();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_y_2();
		float L_11 = ___scaleFactor0;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->set_y_2(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ___length1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlyingText3D.GlyphData::CopyAndScale(System.Single,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_CopyAndScale_m1216584815 (GlyphData_t620095268 * __this, float ___scaleFactor0, int32_t ___source1, int32_t ___dest2, int32_t ___length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_0007:
	{
		Vector3U5BU5D_t1718750761* L_0 = __this->get__vertices_9();
		int32_t L_1 = ___dest2;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		Vector3U5BU5D_t1718750761* L_3 = __this->get__baseVertices_8();
		int32_t L_4 = ___source1;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		float L_6 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)))))->get_x_1();
		float L_7 = ___scaleFactor0;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))))->set_x_1(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		Vector3U5BU5D_t1718750761* L_8 = __this->get__vertices_9();
		int32_t L_9 = ___dest2;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		Vector3U5BU5D_t1718750761* L_11 = __this->get__baseVertices_8();
		int32_t L_12 = ___source1;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		float L_14 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)))))->get_y_2();
		float L_15 = ___scaleFactor0;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)))))->set_y_2(((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___length3;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlyingText3D.GlyphData::SetFrontTriData()
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetFrontTriData_m374792835 (GlyphData_t620095268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_SetFrontTriData_m374792835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__frontTriIndex_16();
		__this->set__triangles_11(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_0)));
		Int32U5BU5D_t385246372* L_1 = __this->get__baseTriangles_10();
		Int32U5BU5D_t385246372* L_2 = __this->get__triangles_11();
		int32_t L_3 = __this->get__frontTriIndex_16();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get__frontTriIndex_16();
		__this->set__triCount_6(L_4);
		int32_t L_5 = __this->get__frontVertIndex_17();
		__this->set__vertices_9(((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_5)));
		int32_t L_6 = __this->get__frontVertIndex_17();
		__this->set__vertexCount_5(L_6);
		__this->set__scaleFactor_3((-1.0f));
		__this->set__triDataComputed_15((bool)1);
		return;
	}
}
// System.Void FlyingText3D.GlyphData::SetFrontAndEdgeTriData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetFrontAndEdgeTriData_m3360123618 (GlyphData_t620095268 * __this, bool ___doSubmesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_SetFrontAndEdgeTriData_m3360123618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		bool L_0 = ___doSubmesh0;
		if (L_0)
		{
			goto IL_008e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_1 = __this->get__baseTriangles_10();
		NullCheck(L_1);
		int32_t L_2 = __this->get__frontTriIndex_16();
		__this->set__triangles_11(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)L_2)))));
		Int32U5BU5D_t385246372* L_3 = __this->get__baseTriangles_10();
		Int32U5BU5D_t385246372* L_4 = __this->get__triangles_11();
		int32_t L_5 = __this->get__frontTriIndex_16();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_6 = __this->get__baseTriangles_10();
		NullCheck(L_6);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		int32_t L_7 = __this->get__frontTriIndex_16();
		V_1 = L_7;
		int32_t L_8 = __this->get__frontTriIndex_16();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2));
		goto IL_0074;
	}

IL_0055:
	{
		Int32U5BU5D_t385246372* L_9 = __this->get__triangles_11();
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		Int32U5BU5D_t385246372* L_12 = __this->get__baseTriangles_10();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = __this->get__frontVertIndex_17();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0055;
		}
	}
	{
		Int32U5BU5D_t385246372* L_20 = __this->get__triangles_11();
		NullCheck(L_20);
		__this->set__triCount_6((((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))));
		goto IL_0133;
	}

IL_008e:
	{
		int32_t L_21 = __this->get__frontTriIndex_16();
		__this->set__triangles_11(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_21)));
		Int32U5BU5D_t385246372* L_22 = __this->get__baseTriangles_10();
		Int32U5BU5D_t385246372* L_23 = __this->get__triangles_11();
		int32_t L_24 = __this->get__frontTriIndex_16();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_22, (RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = __this->get__frontTriIndex_16();
		__this->set__triCount_6(L_25);
		Int32U5BU5D_t385246372* L_26 = __this->get__baseTriangles_10();
		NullCheck(L_26);
		int32_t L_27 = __this->get__frontTriIndex_16();
		__this->set__triangles2_12(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)2)))))));
		Int32U5BU5D_t385246372* L_28 = __this->get__baseTriangles_10();
		NullCheck(L_28);
		V_3 = (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))));
		V_4 = 0;
		int32_t L_29 = __this->get__frontTriIndex_16();
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2));
		goto IL_011d;
	}

IL_00f9:
	{
		Int32U5BU5D_t385246372* L_30 = __this->get__triangles2_12();
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		Int32U5BU5D_t385246372* L_33 = __this->get__baseTriangles_10();
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = __this->get__frontVertIndex_17();
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_011d:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_3;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00f9;
		}
	}
	{
		Int32U5BU5D_t385246372* L_41 = __this->get__triangles2_12();
		NullCheck(L_41);
		__this->set__triCount2_7((((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))));
	}

IL_0133:
	{
		bool L_42 = ___doSubmesh0;
		__this->set__useSubmesh_13(L_42);
		Vector3U5BU5D_t1718750761* L_43 = __this->get__baseVertices_8();
		NullCheck(L_43);
		int32_t L_44 = __this->get__frontVertIndex_17();
		__this->set__vertices_9(((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))), (int32_t)L_44)))));
		Vector3U5BU5D_t1718750761* L_45 = __this->get__vertices_9();
		NullCheck(L_45);
		__this->set__vertexCount_5((((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))));
		__this->set__scaleFactor_3((-1.0f));
		__this->set__extrudeDepth_4((-1.0f));
		__this->set__triDataComputed_15((bool)1);
		return;
	}
}
// System.Void FlyingText3D.GlyphData::SetTriData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetTriData_m3881103674 (GlyphData_t620095268 * __this, bool ___doSubmesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_SetTriData_m3881103674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___doSubmesh0;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Int32U5BU5D_t385246372* L_1 = __this->get__baseTriangles_10();
		__this->set__triangles_11(L_1);
		Int32U5BU5D_t385246372* L_2 = __this->get__triangles_11();
		NullCheck(L_2);
		__this->set__triCount_6((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		goto IL_00b4;
	}

IL_0025:
	{
		int32_t L_3 = __this->get__frontTriIndex_16();
		__this->set__triangles_11(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))));
		Int32U5BU5D_t385246372* L_4 = __this->get__baseTriangles_10();
		Int32U5BU5D_t385246372* L_5 = __this->get__triangles_11();
		int32_t L_6 = __this->get__frontTriIndex_16();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_7 = __this->get__triangles_11();
		NullCheck(L_7);
		__this->set__triCount_6((((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))));
		Int32U5BU5D_t385246372* L_8 = __this->get__baseTriangles_10();
		NullCheck(L_8);
		int32_t L_9 = __this->get__frontTriIndex_16();
		__this->set__triangles2_12(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)))))));
		Int32U5BU5D_t385246372* L_10 = __this->get__baseTriangles_10();
		int32_t L_11 = __this->get__frontTriIndex_16();
		Int32U5BU5D_t385246372* L_12 = __this->get__triangles2_12();
		Int32U5BU5D_t385246372* L_13 = __this->get__baseTriangles_10();
		NullCheck(L_13);
		int32_t L_14 = __this->get__frontTriIndex_16();
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)), (RuntimeArray *)(RuntimeArray *)L_12, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)))), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_15 = __this->get__triangles2_12();
		NullCheck(L_15);
		__this->set__triCount2_7((((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))));
	}

IL_00b4:
	{
		bool L_16 = ___doSubmesh0;
		__this->set__useSubmesh_13(L_16);
		Vector3U5BU5D_t1718750761* L_17 = __this->get__baseVertices_8();
		NullCheck(L_17);
		__this->set__vertices_9(((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))));
		Vector3U5BU5D_t1718750761* L_18 = __this->get__vertices_9();
		NullCheck(L_18);
		__this->set__vertexCount_5((((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))));
		__this->set__scaleFactor_3((-1.0f));
		__this->set__extrudeDepth_4((-1.0f));
		__this->set__triDataComputed_15((bool)1);
		return;
	}
}
// System.Void FlyingText3D.GlyphData::SetExtrudeDepth(System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GlyphData_SetExtrudeDepth_m390707552 (GlyphData_t620095268 * __this, float ___depth0, bool ___includeBackface1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = ___includeBackface1;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = __this->get__frontVertIndex_17();
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
		int32_t L_2 = __this->get__frontVertIndex_17();
		V_0 = L_2;
		goto IL_0033;
	}

IL_001d:
	{
		Vector3U5BU5D_t1718750761* L_3 = __this->get__vertices_9();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		float L_5 = ___depth0;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->set_z_3(L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_001d;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_9 = __this->get__vertices_9();
		NullCheck(L_9);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		goto IL_0062;
	}

IL_004c:
	{
		Vector3U5BU5D_t1718750761* L_11 = __this->get__vertices_9();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		float L_13 = ___depth0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->set_z_3(L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
	}

IL_0062:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_00a2;
	}

IL_006e:
	{
		Vector3U5BU5D_t1718750761* L_17 = __this->get__vertices_9();
		NullCheck(L_17);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))));
		int32_t L_18 = __this->get__frontVertIndex_17();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_009b;
	}

IL_0085:
	{
		Vector3U5BU5D_t1718750761* L_19 = __this->get__vertices_9();
		int32_t L_20 = V_3;
		NullCheck(L_19);
		float L_21 = ___depth0;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_3(L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
	}

IL_009b:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0085;
		}
	}

IL_00a2:
	{
		float L_25 = ___depth0;
		__this->set__extrudeDepth_4(L_25);
		bool L_26 = ___includeBackface1;
		__this->set__useBack_14(L_26);
		return;
	}
}
// System.Single FlyingText3D.GlyphData::LineToPointSqrDistance(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR float GlyphData_LineToPointSqrDistance_m2036411270 (GlyphData_t620095268 * __this, Vector2_t2156229523 * ___p10, Vector2_t2156229523 * ___p21, Vector2_t2156229523 * ___p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphData_LineToPointSqrDistance_m2036411270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Vector2_t2156229523 * L_0 = ___p21;
		Vector2_t2156229523 * L_1 = ___p10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_0), (*(Vector2_t2156229523 *)L_1), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Vector2_get_sqrMagnitude_m837837635((&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		Vector2_t2156229523 * L_5 = ___p2;
		Vector2_t2156229523 * L_6 = ___p10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_5), (*(Vector2_t2156229523 *)L_6), /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m837837635((&V_2), /*hidden argument*/NULL);
		return L_8;
	}

IL_003f:
	{
		Vector2_t2156229523 * L_9 = ___p2;
		Vector2_t2156229523 * L_10 = ___p10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_11 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_9), (*(Vector2_t2156229523 *)L_10), /*hidden argument*/NULL);
		Vector2_t2156229523 * L_12 = ___p21;
		Vector2_t2156229523 * L_13 = ___p10;
		Vector2_t2156229523  L_14 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_12), (*(Vector2_t2156229523 *)L_13), /*hidden argument*/NULL);
		float L_15 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		float L_16 = V_0;
		V_3 = ((float)((float)L_15/(float)L_16));
		float L_17 = V_3;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		Vector2_t2156229523 * L_18 = ___p2;
		Vector2_t2156229523 * L_19 = ___p10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_18), (*(Vector2_t2156229523 *)L_19), /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = Vector2_get_sqrMagnitude_m837837635((&V_4), /*hidden argument*/NULL);
		return L_21;
	}

IL_008f:
	{
		float L_22 = V_3;
		if ((!(((float)L_22) > ((float)(1.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		Vector2_t2156229523 * L_23 = ___p2;
		Vector2_t2156229523 * L_24 = ___p21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_25 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_23), (*(Vector2_t2156229523 *)L_24), /*hidden argument*/NULL);
		V_5 = L_25;
		float L_26 = Vector2_get_sqrMagnitude_m837837635((&V_5), /*hidden argument*/NULL);
		return L_26;
	}

IL_00b5:
	{
		Vector2_t2156229523 * L_27 = ___p10;
		float L_28 = V_3;
		Vector2_t2156229523 * L_29 = ___p21;
		Vector2_t2156229523 * L_30 = ___p10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_31 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_29), (*(Vector2_t2156229523 *)L_30), /*hidden argument*/NULL);
		Vector2_t2156229523  L_32 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_28, L_31, /*hidden argument*/NULL);
		Vector2_t2156229523  L_33 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_27), L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		Vector2_t2156229523 * L_34 = ___p2;
		Vector2_t2156229523  L_35 = V_6;
		Vector2_t2156229523  L_36 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, (*(Vector2_t2156229523 *)L_34), L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		float L_37 = Vector2_get_sqrMagnitude_m837837635((&V_7), /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Boolean FlyingText3D.GlyphData::IsClockwise(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR bool GlyphData_IsClockwise_m2293411107 (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___points0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Vector2U5BU5D_t1457185986* L_0 = ___points0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		V_1 = (0.0f);
		int32_t L_1 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		V_3 = 0;
		goto IL_0051;
	}

IL_0015:
	{
		float L_2 = V_1;
		Vector2U5BU5D_t1457185986* L_3 = ___points0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_x_0();
		Vector2U5BU5D_t1457185986* L_6 = ___points0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_y_1();
		Vector2U5BU5D_t1457185986* L_9 = ___points0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_x_0();
		Vector2U5BU5D_t1457185986* L_12 = ___points0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_y_1();
		V_1 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_14))))));
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		V_2 = L_16;
	}

IL_0051:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0015;
		}
	}
	{
		float L_19 = V_1;
		return (bool)((((int32_t)((!(((float)L_19) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void FlyingText3D.InsideData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InsideData__ctor_m3340467756 (InsideData_t2359708509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void FlyingText3D.KernPair::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KernPair__ctor_m1498003365 (KernPair_t1917918210 * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___left0;
		__this->set_left_0(L_0);
		int32_t L_1 = ___right1;
		__this->set_right_1(L_1);
		return;
	}
}
extern "C"  void KernPair__ctor_m1498003365_AdjustorThunk (RuntimeObject * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method)
{
	KernPair_t1917918210 * _thisAdjusted = reinterpret_cast<KernPair_t1917918210 *>(__this + 1);
	KernPair__ctor_m1498003365(_thisAdjusted, ___left0, ___right1, method);
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
// System.Boolean FlyingText3D.Triangulate::Compute(System.Collections.Generic.List`1<FlyingText3D.ContourData>,System.Collections.Generic.List`1<System.Int32[]>,System.Int32[],System.Int32[],UnityEngine.Vector2[],System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Int32[],System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_Compute_m3325510674 (RuntimeObject * __this /* static, unused */, List_1_t3670791667 * ___contourList0, List_1_t1857321114 * ___vertexList1, Int32U5BU5D_t385246372* ___vertexCounts2, Int32U5BU5D_t385246372* ___xMaxVertices3, Vector2U5BU5D_t1457185986* ___xMaxPoints4, List_1_t2929260728 * ___pointsList5, Int32U5BU5D_t385246372* ___meshTriangles6, int32_t* ___triIdx7, int32_t* ___triAdd8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangulate_Compute_m3325510674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t385246372* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Int32U5BU5D_t385246372* V_10 = NULL;
	int32_t V_11 = 0;
	Vector2_t2156229523  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_t2156229523  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector2_t2156229523  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2156229523  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector2_t2156229523  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector2_t2156229523  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Vector2_t2156229523  V_18;
	memset(&V_18, 0, sizeof(V_18));
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	float V_24 = 0.0f;
	Vector3_t3722313464  V_25;
	memset(&V_25, 0, sizeof(V_25));
	Vector3_t3722313464  V_26;
	memset(&V_26, 0, sizeof(V_26));
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	Vector2_t2156229523  V_29;
	memset(&V_29, 0, sizeof(V_29));
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	float V_34 = 0.0f;
	Vector2_t2156229523  V_35;
	memset(&V_35, 0, sizeof(V_35));
	Int32U5BU5D_t385246372* V_36 = NULL;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	int32_t V_42 = 0;
	int32_t V_43 = 0;
	Vector2_t2156229523  V_44;
	memset(&V_44, 0, sizeof(V_44));
	Vector2_t2156229523  V_45;
	memset(&V_45, 0, sizeof(V_45));
	Vector2_t2156229523  V_46;
	memset(&V_46, 0, sizeof(V_46));
	Vector2_t2156229523  V_47;
	memset(&V_47, 0, sizeof(V_47));
	Vector2_t2156229523  V_48;
	memset(&V_48, 0, sizeof(V_48));
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	int32_t V_52 = 0;
	int32_t V_53 = 0;
	int32_t V_54 = 0;
	int32_t V_55 = 0;
	int32_t V_56 = 0;
	int32_t V_57 = 0;
	int32_t G_B39_0 = 0;
	{
		V_0 = 0;
		goto IL_09a4;
	}

IL_0007:
	{
		List_1_t3670791667 * L_0 = ___contourList0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ContourData_t2198716925 * L_2 = List_1_get_Item_m1453868451(L_0, L_1, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_side_5();
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Int32U5BU5D_t385246372* L_4 = ___vertexCounts2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) >= ((int32_t)3)))
		{
			goto IL_0026;
		}
	}

IL_0021:
	{
		goto IL_09a0;
	}

IL_0026:
	{
		List_1_t1857321114 * L_8 = ___vertexList1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t385246372* L_10 = List_1_get_Item_m2209139272(L_8, L_9, /*hidden argument*/List_1_get_Item_m2209139272_RuntimeMethod_var);
		V_1 = L_10;
		Int32U5BU5D_t385246372* L_11 = ___vertexCounts2;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		Int32U5BU5D_t385246372* L_15 = ___vertexCounts2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		V_4 = (bool)0;
		V_5 = (Vector2U5BU5D_t1457185986*)NULL;
		int32_t L_19 = V_0;
		List_1_t2929260728 * L_20 = ___pointsList5;
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_m3201839622(L_20, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1))) >= ((int32_t)L_21)))
		{
			goto IL_0117;
		}
	}
	{
		List_1_t3670791667 * L_22 = ___contourList0;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ContourData_t2198716925 * L_24 = List_1_get_Item_m1453868451(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = L_24->get_side_5();
		if (L_25)
		{
			goto IL_0117;
		}
	}
	{
		V_4 = (bool)1;
		int32_t L_26 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		goto IL_0090;
	}

IL_006b:
	{
		List_1_t3670791667 * L_27 = ___contourList0;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		ContourData_t2198716925 * L_29 = List_1_get_Item_m1453868451(L_27, L_28, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->get_side_5();
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_009e;
	}

IL_0083:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t385246372* L_32 = ___vertexCounts2;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_35));
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_37 = V_6;
		List_1_t2929260728 * L_38 = ___pointsList5;
		NullCheck(L_38);
		int32_t L_39 = List_1_get_Count_m3201839622(L_38, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_006b;
		}
	}

IL_009e:
	{
		int32_t L_40 = V_3;
		V_5 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_40));
		Int32U5BU5D_t385246372* L_41 = ___vertexCounts2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		List_1_t2929260728 * L_45 = ___pointsList5;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		Vector2U5BU5D_t1457185986* L_47 = List_1_get_Item_m4003898591(L_45, L_46, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		Vector2U5BU5D_t1457185986* L_48 = V_5;
		int32_t L_49 = V_7;
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_47, (RuntimeArray *)(RuntimeArray *)L_48, L_49, /*hidden argument*/NULL);
		int32_t L_50 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		goto IL_0104;
	}

IL_00c6:
	{
		List_1_t3670791667 * L_51 = ___contourList0;
		int32_t L_52 = V_8;
		NullCheck(L_51);
		ContourData_t2198716925 * L_53 = List_1_get_Item_m1453868451(L_51, L_52, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54 = L_53->get_side_5();
		if ((!(((uint32_t)L_54) == ((uint32_t)1))))
		{
			goto IL_00de;
		}
	}
	{
		goto IL_0112;
	}

IL_00de:
	{
		List_1_t2929260728 * L_55 = ___pointsList5;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		Vector2U5BU5D_t1457185986* L_57 = List_1_get_Item_m4003898591(L_55, L_56, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		Vector2U5BU5D_t1457185986* L_58 = V_5;
		int32_t L_59 = V_7;
		Int32U5BU5D_t385246372* L_60 = ___vertexCounts2;
		int32_t L_61 = V_8;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_57, 0, (RuntimeArray *)(RuntimeArray *)L_58, L_59, L_63, /*hidden argument*/NULL);
		int32_t L_64 = V_7;
		Int32U5BU5D_t385246372* L_65 = ___vertexCounts2;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_68));
		int32_t L_69 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_0104:
	{
		int32_t L_70 = V_8;
		List_1_t2929260728 * L_71 = ___pointsList5;
		NullCheck(L_71);
		int32_t L_72 = List_1_get_Count_m3201839622(L_71, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_00c6;
		}
	}

IL_0112:
	{
		goto IL_0121;
	}

IL_0117:
	{
		List_1_t2929260728 * L_73 = ___pointsList5;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		Vector2U5BU5D_t1457185986* L_75 = List_1_get_Item_m4003898591(L_73, L_74, /*hidden argument*/List_1_get_Item_m4003898591_RuntimeMethod_var);
		V_5 = L_75;
	}

IL_0121:
	{
		bool L_76 = V_4;
		if (!L_76)
		{
			goto IL_0645;
		}
	}
	{
		int32_t L_77 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		goto IL_0638;
	}

IL_0131:
	{
		List_1_t3670791667 * L_78 = ___contourList0;
		int32_t L_79 = V_0;
		NullCheck(L_78);
		ContourData_t2198716925 * L_80 = List_1_get_Item_m1453868451(L_78, L_79, /*hidden argument*/List_1_get_Item_m1453868451_RuntimeMethod_var);
		NullCheck(L_80);
		int32_t L_81 = L_80->get_side_5();
		if ((!(((uint32_t)L_81) == ((uint32_t)1))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_82 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
		goto IL_0645;
	}

IL_014c:
	{
		Int32U5BU5D_t385246372* L_83 = ___vertexCounts2;
		int32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((((int32_t)L_86) >= ((int32_t)3)))
		{
			goto IL_015a;
		}
	}
	{
		goto IL_0634;
	}

IL_015a:
	{
		Int32U5BU5D_t385246372* L_87 = ___xMaxVertices3;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		int32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_9 = L_90;
		List_1_t1857321114 * L_91 = ___vertexList1;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		Int32U5BU5D_t385246372* L_93 = List_1_get_Item_m2209139272(L_91, L_92, /*hidden argument*/List_1_get_Item_m2209139272_RuntimeMethod_var);
		V_10 = L_93;
		Int32U5BU5D_t385246372* L_94 = ___vertexCounts2;
		int32_t L_95 = V_0;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_11 = L_97;
		Vector2U5BU5D_t1457185986* L_98 = ___xMaxPoints4;
		int32_t L_99 = V_0;
		NullCheck(L_98);
		V_12 = (*(Vector2_t2156229523 *)((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99))));
		float L_100 = (&V_12)->get_y_1();
		Vector2__ctor_m3970636864((&V_13), (999999.0f), L_100, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_101 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_18 = L_101;
		float L_102 = (&V_12)->get_x_0();
		V_19 = L_102;
		V_20 = (std::numeric_limits<float>::max());
		V_21 = 0;
		int32_t L_103 = V_2;
		V_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)1));
		V_23 = 0;
		goto IL_0467;
	}

IL_01b6:
	{
		Vector2U5BU5D_t1457185986* L_104 = V_5;
		Int32U5BU5D_t385246372* L_105 = V_1;
		int32_t L_106 = V_23;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_104);
		V_14 = (*(Vector2_t2156229523 *)((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108))));
		Vector2U5BU5D_t1457185986* L_109 = V_5;
		Int32U5BU5D_t385246372* L_110 = V_1;
		int32_t L_111 = V_22;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_109);
		V_15 = (*(Vector2_t2156229523 *)((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113))));
		float L_114 = (&V_14)->get_x_0();
		float L_115 = V_19;
		if ((((float)L_114) >= ((float)L_115)))
		{
			goto IL_01f6;
		}
	}
	{
		float L_116 = (&V_15)->get_x_0();
		float L_117 = V_19;
		if ((!(((float)L_116) >= ((float)L_117))))
		{
			goto IL_045d;
		}
	}

IL_01f6:
	{
		float L_118 = (&V_14)->get_y_1();
		float L_119 = (&V_12)->get_y_1();
		if ((!(((float)L_118) == ((float)L_119))))
		{
			goto IL_0278;
		}
	}
	{
		float L_120 = (&V_12)->get_x_0();
		float L_121 = (&V_14)->get_x_0();
		float L_122 = (&V_12)->get_x_0();
		float L_123 = (&V_14)->get_x_0();
		V_24 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_120, (float)L_121)), (float)((float)il2cpp_codegen_subtract((float)L_122, (float)L_123))));
		float L_124 = V_24;
		float L_125 = V_20;
		if ((!(((float)L_124) <= ((float)L_125))))
		{
			goto IL_0273;
		}
	}
	{
		Vector2_t2156229523  L_126 = V_14;
		Vector2_t2156229523  L_127 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_128 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_126, L_127, /*hidden argument*/NULL);
		Vector3_t3722313464  L_129 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_128, /*hidden argument*/NULL);
		Vector2_t2156229523  L_130 = V_12;
		Vector2_t2156229523  L_131 = V_14;
		Vector2_t2156229523  L_132 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		Vector3_t3722313464  L_133 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_134 = Vector3_Cross_m418170344(NULL /*static, unused*/, L_129, L_133, /*hidden argument*/NULL);
		V_25 = L_134;
		float L_135 = (&V_25)->get_z_3();
		if ((!(((float)L_135) < ((float)(0.0f)))))
		{
			goto IL_0273;
		}
	}
	{
		Vector2_t2156229523  L_136 = V_14;
		V_18 = L_136;
		float L_137 = V_24;
		V_20 = L_137;
		int32_t L_138 = V_23;
		V_21 = L_138;
	}

IL_0273:
	{
		goto IL_045d;
	}

IL_0278:
	{
		float L_139 = (&V_15)->get_y_1();
		float L_140 = (&V_12)->get_y_1();
		float L_141 = (&V_14)->get_x_0();
		float L_142 = (&V_12)->get_x_0();
		float L_143 = (&V_14)->get_y_1();
		float L_144 = (&V_12)->get_y_1();
		float L_145 = (&V_15)->get_x_0();
		float L_146 = (&V_12)->get_x_0();
		float L_147 = (&V_15)->get_y_1();
		float L_148 = (&V_13)->get_y_1();
		float L_149 = (&V_14)->get_x_0();
		float L_150 = (&V_13)->get_x_0();
		float L_151 = (&V_14)->get_y_1();
		float L_152 = (&V_13)->get_y_1();
		float L_153 = (&V_15)->get_x_0();
		float L_154 = (&V_13)->get_x_0();
		if ((((int32_t)((((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_139, (float)L_140)), (float)((float)il2cpp_codegen_subtract((float)L_141, (float)L_142))))) > ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_143, (float)L_144)), (float)((float)il2cpp_codegen_subtract((float)L_145, (float)L_146))))))? 1 : 0)) == ((int32_t)((((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_147, (float)L_148)), (float)((float)il2cpp_codegen_subtract((float)L_149, (float)L_150))))) > ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_151, (float)L_152)), (float)((float)il2cpp_codegen_subtract((float)L_153, (float)L_154))))))? 1 : 0))))
		{
			goto IL_045d;
		}
	}
	{
		float L_155 = (&V_14)->get_y_1();
		float L_156 = (&V_12)->get_y_1();
		float L_157 = (&V_13)->get_x_0();
		float L_158 = (&V_12)->get_x_0();
		float L_159 = (&V_13)->get_y_1();
		float L_160 = (&V_12)->get_y_1();
		float L_161 = (&V_14)->get_x_0();
		float L_162 = (&V_12)->get_x_0();
		float L_163 = (&V_15)->get_y_1();
		float L_164 = (&V_12)->get_y_1();
		float L_165 = (&V_13)->get_x_0();
		float L_166 = (&V_12)->get_x_0();
		float L_167 = (&V_13)->get_y_1();
		float L_168 = (&V_12)->get_y_1();
		float L_169 = (&V_15)->get_x_0();
		float L_170 = (&V_12)->get_x_0();
		if ((((int32_t)((((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_155, (float)L_156)), (float)((float)il2cpp_codegen_subtract((float)L_157, (float)L_158))))) > ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_159, (float)L_160)), (float)((float)il2cpp_codegen_subtract((float)L_161, (float)L_162))))))? 1 : 0)) == ((int32_t)((((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_163, (float)L_164)), (float)((float)il2cpp_codegen_subtract((float)L_165, (float)L_166))))) > ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_167, (float)L_168)), (float)((float)il2cpp_codegen_subtract((float)L_169, (float)L_170))))))? 1 : 0))))
		{
			goto IL_045d;
		}
	}
	{
		Vector2_t2156229523  L_171 = V_14;
		Vector2_t2156229523  L_172 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_173 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_171, L_172, /*hidden argument*/NULL);
		Vector3_t3722313464  L_174 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_173, /*hidden argument*/NULL);
		Vector2_t2156229523  L_175 = V_12;
		Vector2_t2156229523  L_176 = V_14;
		Vector2_t2156229523  L_177 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_175, L_176, /*hidden argument*/NULL);
		Vector3_t3722313464  L_178 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_177, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_179 = Vector3_Cross_m418170344(NULL /*static, unused*/, L_174, L_178, /*hidden argument*/NULL);
		V_26 = L_179;
		float L_180 = (&V_26)->get_z_3();
		if ((!(((float)L_180) < ((float)(0.0f)))))
		{
			goto IL_045d;
		}
	}
	{
		float L_181 = (&V_13)->get_y_1();
		float L_182 = (&V_12)->get_y_1();
		(&V_16)->set_x_0(((-((float)il2cpp_codegen_subtract((float)L_181, (float)L_182)))));
		float L_183 = (&V_13)->get_x_0();
		float L_184 = (&V_12)->get_x_0();
		(&V_16)->set_y_1(((float)il2cpp_codegen_subtract((float)L_183, (float)L_184)));
		Vector2_t2156229523  L_185 = V_12;
		Vector2_t2156229523  L_186 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_187 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_185, L_186, /*hidden argument*/NULL);
		Vector2_t2156229523  L_188 = V_16;
		float L_189 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_187, L_188, /*hidden argument*/NULL);
		Vector2_t2156229523  L_190 = V_15;
		Vector2_t2156229523  L_191 = V_14;
		Vector2_t2156229523  L_192 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_190, L_191, /*hidden argument*/NULL);
		Vector2_t2156229523  L_193 = V_16;
		float L_194 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_192, L_193, /*hidden argument*/NULL);
		V_27 = ((float)((float)L_189/(float)L_194));
		Vector2_t2156229523  L_195 = V_14;
		Vector2_t2156229523  L_196 = V_15;
		Vector2_t2156229523  L_197 = V_14;
		Vector2_t2156229523  L_198 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_196, L_197, /*hidden argument*/NULL);
		float L_199 = V_27;
		Vector2_t2156229523  L_200 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_198, L_199, /*hidden argument*/NULL);
		Vector2_t2156229523  L_201 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_195, L_200, /*hidden argument*/NULL);
		V_17 = L_201;
		Vector2_t2156229523  L_202 = V_12;
		Vector2_t2156229523  L_203 = V_17;
		Vector2_t2156229523  L_204 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_202, L_203, /*hidden argument*/NULL);
		V_29 = L_204;
		float L_205 = Vector2_get_sqrMagnitude_m837837635((&V_29), /*hidden argument*/NULL);
		V_28 = L_205;
		float L_206 = V_28;
		float L_207 = V_20;
		if ((!(((float)L_206) <= ((float)L_207))))
		{
			goto IL_045d;
		}
	}
	{
		Vector2_t2156229523  L_208 = V_17;
		V_18 = L_208;
		float L_209 = V_28;
		V_20 = L_209;
		float L_210 = (&V_14)->get_x_0();
		float L_211 = V_19;
		if ((!(((float)L_210) >= ((float)L_211))))
		{
			goto IL_0459;
		}
	}
	{
		int32_t L_212 = V_23;
		G_B39_0 = L_212;
		goto IL_045b;
	}

IL_0459:
	{
		int32_t L_213 = V_22;
		G_B39_0 = L_213;
	}

IL_045b:
	{
		V_21 = G_B39_0;
	}

IL_045d:
	{
		int32_t L_214 = V_23;
		V_22 = L_214;
		int32_t L_215 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1));
	}

IL_0467:
	{
		int32_t L_216 = V_23;
		int32_t L_217 = V_2;
		if ((((int32_t)L_216) < ((int32_t)L_217)))
		{
			goto IL_01b6;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_218 = V_5;
		Int32U5BU5D_t385246372* L_219 = V_1;
		int32_t L_220 = V_21;
		NullCheck(L_219);
		int32_t L_221 = L_220;
		int32_t L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		NullCheck(L_218);
		V_13 = (*(Vector2_t2156229523 *)((L_218)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_222))));
		float L_223 = (&V_18)->get_y_1();
		float L_224 = (&V_13)->get_y_1();
		if ((!(((float)L_223) < ((float)L_224))))
		{
			goto IL_04ab;
		}
	}
	{
		float L_225 = (&V_18)->get_y_1();
		V_30 = L_225;
		float L_226 = (&V_13)->get_y_1();
		V_31 = L_226;
		goto IL_04bd;
	}

IL_04ab:
	{
		float L_227 = (&V_13)->get_y_1();
		V_30 = L_227;
		float L_228 = (&V_18)->get_y_1();
		V_31 = L_228;
	}

IL_04bd:
	{
		V_20 = (std::numeric_limits<float>::max());
		V_32 = 0;
		goto IL_05a2;
	}

IL_04cc:
	{
		Vector2U5BU5D_t1457185986* L_229 = V_5;
		Int32U5BU5D_t385246372* L_230 = V_1;
		int32_t L_231 = V_32;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		int32_t L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_229);
		V_14 = (*(Vector2_t2156229523 *)((L_229)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_233))));
		int32_t L_234 = V_32;
		int32_t L_235 = V_21;
		if ((((int32_t)L_234) == ((int32_t)L_235)))
		{
			goto IL_0511;
		}
	}
	{
		float L_236 = (&V_14)->get_x_0();
		float L_237 = V_19;
		if ((((float)L_236) < ((float)L_237)))
		{
			goto IL_0511;
		}
	}
	{
		float L_238 = (&V_14)->get_y_1();
		float L_239 = V_31;
		if ((((float)L_238) > ((float)L_239)))
		{
			goto IL_0511;
		}
	}
	{
		float L_240 = (&V_14)->get_y_1();
		float L_241 = V_30;
		if ((!(((float)L_240) < ((float)L_241))))
		{
			goto IL_0516;
		}
	}

IL_0511:
	{
		goto IL_059c;
	}

IL_0516:
	{
		int32_t L_242 = V_32;
		V_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_242, (int32_t)1));
		int32_t L_243 = V_22;
		if ((((int32_t)L_243) >= ((int32_t)0)))
		{
			goto IL_0529;
		}
	}
	{
		int32_t L_244 = V_2;
		V_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_244, (int32_t)1));
	}

IL_0529:
	{
		int32_t L_245 = V_32;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)1));
		int32_t L_246 = V_33;
		int32_t L_247 = V_2;
		if ((!(((uint32_t)L_246) == ((uint32_t)L_247))))
		{
			goto IL_053a;
		}
	}
	{
		V_33 = 0;
	}

IL_053a:
	{
		Vector2U5BU5D_t1457185986* L_248 = V_5;
		Int32U5BU5D_t385246372* L_249 = V_1;
		int32_t L_250 = V_22;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		int32_t L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		NullCheck(L_248);
		Vector2U5BU5D_t1457185986* L_253 = V_5;
		Int32U5BU5D_t385246372* L_254 = V_1;
		int32_t L_255 = V_32;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		int32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		NullCheck(L_253);
		Vector2U5BU5D_t1457185986* L_258 = V_5;
		Int32U5BU5D_t385246372* L_259 = V_1;
		int32_t L_260 = V_33;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_258);
		bool L_263 = Triangulate_IsReflex_m3585468626(NULL /*static, unused*/, ((L_248)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_252))), ((L_253)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_257))), ((L_258)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_262))), /*hidden argument*/NULL);
		if (!L_263)
		{
			goto IL_059c;
		}
	}
	{
		bool L_264 = Triangulate_PointInsideTriangle_m295648208(NULL /*static, unused*/, (&V_14), (&V_12), (&V_18), (&V_13), /*hidden argument*/NULL);
		if (!L_264)
		{
			goto IL_059c;
		}
	}
	{
		Vector2_t2156229523  L_265 = V_12;
		Vector2_t2156229523  L_266 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_267 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_265, L_266, /*hidden argument*/NULL);
		V_35 = L_267;
		float L_268 = Vector2_get_sqrMagnitude_m837837635((&V_35), /*hidden argument*/NULL);
		V_34 = L_268;
		float L_269 = V_34;
		float L_270 = V_20;
		if ((!(((float)L_269) <= ((float)L_270))))
		{
			goto IL_059c;
		}
	}
	{
		float L_271 = V_34;
		V_20 = L_271;
		int32_t L_272 = V_32;
		V_21 = L_272;
	}

IL_059c:
	{
		int32_t L_273 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_273, (int32_t)1));
	}

IL_05a2:
	{
		int32_t L_274 = V_32;
		int32_t L_275 = V_2;
		if ((((int32_t)L_274) < ((int32_t)L_275)))
		{
			goto IL_04cc;
		}
	}
	{
		int32_t L_276 = V_2;
		int32_t L_277 = V_11;
		Array_Resize_TisInt32_t2950945753_m3147937642(NULL /*static, unused*/, (&V_1), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_276, (int32_t)L_277)), (int32_t)2)), /*hidden argument*/Array_Resize_TisInt32_t2950945753_m3147937642_RuntimeMethod_var);
		Int32U5BU5D_t385246372* L_278 = V_1;
		int32_t L_279 = V_21;
		Int32U5BU5D_t385246372* L_280 = V_1;
		int32_t L_281 = V_21;
		int32_t L_282 = V_11;
		int32_t L_283 = V_2;
		int32_t L_284 = V_21;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_278, ((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_280, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_281, (int32_t)L_282)), (int32_t)3)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_283, (int32_t)L_284)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_285 = V_9;
		if (L_285)
		{
			goto IL_05ea;
		}
	}
	{
		Int32U5BU5D_t385246372* L_286 = V_10;
		Int32U5BU5D_t385246372* L_287 = V_1;
		int32_t L_288 = V_21;
		int32_t L_289 = V_11;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_286, 0, (RuntimeArray *)(RuntimeArray *)L_287, ((int32_t)il2cpp_codegen_add((int32_t)L_288, (int32_t)1)), L_289, /*hidden argument*/NULL);
		goto IL_0612;
	}

IL_05ea:
	{
		Int32U5BU5D_t385246372* L_290 = V_10;
		int32_t L_291 = V_9;
		Int32U5BU5D_t385246372* L_292 = V_1;
		int32_t L_293 = V_21;
		int32_t L_294 = V_11;
		int32_t L_295 = V_9;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_290, L_291, (RuntimeArray *)(RuntimeArray *)L_292, ((int32_t)il2cpp_codegen_add((int32_t)L_293, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_294, (int32_t)L_295)), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_296 = V_10;
		Int32U5BU5D_t385246372* L_297 = V_1;
		int32_t L_298 = V_21;
		int32_t L_299 = V_11;
		int32_t L_300 = V_9;
		int32_t L_301 = V_9;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_296, 0, (RuntimeArray *)(RuntimeArray *)L_297, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_298, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_299, (int32_t)L_300)))), (int32_t)1)), L_301, /*hidden argument*/NULL);
	}

IL_0612:
	{
		Int32U5BU5D_t385246372* L_302 = V_1;
		int32_t L_303 = V_21;
		int32_t L_304 = V_11;
		Int32U5BU5D_t385246372* L_305 = V_10;
		int32_t L_306 = V_9;
		NullCheck(L_305);
		int32_t L_307 = L_306;
		int32_t L_308 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		NullCheck(L_302);
		(L_302)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_303, (int32_t)L_304)), (int32_t)1))), (int32_t)L_308);
		Int32U5BU5D_t385246372* L_309 = V_1;
		int32_t L_310 = V_21;
		int32_t L_311 = V_11;
		Int32U5BU5D_t385246372* L_312 = V_1;
		int32_t L_313 = V_21;
		NullCheck(L_312);
		int32_t L_314 = L_313;
		int32_t L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_309);
		(L_309)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)L_311)), (int32_t)2))), (int32_t)L_315);
		int32_t L_316 = V_2;
		int32_t L_317 = V_11;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_316, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)2))));
	}

IL_0634:
	{
		int32_t L_318 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_318, (int32_t)1));
	}

IL_0638:
	{
		int32_t L_319 = V_0;
		List_1_t2929260728 * L_320 = ___pointsList5;
		NullCheck(L_320);
		int32_t L_321 = List_1_get_Count_m3201839622(L_320, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_319) < ((int32_t)L_321)))
		{
			goto IL_0131;
		}
	}

IL_0645:
	{
		int32_t L_322 = V_2;
		if ((((int32_t)L_322) <= ((int32_t)3)))
		{
			goto IL_096b;
		}
	}
	{
		int32_t L_323 = V_2;
		V_36 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_323));
		V_37 = 0;
		V_38 = 0;
		int32_t L_324 = V_2;
		V_39 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_324, (int32_t)1));
		V_40 = 0;
		goto IL_06c3;
	}

IL_0667:
	{
		int32_t L_325 = V_40;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_325, (int32_t)1));
		int32_t L_326 = V_41;
		int32_t L_327 = V_2;
		if ((((int32_t)L_326) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_327, (int32_t)1)))))
		{
			goto IL_067a;
		}
	}
	{
		V_41 = 0;
	}

IL_067a:
	{
		Vector2U5BU5D_t1457185986* L_328 = V_5;
		Int32U5BU5D_t385246372* L_329 = V_1;
		int32_t L_330 = V_39;
		NullCheck(L_329);
		int32_t L_331 = L_330;
		int32_t L_332 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		NullCheck(L_328);
		Vector2U5BU5D_t1457185986* L_333 = V_5;
		Int32U5BU5D_t385246372* L_334 = V_1;
		int32_t L_335 = V_40;
		NullCheck(L_334);
		int32_t L_336 = L_335;
		int32_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		NullCheck(L_333);
		Vector2U5BU5D_t1457185986* L_338 = V_5;
		Int32U5BU5D_t385246372* L_339 = V_1;
		int32_t L_340 = V_41;
		NullCheck(L_339);
		int32_t L_341 = L_340;
		int32_t L_342 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		NullCheck(L_338);
		bool L_343 = Triangulate_IsReflex_m3585468626(NULL /*static, unused*/, ((L_328)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_332))), ((L_333)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_337))), ((L_338)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_342))), /*hidden argument*/NULL);
		if (!L_343)
		{
			goto IL_06b9;
		}
	}
	{
		Int32U5BU5D_t385246372* L_344 = V_36;
		int32_t L_345 = V_37;
		int32_t L_346 = L_345;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_346, (int32_t)1));
		Int32U5BU5D_t385246372* L_347 = V_1;
		int32_t L_348 = V_40;
		NullCheck(L_347);
		int32_t L_349 = L_348;
		int32_t L_350 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(L_346), (int32_t)L_350);
		int32_t L_351 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_351, (int32_t)1));
	}

IL_06b9:
	{
		int32_t L_352 = V_40;
		V_39 = L_352;
		int32_t L_353 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_353, (int32_t)1));
	}

IL_06c3:
	{
		int32_t L_354 = V_40;
		int32_t L_355 = V_2;
		if ((((int32_t)L_354) < ((int32_t)L_355)))
		{
			goto IL_0667;
		}
	}
	{
		V_42 = 0;
		V_43 = (-1);
	}

IL_06d1:
	{
		int32_t L_356 = V_43;
		int32_t L_357 = ((int32_t)il2cpp_codegen_add((int32_t)L_356, (int32_t)1));
		V_43 = L_357;
		int32_t L_358 = V_2;
		if ((!(((uint32_t)L_357) == ((uint32_t)L_358))))
		{
			goto IL_06ea;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral858184599, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_06ea:
	{
		int32_t L_359 = V_42;
		int32_t L_360 = V_2;
		if ((!(((uint32_t)L_359) == ((uint32_t)L_360))))
		{
			goto IL_06f5;
		}
	}
	{
		V_42 = 0;
	}

IL_06f5:
	{
		Int32U5BU5D_t385246372* L_361 = V_1;
		int32_t L_362 = V_42;
		NullCheck(L_361);
		int32_t L_363 = L_362;
		int32_t L_364 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_363));
		V_49 = L_364;
		Vector2U5BU5D_t1457185986* L_365 = V_5;
		int32_t L_366 = V_49;
		NullCheck(L_365);
		V_44 = (*(Vector2_t2156229523 *)((L_365)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_366))));
		int32_t L_367 = V_42;
		V_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_367, (int32_t)1));
		int32_t L_368 = V_50;
		if ((((int32_t)L_368) >= ((int32_t)0)))
		{
			goto IL_071e;
		}
	}
	{
		int32_t L_369 = V_2;
		V_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)1));
	}

IL_071e:
	{
		Int32U5BU5D_t385246372* L_370 = V_1;
		int32_t L_371 = V_50;
		NullCheck(L_370);
		int32_t L_372 = L_371;
		int32_t L_373 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		V_51 = L_373;
		Vector2U5BU5D_t1457185986* L_374 = V_5;
		int32_t L_375 = V_51;
		NullCheck(L_374);
		V_45 = (*(Vector2_t2156229523 *)((L_374)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_375))));
		int32_t L_376 = V_42;
		V_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_376, (int32_t)1));
		int32_t L_377 = V_52;
		int32_t L_378 = V_2;
		if ((((int32_t)L_377) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_378, (int32_t)1)))))
		{
			goto IL_0747;
		}
	}
	{
		V_52 = 0;
	}

IL_0747:
	{
		Int32U5BU5D_t385246372* L_379 = V_1;
		int32_t L_380 = V_52;
		NullCheck(L_379);
		int32_t L_381 = L_380;
		int32_t L_382 = (L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		V_53 = L_382;
		Vector2U5BU5D_t1457185986* L_383 = V_5;
		int32_t L_384 = V_53;
		NullCheck(L_383);
		V_47 = (*(Vector2_t2156229523 *)((L_383)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_384))));
		bool L_385 = Triangulate_IsReflex_m3585468626(NULL /*static, unused*/, (&V_45), (&V_44), (&V_47), /*hidden argument*/NULL);
		if (!L_385)
		{
			goto IL_0778;
		}
	}
	{
		int32_t L_386 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_386, (int32_t)1));
		goto IL_06d1;
	}

IL_0778:
	{
		V_54 = (-1);
		V_55 = (-1);
		V_56 = 0;
		goto IL_07e9;
	}

IL_0786:
	{
		Int32U5BU5D_t385246372* L_387 = V_36;
		int32_t L_388 = V_56;
		NullCheck(L_387);
		int32_t L_389 = L_388;
		int32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		V_57 = L_390;
		int32_t L_391 = V_57;
		int32_t L_392 = V_51;
		if ((!(((uint32_t)L_391) == ((uint32_t)L_392))))
		{
			goto IL_079f;
		}
	}
	{
		int32_t L_393 = V_56;
		V_54 = L_393;
		goto IL_07e3;
	}

IL_079f:
	{
		int32_t L_394 = V_57;
		int32_t L_395 = V_53;
		if ((!(((uint32_t)L_394) == ((uint32_t)L_395))))
		{
			goto IL_07b1;
		}
	}
	{
		int32_t L_396 = V_56;
		V_55 = L_396;
		goto IL_07e3;
	}

IL_07b1:
	{
		int32_t L_397 = V_57;
		int32_t L_398 = V_49;
		if ((!(((uint32_t)L_397) == ((uint32_t)L_398))))
		{
			goto IL_07bf;
		}
	}
	{
		goto IL_07e3;
	}

IL_07bf:
	{
		Vector2U5BU5D_t1457185986* L_399 = V_5;
		int32_t L_400 = V_57;
		NullCheck(L_399);
		bool L_401 = Triangulate_PointInsideTriangle_m295648208(NULL /*static, unused*/, ((L_399)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_400))), (&V_45), (&V_44), (&V_47), /*hidden argument*/NULL);
		if (!L_401)
		{
			goto IL_07e3;
		}
	}
	{
		int32_t L_402 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_402, (int32_t)1));
		goto IL_06d1;
	}

IL_07e3:
	{
		int32_t L_403 = V_56;
		V_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_403, (int32_t)1));
	}

IL_07e9:
	{
		int32_t L_404 = V_56;
		int32_t L_405 = V_38;
		if ((((int32_t)L_404) < ((int32_t)L_405)))
		{
			goto IL_0786;
		}
	}
	{
		V_43 = (-1);
		int32_t L_406 = V_50;
		int32_t L_407 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_406, (int32_t)1));
		V_50 = L_407;
		if ((((int32_t)L_407) >= ((int32_t)0)))
		{
			goto IL_0807;
		}
	}
	{
		int32_t L_408 = V_2;
		V_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_408, (int32_t)1));
	}

IL_0807:
	{
		Vector2U5BU5D_t1457185986* L_409 = V_5;
		Int32U5BU5D_t385246372* L_410 = V_1;
		int32_t L_411 = V_50;
		NullCheck(L_410);
		int32_t L_412 = L_411;
		int32_t L_413 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		NullCheck(L_409);
		V_46 = (*(Vector2_t2156229523 *)((L_409)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_413))));
		int32_t L_414 = V_52;
		int32_t L_415 = ((int32_t)il2cpp_codegen_add((int32_t)L_414, (int32_t)1));
		V_52 = L_415;
		int32_t L_416 = V_2;
		if ((((int32_t)L_415) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_416, (int32_t)1)))))
		{
			goto IL_082b;
		}
	}
	{
		V_52 = 0;
	}

IL_082b:
	{
		Vector2U5BU5D_t1457185986* L_417 = V_5;
		Int32U5BU5D_t385246372* L_418 = V_1;
		int32_t L_419 = V_52;
		NullCheck(L_418);
		int32_t L_420 = L_419;
		int32_t L_421 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		NullCheck(L_417);
		V_48 = (*(Vector2_t2156229523 *)((L_417)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_421))));
		Int32U5BU5D_t385246372* L_422 = ___meshTriangles6;
		int32_t* L_423 = ___triIdx7;
		int32_t L_424 = V_51;
		int32_t* L_425 = ___triAdd8;
		NullCheck(L_422);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>((*((int32_t*)L_423))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_424, (int32_t)(*((int32_t*)L_425)))));
		Int32U5BU5D_t385246372* L_426 = ___meshTriangles6;
		int32_t* L_427 = ___triIdx7;
		int32_t L_428 = V_49;
		int32_t* L_429 = ___triAdd8;
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_427)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_428, (int32_t)(*((int32_t*)L_429)))));
		Int32U5BU5D_t385246372* L_430 = ___meshTriangles6;
		int32_t* L_431 = ___triIdx7;
		int32_t L_432 = V_53;
		int32_t* L_433 = ___triAdd8;
		NullCheck(L_430);
		(L_430)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_431)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_432, (int32_t)(*((int32_t*)L_433)))));
		int32_t* L_434 = ___triIdx7;
		int32_t* L_435 = ___triIdx7;
		*((int32_t*)(L_434)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_435)), (int32_t)3));
		int32_t L_436 = V_42;
		int32_t L_437 = V_2;
		if ((((int32_t)L_436) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_437, (int32_t)1)))))
		{
			goto IL_0891;
		}
	}
	{
		Int32U5BU5D_t385246372* L_438 = V_1;
		int32_t L_439 = V_42;
		Int32U5BU5D_t385246372* L_440 = V_1;
		int32_t L_441 = V_42;
		int32_t L_442 = V_2;
		int32_t L_443 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_442, (int32_t)1));
		V_2 = L_443;
		int32_t L_444 = V_42;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_438, ((int32_t)il2cpp_codegen_add((int32_t)L_439, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_440, L_441, ((int32_t)il2cpp_codegen_subtract((int32_t)L_443, (int32_t)L_444)), /*hidden argument*/NULL);
		goto IL_0895;
	}

IL_0891:
	{
		int32_t L_445 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_445, (int32_t)1));
	}

IL_0895:
	{
		int32_t L_446 = V_2;
		if ((!(((uint32_t)L_446) == ((uint32_t)3))))
		{
			goto IL_08d4;
		}
	}
	{
		Int32U5BU5D_t385246372* L_447 = ___meshTriangles6;
		int32_t* L_448 = ___triIdx7;
		Int32U5BU5D_t385246372* L_449 = V_1;
		NullCheck(L_449);
		int32_t L_450 = 0;
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		int32_t* L_452 = ___triAdd8;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>((*((int32_t*)L_448))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_451, (int32_t)(*((int32_t*)L_452)))));
		Int32U5BU5D_t385246372* L_453 = ___meshTriangles6;
		int32_t* L_454 = ___triIdx7;
		Int32U5BU5D_t385246372* L_455 = V_1;
		NullCheck(L_455);
		int32_t L_456 = 1;
		int32_t L_457 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		int32_t* L_458 = ___triAdd8;
		NullCheck(L_453);
		(L_453)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_454)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_457, (int32_t)(*((int32_t*)L_458)))));
		Int32U5BU5D_t385246372* L_459 = ___meshTriangles6;
		int32_t* L_460 = ___triIdx7;
		Int32U5BU5D_t385246372* L_461 = V_1;
		NullCheck(L_461);
		int32_t L_462 = 2;
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		int32_t* L_464 = ___triAdd8;
		NullCheck(L_459);
		(L_459)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_460)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_463, (int32_t)(*((int32_t*)L_464)))));
		int32_t* L_465 = ___triIdx7;
		int32_t* L_466 = ___triIdx7;
		*((int32_t*)(L_465)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_466)), (int32_t)3));
		goto IL_0966;
	}

IL_08d4:
	{
		int32_t L_467 = V_54;
		if ((((int32_t)L_467) == ((int32_t)(-1))))
		{
			goto IL_0922;
		}
	}
	{
		bool L_468 = Triangulate_IsReflex_m3585468626(NULL /*static, unused*/, (&V_46), (&V_45), (&V_47), /*hidden argument*/NULL);
		if (L_468)
		{
			goto IL_0922;
		}
	}
	{
		int32_t L_469 = V_54;
		int32_t L_470 = V_38;
		if ((((int32_t)L_469) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_470, (int32_t)1)))))
		{
			goto IL_090d;
		}
	}
	{
		Int32U5BU5D_t385246372* L_471 = V_36;
		int32_t L_472 = V_54;
		Int32U5BU5D_t385246372* L_473 = V_36;
		int32_t L_474 = V_54;
		int32_t L_475 = V_38;
		int32_t L_476 = V_54;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_471, ((int32_t)il2cpp_codegen_add((int32_t)L_472, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_473, L_474, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_475, (int32_t)L_476)), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_090d:
	{
		int32_t L_477 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_477, (int32_t)1));
		int32_t L_478 = V_55;
		int32_t L_479 = V_54;
		if ((((int32_t)L_478) <= ((int32_t)L_479)))
		{
			goto IL_0922;
		}
	}
	{
		int32_t L_480 = V_55;
		V_55 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_480, (int32_t)1));
	}

IL_0922:
	{
		int32_t L_481 = V_55;
		if ((((int32_t)L_481) == ((int32_t)(-1))))
		{
			goto IL_0961;
		}
	}
	{
		bool L_482 = Triangulate_IsReflex_m3585468626(NULL /*static, unused*/, (&V_45), (&V_47), (&V_48), /*hidden argument*/NULL);
		if (L_482)
		{
			goto IL_0961;
		}
	}
	{
		int32_t L_483 = V_55;
		int32_t L_484 = V_38;
		if ((((int32_t)L_483) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_484, (int32_t)1)))))
		{
			goto IL_095b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_485 = V_36;
		int32_t L_486 = V_55;
		Int32U5BU5D_t385246372* L_487 = V_36;
		int32_t L_488 = V_55;
		int32_t L_489 = V_38;
		int32_t L_490 = V_55;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_485, ((int32_t)il2cpp_codegen_add((int32_t)L_486, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_487, L_488, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_489, (int32_t)L_490)), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_095b:
	{
		int32_t L_491 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_491, (int32_t)1));
	}

IL_0961:
	{
		goto IL_06d1;
	}

IL_0966:
	{
		goto IL_0998;
	}

IL_096b:
	{
		Int32U5BU5D_t385246372* L_492 = ___meshTriangles6;
		int32_t* L_493 = ___triIdx7;
		int32_t* L_494 = ___triAdd8;
		NullCheck(L_492);
		(L_492)->SetAt(static_cast<il2cpp_array_size_t>((*((int32_t*)L_493))), (int32_t)(*((int32_t*)L_494)));
		Int32U5BU5D_t385246372* L_495 = ___meshTriangles6;
		int32_t* L_496 = ___triIdx7;
		int32_t* L_497 = ___triAdd8;
		NullCheck(L_495);
		(L_495)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_496)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_497)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_498 = ___meshTriangles6;
		int32_t* L_499 = ___triIdx7;
		int32_t* L_500 = ___triAdd8;
		NullCheck(L_498);
		(L_498)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_499)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_500)), (int32_t)2)));
		int32_t* L_501 = ___triIdx7;
		int32_t* L_502 = ___triIdx7;
		*((int32_t*)(L_501)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_502)), (int32_t)3));
		V_3 = 3;
	}

IL_0998:
	{
		int32_t* L_503 = ___triAdd8;
		int32_t* L_504 = ___triAdd8;
		int32_t L_505 = V_3;
		*((int32_t*)(L_503)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_504)), (int32_t)L_505));
	}

IL_09a0:
	{
		int32_t L_506 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_506, (int32_t)1));
	}

IL_09a4:
	{
		int32_t L_507 = V_0;
		List_1_t2929260728 * L_508 = ___pointsList5;
		NullCheck(L_508);
		int32_t L_509 = List_1_get_Count_m3201839622(L_508, /*hidden argument*/List_1_get_Count_m3201839622_RuntimeMethod_var);
		if ((((int32_t)L_507) < ((int32_t)L_509)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean FlyingText3D.Triangulate::IsReflex(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_IsReflex_m3585468626 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___a0, Vector2_t2156229523 * ___b1, Vector2_t2156229523 * ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangulate_IsReflex_m3585468626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector2_t2156229523 * L_0 = ___b1;
		float L_1 = L_0->get_y_1();
		Vector2_t2156229523 * L_2 = ___a0;
		float L_3 = L_2->get_y_1();
		Vector2_t2156229523 * L_4 = ___b1;
		float L_5 = L_4->get_x_0();
		Vector2_t2156229523 * L_6 = ___a0;
		float L_7 = L_6->get_x_0();
		Vector2__ctor_m3970636864((&V_0), ((-((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)))), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		Vector2_t2156229523 * L_8 = ___c2;
		float L_9 = L_8->get_x_0();
		Vector2_t2156229523 * L_10 = ___b1;
		float L_11 = L_10->get_x_0();
		Vector2_t2156229523 * L_12 = ___c2;
		float L_13 = L_12->get_y_1();
		Vector2_t2156229523 * L_14 = ___b1;
		float L_15 = L_14->get_y_1();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_16 = V_0;
		Vector2_t2156229523  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_18 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		return (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean FlyingText3D.Triangulate::PointInsideTriangle(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR bool Triangulate_PointInsideTriangle_m295648208 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___p0, Vector2_t2156229523 * ___a1, Vector2_t2156229523 * ___b2, Vector2_t2156229523 * ___c3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t2156229523 * L_0 = ___p0;
		float L_1 = L_0->get_x_0();
		Vector2_t2156229523 * L_2 = ___a1;
		float L_3 = L_2->get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_t2156229523 * L_4 = ___p0;
		float L_5 = L_4->get_y_1();
		Vector2_t2156229523 * L_6 = ___a1;
		float L_7 = L_6->get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector2_t2156229523 * L_8 = ___b2;
		float L_9 = L_8->get_x_0();
		Vector2_t2156229523 * L_10 = ___a1;
		float L_11 = L_10->get_x_0();
		float L_12 = V_1;
		Vector2_t2156229523 * L_13 = ___b2;
		float L_14 = L_13->get_y_1();
		Vector2_t2156229523 * L_15 = ___a1;
		float L_16 = L_15->get_y_1();
		float L_17 = V_0;
		V_2 = (bool)((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), (float)L_12)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_16)), (float)L_17))))) > ((float)(0.0f)))? 1 : 0);
		Vector2_t2156229523 * L_18 = ___c3;
		float L_19 = L_18->get_x_0();
		Vector2_t2156229523 * L_20 = ___a1;
		float L_21 = L_20->get_x_0();
		float L_22 = V_1;
		Vector2_t2156229523 * L_23 = ___c3;
		float L_24 = L_23->get_y_1();
		Vector2_t2156229523 * L_25 = ___a1;
		float L_26 = L_25->get_y_1();
		float L_27 = V_0;
		bool L_28 = V_2;
		if ((!(((uint32_t)((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27))))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)L_28))))
		{
			goto IL_0071;
		}
	}
	{
		return (bool)0;
	}

IL_0071:
	{
		Vector2_t2156229523 * L_29 = ___c3;
		float L_30 = L_29->get_x_0();
		Vector2_t2156229523 * L_31 = ___b2;
		float L_32 = L_31->get_x_0();
		Vector2_t2156229523 * L_33 = ___p0;
		float L_34 = L_33->get_y_1();
		Vector2_t2156229523 * L_35 = ___b2;
		float L_36 = L_35->get_y_1();
		Vector2_t2156229523 * L_37 = ___c3;
		float L_38 = L_37->get_y_1();
		Vector2_t2156229523 * L_39 = ___b2;
		float L_40 = L_39->get_y_1();
		Vector2_t2156229523 * L_41 = ___p0;
		float L_42 = L_41->get_x_0();
		Vector2_t2156229523 * L_43 = ___b2;
		float L_44 = L_43->get_x_0();
		bool L_45 = V_2;
		if ((((int32_t)((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_32)), (float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_36)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_40)), (float)((float)il2cpp_codegen_subtract((float)L_42, (float)L_44))))))) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)L_45)))
		{
			goto IL_00b7;
		}
	}
	{
		return (bool)0;
	}

IL_00b7:
	{
		return (bool)1;
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
// System.Void FlyingText3D.TTFFontInfo::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo__ctor_m4052784430 (TTFFontInfo_t2461483730 * __this, ByteU5BU5D_t4116647657* ___ttfData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo__ctor_m4052784430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	Int32U5BU5D_t385246372* V_6 = NULL;
	Int32U5BU5D_t385246372* V_7 = NULL;
	UInt32U5BU5D_t2770800703* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint16_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	uint8_t V_32 = 0x0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	uint8_t V_35 = 0x0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	uint8_t V_38 = 0x0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	Exception_t * V_41 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___ttfData0;
		__this->set__ttfData_20(L_0);
		Dictionary_2_t2651833894 * L_1 = (Dictionary_2_t2651833894 *)il2cpp_codegen_object_new(Dictionary_2_t2651833894_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2537431136(L_1, /*hidden argument*/Dictionary_2__ctor_m2537431136_RuntimeMethod_var);
		__this->set__glyphDictionary_43(L_1);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t4116647657* L_2 = __this->get__ttfData_20();
			NullCheck(L_2);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) >= ((int32_t)((int32_t)10))))
			{
				goto IL_0032;
			}
		}

IL_0027:
		{
			Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_3, _stringLiteral1887003842, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_0032:
		{
			V_0 = 0;
			V_1 = 0;
			ByteU5BU5D_t4116647657* L_4 = __this->get__ttfData_20();
			uint32_t L_5 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_4, (&V_0), /*hidden argument*/NULL);
			V_2 = L_5;
			uint32_t L_6 = V_2;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)65536))))
			{
				goto IL_0065;
			}
		}

IL_004f:
		{
			uint32_t L_7 = V_2;
			if ((((int32_t)L_7) == ((int32_t)((int32_t)1953658213))))
			{
				goto IL_0065;
			}
		}

IL_005a:
		{
			Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_8, _stringLiteral2526560661, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_0065:
		{
			uint32_t L_9 = V_2;
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)1953658213)))? 1 : 0);
			ByteU5BU5D_t4116647657* L_10 = __this->get__ttfData_20();
			bool L_11 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_10, _stringLiteral62725243, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0092;
			}
		}

IL_0087:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_12, _stringLiteral4170810657, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_0092:
		{
			ByteU5BU5D_t4116647657* L_13 = __this->get__ttfData_20();
			String_t* L_14 = TTFFontInfo_GetName_m1038423694(NULL /*static, unused*/, L_13, (&V_0), /*hidden argument*/NULL);
			__this->set__name_22(L_14);
			String_t* L_15 = __this->get__name_22();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, _stringLiteral757602046, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00c5;
			}
		}

IL_00ba:
		{
			Exception_t * L_17 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_17, _stringLiteral1405581690, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_00c5:
		{
			ByteU5BU5D_t4116647657* L_18 = __this->get__ttfData_20();
			bool L_19 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_18, _stringLiteral4255641314, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00e9;
			}
		}

IL_00de:
		{
			Exception_t * L_20 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_20, _stringLiteral1061540784, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_00e9:
		{
			uint32_t L_21 = V_0;
			V_4 = L_21;
			uint32_t L_22 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
			ByteU5BU5D_t4116647657* L_23 = __this->get__ttfData_20();
			uint16_t L_24 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_23, (&V_0), /*hidden argument*/NULL);
			V_5 = L_24;
			int32_t L_25 = V_5;
			V_6 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_25));
			int32_t L_26 = V_5;
			V_7 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_26));
			int32_t L_27 = V_5;
			V_8 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_27));
			V_9 = 0;
			goto IL_015e;
		}

IL_0122:
		{
			Int32U5BU5D_t385246372* L_28 = V_6;
			int32_t L_29 = V_9;
			ByteU5BU5D_t4116647657* L_30 = __this->get__ttfData_20();
			uint16_t L_31 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_30, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_28);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (int32_t)L_31);
			Int32U5BU5D_t385246372* L_32 = V_7;
			int32_t L_33 = V_9;
			ByteU5BU5D_t4116647657* L_34 = __this->get__ttfData_20();
			uint16_t L_35 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_34, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_32);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_35);
			UInt32U5BU5D_t2770800703* L_36 = V_8;
			int32_t L_37 = V_9;
			ByteU5BU5D_t4116647657* L_38 = __this->get__ttfData_20();
			uint32_t L_39 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_38, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_36);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint32_t)L_39);
			int32_t L_40 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		}

IL_015e:
		{
			int32_t L_41 = V_9;
			int32_t L_42 = V_5;
			if ((((int32_t)L_41) < ((int32_t)L_42)))
			{
				goto IL_0122;
			}
		}

IL_0167:
		{
			V_10 = (bool)0;
			Int32U5BU5D_t385246372* L_43 = V_6;
			int32_t L_44 = Array_IndexOf_TisInt32_t2950945753_m3764119789(NULL /*static, unused*/, L_43, 0, /*hidden argument*/Array_IndexOf_TisInt32_t2950945753_m3764119789_RuntimeMethod_var);
			V_11 = L_44;
			int32_t L_45 = V_11;
			if ((((int32_t)L_45) == ((int32_t)(-1))))
			{
				goto IL_01b2;
			}
		}

IL_017c:
		{
			Int32U5BU5D_t385246372* L_46 = V_7;
			int32_t L_47 = V_11;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			if ((!(((uint32_t)L_49) == ((uint32_t)3))))
			{
				goto IL_01b2;
			}
		}

IL_0187:
		{
			uint32_t L_50 = V_4;
			UInt32U5BU5D_t2770800703* L_51 = V_8;
			int32_t L_52 = V_11;
			NullCheck(L_51);
			int32_t L_53 = L_52;
			uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_54));
			ByteU5BU5D_t4116647657* L_55 = __this->get__ttfData_20();
			uint16_t L_56 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_55, (&V_0), /*hidden argument*/NULL);
			V_12 = L_56;
			int32_t L_57 = V_12;
			if ((!(((uint32_t)L_57) == ((uint32_t)4))))
			{
				goto IL_01b2;
			}
		}

IL_01a7:
		{
			V_10 = (bool)1;
			TTFFontInfo_SetFormat4_m2930510947(__this, (&V_0), /*hidden argument*/NULL);
		}

IL_01b2:
		{
			bool L_58 = V_10;
			if (L_58)
			{
				goto IL_0201;
			}
		}

IL_01b9:
		{
			Int32U5BU5D_t385246372* L_59 = V_6;
			int32_t L_60 = Array_IndexOf_TisInt32_t2950945753_m3764119789(NULL /*static, unused*/, L_59, 3, /*hidden argument*/Array_IndexOf_TisInt32_t2950945753_m3764119789_RuntimeMethod_var);
			V_13 = L_60;
			int32_t L_61 = V_13;
			if ((((int32_t)L_61) == ((int32_t)(-1))))
			{
				goto IL_0201;
			}
		}

IL_01cb:
		{
			Int32U5BU5D_t385246372* L_62 = V_7;
			int32_t L_63 = V_13;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			if ((!(((uint32_t)L_65) == ((uint32_t)1))))
			{
				goto IL_0201;
			}
		}

IL_01d6:
		{
			uint32_t L_66 = V_4;
			UInt32U5BU5D_t2770800703* L_67 = V_8;
			int32_t L_68 = V_13;
			NullCheck(L_67);
			int32_t L_69 = L_68;
			uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)L_70));
			ByteU5BU5D_t4116647657* L_71 = __this->get__ttfData_20();
			uint16_t L_72 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_71, (&V_0), /*hidden argument*/NULL);
			V_14 = L_72;
			int32_t L_73 = V_14;
			if ((!(((uint32_t)L_73) == ((uint32_t)4))))
			{
				goto IL_0201;
			}
		}

IL_01f6:
		{
			V_10 = (bool)1;
			TTFFontInfo_SetFormat4_m2930510947(__this, (&V_0), /*hidden argument*/NULL);
		}

IL_0201:
		{
			bool L_74 = V_10;
			if (L_74)
			{
				goto IL_030c;
			}
		}

IL_0208:
		{
			Int32U5BU5D_t385246372* L_75 = V_6;
			int32_t L_76 = Array_IndexOf_TisInt32_t2950945753_m3764119789(NULL /*static, unused*/, L_75, 1, /*hidden argument*/Array_IndexOf_TisInt32_t2950945753_m3764119789_RuntimeMethod_var);
			V_15 = L_76;
			int32_t L_77 = V_15;
			if ((((int32_t)L_77) == ((int32_t)(-1))))
			{
				goto IL_030c;
			}
		}

IL_021a:
		{
			Int32U5BU5D_t385246372* L_78 = V_7;
			int32_t L_79 = V_15;
			NullCheck(L_78);
			int32_t L_80 = L_79;
			int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
			if (L_81)
			{
				goto IL_030c;
			}
		}

IL_0224:
		{
			uint32_t L_82 = V_4;
			UInt32U5BU5D_t2770800703* L_83 = V_8;
			int32_t L_84 = V_15;
			NullCheck(L_83);
			int32_t L_85 = L_84;
			uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_86));
			ByteU5BU5D_t4116647657* L_87 = __this->get__ttfData_20();
			uint16_t L_88 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_87, (&V_0), /*hidden argument*/NULL);
			V_16 = L_88;
			int32_t L_89 = V_16;
			if (L_89)
			{
				goto IL_029b;
			}
		}

IL_0243:
		{
			V_10 = (bool)1;
			__this->set__cmapFormat_32(0);
			__this->set__glyphIndexArray_33(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256))));
			V_17 = 0;
			uint32_t L_90 = V_0;
			V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)4));
			goto IL_0288;
		}

IL_026a:
		{
			Int32U5BU5D_t385246372* L_91 = __this->get__glyphIndexArray_33();
			int32_t L_92 = V_17;
			int32_t L_93 = L_92;
			V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
			ByteU5BU5D_t4116647657* L_94 = __this->get__ttfData_20();
			uint32_t L_95 = V_18;
			NullCheck(L_94);
			uintptr_t L_96 = (((uintptr_t)L_95));
			uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
			NullCheck(L_91);
			(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (int32_t)L_97);
			uint32_t L_98 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		}

IL_0288:
		{
			uint32_t L_99 = V_18;
			uint32_t L_100 = V_0;
			if ((!(((uint32_t)L_99) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)((int32_t)260)))))))
			{
				goto IL_026a;
			}
		}

IL_0296:
		{
			goto IL_030c;
		}

IL_029b:
		{
			int32_t L_101 = V_16;
			if ((!(((uint32_t)L_101) == ((uint32_t)6))))
			{
				goto IL_030c;
			}
		}

IL_02a3:
		{
			V_10 = (bool)1;
			__this->set__cmapFormat_32(6);
			uint32_t L_102 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)4));
			ByteU5BU5D_t4116647657* L_103 = __this->get__ttfData_20();
			uint16_t L_104 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_103, (&V_0), /*hidden argument*/NULL);
			V_19 = L_104;
			ByteU5BU5D_t4116647657* L_105 = __this->get__ttfData_20();
			uint16_t L_106 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_105, (&V_0), /*hidden argument*/NULL);
			V_20 = L_106;
			int32_t L_107 = V_20;
			__this->set__glyphIndexArray_33(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_107)));
			V_21 = 0;
			goto IL_0303;
		}

IL_02e4:
		{
			Int32U5BU5D_t385246372* L_108 = __this->get__glyphIndexArray_33();
			int32_t L_109 = V_21;
			ByteU5BU5D_t4116647657* L_110 = __this->get__ttfData_20();
			uint16_t L_111 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_110, (&V_0), /*hidden argument*/NULL);
			uint16_t L_112 = V_19;
			NullCheck(L_108);
			(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)L_112)));
			int32_t L_113 = V_21;
			V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
		}

IL_0303:
		{
			int32_t L_114 = V_21;
			int32_t L_115 = V_20;
			if ((((int32_t)L_114) < ((int32_t)L_115)))
			{
				goto IL_02e4;
			}
		}

IL_030c:
		{
			bool L_116 = V_10;
			if (L_116)
			{
				goto IL_031e;
			}
		}

IL_0313:
		{
			Exception_t * L_117 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_117, _stringLiteral3842994077, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_117,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_031e:
		{
			ByteU5BU5D_t4116647657* L_118 = __this->get__ttfData_20();
			bool L_119 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_118, _stringLiteral431746797, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_119)
			{
				goto IL_0342;
			}
		}

IL_0337:
		{
			Exception_t * L_120 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_120, _stringLiteral1733099211, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_120,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_0342:
		{
			uint32_t L_121 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)((int32_t)18)));
			ByteU5BU5D_t4116647657* L_122 = __this->get__ttfData_20();
			uint16_t L_123 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_122, (&V_0), /*hidden argument*/NULL);
			__this->set__unitsPerEm_23(L_123);
			uint32_t L_124 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)((int32_t)16)));
			ByteU5BU5D_t4116647657* L_125 = __this->get__ttfData_20();
			int16_t L_126 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_125, (&V_0), /*hidden argument*/NULL);
			__this->set__fontXMin_27(L_126);
			ByteU5BU5D_t4116647657* L_127 = __this->get__ttfData_20();
			int16_t L_128 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_127, (&V_0), /*hidden argument*/NULL);
			__this->set__fontYMin_28(L_128);
			ByteU5BU5D_t4116647657* L_129 = __this->get__ttfData_20();
			int16_t L_130 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_129, (&V_0), /*hidden argument*/NULL);
			__this->set__fontXMax_29(L_130);
			ByteU5BU5D_t4116647657* L_131 = __this->get__ttfData_20();
			int16_t L_132 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_131, (&V_0), /*hidden argument*/NULL);
			__this->set__fontYMax_30(L_132);
			uint32_t L_133 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)6));
			ByteU5BU5D_t4116647657* L_134 = __this->get__ttfData_20();
			int16_t L_135 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_134, (&V_0), /*hidden argument*/NULL);
			V_22 = L_135;
			ByteU5BU5D_t4116647657* L_136 = __this->get__ttfData_20();
			bool L_137 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_136, _stringLiteral457804741, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_137)
			{
				goto IL_03e2;
			}
		}

IL_03d7:
		{
			Exception_t * L_138 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_138, _stringLiteral3538472377, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_138,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_03e2:
		{
			uint32_t L_139 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)4));
			ByteU5BU5D_t4116647657* L_140 = __this->get__ttfData_20();
			uint16_t L_141 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_140, (&V_0), /*hidden argument*/NULL);
			V_23 = L_141;
			int32_t L_142 = V_23;
			__this->set__locationIndexArray_39(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_142)));
			ByteU5BU5D_t4116647657* L_143 = __this->get__ttfData_20();
			bool L_144 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_143, _stringLiteral20961311, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_144)
			{
				goto IL_0426;
			}
		}

IL_041b:
		{
			Exception_t * L_145 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_145, _stringLiteral2641334137, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_145,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_0426:
		{
			int32_t L_146 = V_22;
			if (L_146)
			{
				goto IL_0461;
			}
		}

IL_042d:
		{
			V_24 = 0;
			goto IL_0453;
		}

IL_0435:
		{
			UInt32U5BU5D_t2770800703* L_147 = __this->get__locationIndexArray_39();
			int32_t L_148 = V_24;
			ByteU5BU5D_t4116647657* L_149 = __this->get__ttfData_20();
			uint16_t L_150 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_149, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_147);
			(L_147)->SetAt(static_cast<il2cpp_array_size_t>(L_148), (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_150, (int32_t)2)));
			int32_t L_151 = V_24;
			V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
		}

IL_0453:
		{
			int32_t L_152 = V_24;
			int32_t L_153 = V_23;
			if ((((int32_t)L_152) < ((int32_t)L_153)))
			{
				goto IL_0435;
			}
		}

IL_045c:
		{
			goto IL_048e;
		}

IL_0461:
		{
			V_25 = 0;
			goto IL_0485;
		}

IL_0469:
		{
			UInt32U5BU5D_t2770800703* L_154 = __this->get__locationIndexArray_39();
			int32_t L_155 = V_25;
			ByteU5BU5D_t4116647657* L_156 = __this->get__ttfData_20();
			uint32_t L_157 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_156, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_154);
			(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (uint32_t)L_157);
			int32_t L_158 = V_25;
			V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1));
		}

IL_0485:
		{
			int32_t L_159 = V_25;
			int32_t L_160 = V_23;
			if ((((int32_t)L_159) < ((int32_t)L_160)))
			{
				goto IL_0469;
			}
		}

IL_048e:
		{
			ByteU5BU5D_t4116647657* L_161 = __this->get__ttfData_20();
			uint32_t* L_162 = __this->get_address_of__glyphDataOffset_31();
			bool L_163 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_161, _stringLiteral3276275798, L_162, (&V_1), /*hidden argument*/NULL);
			if (L_163)
			{
				goto IL_04b6;
			}
		}

IL_04ab:
		{
			Exception_t * L_164 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_164, _stringLiteral2978562613, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_164,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_04b6:
		{
			ByteU5BU5D_t4116647657* L_165 = __this->get__ttfData_20();
			bool L_166 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_165, _stringLiteral1184219481, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_166)
			{
				goto IL_04da;
			}
		}

IL_04cf:
		{
			Exception_t * L_167 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_167, _stringLiteral3593503931, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_167,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_04da:
		{
			uint32_t L_168 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)4));
			ByteU5BU5D_t4116647657* L_169 = __this->get__ttfData_20();
			int16_t L_170 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_169, (&V_0), /*hidden argument*/NULL);
			__this->set__ascent_24(L_170);
			ByteU5BU5D_t4116647657* L_171 = __this->get__ttfData_20();
			int16_t L_172 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_171, (&V_0), /*hidden argument*/NULL);
			__this->set__descent_25(L_172);
			ByteU5BU5D_t4116647657* L_173 = __this->get__ttfData_20();
			int16_t L_174 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_173, (&V_0), /*hidden argument*/NULL);
			V_26 = L_174;
			uint32_t L_175 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)((int32_t)24)));
			ByteU5BU5D_t4116647657* L_176 = __this->get__ttfData_20();
			int16_t L_177 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_176, (&V_0), /*hidden argument*/NULL);
			V_27 = L_177;
			ByteU5BU5D_t4116647657* L_178 = __this->get__ttfData_20();
			bool L_179 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_178, _stringLiteral1918250128, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (!L_179)
			{
				goto IL_0582;
			}
		}

IL_0540:
		{
			uint32_t L_180 = V_1;
			if ((!(((uint32_t)L_180) > ((uint32_t)((int32_t)68)))))
			{
				goto IL_0582;
			}
		}

IL_0548:
		{
			uint32_t L_181 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)((int32_t)68)));
			ByteU5BU5D_t4116647657* L_182 = __this->get__ttfData_20();
			int16_t L_183 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_182, (&V_0), /*hidden argument*/NULL);
			__this->set__ascent_24(L_183);
			ByteU5BU5D_t4116647657* L_184 = __this->get__ttfData_20();
			int16_t L_185 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_184, (&V_0), /*hidden argument*/NULL);
			__this->set__descent_25(L_185);
			ByteU5BU5D_t4116647657* L_186 = __this->get__ttfData_20();
			int16_t L_187 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_186, (&V_0), /*hidden argument*/NULL);
			V_26 = L_187;
		}

IL_0582:
		{
			int32_t L_188 = __this->get__ascent_24();
			int32_t L_189 = __this->get__descent_25();
			int32_t L_190 = V_26;
			__this->set__lineHeight_26(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_188, (int32_t)L_189)), (int32_t)L_190)));
			ByteU5BU5D_t4116647657* L_191 = __this->get__ttfData_20();
			bool L_192 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_191, _stringLiteral374276878, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (L_192)
			{
				goto IL_05bc;
			}
		}

IL_05b1:
		{
			Exception_t * L_193 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_193, _stringLiteral3602666982, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_193,TTFFontInfo__ctor_m4052784430_RuntimeMethod_var);
		}

IL_05bc:
		{
			int32_t L_194 = V_27;
			if ((((int32_t)L_194) <= ((int32_t)((int32_t)10))))
			{
				goto IL_0608;
			}
		}

IL_05c5:
		{
			int32_t L_195 = V_27;
			__this->set__advanceArray_40(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_195)));
			V_28 = 0;
			goto IL_05fa;
		}

IL_05da:
		{
			Int32U5BU5D_t385246372* L_196 = __this->get__advanceArray_40();
			int32_t L_197 = V_28;
			ByteU5BU5D_t4116647657* L_198 = __this->get__ttfData_20();
			uint16_t L_199 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_198, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_196);
			(L_196)->SetAt(static_cast<il2cpp_array_size_t>(L_197), (int32_t)L_199);
			uint32_t L_200 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)2));
			int32_t L_201 = V_28;
			V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)1));
		}

IL_05fa:
		{
			int32_t L_202 = V_28;
			int32_t L_203 = V_27;
			if ((((int32_t)L_202) < ((int32_t)L_203)))
			{
				goto IL_05da;
			}
		}

IL_0603:
		{
			goto IL_0646;
		}

IL_0608:
		{
			int32_t L_204 = V_23;
			__this->set__advanceArray_40(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_204)));
			ByteU5BU5D_t4116647657* L_205 = __this->get__ttfData_20();
			uint16_t L_206 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_205, (&V_0), /*hidden argument*/NULL);
			V_29 = L_206;
			V_30 = 0;
			goto IL_063d;
		}

IL_062c:
		{
			Int32U5BU5D_t385246372* L_207 = __this->get__advanceArray_40();
			int32_t L_208 = V_30;
			int32_t L_209 = V_29;
			NullCheck(L_207);
			(L_207)->SetAt(static_cast<il2cpp_array_size_t>(L_208), (int32_t)L_209);
			int32_t L_210 = V_30;
			V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1));
		}

IL_063d:
		{
			int32_t L_211 = V_30;
			int32_t L_212 = V_23;
			if ((((int32_t)L_211) < ((int32_t)L_212)))
			{
				goto IL_062c;
			}
		}

IL_0646:
		{
			__this->set__hasKerning_41((bool)0);
			ByteU5BU5D_t4116647657* L_213 = __this->get__ttfData_20();
			bool L_214 = TTFFontInfo_TagSearch_m2274390376(NULL /*static, unused*/, L_213, _stringLiteral3595180501, (&V_0), (&V_1), /*hidden argument*/NULL);
			if (!L_214)
			{
				goto IL_07ee;
			}
		}

IL_0666:
		{
			V_31 = (bool)0;
			V_32 = (uint8_t)0;
			bool L_215 = V_3;
			if (!L_215)
			{
				goto IL_06f3;
			}
		}

IL_0672:
		{
			uint32_t L_216 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)4));
			ByteU5BU5D_t4116647657* L_217 = __this->get__ttfData_20();
			uint32_t L_218 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_217, (&V_0), /*hidden argument*/NULL);
			V_33 = L_218;
			V_34 = 0;
			goto IL_06e5;
		}

IL_068d:
		{
			ByteU5BU5D_t4116647657* L_219 = __this->get__ttfData_20();
			uint32_t L_220 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_219, (&V_0), /*hidden argument*/NULL);
			V_1 = L_220;
			ByteU5BU5D_t4116647657* L_221 = __this->get__ttfData_20();
			uint32_t L_222 = V_0;
			uint32_t L_223 = L_222;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)1));
			NullCheck(L_221);
			uintptr_t L_224 = (((uintptr_t)L_223));
			uint8_t L_225 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
			V_35 = L_225;
			ByteU5BU5D_t4116647657* L_226 = __this->get__ttfData_20();
			uint32_t L_227 = V_0;
			uint32_t L_228 = L_227;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
			NullCheck(L_226);
			uintptr_t L_229 = (((uintptr_t)L_228));
			uint8_t L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
			V_32 = L_230;
			uint32_t L_231 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_231, (int32_t)2));
			uint8_t L_232 = V_32;
			if (L_232)
			{
				goto IL_06d9;
			}
		}

IL_06c4:
		{
			uint8_t L_233 = V_35;
			if (((int32_t)((int32_t)L_233&(int32_t)((int32_t)128))))
			{
				goto IL_06d4;
			}
		}

IL_06d1:
		{
			V_31 = (bool)1;
		}

IL_06d4:
		{
			goto IL_06ee;
		}

IL_06d9:
		{
			uint32_t L_234 = V_0;
			uint32_t L_235 = V_1;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_235, (int32_t)8))));
			int32_t L_236 = V_34;
			V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)1));
		}

IL_06e5:
		{
			int32_t L_237 = V_34;
			int32_t L_238 = V_33;
			if ((((int32_t)L_237) < ((int32_t)L_238)))
			{
				goto IL_068d;
			}
		}

IL_06ee:
		{
			goto IL_076b;
		}

IL_06f3:
		{
			uint32_t L_239 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)2));
			ByteU5BU5D_t4116647657* L_240 = __this->get__ttfData_20();
			uint16_t L_241 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_240, (&V_0), /*hidden argument*/NULL);
			V_36 = L_241;
			V_37 = 0;
			goto IL_0762;
		}

IL_070e:
		{
			uint32_t L_242 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_242, (int32_t)2));
			ByteU5BU5D_t4116647657* L_243 = __this->get__ttfData_20();
			uint16_t L_244 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_243, (&V_0), /*hidden argument*/NULL);
			V_1 = L_244;
			ByteU5BU5D_t4116647657* L_245 = __this->get__ttfData_20();
			uint32_t L_246 = V_0;
			uint32_t L_247 = L_246;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_247, (int32_t)1));
			NullCheck(L_245);
			uintptr_t L_248 = (((uintptr_t)L_247));
			uint8_t L_249 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
			V_32 = L_249;
			ByteU5BU5D_t4116647657* L_250 = __this->get__ttfData_20();
			uint32_t L_251 = V_0;
			uint32_t L_252 = L_251;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1));
			NullCheck(L_250);
			uintptr_t L_253 = (((uintptr_t)L_252));
			uint8_t L_254 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
			V_38 = L_254;
			uint8_t L_255 = V_32;
			if (L_255)
			{
				goto IL_0756;
			}
		}

IL_0745:
		{
			uint8_t L_256 = V_38;
			if (((int32_t)((int32_t)L_256&(int32_t)2)))
			{
				goto IL_0751;
			}
		}

IL_074e:
		{
			V_31 = (bool)1;
		}

IL_0751:
		{
			goto IL_076b;
		}

IL_0756:
		{
			uint32_t L_257 = V_0;
			uint32_t L_258 = V_1;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_258, (int32_t)6))));
			int32_t L_259 = V_37;
			V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_259, (int32_t)1));
		}

IL_0762:
		{
			int32_t L_260 = V_37;
			int32_t L_261 = V_36;
			if ((((int32_t)L_260) < ((int32_t)L_261)))
			{
				goto IL_070e;
			}
		}

IL_076b:
		{
			uint8_t L_262 = V_32;
			if (L_262)
			{
				goto IL_07ee;
			}
		}

IL_0772:
		{
			bool L_263 = V_31;
			if (!L_263)
			{
				goto IL_07ee;
			}
		}

IL_0779:
		{
			__this->set__hasKerning_41((bool)1);
			ByteU5BU5D_t4116647657* L_264 = __this->get__ttfData_20();
			uint16_t L_265 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_264, (&V_0), /*hidden argument*/NULL);
			V_39 = L_265;
			uint32_t L_266 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)6));
			int32_t L_267 = V_39;
			Dictionary_2_t4026917929 * L_268 = (Dictionary_2_t4026917929 *)il2cpp_codegen_object_new(Dictionary_2_t4026917929_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3220969239(L_268, L_267, /*hidden argument*/Dictionary_2__ctor_m3220969239_RuntimeMethod_var);
			__this->set__kernDictionary_42(L_268);
			V_40 = 0;
			goto IL_07e5;
		}

IL_07a8:
		{
			Dictionary_2_t4026917929 * L_269 = __this->get__kernDictionary_42();
			ByteU5BU5D_t4116647657* L_270 = __this->get__ttfData_20();
			uint16_t L_271 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_270, (&V_0), /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_272 = __this->get__ttfData_20();
			uint16_t L_273 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_272, (&V_0), /*hidden argument*/NULL);
			KernPair_t1917918210  L_274;
			memset(&L_274, 0, sizeof(L_274));
			KernPair__ctor_m1498003365((&L_274), L_271, L_273, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_275 = __this->get__ttfData_20();
			int16_t L_276 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_275, (&V_0), /*hidden argument*/NULL);
			NullCheck(L_269);
			Dictionary_2_Add_m3493567640(L_269, L_274, L_276, /*hidden argument*/Dictionary_2_Add_m3493567640_RuntimeMethod_var);
			int32_t L_277 = V_40;
			V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_277, (int32_t)1));
		}

IL_07e5:
		{
			int32_t L_278 = V_40;
			int32_t L_279 = V_39;
			if ((((int32_t)L_278) < ((int32_t)L_279)))
			{
				goto IL_07a8;
			}
		}

IL_07ee:
		{
			goto IL_0812;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_07f3;
		throw e;
	}

CATCH_07f3:
	{ // begin catch(System.Exception)
		{
			V_41 = ((Exception_t *)__exception_local);
			Exception_t * L_280 = V_41;
			NullCheck(L_280);
			String_t* L_281 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_280);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_281, /*hidden argument*/NULL);
			__this->set__isAvailable_21((bool)0);
			goto IL_0819;
		}

IL_080d:
		{
			; // IL_080d: leave IL_0812
		}
	} // end catch (depth: 1)

IL_0812:
	{
		__this->set__isAvailable_21((bool)1);
	}

IL_0819:
	{
		return;
	}
}
// System.String FlyingText3D.TTFFontInfo::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_get_name_m629977104 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_22();
		return L_0;
	}
}
// System.Int32 FlyingText3D.TTFFontInfo::get_unitsPerEm()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_unitsPerEm_m567972289 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__unitsPerEm_23();
		return L_0;
	}
}
// System.Int32 FlyingText3D.TTFFontInfo::get_lineHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_lineHeight_m4132344405 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__lineHeight_26();
		return L_0;
	}
}
// System.Int32 FlyingText3D.TTFFontInfo::get_fontYMin()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_fontYMin_m716773375 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__fontYMin_28();
		return L_0;
	}
}
// System.Int32 FlyingText3D.TTFFontInfo::get_fontYMax()
extern "C" IL2CPP_METHOD_ATTR int32_t TTFFontInfo_get_fontYMax_m2984688855 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__fontYMax_30();
		return L_0;
	}
}
// System.Int32[] FlyingText3D.TTFFontInfo::get_advanceArray()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_get_advanceArray_m3947564005 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = __this->get__advanceArray_40();
		return L_0;
	}
}
// System.Boolean FlyingText3D.TTFFontInfo::get_hasKerning()
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_get_hasKerning_m1493146458 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__hasKerning_41();
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<FlyingText3D.KernPair,System.Int16> FlyingText3D.TTFFontInfo::get_kernDictionary()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t4026917929 * TTFFontInfo_get_kernDictionary_m1736341401 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4026917929 * L_0 = __this->get__kernDictionary_42();
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Char,FlyingText3D.GlyphData> FlyingText3D.TTFFontInfo::get_glyphDictionary()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2651833894 * TTFFontInfo_get_glyphDictionary_m3439082376 (TTFFontInfo_t2461483730 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2651833894 * L_0 = __this->get__glyphDictionary_43();
		return L_0;
	}
}
// System.Boolean FlyingText3D.TTFFontInfo::SetGlyphData(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_SetGlyphData_m751504939 (TTFFontInfo_t2461483730 * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_SetGlyphData_m751504939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	List_1_t2929260728 * V_12 = NULL;
	List_1_t74525638 * V_13 = NULL;
	uint16_t V_14 = 0;
	uint32_t V_15 = 0;
	List_1_t2929260728 * V_16 = NULL;
	List_1_t74525638 * V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	Exception_t * V_21 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__isAvailable_21();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2199528729, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0017:
	{
		Dictionary_2_t2651833894 * L_1 = __this->get__glyphDictionary_43();
		Il2CppChar L_2 = ___character0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m945255793(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m945255793_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		return (bool)1;
	}

IL_002a:
	{
		Il2CppChar L_4 = ___character0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_5 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = __this->get__glyphDataOffset_31();
			V_1 = L_6;
			V_2 = 0;
			int32_t L_7 = __this->get__cmapFormat_32();
			if ((!(((uint32_t)L_7) == ((uint32_t)4))))
			{
				goto IL_00d6;
			}
		}

IL_0046:
		{
			Int32U5BU5D_t385246372* L_8 = __this->get__endCodeArray_34();
			NullCheck(L_8);
			V_3 = (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))));
			V_4 = 0;
			goto IL_00c9;
		}

IL_0057:
		{
			Int32U5BU5D_t385246372* L_9 = __this->get__endCodeArray_34();
			int32_t L_10 = V_4;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			int32_t L_13 = V_0;
			if ((((int32_t)L_12) < ((int32_t)L_13)))
			{
				goto IL_00c3;
			}
		}

IL_0066:
		{
			Int32U5BU5D_t385246372* L_14 = __this->get__startCodeArray_35();
			int32_t L_15 = V_4;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			int32_t L_18 = V_0;
			if ((((int32_t)L_17) > ((int32_t)L_18)))
			{
				goto IL_00c3;
			}
		}

IL_0075:
		{
			Int32U5BU5D_t385246372* L_19 = __this->get__idRangeOffsetArray_37();
			int32_t L_20 = V_4;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			if (L_22)
			{
				goto IL_0094;
			}
		}

IL_0083:
		{
			Int32U5BU5D_t385246372* L_23 = __this->get__idDeltaArray_36();
			int32_t L_24 = V_4;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			int32_t L_27 = V_0;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
			goto IL_00be;
		}

IL_0094:
		{
			Int32U5BU5D_t385246372* L_28 = __this->get__idRangeOffsetArray_37();
			int32_t L_29 = V_4;
			NullCheck(L_28);
			int32_t L_30 = L_29;
			int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			int32_t L_32 = V_0;
			Int32U5BU5D_t385246372* L_33 = __this->get__startCodeArray_35();
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			int32_t L_37 = V_3;
			int32_t L_38 = V_4;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_36))))))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38))));
			Int32U5BU5D_t385246372* L_39 = __this->get__glyphIdArray_38();
			int32_t L_40 = V_5;
			NullCheck(L_39);
			int32_t L_41 = L_40;
			int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
			V_2 = L_42;
		}

IL_00be:
		{
			goto IL_00d1;
		}

IL_00c3:
		{
			int32_t L_43 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_00c9:
		{
			int32_t L_44 = V_4;
			int32_t L_45 = V_3;
			if ((((int32_t)L_44) < ((int32_t)L_45)))
			{
				goto IL_0057;
			}
		}

IL_00d1:
		{
			goto IL_0174;
		}

IL_00d6:
		{
			int32_t L_46 = __this->get__cmapFormat_32();
			if ((!(((uint32_t)L_46) == ((uint32_t)6))))
			{
				goto IL_00f0;
			}
		}

IL_00e2:
		{
			Int32U5BU5D_t385246372* L_47 = __this->get__glyphIndexArray_33();
			int32_t L_48 = V_0;
			NullCheck(L_47);
			int32_t L_49 = L_48;
			int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
			V_2 = L_50;
			goto IL_0174;
		}

IL_00f0:
		{
			int32_t L_51 = __this->get__cmapFormat_32();
			if (L_51)
			{
				goto IL_0174;
			}
		}

IL_00fb:
		{
			int32_t L_52 = V_0;
			if ((((int32_t)L_52) <= ((int32_t)((int32_t)255))))
			{
				goto IL_016b;
			}
		}

IL_0106:
		{
			ObjectU5BU5D_t2843939325* L_53 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, _stringLiteral2059435072);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2059435072);
			ObjectU5BU5D_t2843939325* L_54 = L_53;
			int32_t L_55 = V_0;
			int32_t L_56 = L_55;
			RuntimeObject * L_57 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_56);
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, L_57);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_57);
			ObjectU5BU5D_t2843939325* L_58 = L_54;
			NullCheck(L_58);
			ArrayElementTypeCheck (L_58, _stringLiteral3451041664);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3451041664);
			ObjectU5BU5D_t2843939325* L_59 = L_58;
			int32_t L_60 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			Il2CppChar L_61 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
			Il2CppChar L_62 = L_61;
			RuntimeObject * L_63 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_62);
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, L_63);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_63);
			ObjectU5BU5D_t2843939325* L_64 = L_59;
			NullCheck(L_64);
			ArrayElementTypeCheck (L_64, _stringLiteral1453879471);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1453879471);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_65 = String_Concat_m2971454694(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
			Dictionary_2_t2651833894 * L_66 = __this->get__glyphDictionary_43();
			Il2CppChar L_67 = ___character0;
			int32_t L_68 = __this->get__unitsPerEm_23();
			int32_t L_69 = V_2;
			GlyphData_t620095268 * L_70 = (GlyphData_t620095268 *)il2cpp_codegen_object_new(GlyphData_t620095268_il2cpp_TypeInfo_var);
			GlyphData__ctor_m3832508344(L_70, (List_1_t2929260728 *)NULL, (List_1_t74525638 *)NULL, 0, 0, 0, 0, L_68, L_69, /*hidden argument*/NULL);
			NullCheck(L_66);
			Dictionary_2_Add_m2135025057(L_66, L_67, L_70, /*hidden argument*/Dictionary_2_Add_m2135025057_RuntimeMethod_var);
			V_6 = (bool)1;
			goto IL_042b;
		}

IL_016b:
		{
			Int32U5BU5D_t385246372* L_71 = __this->get__glyphIndexArray_33();
			int32_t L_72 = V_0;
			NullCheck(L_71);
			int32_t L_73 = L_72;
			int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			V_2 = L_74;
		}

IL_0174:
		{
			int32_t L_75 = V_2;
			if ((((int32_t)L_75) < ((int32_t)1)))
			{
				goto IL_01a8;
			}
		}

IL_017b:
		{
			int32_t L_76 = V_2;
			if ((((int32_t)L_76) > ((int32_t)3)))
			{
				goto IL_01a8;
			}
		}

IL_0182:
		{
			Dictionary_2_t2651833894 * L_77 = __this->get__glyphDictionary_43();
			Il2CppChar L_78 = ___character0;
			int32_t L_79 = __this->get__unitsPerEm_23();
			int32_t L_80 = V_2;
			GlyphData_t620095268 * L_81 = (GlyphData_t620095268 *)il2cpp_codegen_object_new(GlyphData_t620095268_il2cpp_TypeInfo_var);
			GlyphData__ctor_m3832508344(L_81, (List_1_t2929260728 *)NULL, (List_1_t74525638 *)NULL, 0, 0, 0, 0, L_79, L_80, /*hidden argument*/NULL);
			NullCheck(L_77);
			Dictionary_2_Add_m2135025057(L_77, L_78, L_81, /*hidden argument*/Dictionary_2_Add_m2135025057_RuntimeMethod_var);
			V_6 = (bool)1;
			goto IL_042b;
		}

IL_01a8:
		{
			uint32_t L_82 = V_1;
			UInt32U5BU5D_t2770800703* L_83 = __this->get__locationIndexArray_39();
			int32_t L_84 = V_2;
			NullCheck(L_83);
			int32_t L_85 = L_84;
			uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_86));
			ByteU5BU5D_t4116647657* L_87 = __this->get__ttfData_20();
			int16_t L_88 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_87, (&V_1), /*hidden argument*/NULL);
			V_7 = L_88;
			ByteU5BU5D_t4116647657* L_89 = __this->get__ttfData_20();
			int16_t L_90 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_89, (&V_1), /*hidden argument*/NULL);
			V_8 = L_90;
			ByteU5BU5D_t4116647657* L_91 = __this->get__ttfData_20();
			int16_t L_92 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_91, (&V_1), /*hidden argument*/NULL);
			V_9 = L_92;
			ByteU5BU5D_t4116647657* L_93 = __this->get__ttfData_20();
			int16_t L_94 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_93, (&V_1), /*hidden argument*/NULL);
			V_10 = L_94;
			ByteU5BU5D_t4116647657* L_95 = __this->get__ttfData_20();
			int16_t L_96 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_95, (&V_1), /*hidden argument*/NULL);
			V_11 = L_96;
			int32_t L_97 = V_7;
			if ((((int32_t)L_97) <= ((int32_t)0)))
			{
				goto IL_0253;
			}
		}

IL_0206:
		{
			int32_t L_98 = V_7;
			List_1_t2929260728 * L_99 = (List_1_t2929260728 *)il2cpp_codegen_object_new(List_1_t2929260728_il2cpp_TypeInfo_var);
			List_1__ctor_m972700695(L_99, L_98, /*hidden argument*/List_1__ctor_m972700695_RuntimeMethod_var);
			V_12 = L_99;
			int32_t L_100 = V_7;
			List_1_t74525638 * L_101 = (List_1_t74525638 *)il2cpp_codegen_object_new(List_1_t74525638_il2cpp_TypeInfo_var);
			List_1__ctor_m3936567386(L_101, L_100, /*hidden argument*/List_1__ctor_m3936567386_RuntimeMethod_var);
			V_13 = L_101;
			uint32_t L_102 = V_1;
			int32_t L_103 = V_7;
			List_1_t2929260728 * L_104 = V_12;
			List_1_t74525638 * L_105 = V_13;
			TTFFontInfo_ReadGlyphData_m2376183697(__this, L_102, L_103, L_104, L_105, 0, 0, /*hidden argument*/NULL);
			Dictionary_2_t2651833894 * L_106 = __this->get__glyphDictionary_43();
			Il2CppChar L_107 = ___character0;
			List_1_t2929260728 * L_108 = V_12;
			List_1_t74525638 * L_109 = V_13;
			int32_t L_110 = V_8;
			int32_t L_111 = V_9;
			int32_t L_112 = V_10;
			int32_t L_113 = V_11;
			int32_t L_114 = __this->get__unitsPerEm_23();
			int32_t L_115 = V_2;
			GlyphData_t620095268 * L_116 = (GlyphData_t620095268 *)il2cpp_codegen_object_new(GlyphData_t620095268_il2cpp_TypeInfo_var);
			GlyphData__ctor_m3832508344(L_116, L_108, L_109, L_110, L_111, L_112, L_113, L_114, L_115, /*hidden argument*/NULL);
			NullCheck(L_106);
			Dictionary_2_Add_m2135025057(L_106, L_107, L_116, /*hidden argument*/Dictionary_2_Add_m2135025057_RuntimeMethod_var);
			V_6 = (bool)1;
			goto IL_042b;
		}

IL_0253:
		{
			int32_t L_117 = V_7;
			if ((((int32_t)L_117) >= ((int32_t)0)))
			{
				goto IL_03ad;
			}
		}

IL_025b:
		{
			uint32_t L_118 = V_1;
			V_15 = L_118;
			List_1_t2929260728 * L_119 = (List_1_t2929260728 *)il2cpp_codegen_object_new(List_1_t2929260728_il2cpp_TypeInfo_var);
			List_1__ctor_m2294770810(L_119, /*hidden argument*/List_1__ctor_m2294770810_RuntimeMethod_var);
			V_16 = L_119;
			List_1_t74525638 * L_120 = (List_1_t74525638 *)il2cpp_codegen_object_new(List_1_t74525638_il2cpp_TypeInfo_var);
			List_1__ctor_m4272323567(L_120, /*hidden argument*/List_1__ctor_m4272323567_RuntimeMethod_var);
			V_17 = L_120;
			int32_t L_121 = V_2;
			V_18 = L_121;
			V_19 = 0;
			V_20 = 0;
		}

IL_0275:
		{
			ByteU5BU5D_t4116647657* L_122 = __this->get__ttfData_20();
			uint16_t L_123 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_122, (&V_15), /*hidden argument*/NULL);
			V_14 = L_123;
			ByteU5BU5D_t4116647657* L_124 = __this->get__ttfData_20();
			uint16_t L_125 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_124, (&V_15), /*hidden argument*/NULL);
			V_2 = L_125;
			uint16_t L_126 = V_14;
			if (!((int32_t)((int32_t)L_126&(int32_t)((int32_t)512))))
			{
				goto IL_02a2;
			}
		}

IL_029f:
		{
			int32_t L_127 = V_2;
			V_18 = L_127;
		}

IL_02a2:
		{
			uint16_t L_128 = V_14;
			if (!((int32_t)((int32_t)L_128&(int32_t)1)))
			{
				goto IL_02d7;
			}
		}

IL_02ab:
		{
			uint16_t L_129 = V_14;
			if (!((int32_t)((int32_t)L_129&(int32_t)2)))
			{
				goto IL_02d2;
			}
		}

IL_02b4:
		{
			ByteU5BU5D_t4116647657* L_130 = __this->get__ttfData_20();
			int16_t L_131 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_130, (&V_15), /*hidden argument*/NULL);
			V_19 = L_131;
			ByteU5BU5D_t4116647657* L_132 = __this->get__ttfData_20();
			int16_t L_133 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_132, (&V_15), /*hidden argument*/NULL);
			V_20 = L_133;
		}

IL_02d2:
		{
			goto IL_0306;
		}

IL_02d7:
		{
			uint16_t L_134 = V_14;
			if (!((int32_t)((int32_t)L_134&(int32_t)2)))
			{
				goto IL_0306;
			}
		}

IL_02e0:
		{
			ByteU5BU5D_t4116647657* L_135 = __this->get__ttfData_20();
			uint32_t L_136 = V_15;
			uint32_t L_137 = L_136;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
			NullCheck(L_135);
			uintptr_t L_138 = (((uintptr_t)L_137));
			uint8_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
			V_19 = (((int32_t)((int32_t)(((int8_t)((int8_t)L_139))))));
			ByteU5BU5D_t4116647657* L_140 = __this->get__ttfData_20();
			uint32_t L_141 = V_15;
			uint32_t L_142 = L_141;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)1));
			NullCheck(L_140);
			uintptr_t L_143 = (((uintptr_t)L_142));
			uint8_t L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
			V_20 = (((int32_t)((int32_t)(((int8_t)((int8_t)L_144))))));
		}

IL_0306:
		{
			uint16_t L_145 = V_14;
			if (!((int32_t)((int32_t)L_145&(int32_t)8)))
			{
				goto IL_031a;
			}
		}

IL_030f:
		{
			uint32_t L_146 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)2));
			goto IL_0342;
		}

IL_031a:
		{
			uint16_t L_147 = V_14;
			if (!((int32_t)((int32_t)L_147&(int32_t)((int32_t)64))))
			{
				goto IL_032f;
			}
		}

IL_0324:
		{
			uint32_t L_148 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)4));
			goto IL_0342;
		}

IL_032f:
		{
			uint16_t L_149 = V_14;
			if (!((int32_t)((int32_t)L_149&(int32_t)((int32_t)128))))
			{
				goto IL_0342;
			}
		}

IL_033c:
		{
			uint32_t L_150 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)8));
		}

IL_0342:
		{
			uint32_t L_151 = __this->get__glyphDataOffset_31();
			UInt32U5BU5D_t2770800703* L_152 = __this->get__locationIndexArray_39();
			int32_t L_153 = V_2;
			NullCheck(L_152);
			int32_t L_154 = L_153;
			uint32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)L_155));
			ByteU5BU5D_t4116647657* L_156 = __this->get__ttfData_20();
			int16_t L_157 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_156, (&V_1), /*hidden argument*/NULL);
			V_7 = L_157;
			uint32_t L_158 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)8));
			uint32_t L_159 = V_1;
			int32_t L_160 = V_7;
			List_1_t2929260728 * L_161 = V_16;
			List_1_t74525638 * L_162 = V_17;
			int32_t L_163 = V_19;
			int32_t L_164 = V_20;
			TTFFontInfo_ReadGlyphData_m2376183697(__this, L_159, L_160, L_161, L_162, L_163, L_164, /*hidden argument*/NULL);
			uint16_t L_165 = V_14;
			if (((int32_t)((int32_t)L_165&(int32_t)((int32_t)32))))
			{
				goto IL_0275;
			}
		}

IL_0380:
		{
			Dictionary_2_t2651833894 * L_166 = __this->get__glyphDictionary_43();
			Il2CppChar L_167 = ___character0;
			List_1_t2929260728 * L_168 = V_16;
			List_1_t74525638 * L_169 = V_17;
			int32_t L_170 = V_8;
			int32_t L_171 = V_9;
			int32_t L_172 = V_10;
			int32_t L_173 = V_11;
			int32_t L_174 = __this->get__unitsPerEm_23();
			int32_t L_175 = V_18;
			GlyphData_t620095268 * L_176 = (GlyphData_t620095268 *)il2cpp_codegen_object_new(GlyphData_t620095268_il2cpp_TypeInfo_var);
			GlyphData__ctor_m3832508344(L_176, L_168, L_169, L_170, L_171, L_172, L_173, L_174, L_175, /*hidden argument*/NULL);
			NullCheck(L_166);
			Dictionary_2_Add_m2135025057(L_166, L_167, L_176, /*hidden argument*/Dictionary_2_Add_m2135025057_RuntimeMethod_var);
			V_6 = (bool)1;
			goto IL_042b;
		}

IL_03ad:
		{
			Dictionary_2_t2651833894 * L_177 = __this->get__glyphDictionary_43();
			Il2CppChar L_178 = ___character0;
			int32_t L_179 = __this->get__unitsPerEm_23();
			int32_t L_180 = V_2;
			GlyphData_t620095268 * L_181 = (GlyphData_t620095268 *)il2cpp_codegen_object_new(GlyphData_t620095268_il2cpp_TypeInfo_var);
			GlyphData__ctor_m3832508344(L_181, (List_1_t2929260728 *)NULL, (List_1_t74525638 *)NULL, 0, 0, 0, 0, L_179, L_180, /*hidden argument*/NULL);
			NullCheck(L_177);
			Dictionary_2_Add_m2135025057(L_177, L_178, L_181, /*hidden argument*/Dictionary_2_Add_m2135025057_RuntimeMethod_var);
			V_6 = (bool)1;
			goto IL_042b;
		}

IL_03d3:
		{
			; // IL_03d3: leave IL_042b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_03d8;
		throw e;
	}

CATCH_03d8:
	{ // begin catch(System.Exception)
		{
			V_21 = ((Exception_t *)__exception_local);
			ObjectU5BU5D_t2843939325* L_182 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
			NullCheck(L_182);
			ArrayElementTypeCheck (L_182, _stringLiteral1075229972);
			(L_182)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1075229972);
			ObjectU5BU5D_t2843939325* L_183 = L_182;
			int32_t L_184 = V_0;
			int32_t L_185 = L_184;
			RuntimeObject * L_186 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_185);
			NullCheck(L_183);
			ArrayElementTypeCheck (L_183, L_186);
			(L_183)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_186);
			ObjectU5BU5D_t2843939325* L_187 = L_183;
			NullCheck(L_187);
			ArrayElementTypeCheck (L_187, _stringLiteral3451041664);
			(L_187)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3451041664);
			ObjectU5BU5D_t2843939325* L_188 = L_187;
			Il2CppChar L_189 = ___character0;
			Il2CppChar L_190 = L_189;
			RuntimeObject * L_191 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_190);
			NullCheck(L_188);
			ArrayElementTypeCheck (L_188, L_191);
			(L_188)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_191);
			ObjectU5BU5D_t2843939325* L_192 = L_188;
			NullCheck(L_192);
			ArrayElementTypeCheck (L_192, _stringLiteral3786318033);
			(L_192)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3786318033);
			ObjectU5BU5D_t2843939325* L_193 = L_192;
			Exception_t * L_194 = V_21;
			NullCheck(L_194);
			String_t* L_195 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_194);
			NullCheck(L_193);
			ArrayElementTypeCheck (L_193, L_195);
			(L_193)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_195);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_196 = String_Concat_m2971454694(NULL /*static, unused*/, L_193, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_196, /*hidden argument*/NULL);
			V_6 = (bool)0;
			goto IL_042b;
		}

IL_0426:
		{
			; // IL_0426: leave IL_042b
		}
	} // end catch (depth: 1)

IL_042b:
	{
		bool L_197 = V_6;
		return L_197;
	}
}
// System.Void FlyingText3D.TTFFontInfo::ReadGlyphData(System.UInt32,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2[]>,System.Collections.Generic.List`1<System.Boolean[]>,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo_ReadGlyphData_m2376183697 (TTFFontInfo_t2461483730 * __this, uint32_t ___idx0, int32_t ___numberOfContours1, List_1_t2929260728 * ___pointsList2, List_1_t74525638 * ___onCurvesList3, int32_t ___xOffset4, int32_t ___yOffset5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_ReadGlyphData_m2376183697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_t3326319531* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t1569362707 * V_3 = NULL;
	List_1_t2606371118 * V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	BooleanU5BU5D_t2897418192* V_9 = NULL;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	Vector2U5BU5D_t1457185986* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	Vector2U5BU5D_t1457185986* V_24 = NULL;
	BooleanU5BU5D_t2897418192* V_25 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get__ttfData_20();
		int32_t L_1 = ___numberOfContours1;
		UInt16U5BU5D_t3326319531* L_2 = TTFFontInfo_GetUshortArray_m2433521691(NULL /*static, unused*/, L_0, (&___idx0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = __this->get__ttfData_20();
		uint16_t L_4 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_3, (&___idx0), /*hidden argument*/NULL);
		V_1 = L_4;
		uint32_t L_5 = ___idx0;
		uint32_t L_6 = V_1;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		UInt16U5BU5D_t3326319531* L_7 = V_0;
		int32_t L_8 = ___numberOfContours1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_2;
		List_1_t1569362707 * L_12 = (List_1_t1569362707 *)il2cpp_codegen_object_new(List_1_t1569362707_il2cpp_TypeInfo_var);
		List_1__ctor_m700075857(L_12, L_11, /*hidden argument*/List_1__ctor_m700075857_RuntimeMethod_var);
		V_3 = L_12;
		int32_t L_13 = V_2;
		List_1_t2606371118 * L_14 = (List_1_t2606371118 *)il2cpp_codegen_object_new(List_1_t2606371118_il2cpp_TypeInfo_var);
		List_1__ctor_m1213329701(L_14, L_13, /*hidden argument*/List_1__ctor_m1213329701_RuntimeMethod_var);
		V_4 = L_14;
		V_5 = 0;
		goto IL_00bf;
	}

IL_0041:
	{
		ByteU5BU5D_t4116647657* L_15 = __this->get__ttfData_20();
		uint32_t L_16 = ___idx0;
		uint32_t L_17 = L_16;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		uintptr_t L_18 = (((uintptr_t)L_17));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		List_1_t2606371118 * L_20 = V_4;
		uint8_t L_21 = V_6;
		NullCheck(L_20);
		List_1_Add_m163275201(L_20, L_21, /*hidden argument*/List_1_Add_m163275201_RuntimeMethod_var);
		List_1_t1569362707 * L_22 = V_3;
		uint8_t L_23 = V_6;
		NullCheck(L_22);
		List_1_Add_m2351159821(L_22, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_23&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/List_1_Add_m2351159821_RuntimeMethod_var);
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint8_t L_25 = V_6;
		if (!((int32_t)((int32_t)L_25&(int32_t)8)))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_26 = __this->get__ttfData_20();
		uint32_t L_27 = ___idx0;
		uint32_t L_28 = L_27;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		NullCheck(L_26);
		uintptr_t L_29 = (((uintptr_t)L_28));
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = L_30;
		V_8 = 0;
		goto IL_00b6;
	}

IL_0091:
	{
		List_1_t2606371118 * L_31 = V_4;
		uint8_t L_32 = V_6;
		NullCheck(L_31);
		List_1_Add_m163275201(L_31, L_32, /*hidden argument*/List_1_Add_m163275201_RuntimeMethod_var);
		List_1_t1569362707 * L_33 = V_3;
		uint8_t L_34 = V_6;
		NullCheck(L_33);
		List_1_Add_m2351159821(L_33, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_34&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/List_1_Add_m2351159821_RuntimeMethod_var);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_37 = V_8;
		int32_t L_38 = V_7;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0091;
		}
	}

IL_00bf:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0041;
		}
	}
	{
		List_1_t1569362707 * L_41 = V_3;
		NullCheck(L_41);
		BooleanU5BU5D_t2897418192* L_42 = List_1_ToArray_m2757296379(L_41, /*hidden argument*/List_1_ToArray_m2757296379_RuntimeMethod_var);
		V_9 = L_42;
		List_1_t2606371118 * L_43 = V_4;
		NullCheck(L_43);
		ByteU5BU5D_t4116647657* L_44 = List_1_ToArray_m2135705625(L_43, /*hidden argument*/List_1_ToArray_m2135705625_RuntimeMethod_var);
		V_10 = L_44;
		int32_t L_45 = V_2;
		V_11 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_45));
		V_12 = 0;
		V_13 = 0;
		goto IL_017b;
	}

IL_00eb:
	{
		V_14 = 0;
		ByteU5BU5D_t4116647657* L_46 = V_10;
		int32_t L_47 = V_13;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_15 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_49&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		ByteU5BU5D_t4116647657* L_50 = V_10;
		int32_t L_51 = V_13;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_16 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_0144;
		}
	}
	{
		bool L_55 = V_16;
		if (!L_55)
		{
			goto IL_012e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_56 = __this->get__ttfData_20();
		uint32_t L_57 = ___idx0;
		uint32_t L_58 = L_57;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		uintptr_t L_59 = (((uintptr_t)L_58));
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		G_B11_0 = ((int32_t)(L_60));
		goto IL_013d;
	}

IL_012e:
	{
		ByteU5BU5D_t4116647657* L_61 = __this->get__ttfData_20();
		uint32_t L_62 = ___idx0;
		uint32_t L_63 = L_62;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		NullCheck(L_61);
		uintptr_t L_64 = (((uintptr_t)L_63));
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		G_B11_0 = ((int32_t)(((-((int32_t)L_65)))));
	}

IL_013d:
	{
		V_14 = G_B11_0;
		goto IL_015a;
	}

IL_0144:
	{
		bool L_66 = V_16;
		if (L_66)
		{
			goto IL_015a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_67 = __this->get__ttfData_20();
		int16_t L_68 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_67, (&___idx0), /*hidden argument*/NULL);
		V_14 = L_68;
	}

IL_015a:
	{
		int32_t L_69 = V_12;
		int32_t L_70 = V_14;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70));
		Vector2U5BU5D_t1457185986* L_71 = V_11;
		int32_t L_72 = V_13;
		NullCheck(L_71);
		int32_t L_73 = V_12;
		int32_t L_74 = ___xOffset4;
		((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->set_x_0((((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74))))));
		int32_t L_75 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_017b:
	{
		int32_t L_76 = V_13;
		int32_t L_77 = V_2;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00eb;
		}
	}
	{
		V_12 = 0;
		V_17 = 0;
		goto IL_021e;
	}

IL_018e:
	{
		V_18 = 0;
		ByteU5BU5D_t4116647657* L_78 = V_10;
		int32_t L_79 = V_17;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_19 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_81&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		ByteU5BU5D_t4116647657* L_82 = V_10;
		int32_t L_83 = V_17;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_20 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_85&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_19;
		if (!L_86)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_87 = V_20;
		if (!L_87)
		{
			goto IL_01d1;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_88 = __this->get__ttfData_20();
		uint32_t L_89 = ___idx0;
		uint32_t L_90 = L_89;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		NullCheck(L_88);
		uintptr_t L_91 = (((uintptr_t)L_90));
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		G_B21_0 = ((int32_t)(L_92));
		goto IL_01e0;
	}

IL_01d1:
	{
		ByteU5BU5D_t4116647657* L_93 = __this->get__ttfData_20();
		uint32_t L_94 = ___idx0;
		uint32_t L_95 = L_94;
		___idx0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		NullCheck(L_93);
		uintptr_t L_96 = (((uintptr_t)L_95));
		uint8_t L_97 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		G_B21_0 = ((int32_t)(((-((int32_t)L_97)))));
	}

IL_01e0:
	{
		V_18 = G_B21_0;
		goto IL_01fd;
	}

IL_01e7:
	{
		bool L_98 = V_20;
		if (L_98)
		{
			goto IL_01fd;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_99 = __this->get__ttfData_20();
		int16_t L_100 = TTFFontInfo_GetShort_m4182940442(NULL /*static, unused*/, L_99, (&___idx0), /*hidden argument*/NULL);
		V_18 = L_100;
	}

IL_01fd:
	{
		int32_t L_101 = V_12;
		int32_t L_102 = V_18;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102));
		Vector2U5BU5D_t1457185986* L_103 = V_11;
		int32_t L_104 = V_17;
		NullCheck(L_103);
		int32_t L_105 = V_12;
		int32_t L_106 = ___yOffset5;
		((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->set_y_1((((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106))))));
		int32_t L_107 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_021e:
	{
		int32_t L_108 = V_17;
		int32_t L_109 = V_2;
		if ((((int32_t)L_108) < ((int32_t)L_109)))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_110 = ___numberOfContours1;
		if ((((int32_t)L_110) <= ((int32_t)1)))
		{
			goto IL_029d;
		}
	}
	{
		V_21 = 0;
		V_22 = 0;
		goto IL_0290;
	}

IL_0238:
	{
		UInt16U5BU5D_t3326319531* L_111 = V_0;
		int32_t L_112 = V_22;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		uint16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = V_21;
		V_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1)), (int32_t)L_115));
		int32_t L_116 = V_23;
		V_24 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_116));
		int32_t L_117 = V_23;
		V_25 = ((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)L_117));
		Vector2U5BU5D_t1457185986* L_118 = V_11;
		int32_t L_119 = V_21;
		Vector2U5BU5D_t1457185986* L_120 = V_24;
		int32_t L_121 = V_23;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_118, L_119, (RuntimeArray *)(RuntimeArray *)L_120, 0, L_121, /*hidden argument*/NULL);
		BooleanU5BU5D_t2897418192* L_122 = V_9;
		int32_t L_123 = V_21;
		BooleanU5BU5D_t2897418192* L_124 = V_25;
		int32_t L_125 = V_23;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_122, L_123, (RuntimeArray *)(RuntimeArray *)L_124, 0, L_125, /*hidden argument*/NULL);
		List_1_t2929260728 * L_126 = ___pointsList2;
		Vector2U5BU5D_t1457185986* L_127 = V_24;
		NullCheck(L_126);
		List_1_Add_m769708164(L_126, L_127, /*hidden argument*/List_1_Add_m769708164_RuntimeMethod_var);
		List_1_t74525638 * L_128 = ___onCurvesList3;
		BooleanU5BU5D_t2897418192* L_129 = V_25;
		NullCheck(L_128);
		List_1_Add_m2072125803(L_128, L_129, /*hidden argument*/List_1_Add_m2072125803_RuntimeMethod_var);
		UInt16U5BU5D_t3326319531* L_130 = V_0;
		int32_t L_131 = V_22;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		int32_t L_134 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)1));
	}

IL_0290:
	{
		int32_t L_135 = V_22;
		int32_t L_136 = ___numberOfContours1;
		if ((((int32_t)L_135) < ((int32_t)L_136)))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_02ae;
	}

IL_029d:
	{
		List_1_t2929260728 * L_137 = ___pointsList2;
		Vector2U5BU5D_t1457185986* L_138 = V_11;
		NullCheck(L_137);
		List_1_Add_m769708164(L_137, L_138, /*hidden argument*/List_1_Add_m769708164_RuntimeMethod_var);
		List_1_t74525638 * L_139 = ___onCurvesList3;
		BooleanU5BU5D_t2897418192* L_140 = V_9;
		NullCheck(L_139);
		List_1_Add_m2072125803(L_139, L_140, /*hidden argument*/List_1_Add_m2072125803_RuntimeMethod_var);
	}

IL_02ae:
	{
		return;
	}
}
// System.Void FlyingText3D.TTFFontInfo::SetFormat4(System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void TTFFontInfo_SetFormat4_m2930510947 (TTFFontInfo_t2461483730 * __this, uint32_t* ___idx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->set__cmapFormat_32(4);
		ByteU5BU5D_t4116647657* L_0 = __this->get__ttfData_20();
		uint32_t* L_1 = ___idx0;
		uint16_t L_2 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t* L_3 = ___idx0;
		uint32_t* L_4 = ___idx0;
		*((int32_t*)(L_3)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_4)), (int32_t)2));
		ByteU5BU5D_t4116647657* L_5 = __this->get__ttfData_20();
		uint32_t* L_6 = ___idx0;
		uint16_t L_7 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_7/(int32_t)2));
		uint32_t* L_8 = ___idx0;
		uint32_t* L_9 = ___idx0;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_9)), (int32_t)6));
		ByteU5BU5D_t4116647657* L_10 = __this->get__ttfData_20();
		uint32_t* L_11 = ___idx0;
		int32_t L_12 = V_1;
		Int32U5BU5D_t385246372* L_13 = TTFFontInfo_GetUshortToIntArray_m4196438407(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set__endCodeArray_34(L_13);
		uint32_t* L_14 = ___idx0;
		uint32_t* L_15 = ___idx0;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_15)), (int32_t)2));
		ByteU5BU5D_t4116647657* L_16 = __this->get__ttfData_20();
		uint32_t* L_17 = ___idx0;
		int32_t L_18 = V_1;
		Int32U5BU5D_t385246372* L_19 = TTFFontInfo_GetUshortToIntArray_m4196438407(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		__this->set__startCodeArray_35(L_19);
		ByteU5BU5D_t4116647657* L_20 = __this->get__ttfData_20();
		uint32_t* L_21 = ___idx0;
		int32_t L_22 = V_1;
		Int32U5BU5D_t385246372* L_23 = TTFFontInfo_GetShortToIntArray_m3276325465(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		__this->set__idDeltaArray_36(L_23);
		ByteU5BU5D_t4116647657* L_24 = __this->get__ttfData_20();
		uint32_t* L_25 = ___idx0;
		int32_t L_26 = V_1;
		Int32U5BU5D_t385246372* L_27 = TTFFontInfo_GetUshortToIntArray_m4196438407(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		__this->set__idRangeOffsetArray_37(L_27);
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)16), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2))))))))/(int32_t)2));
		ByteU5BU5D_t4116647657* L_30 = __this->get__ttfData_20();
		uint32_t* L_31 = ___idx0;
		int32_t L_32 = V_2;
		Int32U5BU5D_t385246372* L_33 = TTFFontInfo_GetUshortToIntArray_m4196438407(NULL /*static, unused*/, L_30, L_31, L_32, /*hidden argument*/NULL);
		__this->set__glyphIdArray_38(L_33);
		return;
	}
}
// System.String FlyingText3D.TTFFontInfo::GetName(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_GetName_m1038423694 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetName_m1038423694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		uint32_t* L_0 = ___idx1;
		V_0 = (*((uint32_t*)L_0));
		uint32_t* L_1 = ___idx1;
		uint32_t* L_2 = ___idx1;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_2)), (int32_t)2));
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		uint16_t L_5 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___ttfData0;
		uint32_t* L_7 = ___idx1;
		uint16_t L_8 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		uint32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		V_3 = _stringLiteral757602046;
		V_4 = 0;
		goto IL_00d5;
	}

IL_0029:
	{
		ByteU5BU5D_t4116647657* L_10 = ___ttfData0;
		uint32_t* L_11 = ___idx1;
		uint16_t L_12 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		ByteU5BU5D_t4116647657* L_13 = ___ttfData0;
		uint32_t* L_14 = ___idx1;
		uint16_t L_15 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		uint32_t* L_16 = ___idx1;
		uint32_t* L_17 = ___idx1;
		*((int32_t*)(L_16)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_17)), (int32_t)2));
		ByteU5BU5D_t4116647657* L_18 = ___ttfData0;
		uint32_t* L_19 = ___idx1;
		uint16_t L_20 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		ByteU5BU5D_t4116647657* L_21 = ___ttfData0;
		uint32_t* L_22 = ___idx1;
		uint16_t L_23 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		ByteU5BU5D_t4116647657* L_24 = ___ttfData0;
		uint32_t* L_25 = ___idx1;
		uint16_t L_26 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		int32_t L_27 = V_7;
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_28 = V_5;
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_29 = V_6;
		if (L_29)
		{
			goto IL_0095;
		}
	}
	{
		uint32_t* L_30 = ___idx1;
		uint32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)(L_30)) = (int32_t)(((int32_t)((uint32_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((uint64_t)L_31))), (int64_t)(((int64_t)((int64_t)L_32))))))));
		ASCIIEncoding_t3446586211 * L_33 = (ASCIIEncoding_t3446586211 *)il2cpp_codegen_object_new(ASCIIEncoding_t3446586211_il2cpp_TypeInfo_var);
		ASCIIEncoding__ctor_m1380190655(L_33, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_34 = ___ttfData0;
		uint32_t* L_35 = ___idx1;
		int32_t L_36 = V_8;
		ByteU5BU5D_t4116647657* L_37 = TTFFontInfo_GetByteArray_m4077026987(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_38 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_33, L_37);
		V_3 = L_38;
		goto IL_00dd;
	}

IL_0095:
	{
		int32_t L_39 = V_7;
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_41 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t* L_42 = ___idx1;
		uint32_t L_43 = V_2;
		int32_t L_44 = V_9;
		*((int32_t*)(L_42)) = (int32_t)(((int32_t)((uint32_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((uint64_t)L_43))), (int64_t)(((int64_t)((int64_t)L_44))))))));
		UnicodeEncoding_t1959134050 * L_45 = (UnicodeEncoding_t1959134050 *)il2cpp_codegen_object_new(UnicodeEncoding_t1959134050_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_m1074918879(L_45, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_46 = ___ttfData0;
		uint32_t* L_47 = ___idx1;
		int32_t L_48 = V_8;
		ByteU5BU5D_t4116647657* L_49 = TTFFontInfo_GetLittleEndianByteArray_m2053176639(NULL /*static, unused*/, L_46, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		String_t* L_50 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_45, L_49);
		V_3 = L_50;
		goto IL_00dd;
	}

IL_00cf:
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00d5:
	{
		int32_t L_52 = V_4;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0029;
		}
	}

IL_00dd:
	{
		String_t* L_54 = V_3;
		return L_54;
	}
}
// System.Boolean FlyingText3D.TTFFontInfo::TagSearch(System.Byte[],System.String,System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool TTFFontInfo_TagSearch_m2274390376 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, String_t* ___tag1, uint32_t* ___offset2, uint32_t* ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_TagSearch_m2274390376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 4;
		ByteU5BU5D_t4116647657* L_0 = ___ttfData0;
		uint16_t L_1 = TTFFontInfo_GetUshort_m2370522159(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		V_0 = ((int32_t)12);
		V_2 = 0;
		goto IL_004b;
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = ___ttfData0;
		String_t* L_3 = TTFFontInfo_GetTag_m1553678787(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		String_t* L_4 = ___tag1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4));
		uint32_t* L_7 = ___offset2;
		ByteU5BU5D_t4116647657* L_8 = ___ttfData0;
		uint32_t L_9 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_8, (&V_0), /*hidden argument*/NULL);
		*((int32_t*)(L_7)) = (int32_t)L_9;
		uint32_t* L_10 = ___length3;
		ByteU5BU5D_t4116647657* L_11 = ___ttfData0;
		uint32_t L_12 = TTFFontInfo_GetUint_m2273795948(NULL /*static, unused*/, L_11, (&V_0), /*hidden argument*/NULL);
		*((int32_t*)(L_10)) = (int32_t)L_12;
		return (bool)1;
	}

IL_0042:
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)12)));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}
}
// System.String FlyingText3D.TTFFontInfo::GetTag(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR String_t* TTFFontInfo_GetTag_m1553678787 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetTag_m1553678787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	{
		uint32_t* L_0 = ___idx1;
		ByteU5BU5D_t4116647657* L_1 = ___ttfData0;
		NullCheck(L_1);
		if ((((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_0))))))))) >= ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))))))
		{
			goto IL_004a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4));
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		NullCheck(L_3);
		uintptr_t L_5 = (((uintptr_t)(*((uint32_t*)L_4))));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)(((int32_t)((uint16_t)L_6))));
		CharU5BU5D_t3528271667* L_7 = L_2;
		ByteU5BU5D_t4116647657* L_8 = ___ttfData0;
		uint32_t* L_9 = ___idx1;
		NullCheck(L_8);
		uintptr_t L_10 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_9)), (int32_t)1))));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)(((int32_t)((uint16_t)L_11))));
		CharU5BU5D_t3528271667* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___ttfData0;
		uint32_t* L_14 = ___idx1;
		NullCheck(L_13);
		uintptr_t L_15 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_14)), (int32_t)2))));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)(((int32_t)((uint16_t)L_16))));
		CharU5BU5D_t3528271667* L_17 = L_12;
		ByteU5BU5D_t4116647657* L_18 = ___ttfData0;
		uint32_t* L_19 = ___idx1;
		NullCheck(L_18);
		uintptr_t L_20 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_19)), (int32_t)3))));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)(((int32_t)((uint16_t)L_21))));
		V_0 = L_17;
		uint32_t* L_22 = ___idx1;
		uint32_t* L_23 = ___idx1;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_23)), (int32_t)4));
		CharU5BU5D_t3528271667* L_24 = V_0;
		String_t* L_25 = String_CreateString_m2818852475(NULL, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_004a:
	{
		return (String_t*)NULL;
	}
}
// System.UInt32 FlyingText3D.TTFFontInfo::GetUint(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR uint32_t TTFFontInfo_GetUint_m2273795948 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___ttfData0;
		uint32_t* L_1 = ___idx1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)(*((uint32_t*)L_1))));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_t4116647657* L_4 = ___ttfData0;
		uint32_t* L_5 = ___idx1;
		NullCheck(L_4);
		uintptr_t L_6 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_5)), (int32_t)1))));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t4116647657* L_8 = ___ttfData0;
		uint32_t* L_9 = ___idx1;
		NullCheck(L_8);
		uintptr_t L_10 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_9)), (int32_t)2))));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_t4116647657* L_12 = ___ttfData0;
		uint32_t* L_13 = ___idx1;
		NullCheck(L_12);
		uintptr_t L_14 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_13)), (int32_t)3))));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))))|(int32_t)L_15));
		uint32_t* L_16 = ___idx1;
		uint32_t* L_17 = ___idx1;
		*((int32_t*)(L_16)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_17)), (int32_t)4));
		uint32_t L_18 = V_0;
		return L_18;
	}
}
// System.UInt16 FlyingText3D.TTFFontInfo::GetUshort(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR uint16_t TTFFontInfo_GetUshort_m2370522159 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___ttfData0;
		uint32_t* L_1 = ___idx1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)(*((uint32_t*)L_1))));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_t4116647657* L_4 = ___ttfData0;
		uint32_t* L_5 = ___idx1;
		NullCheck(L_4);
		uintptr_t L_6 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_5)), (int32_t)1))));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))|(int32_t)L_7)))));
		uint32_t* L_8 = ___idx1;
		uint32_t* L_9 = ___idx1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_9)), (int32_t)2));
		uint16_t L_10 = V_0;
		return L_10;
	}
}
// System.Int16 FlyingText3D.TTFFontInfo::GetShort(System.Byte[],System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR int16_t TTFFontInfo_GetShort_m4182940442 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___ttfData0;
		uint32_t* L_1 = ___idx1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)(*((uint32_t*)L_1))));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_t4116647657* L_4 = ___ttfData0;
		uint32_t* L_5 = ___idx1;
		NullCheck(L_4);
		uintptr_t L_6 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_5)), (int32_t)1))));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))|(int32_t)L_7)))));
		uint32_t* L_8 = ___idx1;
		uint32_t* L_9 = ___idx1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_9)), (int32_t)2));
		int16_t L_10 = V_0;
		return L_10;
	}
}
// System.UInt16[] FlyingText3D.TTFFontInfo::GetUshortArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR UInt16U5BU5D_t3326319531* TTFFontInfo_GetUshortArray_m2433521691 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetUshortArray_m2433521691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_t3326319531* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___arrayLength2;
		V_0 = ((UInt16U5BU5D_t3326319531*)SZArrayNew(UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var, (uint32_t)L_0));
		V_1 = 0;
		goto IL_002b;
	}

IL_000e:
	{
		UInt16U5BU5D_t3326319531* L_1 = V_0;
		int32_t L_2 = V_1;
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		NullCheck(L_3);
		uintptr_t L_5 = (((uintptr_t)(*((uint32_t*)L_4))));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_t4116647657* L_7 = ___ttfData0;
		uint32_t* L_8 = ___idx1;
		NullCheck(L_7);
		uintptr_t L_9 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_8)), (int32_t)1))));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))|(int32_t)L_10))))));
		uint32_t* L_11 = ___idx1;
		uint32_t* L_12 = ___idx1;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_12)), (int32_t)2));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___arrayLength2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_t3326319531* L_16 = V_0;
		return L_16;
	}
}
// System.Int32[] FlyingText3D.TTFFontInfo::GetUshortToIntArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_GetUshortToIntArray_m4196438407 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetUshortToIntArray_m4196438407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___arrayLength2;
		V_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_0));
		V_1 = 0;
		goto IL_002b;
	}

IL_000e:
	{
		Int32U5BU5D_t385246372* L_1 = V_0;
		int32_t L_2 = V_1;
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		NullCheck(L_3);
		uintptr_t L_5 = (((uintptr_t)(*((uint32_t*)L_4))));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_t4116647657* L_7 = ___ttfData0;
		uint32_t* L_8 = ___idx1;
		NullCheck(L_7);
		uintptr_t L_9 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_8)), (int32_t)1))));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))|(int32_t)L_10))))));
		uint32_t* L_11 = ___idx1;
		uint32_t* L_12 = ___idx1;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_12)), (int32_t)2));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___arrayLength2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_16 = V_0;
		return L_16;
	}
}
// System.Int32[] FlyingText3D.TTFFontInfo::GetShortToIntArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* TTFFontInfo_GetShortToIntArray_m3276325465 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetShortToIntArray_m3276325465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___arrayLength2;
		V_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_0));
		V_1 = 0;
		goto IL_002b;
	}

IL_000e:
	{
		Int32U5BU5D_t385246372* L_1 = V_0;
		int32_t L_2 = V_1;
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		NullCheck(L_3);
		uintptr_t L_5 = (((uintptr_t)(*((uint32_t*)L_4))));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_t4116647657* L_7 = ___ttfData0;
		uint32_t* L_8 = ___idx1;
		NullCheck(L_7);
		uintptr_t L_9 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_8)), (int32_t)1))));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int32_t)(((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))|(int32_t)L_10))))));
		uint32_t* L_11 = ___idx1;
		uint32_t* L_12 = ___idx1;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_12)), (int32_t)2));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___arrayLength2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_16 = V_0;
		return L_16;
	}
}
// System.Byte[] FlyingText3D.TTFFontInfo::GetByteArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* TTFFontInfo_GetByteArray_m4077026987 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetByteArray_m4077026987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___arrayLength2;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		ByteU5BU5D_t4116647657* L_1 = ___ttfData0;
		uint32_t* L_2 = ___idx1;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = ___arrayLength2;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_2)))))))), (RuntimeArray *)(RuntimeArray *)L_3, (((int64_t)((int64_t)0))), (((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		uint32_t* L_5 = ___idx1;
		uint32_t* L_6 = ___idx1;
		int32_t L_7 = ___arrayLength2;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_6)), (int32_t)L_7));
		ByteU5BU5D_t4116647657* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] FlyingText3D.TTFFontInfo::GetLittleEndianByteArray(System.Byte[],System.UInt32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* TTFFontInfo_GetLittleEndianByteArray_m2053176639 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ttfData0, uint32_t* ___idx1, int32_t ___arrayLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TTFFontInfo_GetLittleEndianByteArray_m2053176639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___arrayLength2;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		V_1 = 0;
		goto IL_002c;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		int32_t L_2 = V_1;
		ByteU5BU5D_t4116647657* L_3 = ___ttfData0;
		uint32_t* L_4 = ___idx1;
		NullCheck(L_3);
		uintptr_t L_5 = (((uintptr_t)(*((uint32_t*)L_4))));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))), (uint8_t)L_6);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		ByteU5BU5D_t4116647657* L_9 = ___ttfData0;
		uint32_t* L_10 = ___idx1;
		NullCheck(L_9);
		uintptr_t L_11 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_10)), (int32_t)1))));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_12);
		uint32_t* L_13 = ___idx1;
		uint32_t* L_14 = ___idx1;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_14)), (int32_t)2));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2));
	}

IL_002c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___arrayLength2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_18 = V_0;
		return L_18;
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
// System.Void TextObjectData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextObjectData__ctor_m339430829 (TextObjectData_t178506778 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextObjectData::SetData(System.Single,System.Single,System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void TextObjectData_SetData_m3153036784 (TextObjectData_t178506778 * __this, float ___size0, float ___extrudeDepth1, int32_t ___resolution2, float ___characterSpacing3, float ___lineSpacing4, float ___lineWidth5, const RuntimeMethod* method)
{
	{
		float L_0 = ___size0;
		__this->set_size_2(L_0);
		float L_1 = ___extrudeDepth1;
		__this->set_extrudeDepth_3(L_1);
		int32_t L_2 = ___resolution2;
		__this->set_resolution_4(L_2);
		float L_3 = ___characterSpacing3;
		__this->set_characterSpacing_5(L_3);
		float L_4 = ___lineSpacing4;
		__this->set_lineSpacing_6(L_4);
		float L_5 = ___lineWidth5;
		__this->set_lineWidth_7(L_5);
		return;
	}
}
// System.Void TextObjectData::InitializeData(System.Single&,System.Single&,System.Int32&,System.Single&,System.Single&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void TextObjectData_InitializeData_m1736845510 (TextObjectData_t178506778 * __this, float* ___size0, float* ___extrudeDepth1, int32_t* ___resolution2, float* ___characterSpacing3, float* ___lineSpacing4, float* ___lineWidth5, const RuntimeMethod* method)
{
	{
		float* L_0 = ___size0;
		float L_1 = __this->get_size_2();
		*((float*)(L_0)) = (float)L_1;
		float* L_2 = ___extrudeDepth1;
		float L_3 = __this->get_extrudeDepth_3();
		*((float*)(L_2)) = (float)L_3;
		int32_t* L_4 = ___resolution2;
		int32_t L_5 = __this->get_resolution_4();
		*((int32_t*)(L_4)) = (int32_t)L_5;
		float* L_6 = ___characterSpacing3;
		float L_7 = __this->get_characterSpacing_5();
		*((float*)(L_6)) = (float)L_7;
		float* L_8 = ___lineSpacing4;
		float L_9 = __this->get_lineSpacing_6();
		*((float*)(L_8)) = (float)L_9;
		float* L_10 = ___lineWidth5;
		float L_11 = __this->get_lineWidth_7();
		*((float*)(L_10)) = (float)L_11;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
