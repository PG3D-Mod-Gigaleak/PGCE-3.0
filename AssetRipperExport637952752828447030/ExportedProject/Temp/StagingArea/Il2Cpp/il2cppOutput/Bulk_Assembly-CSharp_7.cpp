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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// WaterMovement
struct WaterMovement_t3974566801;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// Weapon
struct Weapon_t4063826929;
// WeaponBonus
struct WeaponBonus_t1073004861;
// System.String
struct String_t;
// Player_move_c
struct Player_move_c_t367674069;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// WeaponManager
struct WeaponManager_t1762453775;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// WeaponSounds
struct WeaponSounds_t105296586;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1049633776;
// System.Collections.Generic.List`1<WeaponManager/infoClient>
struct List_1_t2869380684;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// WeaponsComparer
struct WeaponsComparer_t4255210887;
// System.Action
struct Action_t1264377477;
// System.Action`1<GooglePurchase>
struct Action_1_t2353251714;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// GooglePurchase
struct GooglePurchase_t2180784119;
// UnityEngine.Animation
struct Animation_t3648466861;
// WebViewStarter
struct WebViewStarter_t2221011868;
// WebViewObject
struct WebViewObject_t110525398;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// ZeichenKraftwerk.Rotator
struct Rotator_t2834280094;
// ZombieCreator
struct ZombieCreator_t3776728246;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t2753864082;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// ZombieCreator/<AddZombies>c__Iterator0
struct U3CAddZombiesU3Ec__Iterator0_t813183650;
// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// ZombiManager
struct ZombiManager_t1666808103;
// PhotonView
struct PhotonView_t2207721820;
// NetworkStartTable
struct NetworkStartTable_t3389559616;
// ZombiUpravlenie
struct ZombiUpravlenie_t207883660;
// ZombiManagerSynch
struct ZombiManagerSynch_t926835508;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// PhotonStream
struct PhotonStream_t1003850889;
// PhotonMessageInfo
struct PhotonMessageInfo_t3855471533;
// ZombiSynchPhoton
struct ZombiSynchPhoton_t1457927756;
// Sounds
struct Sounds_t3004079410;
// UnityEngine.Texture
struct Texture_t3661962703;
// SkinsManagerPixlGun
struct SkinsManagerPixlGun_t2582742119;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// ZombiUpravlenie/<Flash>c__Iterator0
struct U3CFlashU3Ec__Iterator0_t2431851929;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AnimationState
struct AnimationState_t1108360407;
// UnityEngine.TrackedReference
struct TrackedReference_t1199777556;
// ZombiUpravlenie/DelayedCallback
struct DelayedCallback_t4289022917;
// UnityEngine.Collider
struct Collider_t1773347010;
// SpawnMonster
struct SpawnMonster_t4219141508;
// ZombiUpravlenie/<___DelayedCallback>c__Iterator1
struct U3C___DelayedCallbackU3Ec__Iterator1_t766208805;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// ZoomCamera
struct ZoomCamera_t1350885688;
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Action[]
struct ActionU5BU5D_t388269512;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Action,System.Collections.DictionaryEntry>
struct Transform_1_t3533648524;
// WeaponManager/infoClient[]
struct infoClientU5BU5D_t561281939;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// PhotonPlayer
struct PhotonPlayer_t3305149557;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// Pauser
struct Pauser_t2963840460;
// StoreKitEventListener
struct StoreKitEventListener_t3151468363;
// InGameGUI
struct InGameGUI_t3650018622;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Action,UnityEngine.GUIStyle>>
struct Dictionary_2_t736599152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1613291102;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;
// System.Collections.Generic.List`1<Player_move_c/MessageChat>
struct List_1_t1461688331;
// System.Collections.Generic.List`1<NetworkStartTable/infoClient>
struct List_1_t845153904;
// System.Collections.Generic.ICollection`1<Rilisoft.IMarketProduct>
struct ICollection_1_t3217676586;
// System.Collections.Generic.ICollection`1<GoogleSkuInfo>
struct ICollection_1_t3272623373;
// System.Func`2<GoogleSkuInfo,System.Boolean>
struct Func_2_t1441243940;
// System.Func`2<GoogleSkuInfo,System.String>
struct Func_2_t3191406664;
// System.Func`2<GooglePurchase,System.String>
struct Func_2_t2566913764;
// System.Func`2<AmazonItem,System.String>
struct Func_2_t1902466687;
// System.Func`2<AmazonItem,System.Boolean>
struct Func_2_t152303963;
// System.Func`2<AmazonReceipt,System.String>
struct Func_2_t2769542166;
// System.Func`2<GoogleSkuInfo,Rilisoft.GoogleMarketProduct>
struct Func_2_t3178620764;
// System.Func`2<AmazonItem,Rilisoft.AmazonMarketProduct>
struct Func_2_t318140342;
// UnityEngine.HostData
struct HostData_t1124963648;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// ThirdPersonCamera
struct ThirdPersonCamera_t2998681409;
// ThirdPersonController
struct ThirdPersonController_t2544474708;

extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var;
extern const uint32_t WaterMovement_Update_m52765506_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayer_move_c_t367674069_m896625391_RuntimeMethod_var;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral88903714;
extern const uint32_t WeaponBonus_Start_m1571641398_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t WeaponBonus_Update_m4170613255_MetadataUsageId;
extern RuntimeClass* WeaponManager_t1762453775_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3302800229_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m633427275_RuntimeMethod_var;
extern String_t* _stringLiteral2313074255;
extern String_t* _stringLiteral1192155552;
extern String_t* _stringLiteral3551123518;
extern String_t* _stringLiteral556377502;
extern String_t* _stringLiteral141426456;
extern String_t* _stringLiteral1921098969;
extern String_t* _stringLiteral3156421093;
extern String_t* _stringLiteral2232477129;
extern String_t* _stringLiteral3541567793;
extern String_t* _stringLiteral2097419566;
extern String_t* _stringLiteral1652438831;
extern String_t* _stringLiteral4118587484;
extern const uint32_t WeaponManager__cctor_m2053314936_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* WeaponSounds_t105296586_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1049633776_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2869380684_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1104614235_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1770779276_RuntimeMethod_var;
extern const uint32_t WeaponManager__ctor_m334708146_MetadataUsageId;
extern RuntimeClass* Defs_t3298467154_il2cpp_TypeInfo_var;
extern const uint32_t WeaponManager_myCAnim_m3806326573_MetadataUsageId;
extern String_t* _stringLiteral2268009215;
extern const uint32_t WeaponManager_get_m16Tag_m291637480_MetadataUsageId;
extern String_t* _stringLiteral382924224;
extern const uint32_t WeaponManager_get_EagleTag_m3685011897_MetadataUsageId;
extern String_t* _stringLiteral9353509;
extern const uint32_t WeaponManager_get_GoldenAxeTag_m923047896_MetadataUsageId;
extern String_t* _stringLiteral1935104946;
extern const uint32_t WeaponManager_get_SPASTag_m2206785740_MetadataUsageId;
extern String_t* _stringLiteral424788389;
extern const uint32_t WeaponManager_get_GlockTag_m3546785105_MetadataUsageId;
extern String_t* _stringLiteral100222198;
extern const uint32_t WeaponManager_get_FAMASTag_m476420310_MetadataUsageId;
extern String_t* _stringLiteral847028901;
extern const uint32_t WeaponManager_get_ChainsawTag_m2479377328_MetadataUsageId;
extern String_t* _stringLiteral1221901976;
extern const uint32_t WeaponManager_get_ScytheTag_m2026640649_MetadataUsageId;
extern String_t* _stringLiteral769311735;
extern const uint32_t WeaponManager_get_ShovelTag_m3668724671_MetadataUsageId;
extern String_t* _stringLiteral3314502200;
extern const uint32_t WeaponManager_get_UziTag_m675781882_MetadataUsageId;
extern String_t* _stringLiteral403561042;
extern const uint32_t WeaponManager_get_HammerTag_m2524420269_MetadataUsageId;
extern String_t* _stringLiteral4081456458;
extern const uint32_t WeaponManager_get_Sword_2Tag_m2523352659_MetadataUsageId;
extern String_t* _stringLiteral3178868010;
extern const uint32_t WeaponManager_get_StaffTag_m1158770884_MetadataUsageId;
extern String_t* _stringLiteral1226225166;
extern const uint32_t WeaponManager_get_Red_StoneTag_m2648559010_MetadataUsageId;
extern String_t* _stringLiteral1382609333;
extern const uint32_t WeaponManager_get_LightSwordTag_m747118550_MetadataUsageId;
extern String_t* _stringLiteral3552318465;
extern const uint32_t WeaponManager_get_BerettaTag_m2966482996_MetadataUsageId;
extern String_t* _stringLiteral2150326517;
extern const uint32_t WeaponManager_get_MagicBowTag_m3080495106_MetadataUsageId;
extern String_t* _stringLiteral2835823132;
extern const uint32_t WeaponManager_get_MinigunTag_m2880631243_MetadataUsageId;
extern String_t* _stringLiteral478641456;
extern const uint32_t WeaponManager_get__initialWeaponName_m2841770456_MetadataUsageId;
extern String_t* _stringLiteral3510314171;
extern const uint32_t WeaponManager_get_PickWeaponName_m2507155128_MetadataUsageId;
extern String_t* _stringLiteral2801010509;
extern const uint32_t WeaponManager_get_MultiplayerMeleeTag_m3765635439_MetadataUsageId;
extern String_t* _stringLiteral781430816;
extern const uint32_t WeaponManager_get_SwordWeaponName_m1884679502_MetadataUsageId;
extern String_t* _stringLiteral204785386;
extern const uint32_t WeaponManager_get_CombatRifleWeaponName_m1295803920_MetadataUsageId;
extern String_t* _stringLiteral2543437546;
extern const uint32_t WeaponManager_get_GoldenEagleWeaponName_m1120865988_MetadataUsageId;
extern String_t* _stringLiteral4117415658;
extern const uint32_t WeaponManager_get_MagicBowWeaponName_m3487257396_MetadataUsageId;
extern String_t* _stringLiteral2161100522;
extern const uint32_t WeaponManager_get_SpasWeaponName_m2154833812_MetadataUsageId;
extern String_t* _stringLiteral3735078634;
extern const uint32_t WeaponManager_get_GoldenAxeWeaponnName_m3989543615_MetadataUsageId;
extern String_t* _stringLiteral1778763498;
extern const uint32_t WeaponManager_get_ChainsawWN_m2959097056_MetadataUsageId;
extern String_t* _stringLiteral3352741610;
extern const uint32_t WeaponManager_get_FAMASWN_m419502995_MetadataUsageId;
extern String_t* _stringLiteral1396426474;
extern const uint32_t WeaponManager_get_GlockWN_m326926806_MetadataUsageId;
extern String_t* _stringLiteral2970404586;
extern const uint32_t WeaponManager_get_ScytheWN_m2686880199_MetadataUsageId;
extern String_t* _stringLiteral1014089450;
extern const uint32_t WeaponManager_get_ShovelWN_m4277715065_MetadataUsageId;
extern String_t* _stringLiteral1770869327;
extern const uint32_t WeaponManager_get_HammerWN_m1436230627_MetadataUsageId;
extern String_t* _stringLiteral4109521487;
extern const uint32_t WeaponManager_get_Sword_2_WN_m3042372647_MetadataUsageId;
extern String_t* _stringLiteral1388532303;
extern const uint32_t WeaponManager_get_StaffWN_m1075261091_MetadataUsageId;
extern String_t* _stringLiteral3727184463;
extern const uint32_t WeaponManager_get_LaserRifleWN_m92723408_MetadataUsageId;
extern String_t* _stringLiteral1006195279;
extern const uint32_t WeaponManager_get_LightSwordWN_m405515106_MetadataUsageId;
extern String_t* _stringLiteral3344847439;
extern const uint32_t WeaponManager_get_BerettaWN_m872803409_MetadataUsageId;
extern String_t* _stringLiteral623858255;
extern const uint32_t WeaponManager_get_MaceWN_m1604268619_MetadataUsageId;
extern String_t* _stringLiteral2962510415;
extern const uint32_t WeaponManager_get_CrossbowWN_m1140501696_MetadataUsageId;
extern String_t* _stringLiteral241521231;
extern const uint32_t WeaponManager_get_MinigunWN_m3839728566_MetadataUsageId;
extern String_t* _stringLiteral1305674868;
extern const uint32_t WeaponManager_GetWeaponPrefabs_m971570581_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t1417781964_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Weapon_t4063826929_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* WeaponsComparer_t4255210887_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_IndexOf_TisString_t_m3727315756_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var;
extern String_t* _stringLiteral3373989363;
extern String_t* _stringLiteral3984397021;
extern String_t* _stringLiteral1550659595;
extern String_t* _stringLiteral62940736;
extern const uint32_t WeaponManager_Reset_m1150209106_MetadataUsageId;
extern RuntimeClass* Storager_t283934908_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral446209602;
extern const uint32_t WeaponManager_AddWeaponIfBought_m1585898930_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t WeaponManager_AddWeapon_m4003918992_MetadataUsageId;
extern const uint32_t WeaponManager_GetPickPrefab_m1591361075_MetadataUsageId;
extern const uint32_t WeaponManager_GetSwordPrefab_m1472854058_MetadataUsageId;
extern const uint32_t WeaponManager_GetCombatRiflePrefab_m2496607767_MetadataUsageId;
extern const uint32_t WeaponManager_GetMacePrefab_m2206130233_MetadataUsageId;
extern const uint32_t WeaponManager_GetCrossbowPrefab_m2110084666_MetadataUsageId;
extern const uint32_t WeaponManager_GetMinigunPrefab_m2283339191_MetadataUsageId;
extern const uint32_t WeaponManager_GetGoldenEaglePrefab_m2095640434_MetadataUsageId;
extern const uint32_t WeaponManager_GetMagicBowPrefab_m250447049_MetadataUsageId;
extern const uint32_t WeaponManager_GetSPASPrefab_m536042736_MetadataUsageId;
extern const uint32_t WeaponManager_GetStaffPrefab_m3154531876_MetadataUsageId;
extern const uint32_t WeaponManager_GetAxePrefab_m1640247276_MetadataUsageId;
extern const uint32_t WeaponManager_GetChainsawPrefab_m738668970_MetadataUsageId;
extern const uint32_t WeaponManager_GetGlockPrefab_m1509057101_MetadataUsageId;
extern const uint32_t WeaponManager_GetFAMASPrefab_m769449454_MetadataUsageId;
extern const uint32_t WeaponManager_GetScythePrefab_m4069152087_MetadataUsageId;
extern const uint32_t WeaponManager_GetShovelPrefab_m2835031729_MetadataUsageId;
extern const uint32_t WeaponManager_GetSword_2_Prefab_m3587141929_MetadataUsageId;
extern const uint32_t WeaponManager_GetHammerPrefab_m2557199588_MetadataUsageId;
extern const uint32_t WeaponManager_GetLaserRiflePrefab_m1890122545_MetadataUsageId;
extern const uint32_t WeaponManager_GetLightSwordPrefab_m3332159941_MetadataUsageId;
extern const uint32_t WeaponManager_GetBerettaPrefab_m4277481885_MetadataUsageId;
extern const uint32_t WeaponManager_AddAmmo_m778608817_MetadataUsageId;
extern const uint32_t WeaponManager_SetMaxAmmoFrAllWeapons_m2053703160_MetadataUsageId;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2353251714_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleIABManager_t3625898194_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WeaponManager_AddMinerWeaponToInventoryAndSaveInApp_m2343157213_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1226049488_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddSwordToInventoryAndSaveInApp_m2737097039_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddCombatRifle_m3322214953_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddGoldenEagle_m2174282641_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddMagicBow_m2544710047_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddGoldenAxe_m3289765478_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddSPAS_m204641602_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddChainsaw_m774115026_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddGlock_m413525425_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddFAMAS_m3976141324_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddScythe_m990556609_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddShovel_m3092487190_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddSword_2_m3702998587_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddHammer_m1065716975_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddStaff_m949763208_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddLaser_m549971975_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddLightSword_m1051082219_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddBeretta_m3812811887_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddMace_m2968260438_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddCrossbow_m4173362676_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddMinigun_m443211274_RuntimeMethod_var;
extern const RuntimeMethod* WeaponManager_AddWeapon_m3739412190_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2637699291_RuntimeMethod_var;
extern const uint32_t WeaponManager_Start_m1945335170_MetadataUsageId;
extern RuntimeClass* Player_move_c_t367674069_il2cpp_TypeInfo_var;
extern const uint32_t WeaponManager_AddStaff_m949763208_MetadataUsageId;
extern const uint32_t WeaponManager_AddLaser_m549971975_MetadataUsageId;
extern const uint32_t WeaponManager_AddGoldenAxe_m3289765478_MetadataUsageId;
extern const uint32_t WeaponManager_AddLightSword_m1051082219_MetadataUsageId;
extern const uint32_t WeaponManager_AddMace_m2968260438_MetadataUsageId;
extern const uint32_t WeaponManager_AddCrossbow_m4173362676_MetadataUsageId;
extern const uint32_t WeaponManager_AddMinigun_m443211274_MetadataUsageId;
extern const uint32_t WeaponManager_AddBeretta_m3812811887_MetadataUsageId;
extern const uint32_t WeaponManager_AddSPAS_m204641602_MetadataUsageId;
extern const uint32_t WeaponManager_AddChainsaw_m774115026_MetadataUsageId;
extern const uint32_t WeaponManager_AddGlock_m413525425_MetadataUsageId;
extern const uint32_t WeaponManager_AddFAMAS_m3976141324_MetadataUsageId;
extern const uint32_t WeaponManager_AddScythe_m990556609_MetadataUsageId;
extern const uint32_t WeaponManager_AddShovel_m3092487190_MetadataUsageId;
extern const uint32_t WeaponManager_AddSword_2_m3702998587_MetadataUsageId;
extern const uint32_t WeaponManager_AddHammer_m1065716975_MetadataUsageId;
extern const uint32_t WeaponManager_AddMinerWeaponToInventoryAndSaveInApp_m2343157213_MetadataUsageId;
extern const uint32_t WeaponManager_AddSwordToInventoryAndSaveInApp_m2737097039_MetadataUsageId;
extern const uint32_t WeaponManager_AddCombatRifle_m3322214953_MetadataUsageId;
extern const uint32_t WeaponManager_AddGoldenEagle_m2174282641_MetadataUsageId;
extern const uint32_t WeaponManager_AddMagicBow_m2544710047_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WeaponManager_AddMinerWeapon_m2167009370_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m789394797_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3836654965_RuntimeMethod_var;
extern String_t* _stringLiteral3454449607;
extern const uint32_t WeaponManager_AddMinerWeapon_m2167009370_MetadataUsageId;
extern const uint32_t WeaponManager_OnDestroy_m3720636030_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var;
extern String_t* _stringLiteral3159092532;
extern String_t* _stringLiteral1198113798;
extern String_t* _stringLiteral1579837185;
extern const uint32_t WeaponManager_Reload_m3434657586_MetadataUsageId;
extern const uint32_t WeaponsComparer_Compare_m3053565803_MetadataUsageId;
extern String_t* _stringLiteral3059002535;
extern String_t* _stringLiteral3913598698;
extern String_t* _stringLiteral1184715343;
extern String_t* _stringLiteral2750799284;
extern String_t* _stringLiteral4269829058;
extern const uint32_t WeaponsComparer__cctor_m2579786819_MetadataUsageId;
extern RuntimeClass* WebViewStarter_t2221011868_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2019918284_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisWebViewObject_t110525398_m2285099848_RuntimeMethod_var;
extern const RuntimeMethod* WebViewStarter__003CStartBrowser_003Em__25_m809913710_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4099869023_RuntimeMethod_var;
extern String_t* _stringLiteral3400668300;
extern String_t* _stringLiteral1838291095;
extern String_t* _stringLiteral465198619;
extern const uint32_t WebViewStarter_StartBrowser_m3740443725_MetadataUsageId;
extern String_t* _stringLiteral1470094735;
extern const uint32_t WebViewStarter__003CStartBrowser_003Em__25_m809913710_MetadataUsageId;
extern const uint32_t Rotator_Update_m4243822121_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2753864082_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m463784026_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m909264078_RuntimeMethod_var;
extern const uint32_t ZombieCreator__ctor_m2802616556_MetadataUsageId;
extern RuntimeClass* GlobalGameController_t4187904607_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m1363558904_RuntimeMethod_var;
extern const uint32_t ZombieCreator_set_NumOfDeadZombies_m2592177585_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3968569714_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3286979944_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4119991052_RuntimeMethod_var;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3451500431;
extern String_t* _stringLiteral3451434895;
extern String_t* _stringLiteral3451369359;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral3451565967;
extern String_t* _stringLiteral3451303823;
extern String_t* _stringLiteral3452614551;
extern String_t* _stringLiteral3451238287;
extern String_t* _stringLiteral3452614540;
extern String_t* _stringLiteral3451172751;
extern String_t* _stringLiteral3451107215;
extern String_t* _stringLiteral3452614538;
extern String_t* _stringLiteral3452614537;
extern String_t* _stringLiteral3452614552;
extern String_t* _stringLiteral3452090255;
extern String_t* _stringLiteral3452024719;
extern String_t* _stringLiteral3451565966;
extern String_t* _stringLiteral3451500430;
extern String_t* _stringLiteral3451434894;
extern String_t* _stringLiteral3451369358;
extern String_t* _stringLiteral3451303822;
extern String_t* _stringLiteral3451238286;
extern String_t* _stringLiteral2091790128;
extern String_t* _stringLiteral2506032608;
extern const uint32_t ZombieCreator_Awake_m2687851732_MetadataUsageId;
extern String_t* _stringLiteral19716277;
extern String_t* _stringLiteral1887046119;
extern const uint32_t ZombieCreator_Start_m2270072244_MetadataUsageId;
extern RuntimeClass* U3CAddZombiesU3Ec__Iterator0_t813183650_il2cpp_TypeInfo_var;
extern const uint32_t ZombieCreator_AddZombies_m2537486331_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2263725670_RuntimeMethod_var;
extern const uint32_t ZombieCreator__createPos_m1145009354_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern String_t* _stringLiteral1984859785;
extern String_t* _stringLiteral791825090;
extern const uint32_t ZombieCreator__createBoss_m3329339339_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m910824056_RuntimeMethod_var;
extern const uint32_t U3CAddZombiesU3Ec__Iterator0_MoveNext_m899883553_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CAddZombiesU3Ec__Iterator0_Reset_m425453902_RuntimeMethod_var;
extern const uint32_t U3CAddZombiesU3Ec__Iterator0_Reset_m425453902_MetadataUsageId;
extern const uint32_t ZombiManager__ctor_m1715391505_MetadataUsageId;
extern const uint32_t ZombiManager_Awake_m3204033274_MetadataUsageId;
extern const uint32_t ZombiManager_Start_m3995147773_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459_RuntimeMethod_var;
extern String_t* _stringLiteral3828741091;
extern String_t* _stringLiteral3345659787;
extern String_t* _stringLiteral4073034013;
extern String_t* _stringLiteral760905195;
extern const uint32_t ZombiManager_Update_m3169221655_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisWeaponManager_t1762453775_m1321501039_RuntimeMethod_var;
extern String_t* _stringLiteral757629381;
extern const uint32_t ZombiManager_win_m1129851346_MetadataUsageId;
extern RuntimeClass* PhotonNetwork_t1610183659_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1408226020;
extern const uint32_t ZombiManager_addZombi_m2696549348_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisZombiUpravlenie_t207883660_m132784980_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPhotonView_t2207721820_m3241823210_RuntimeMethod_var;
extern const uint32_t ZombiManager_addZombiRPC_m1428755676_MetadataUsageId;
extern const uint32_t ZombiManagerSynch__ctor_m3226073958_MetadataUsageId;
extern String_t* _stringLiteral3947038993;
extern String_t* _stringLiteral3126235553;
extern const uint32_t ZombiManagerSynch_Awake_m51563590_MetadataUsageId;
extern const uint32_t ZombiManagerSynch_OnPhotonSerializeView_m2105050500_MetadataUsageId;
extern const uint32_t ZombiSynchPhoton__ctor_m3051977115_MetadataUsageId;
extern const uint32_t ZombiSynchPhoton_Awake_m3689040130_MetadataUsageId;
extern const uint32_t ZombiSynchPhoton_OnPhotonSerializeView_m1333215130_MetadataUsageId;
extern const uint32_t ZombiSynchPhoton_Update_m3178393213_MetadataUsageId;
extern String_t* _stringLiteral1628612613;
extern String_t* _stringLiteral1516857528;
extern String_t* _stringLiteral1724668041;
extern String_t* _stringLiteral2044377756;
extern String_t* _stringLiteral1550377962;
extern String_t* _stringLiteral2037693092;
extern String_t* _stringLiteral4008264625;
extern const uint32_t ZombiUpravlenie__ctor_m1271466282_MetadataUsageId;
extern const uint32_t ZombiUpravlenie_myCAnim_m2122570633_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSounds_t3004079410_m1008272002_RuntimeMethod_var;
extern String_t* _stringLiteral3492311660;
extern const uint32_t ZombiUpravlenie_Awake_m2377052954_MetadataUsageId;
extern String_t* _stringLiteral1222348739;
extern String_t* _stringLiteral36649133;
extern String_t* _stringLiteral2113259803;
extern const uint32_t ZombiUpravlenie_setHealth_m2509392904_MetadataUsageId;
extern RuntimeClass* ZombiUpravlenie_t207883660_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture_t3661962703_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSkinsManagerPixlGun_t2582742119_m152784281_RuntimeMethod_var;
extern String_t* _stringLiteral3919516058;
extern String_t* _stringLiteral1890043936;
extern const uint32_t ZombiUpravlenie_SetSkinForObj_m3191347847_MetadataUsageId;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3141998910;
extern String_t* _stringLiteral876025908;
extern const uint32_t ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740_MetadataUsageId;
extern RuntimeClass* U3CFlashU3Ec__Iterator0_t2431851929_il2cpp_TypeInfo_var;
extern const uint32_t ZombiUpravlenie_Flash_m741033771_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisZombiManager_t1666808103_m2321611112_RuntimeMethod_var;
extern String_t* _stringLiteral1977428022;
extern const uint32_t ZombiUpravlenie_Start_m3702314092_MetadataUsageId;
extern String_t* _stringLiteral2684322539;
extern const uint32_t ZombiUpravlenie_setId_m1049574680_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPhotonView_t2207721820_m3929953755_RuntimeMethod_var;
extern const uint32_t ZombiUpravlenie_setIdRPC_m2598132096_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisPlayer_move_c_t367674069_m2300611317_RuntimeMethod_var;
extern String_t* _stringLiteral1151346551;
extern String_t* _stringLiteral2288167791;
extern const uint32_t ZombiUpravlenie_Update_m3480705553_MetadataUsageId;
extern RuntimeClass* DelayedCallback_t4289022917_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ZombiUpravlenie_StartFall_m472706208_RuntimeMethod_var;
extern const RuntimeMethod* ZombiUpravlenie_DestroySelf_m3573195349_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpawnMonster_t4219141508_m4183193302_RuntimeMethod_var;
extern const uint32_t ZombiUpravlenie_Death_m4125197009_MetadataUsageId;
extern const uint32_t ZombiUpravlenie_DestroySelf_m3573195349_MetadataUsageId;
extern const uint32_t ZombiUpravlenie_Walk_m587632063_MetadataUsageId;
extern String_t* _stringLiteral3041927763;
extern const uint32_t ZombiUpravlenie_PlayZombieRun_m24001830_MetadataUsageId;
extern String_t* _stringLiteral2629937081;
extern const uint32_t ZombiUpravlenie_PlayZombieAttack_m2946499684_MetadataUsageId;
extern const uint32_t ZombiUpravlenie_PlayZombieRunRPC_m1293458684_MetadataUsageId;
extern const uint32_t ZombiUpravlenie_PlayZombieAttackRPC_m1347243381_MetadataUsageId;
extern RuntimeClass* U3C___DelayedCallbackU3Ec__Iterator1_t766208805_il2cpp_TypeInfo_var;
extern const uint32_t ZombiUpravlenie____DelayedCallback_m2093632133_MetadataUsageId;
extern const uint32_t U3C___DelayedCallbackU3Ec__Iterator1_MoveNext_m2566753824_MetadataUsageId;
extern const RuntimeMethod* U3C___DelayedCallbackU3Ec__Iterator1_Reset_m2249508115_RuntimeMethod_var;
extern const uint32_t U3C___DelayedCallbackU3Ec__Iterator1_Reset_m2249508115_MetadataUsageId;
extern const uint32_t U3CFlashU3Ec__Iterator0_MoveNext_m818249336_MetadataUsageId;
extern const RuntimeMethod* U3CFlashU3Ec__Iterator0_Reset_m3271548494_RuntimeMethod_var;
extern const uint32_t U3CFlashU3Ec__Iterator0_Reset_m3271548494_MetadataUsageId;
extern const uint32_t ZoomCamera_Update_m3942772807_MetadataUsageId;
struct Vector3_t3722313464 ;

struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t1417781964;
struct GameObjectU5BU5D_t3328599146;
struct ObjectU5BU5D_t2843939325;
struct MaterialU5BU5D_t561872642;
struct SingleU5BU5D_t1444911251;


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
#ifndef WEBVIEWSTARTER_T2221011868_H
#define WEBVIEWSTARTER_T2221011868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebViewStarter
struct  WebViewStarter_t2221011868  : public RuntimeObject
{
public:

public:
};

struct WebViewStarter_t2221011868_StaticFields
{
public:
	// System.Action`1<System.String> WebViewStarter::_003C_003Ef__am_0024cache0
	Action_1_t2019918284 * ____003C_003Ef__am_0024cache0_0;
	// System.Action`1<System.String> WebViewStarter::<>f__mg$cache0
	Action_1_t2019918284 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of__003C_003Ef__am_0024cache0_0() { return static_cast<int32_t>(offsetof(WebViewStarter_t2221011868_StaticFields, ____003C_003Ef__am_0024cache0_0)); }
	inline Action_1_t2019918284 * get__003C_003Ef__am_0024cache0_0() const { return ____003C_003Ef__am_0024cache0_0; }
	inline Action_1_t2019918284 ** get_address_of__003C_003Ef__am_0024cache0_0() { return &____003C_003Ef__am_0024cache0_0; }
	inline void set__003C_003Ef__am_0024cache0_0(Action_1_t2019918284 * value)
	{
		____003C_003Ef__am_0024cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(WebViewStarter_t2221011868_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t2019918284 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t2019918284 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t2019918284 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBVIEWSTARTER_T2221011868_H
#ifndef LIST_1_T2753864082_H
#define LIST_1_T2753864082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String[]>
struct  List_1_t2753864082  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5DU5BU5D_t2611993717* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____items_1)); }
	inline StringU5BU5DU5BU5D_t2611993717* get__items_1() const { return ____items_1; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5DU5BU5D_t2611993717* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2753864082_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5DU5BU5D_t2611993717* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2753864082_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5DU5BU5D_t2611993717* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5DU5BU5D_t2611993717* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2753864082_H
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
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
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
#endif // ARRAYLIST_T2718874744_H
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
#ifndef DICTIONARY_2_T1049633776_H
#define DICTIONARY_2_T1049633776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct  Dictionary_2_t1049633776  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ActionU5BU5D_t388269512* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___valueSlots_7)); }
	inline ActionU5BU5D_t388269512* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ActionU5BU5D_t388269512** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ActionU5BU5D_t388269512* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1049633776_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3533648524 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1049633776_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3533648524 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3533648524 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3533648524 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1049633776_H
#ifndef WEAPONSCOMPARER_T4255210887_H
#define WEAPONSCOMPARER_T4255210887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponsComparer
struct  WeaponsComparer_t4255210887  : public RuntimeObject
{
public:

public:
};

struct WeaponsComparer_t4255210887_StaticFields
{
public:
	// System.Int32 WeaponsComparer::baseLngth
	int32_t ___baseLngth_0;
	// System.String[] WeaponsComparer::multiplayerWeaponsOrd
	StringU5BU5D_t1281789340* ___multiplayerWeaponsOrd_1;

public:
	inline static int32_t get_offset_of_baseLngth_0() { return static_cast<int32_t>(offsetof(WeaponsComparer_t4255210887_StaticFields, ___baseLngth_0)); }
	inline int32_t get_baseLngth_0() const { return ___baseLngth_0; }
	inline int32_t* get_address_of_baseLngth_0() { return &___baseLngth_0; }
	inline void set_baseLngth_0(int32_t value)
	{
		___baseLngth_0 = value;
	}

	inline static int32_t get_offset_of_multiplayerWeaponsOrd_1() { return static_cast<int32_t>(offsetof(WeaponsComparer_t4255210887_StaticFields, ___multiplayerWeaponsOrd_1)); }
	inline StringU5BU5D_t1281789340* get_multiplayerWeaponsOrd_1() const { return ___multiplayerWeaponsOrd_1; }
	inline StringU5BU5D_t1281789340** get_address_of_multiplayerWeaponsOrd_1() { return &___multiplayerWeaponsOrd_1; }
	inline void set_multiplayerWeaponsOrd_1(StringU5BU5D_t1281789340* value)
	{
		___multiplayerWeaponsOrd_1 = value;
		Il2CppCodeGenWriteBarrier((&___multiplayerWeaponsOrd_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPONSCOMPARER_T4255210887_H
#ifndef LIST_1_T2869380684_H
#define LIST_1_T2869380684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<WeaponManager/infoClient>
struct  List_1_t2869380684  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	infoClientU5BU5D_t561281939* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2869380684, ____items_1)); }
	inline infoClientU5BU5D_t561281939* get__items_1() const { return ____items_1; }
	inline infoClientU5BU5D_t561281939** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(infoClientU5BU5D_t561281939* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2869380684, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2869380684, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2869380684_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	infoClientU5BU5D_t561281939* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2869380684_StaticFields, ___EmptyArray_4)); }
	inline infoClientU5BU5D_t561281939* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline infoClientU5BU5D_t561281939** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(infoClientU5BU5D_t561281939* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2869380684_H
#ifndef U3C___DELAYEDCALLBACKU3EC__ITERATOR1_T766208805_H
#define U3C___DELAYEDCALLBACKU3EC__ITERATOR1_T766208805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiUpravlenie/<___DelayedCallback>c__Iterator1
struct  U3C___DelayedCallbackU3Ec__Iterator1_t766208805  : public RuntimeObject
{
public:
	// System.Single ZombiUpravlenie/<___DelayedCallback>c__Iterator1::time
	float ___time_0;
	// ZombiUpravlenie/DelayedCallback ZombiUpravlenie/<___DelayedCallback>c__Iterator1::callback
	DelayedCallback_t4289022917 * ___callback_1;
	// System.Object ZombiUpravlenie/<___DelayedCallback>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean ZombiUpravlenie/<___DelayedCallback>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 ZombiUpravlenie/<___DelayedCallback>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3C___DelayedCallbackU3Ec__Iterator1_t766208805, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3C___DelayedCallbackU3Ec__Iterator1_t766208805, ___callback_1)); }
	inline DelayedCallback_t4289022917 * get_callback_1() const { return ___callback_1; }
	inline DelayedCallback_t4289022917 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(DelayedCallback_t4289022917 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3C___DelayedCallbackU3Ec__Iterator1_t766208805, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3C___DelayedCallbackU3Ec__Iterator1_t766208805, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3C___DelayedCallbackU3Ec__Iterator1_t766208805, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C___DELAYEDCALLBACKU3EC__ITERATOR1_T766208805_H
#ifndef U3CFLASHU3EC__ITERATOR0_T2431851929_H
#define U3CFLASHU3EC__ITERATOR0_T2431851929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiUpravlenie/<Flash>c__Iterator0
struct  U3CFlashU3Ec__Iterator0_t2431851929  : public RuntimeObject
{
public:
	// ZombiUpravlenie ZombiUpravlenie/<Flash>c__Iterator0::$this
	ZombiUpravlenie_t207883660 * ___U24this_0;
	// System.Object ZombiUpravlenie/<Flash>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ZombiUpravlenie/<Flash>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 ZombiUpravlenie/<Flash>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CFlashU3Ec__Iterator0_t2431851929, ___U24this_0)); }
	inline ZombiUpravlenie_t207883660 * get_U24this_0() const { return ___U24this_0; }
	inline ZombiUpravlenie_t207883660 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(ZombiUpravlenie_t207883660 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CFlashU3Ec__Iterator0_t2431851929, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CFlashU3Ec__Iterator0_t2431851929, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CFlashU3Ec__Iterator0_t2431851929, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFLASHU3EC__ITERATOR0_T2431851929_H
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
#ifndef DEFS_T3298467154_H
#define DEFS_T3298467154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Defs
struct  Defs_t3298467154  : public RuntimeObject
{
public:

public:
};

struct Defs_t3298467154_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Defs::mapNamesForUser
	Dictionary_2_t1632706988 * ___mapNamesForUser_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Defs::levelNumsForMusicInMult
	Dictionary_2_t2736202052 * ___levelNumsForMusicInMult_1;
	// System.Collections.Generic.List`1<System.Int32> Defs::levelsWithVarY
	List_1_t128053199 * ___levelsWithVarY_2;
	// System.Int32 Defs::NumberOfElixirs
	int32_t ___NumberOfElixirs_3;
	// System.String[] Defs::MainMenuScenes
	StringU5BU5D_t1281789340* ___MainMenuScenes_4;

public:
	inline static int32_t get_offset_of_mapNamesForUser_0() { return static_cast<int32_t>(offsetof(Defs_t3298467154_StaticFields, ___mapNamesForUser_0)); }
	inline Dictionary_2_t1632706988 * get_mapNamesForUser_0() const { return ___mapNamesForUser_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_mapNamesForUser_0() { return &___mapNamesForUser_0; }
	inline void set_mapNamesForUser_0(Dictionary_2_t1632706988 * value)
	{
		___mapNamesForUser_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapNamesForUser_0), value);
	}

	inline static int32_t get_offset_of_levelNumsForMusicInMult_1() { return static_cast<int32_t>(offsetof(Defs_t3298467154_StaticFields, ___levelNumsForMusicInMult_1)); }
	inline Dictionary_2_t2736202052 * get_levelNumsForMusicInMult_1() const { return ___levelNumsForMusicInMult_1; }
	inline Dictionary_2_t2736202052 ** get_address_of_levelNumsForMusicInMult_1() { return &___levelNumsForMusicInMult_1; }
	inline void set_levelNumsForMusicInMult_1(Dictionary_2_t2736202052 * value)
	{
		___levelNumsForMusicInMult_1 = value;
		Il2CppCodeGenWriteBarrier((&___levelNumsForMusicInMult_1), value);
	}

	inline static int32_t get_offset_of_levelsWithVarY_2() { return static_cast<int32_t>(offsetof(Defs_t3298467154_StaticFields, ___levelsWithVarY_2)); }
	inline List_1_t128053199 * get_levelsWithVarY_2() const { return ___levelsWithVarY_2; }
	inline List_1_t128053199 ** get_address_of_levelsWithVarY_2() { return &___levelsWithVarY_2; }
	inline void set_levelsWithVarY_2(List_1_t128053199 * value)
	{
		___levelsWithVarY_2 = value;
		Il2CppCodeGenWriteBarrier((&___levelsWithVarY_2), value);
	}

	inline static int32_t get_offset_of_NumberOfElixirs_3() { return static_cast<int32_t>(offsetof(Defs_t3298467154_StaticFields, ___NumberOfElixirs_3)); }
	inline int32_t get_NumberOfElixirs_3() const { return ___NumberOfElixirs_3; }
	inline int32_t* get_address_of_NumberOfElixirs_3() { return &___NumberOfElixirs_3; }
	inline void set_NumberOfElixirs_3(int32_t value)
	{
		___NumberOfElixirs_3 = value;
	}

	inline static int32_t get_offset_of_MainMenuScenes_4() { return static_cast<int32_t>(offsetof(Defs_t3298467154_StaticFields, ___MainMenuScenes_4)); }
	inline StringU5BU5D_t1281789340* get_MainMenuScenes_4() const { return ___MainMenuScenes_4; }
	inline StringU5BU5D_t1281789340** get_address_of_MainMenuScenes_4() { return &___MainMenuScenes_4; }
	inline void set_MainMenuScenes_4(StringU5BU5D_t1281789340* value)
	{
		___MainMenuScenes_4 = value;
		Il2CppCodeGenWriteBarrier((&___MainMenuScenes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFS_T3298467154_H
#ifndef U3CADDZOMBIESU3EC__ITERATOR0_T813183650_H
#define U3CADDZOMBIESU3EC__ITERATOR0_T813183650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieCreator/<AddZombies>c__Iterator0
struct  U3CAddZombiesU3Ec__Iterator0_t813183650  : public RuntimeObject
{
public:
	// System.Single ZombieCreator/<AddZombies>c__Iterator0::<halfLLength>__0
	float ___U3ChalfLLengthU3E__0_0;
	// System.Single ZombieCreator/<AddZombies>c__Iterator0::<radius>__0
	float ___U3CradiusU3E__0_1;
	// System.Int32 ZombieCreator/<AddZombies>c__Iterator0::<numOfZombsToAdd3>__1
	int32_t ___U3CnumOfZombsToAdd3U3E__1_2;
	// System.String[] ZombieCreator/<AddZombies>c__Iterator0::<enemies_2>__1
	StringU5BU5D_t1281789340* ___U3Cenemies_2U3E__1_3;
	// ZombieCreator ZombieCreator/<AddZombies>c__Iterator0::$this
	ZombieCreator_t3776728246 * ___U24this_4;
	// System.Object ZombieCreator/<AddZombies>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean ZombieCreator/<AddZombies>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 ZombieCreator/<AddZombies>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ChalfLLengthU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U3ChalfLLengthU3E__0_0)); }
	inline float get_U3ChalfLLengthU3E__0_0() const { return ___U3ChalfLLengthU3E__0_0; }
	inline float* get_address_of_U3ChalfLLengthU3E__0_0() { return &___U3ChalfLLengthU3E__0_0; }
	inline void set_U3ChalfLLengthU3E__0_0(float value)
	{
		___U3ChalfLLengthU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U3CradiusU3E__0_1)); }
	inline float get_U3CradiusU3E__0_1() const { return ___U3CradiusU3E__0_1; }
	inline float* get_address_of_U3CradiusU3E__0_1() { return &___U3CradiusU3E__0_1; }
	inline void set_U3CradiusU3E__0_1(float value)
	{
		___U3CradiusU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CnumOfZombsToAdd3U3E__1_2() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U3CnumOfZombsToAdd3U3E__1_2)); }
	inline int32_t get_U3CnumOfZombsToAdd3U3E__1_2() const { return ___U3CnumOfZombsToAdd3U3E__1_2; }
	inline int32_t* get_address_of_U3CnumOfZombsToAdd3U3E__1_2() { return &___U3CnumOfZombsToAdd3U3E__1_2; }
	inline void set_U3CnumOfZombsToAdd3U3E__1_2(int32_t value)
	{
		___U3CnumOfZombsToAdd3U3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3Cenemies_2U3E__1_3() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U3Cenemies_2U3E__1_3)); }
	inline StringU5BU5D_t1281789340* get_U3Cenemies_2U3E__1_3() const { return ___U3Cenemies_2U3E__1_3; }
	inline StringU5BU5D_t1281789340** get_address_of_U3Cenemies_2U3E__1_3() { return &___U3Cenemies_2U3E__1_3; }
	inline void set_U3Cenemies_2U3E__1_3(StringU5BU5D_t1281789340* value)
	{
		___U3Cenemies_2U3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cenemies_2U3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U24this_4)); }
	inline ZombieCreator_t3776728246 * get_U24this_4() const { return ___U24this_4; }
	inline ZombieCreator_t3776728246 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(ZombieCreator_t3776728246 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CAddZombiesU3Ec__Iterator0_t813183650, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDZOMBIESU3EC__ITERATOR0_T813183650_H
#ifndef PHOTONSTREAM_T1003850889_H
#define PHOTONSTREAM_T1003850889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonStream
struct  PhotonStream_t1003850889  : public RuntimeObject
{
public:
	// System.Boolean PhotonStream::write
	bool ___write_0;
	// System.Collections.Generic.List`1<System.Object> PhotonStream::data
	List_1_t257213610 * ___data_1;
	// System.Byte PhotonStream::currentItem
	uint8_t ___currentItem_2;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___write_0)); }
	inline bool get_write_0() const { return ___write_0; }
	inline bool* get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(bool value)
	{
		___write_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___data_1)); }
	inline List_1_t257213610 * get_data_1() const { return ___data_1; }
	inline List_1_t257213610 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(List_1_t257213610 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of_currentItem_2() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___currentItem_2)); }
	inline uint8_t get_currentItem_2() const { return ___currentItem_2; }
	inline uint8_t* get_address_of_currentItem_2() { return &___currentItem_2; }
	inline void set_currentItem_2(uint8_t value)
	{
		___currentItem_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONSTREAM_T1003850889_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef PHOTONMESSAGEINFO_T3855471533_H
#define PHOTONMESSAGEINFO_T3855471533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonMessageInfo
struct  PhotonMessageInfo_t3855471533  : public RuntimeObject
{
public:
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t3305149557 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t2207721820 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___sender_1)); }
	inline PhotonPlayer_t3305149557 * get_sender_1() const { return ___sender_1; }
	inline PhotonPlayer_t3305149557 ** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(PhotonPlayer_t3305149557 * value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier((&___sender_1), value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___photonView_2)); }
	inline PhotonView_t2207721820 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t2207721820 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONMESSAGEINFO_T3855471533_H
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
#ifndef WEAPON_T4063826929_H
#define WEAPON_T4063826929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t4063826929  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Weapon::weaponPrefab
	GameObject_t1113636619 * ___weaponPrefab_0;
	// System.Int32 Weapon::currentAmmoInBackpack
	int32_t ___currentAmmoInBackpack_1;
	// System.Int32 Weapon::currentAmmoInClip
	int32_t ___currentAmmoInClip_2;

public:
	inline static int32_t get_offset_of_weaponPrefab_0() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ___weaponPrefab_0)); }
	inline GameObject_t1113636619 * get_weaponPrefab_0() const { return ___weaponPrefab_0; }
	inline GameObject_t1113636619 ** get_address_of_weaponPrefab_0() { return &___weaponPrefab_0; }
	inline void set_weaponPrefab_0(GameObject_t1113636619 * value)
	{
		___weaponPrefab_0 = value;
		Il2CppCodeGenWriteBarrier((&___weaponPrefab_0), value);
	}

	inline static int32_t get_offset_of_currentAmmoInBackpack_1() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ___currentAmmoInBackpack_1)); }
	inline int32_t get_currentAmmoInBackpack_1() const { return ___currentAmmoInBackpack_1; }
	inline int32_t* get_address_of_currentAmmoInBackpack_1() { return &___currentAmmoInBackpack_1; }
	inline void set_currentAmmoInBackpack_1(int32_t value)
	{
		___currentAmmoInBackpack_1 = value;
	}

	inline static int32_t get_offset_of_currentAmmoInClip_2() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ___currentAmmoInClip_2)); }
	inline int32_t get_currentAmmoInClip_2() const { return ___currentAmmoInClip_2; }
	inline int32_t* get_address_of_currentAmmoInClip_2() { return &___currentAmmoInClip_2; }
	inline void set_currentAmmoInClip_2(int32_t value)
	{
		___currentAmmoInClip_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPON_T4063826929_H
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
#ifndef INFOCLIENT_T1397305942_H
#define INFOCLIENT_T1397305942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponManager/infoClient
struct  infoClient_t1397305942 
{
public:
	// System.String WeaponManager/infoClient::ipAddress
	String_t* ___ipAddress_0;
	// System.String WeaponManager/infoClient::name
	String_t* ___name_1;
	// System.String WeaponManager/infoClient::coments
	String_t* ___coments_2;

public:
	inline static int32_t get_offset_of_ipAddress_0() { return static_cast<int32_t>(offsetof(infoClient_t1397305942, ___ipAddress_0)); }
	inline String_t* get_ipAddress_0() const { return ___ipAddress_0; }
	inline String_t** get_address_of_ipAddress_0() { return &___ipAddress_0; }
	inline void set_ipAddress_0(String_t* value)
	{
		___ipAddress_0 = value;
		Il2CppCodeGenWriteBarrier((&___ipAddress_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(infoClient_t1397305942, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_coments_2() { return static_cast<int32_t>(offsetof(infoClient_t1397305942, ___coments_2)); }
	inline String_t* get_coments_2() const { return ___coments_2; }
	inline String_t** get_address_of_coments_2() { return &___coments_2; }
	inline void set_coments_2(String_t* value)
	{
		___coments_2 = value;
		Il2CppCodeGenWriteBarrier((&___coments_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WeaponManager/infoClient
struct infoClient_t1397305942_marshaled_pinvoke
{
	char* ___ipAddress_0;
	char* ___name_1;
	char* ___coments_2;
};
// Native definition for COM marshalling of WeaponManager/infoClient
struct infoClient_t1397305942_marshaled_com
{
	Il2CppChar* ___ipAddress_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___coments_2;
};
#endif // INFOCLIENT_T1397305942_H
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
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
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
#ifndef ONSERIALIZETRANSFORM_T1364648257_H
#define ONSERIALIZETRANSFORM_T1364648257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnSerializeTransform
struct  OnSerializeTransform_t1364648257 
{
public:
	// System.Int32 OnSerializeTransform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OnSerializeTransform_t1364648257, ___value___1)); }
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
#endif // ONSERIALIZETRANSFORM_T1364648257_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
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
#ifndef ONSERIALIZERIGIDBODY_T385167779_H
#define ONSERIALIZERIGIDBODY_T385167779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnSerializeRigidBody
struct  OnSerializeRigidBody_t385167779 
{
public:
	// System.Int32 OnSerializeRigidBody::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OnSerializeRigidBody_t385167779, ___value___1)); }
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
#endif // ONSERIALIZERIGIDBODY_T385167779_H
#ifndef VIEWSYNCHRONIZATION_T3183556584_H
#define VIEWSYNCHRONIZATION_T3183556584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewSynchronization
struct  ViewSynchronization_t3183556584 
{
public:
	// System.Int32 ViewSynchronization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ViewSynchronization_t3183556584, ___value___1)); }
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
#endif // VIEWSYNCHRONIZATION_T3183556584_H
#ifndef TRACKEDREFERENCE_T1199777556_H
#define TRACKEDREFERENCE_T1199777556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1199777556  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1199777556, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1199777556_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef NAVMESHPATH_T2698325962_H
#define NAVMESHPATH_T2698325962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPath
struct  NavMeshPath_t2698325962  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_corners
	Vector3U5BU5D_t1718750761* ___m_corners_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_corners_1() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_corners_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_corners_1() const { return ___m_corners_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_corners_1() { return &___m_corners_1; }
	inline void set_m_corners_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_corners_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_corners_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
#endif // NAVMESHPATH_T2698325962_H
#ifndef PHOTONTARGETS_T2730697525_H
#define PHOTONTARGETS_T2730697525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTargets
struct  PhotonTargets_t2730697525 
{
public:
	// System.Int32 PhotonTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhotonTargets_t2730697525, ___value___1)); }
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
#endif // PHOTONTARGETS_T2730697525_H
#ifndef GOOGLEPURCHASESTATE_T1480148339_H
#define GOOGLEPURCHASESTATE_T1480148339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePurchase/GooglePurchaseState
struct  GooglePurchaseState_t1480148339 
{
public:
	// System.Int32 GooglePurchase/GooglePurchaseState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GooglePurchaseState_t1480148339, ___value___1)); }
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
#endif // GOOGLEPURCHASESTATE_T1480148339_H
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
#ifndef GLOBALGAMECONTROLLER_T4187904607_H
#define GLOBALGAMECONTROLLER_T4187904607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlobalGameController
struct  GlobalGameController_t4187904607  : public RuntimeObject
{
public:

public:
};

struct GlobalGameController_t4187904607_StaticFields
{
public:
	// System.Int32 GlobalGameController::NumOfLevels
	int32_t ___NumOfLevels_0;
	// System.Int32 GlobalGameController::_currentLevel
	int32_t ____currentLevel_1;
	// System.Int32 GlobalGameController::_allLevelsCompleted
	int32_t ____allLevelsCompleted_2;
	// System.Int32 GlobalGameController::score
	int32_t ___score_3;
	// System.Boolean GlobalGameController::showTableMyPlayer
	bool ___showTableMyPlayer_4;
	// System.Boolean GlobalGameController::isFullVersion
	bool ___isFullVersion_5;
	// UnityEngine.Vector3 GlobalGameController::posMyPlayer
	Vector3_t3722313464  ___posMyPlayer_6;
	// UnityEngine.Quaternion GlobalGameController::rotMyPlayer
	Quaternion_t2301928331  ___rotMyPlayer_7;
	// System.Single GlobalGameController::healthMyPlayer
	float ___healthMyPlayer_8;
	// System.Int32 GlobalGameController::numOfCompletedLevels
	int32_t ___numOfCompletedLevels_9;
	// System.Int32 GlobalGameController::totalNumOfCompletedLevels
	int32_t ___totalNumOfCompletedLevels_10;
	// System.Int32 GlobalGameController::_currentIndexInMapping
	int32_t ____currentIndexInMapping_11;
	// System.Collections.Generic.List`1<System.Int32> GlobalGameController::levelMapping
	List_1_t128053199 * ___levelMapping_12;
	// System.Int32 GlobalGameController::coinsBase
	int32_t ___coinsBase_13;
	// System.Int32 GlobalGameController::coinsBaseAdding
	int32_t ___coinsBaseAdding_14;
	// System.Int32 GlobalGameController::levelsToGetCoins
	int32_t ___levelsToGetCoins_15;
	// System.String GlobalGameController::AppVersion
	String_t* ___AppVersion_16;

public:
	inline static int32_t get_offset_of_NumOfLevels_0() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___NumOfLevels_0)); }
	inline int32_t get_NumOfLevels_0() const { return ___NumOfLevels_0; }
	inline int32_t* get_address_of_NumOfLevels_0() { return &___NumOfLevels_0; }
	inline void set_NumOfLevels_0(int32_t value)
	{
		___NumOfLevels_0 = value;
	}

	inline static int32_t get_offset_of__currentLevel_1() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ____currentLevel_1)); }
	inline int32_t get__currentLevel_1() const { return ____currentLevel_1; }
	inline int32_t* get_address_of__currentLevel_1() { return &____currentLevel_1; }
	inline void set__currentLevel_1(int32_t value)
	{
		____currentLevel_1 = value;
	}

	inline static int32_t get_offset_of__allLevelsCompleted_2() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ____allLevelsCompleted_2)); }
	inline int32_t get__allLevelsCompleted_2() const { return ____allLevelsCompleted_2; }
	inline int32_t* get_address_of__allLevelsCompleted_2() { return &____allLevelsCompleted_2; }
	inline void set__allLevelsCompleted_2(int32_t value)
	{
		____allLevelsCompleted_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_showTableMyPlayer_4() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___showTableMyPlayer_4)); }
	inline bool get_showTableMyPlayer_4() const { return ___showTableMyPlayer_4; }
	inline bool* get_address_of_showTableMyPlayer_4() { return &___showTableMyPlayer_4; }
	inline void set_showTableMyPlayer_4(bool value)
	{
		___showTableMyPlayer_4 = value;
	}

	inline static int32_t get_offset_of_isFullVersion_5() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___isFullVersion_5)); }
	inline bool get_isFullVersion_5() const { return ___isFullVersion_5; }
	inline bool* get_address_of_isFullVersion_5() { return &___isFullVersion_5; }
	inline void set_isFullVersion_5(bool value)
	{
		___isFullVersion_5 = value;
	}

	inline static int32_t get_offset_of_posMyPlayer_6() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___posMyPlayer_6)); }
	inline Vector3_t3722313464  get_posMyPlayer_6() const { return ___posMyPlayer_6; }
	inline Vector3_t3722313464 * get_address_of_posMyPlayer_6() { return &___posMyPlayer_6; }
	inline void set_posMyPlayer_6(Vector3_t3722313464  value)
	{
		___posMyPlayer_6 = value;
	}

	inline static int32_t get_offset_of_rotMyPlayer_7() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___rotMyPlayer_7)); }
	inline Quaternion_t2301928331  get_rotMyPlayer_7() const { return ___rotMyPlayer_7; }
	inline Quaternion_t2301928331 * get_address_of_rotMyPlayer_7() { return &___rotMyPlayer_7; }
	inline void set_rotMyPlayer_7(Quaternion_t2301928331  value)
	{
		___rotMyPlayer_7 = value;
	}

	inline static int32_t get_offset_of_healthMyPlayer_8() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___healthMyPlayer_8)); }
	inline float get_healthMyPlayer_8() const { return ___healthMyPlayer_8; }
	inline float* get_address_of_healthMyPlayer_8() { return &___healthMyPlayer_8; }
	inline void set_healthMyPlayer_8(float value)
	{
		___healthMyPlayer_8 = value;
	}

	inline static int32_t get_offset_of_numOfCompletedLevels_9() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___numOfCompletedLevels_9)); }
	inline int32_t get_numOfCompletedLevels_9() const { return ___numOfCompletedLevels_9; }
	inline int32_t* get_address_of_numOfCompletedLevels_9() { return &___numOfCompletedLevels_9; }
	inline void set_numOfCompletedLevels_9(int32_t value)
	{
		___numOfCompletedLevels_9 = value;
	}

	inline static int32_t get_offset_of_totalNumOfCompletedLevels_10() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___totalNumOfCompletedLevels_10)); }
	inline int32_t get_totalNumOfCompletedLevels_10() const { return ___totalNumOfCompletedLevels_10; }
	inline int32_t* get_address_of_totalNumOfCompletedLevels_10() { return &___totalNumOfCompletedLevels_10; }
	inline void set_totalNumOfCompletedLevels_10(int32_t value)
	{
		___totalNumOfCompletedLevels_10 = value;
	}

	inline static int32_t get_offset_of__currentIndexInMapping_11() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ____currentIndexInMapping_11)); }
	inline int32_t get__currentIndexInMapping_11() const { return ____currentIndexInMapping_11; }
	inline int32_t* get_address_of__currentIndexInMapping_11() { return &____currentIndexInMapping_11; }
	inline void set__currentIndexInMapping_11(int32_t value)
	{
		____currentIndexInMapping_11 = value;
	}

	inline static int32_t get_offset_of_levelMapping_12() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___levelMapping_12)); }
	inline List_1_t128053199 * get_levelMapping_12() const { return ___levelMapping_12; }
	inline List_1_t128053199 ** get_address_of_levelMapping_12() { return &___levelMapping_12; }
	inline void set_levelMapping_12(List_1_t128053199 * value)
	{
		___levelMapping_12 = value;
		Il2CppCodeGenWriteBarrier((&___levelMapping_12), value);
	}

	inline static int32_t get_offset_of_coinsBase_13() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___coinsBase_13)); }
	inline int32_t get_coinsBase_13() const { return ___coinsBase_13; }
	inline int32_t* get_address_of_coinsBase_13() { return &___coinsBase_13; }
	inline void set_coinsBase_13(int32_t value)
	{
		___coinsBase_13 = value;
	}

	inline static int32_t get_offset_of_coinsBaseAdding_14() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___coinsBaseAdding_14)); }
	inline int32_t get_coinsBaseAdding_14() const { return ___coinsBaseAdding_14; }
	inline int32_t* get_address_of_coinsBaseAdding_14() { return &___coinsBaseAdding_14; }
	inline void set_coinsBaseAdding_14(int32_t value)
	{
		___coinsBaseAdding_14 = value;
	}

	inline static int32_t get_offset_of_levelsToGetCoins_15() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___levelsToGetCoins_15)); }
	inline int32_t get_levelsToGetCoins_15() const { return ___levelsToGetCoins_15; }
	inline int32_t* get_address_of_levelsToGetCoins_15() { return &___levelsToGetCoins_15; }
	inline void set_levelsToGetCoins_15(int32_t value)
	{
		___levelsToGetCoins_15 = value;
	}

	inline static int32_t get_offset_of_AppVersion_16() { return static_cast<int32_t>(offsetof(GlobalGameController_t4187904607_StaticFields, ___AppVersion_16)); }
	inline String_t* get_AppVersion_16() const { return ___AppVersion_16; }
	inline String_t** get_address_of_AppVersion_16() { return &___AppVersion_16; }
	inline void set_AppVersion_16(String_t* value)
	{
		___AppVersion_16 = value;
		Il2CppCodeGenWriteBarrier((&___AppVersion_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALGAMECONTROLLER_T4187904607_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef ANIMATIONSTATE_T1108360407_H
#define ANIMATIONSTATE_T1108360407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t1108360407  : public TrackedReference_t1199777556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T1108360407_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
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
#ifndef GOOGLEPURCHASE_T2180784119_H
#define GOOGLEPURCHASE_T2180784119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePurchase
struct  GooglePurchase_t2180784119  : public RuntimeObject
{
public:
	// System.String GooglePurchase::<packageName>k__BackingField
	String_t* ___U3CpackageNameU3Ek__BackingField_0;
	// System.String GooglePurchase::<orderId>k__BackingField
	String_t* ___U3CorderIdU3Ek__BackingField_1;
	// System.String GooglePurchase::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_2;
	// System.String GooglePurchase::<developerPayload>k__BackingField
	String_t* ___U3CdeveloperPayloadU3Ek__BackingField_3;
	// System.String GooglePurchase::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_4;
	// System.Int64 GooglePurchase::<purchaseTime>k__BackingField
	int64_t ___U3CpurchaseTimeU3Ek__BackingField_5;
	// GooglePurchase/GooglePurchaseState GooglePurchase::<purchaseState>k__BackingField
	int32_t ___U3CpurchaseStateU3Ek__BackingField_6;
	// System.String GooglePurchase::<purchaseToken>k__BackingField
	String_t* ___U3CpurchaseTokenU3Ek__BackingField_7;
	// System.String GooglePurchase::<signature>k__BackingField
	String_t* ___U3CsignatureU3Ek__BackingField_8;
	// System.String GooglePurchase::<originalJson>k__BackingField
	String_t* ___U3CoriginalJsonU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CpackageNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CpackageNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CpackageNameU3Ek__BackingField_0() const { return ___U3CpackageNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CpackageNameU3Ek__BackingField_0() { return &___U3CpackageNameU3Ek__BackingField_0; }
	inline void set_U3CpackageNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CpackageNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpackageNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CorderIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CorderIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CorderIdU3Ek__BackingField_1() const { return ___U3CorderIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CorderIdU3Ek__BackingField_1() { return &___U3CorderIdU3Ek__BackingField_1; }
	inline void set_U3CorderIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CorderIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CorderIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CproductIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_2() const { return ___U3CproductIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_2() { return &___U3CproductIdU3Ek__BackingField_2; }
	inline void set_U3CproductIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CproductIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CdeveloperPayloadU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CdeveloperPayloadU3Ek__BackingField_3)); }
	inline String_t* get_U3CdeveloperPayloadU3Ek__BackingField_3() const { return ___U3CdeveloperPayloadU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdeveloperPayloadU3Ek__BackingField_3() { return &___U3CdeveloperPayloadU3Ek__BackingField_3; }
	inline void set_U3CdeveloperPayloadU3Ek__BackingField_3(String_t* value)
	{
		___U3CdeveloperPayloadU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdeveloperPayloadU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CtypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CtypeU3Ek__BackingField_4() const { return ___U3CtypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtypeU3Ek__BackingField_4() { return &___U3CtypeU3Ek__BackingField_4; }
	inline void set_U3CtypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CtypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtypeU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CpurchaseTimeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CpurchaseTimeU3Ek__BackingField_5)); }
	inline int64_t get_U3CpurchaseTimeU3Ek__BackingField_5() const { return ___U3CpurchaseTimeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CpurchaseTimeU3Ek__BackingField_5() { return &___U3CpurchaseTimeU3Ek__BackingField_5; }
	inline void set_U3CpurchaseTimeU3Ek__BackingField_5(int64_t value)
	{
		___U3CpurchaseTimeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpurchaseStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CpurchaseStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CpurchaseStateU3Ek__BackingField_6() const { return ___U3CpurchaseStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CpurchaseStateU3Ek__BackingField_6() { return &___U3CpurchaseStateU3Ek__BackingField_6; }
	inline void set_U3CpurchaseStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CpurchaseStateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CpurchaseTokenU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CpurchaseTokenU3Ek__BackingField_7)); }
	inline String_t* get_U3CpurchaseTokenU3Ek__BackingField_7() const { return ___U3CpurchaseTokenU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CpurchaseTokenU3Ek__BackingField_7() { return &___U3CpurchaseTokenU3Ek__BackingField_7; }
	inline void set_U3CpurchaseTokenU3Ek__BackingField_7(String_t* value)
	{
		___U3CpurchaseTokenU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpurchaseTokenU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CsignatureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CsignatureU3Ek__BackingField_8)); }
	inline String_t* get_U3CsignatureU3Ek__BackingField_8() const { return ___U3CsignatureU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CsignatureU3Ek__BackingField_8() { return &___U3CsignatureU3Ek__BackingField_8; }
	inline void set_U3CsignatureU3Ek__BackingField_8(String_t* value)
	{
		___U3CsignatureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsignatureU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CoriginalJsonU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GooglePurchase_t2180784119, ___U3CoriginalJsonU3Ek__BackingField_9)); }
	inline String_t* get_U3CoriginalJsonU3Ek__BackingField_9() const { return ___U3CoriginalJsonU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CoriginalJsonU3Ek__BackingField_9() { return &___U3CoriginalJsonU3Ek__BackingField_9; }
	inline void set_U3CoriginalJsonU3Ek__BackingField_9(String_t* value)
	{
		___U3CoriginalJsonU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CoriginalJsonU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEPURCHASE_T2180784119_H
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
#ifndef DELAYEDCALLBACK_T4289022917_H
#define DELAYEDCALLBACK_T4289022917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiUpravlenie/DelayedCallback
struct  DelayedCallback_t4289022917  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDCALLBACK_T4289022917_H
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
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
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
#ifndef ACTION_1_T2353251714_H
#define ACTION_1_T2353251714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<GooglePurchase>
struct  Action_1_t2353251714  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2353251714_H
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
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
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
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
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
#ifndef PLAYER_MOVE_C_T367674069_H
#define PLAYER_MOVE_C_T367674069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player_move_c
struct  Player_move_c_t367674069  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIStyle Player_move_c::restoreWindButStyle
	GUIStyle_t3956901511 * ___restoreWindButStyle_2;
	// UnityEngine.GameObject Player_move_c::customDialogPrefab
	GameObject_t1113636619 * ___customDialogPrefab_3;
	// UnityEngine.GameObject Player_move_c::chatViewer
	GameObject_t1113636619 * ___chatViewer_5;
	// UnityEngine.GUISkin Player_move_c::MySkin
	GUISkin_t1244372282 * ___MySkin_6;
	// UnityEngine.GameObject Player_move_c::myTable
	GameObject_t1113636619 * ___myTable_7;
	// UnityEngine.Texture2D Player_move_c::ammoTexture
	Texture2D_t3840446185 * ___ammoTexture_8;
	// UnityEngine.Texture2D Player_move_c::scoreTexture
	Texture2D_t3840446185 * ___scoreTexture_9;
	// UnityEngine.Texture2D Player_move_c::enemiesTxture
	Texture2D_t3840446185 * ___enemiesTxture_10;
	// UnityEngine.Texture Player_move_c::HeartTexture
	Texture_t3661962703 * ___HeartTexture_11;
	// UnityEngine.Texture Player_move_c::buyTexture
	Texture_t3661962703 * ___buyTexture_12;
	// UnityEngine.Texture Player_move_c::head_players
	Texture_t3661962703 * ___head_players_13;
	// UnityEngine.Texture Player_move_c::nicksStyle
	Texture_t3661962703 * ___nicksStyle_14;
	// UnityEngine.Texture Player_move_c::killsStyle
	Texture_t3661962703 * ___killsStyle_15;
	// UnityEngine.Texture Player_move_c::scoreTextureCOOP
	Texture_t3661962703 * ___scoreTextureCOOP_16;
	// UnityEngine.Texture Player_move_c::timeTexture
	Texture_t3661962703 * ___timeTexture_17;
	// UnityEngine.Texture2D Player_move_c::AimTexture
	Texture2D_t3840446185 * ___AimTexture_18;
	// System.Int32 Player_move_c::AimTextureWidth
	int32_t ___AimTextureWidth_19;
	// System.Int32 Player_move_c::AimTextureHeight
	int32_t ___AimTextureHeight_20;
	// UnityEngine.Transform Player_move_c::GunFlash
	Transform_t3600365921 * ___GunFlash_21;
	// System.Boolean Player_move_c::showGUIUnlockFullVersion
	bool ___showGUIUnlockFullVersion_22;
	// UnityEngine.Texture Player_move_c::fonFull
	Texture_t3661962703 * ___fonFull_23;
	// UnityEngine.Texture Player_move_c::fonFullNoInet
	Texture_t3661962703 * ___fonFullNoInet_24;
	// UnityEngine.Texture Player_move_c::fonChat
	Texture_t3661962703 * ___fonChat_25;
	// UnityEngine.Texture Player_move_c::tapChat
	Texture_t3661962703 * ___tapChat_26;
	// UnityEngine.GUIStyle Player_move_c::noStyle
	GUIStyle_t3956901511 * ___noStyle_27;
	// UnityEngine.GUIStyle Player_move_c::fullVerStyle
	GUIStyle_t3956901511 * ___fullVerStyle_28;
	// UnityEngine.GUIStyle Player_move_c::unlockStyle
	GUIStyle_t3956901511 * ___unlockStyle_29;
	// UnityEngine.GUIStyle Player_move_c::playersWindow
	GUIStyle_t3956901511 * ___playersWindow_30;
	// UnityEngine.GUIStyle Player_move_c::playersWindowFrags
	GUIStyle_t3956901511 * ___playersWindowFrags_31;
	// UnityEngine.GUIStyle Player_move_c::closeRanksStyle
	GUIStyle_t3956901511 * ___closeRanksStyle_32;
	// UnityEngine.GUIStyle Player_move_c::closeChatStyle
	GUIStyle_t3956901511 * ___closeChatStyle_33;
	// UnityEngine.GUIStyle Player_move_c::sendChatStyle
	GUIStyle_t3956901511 * ___sendChatStyle_34;
	// UnityEngine.GUIStyle Player_move_c::textChatStyle
	GUIStyle_t3956901511 * ___textChatStyle_35;
	// UnityEngine.GUIStyle Player_move_c::labelChatStyle
	GUIStyle_t3956901511 * ___labelChatStyle_36;
	// UnityEngine.GUIStyle Player_move_c::labelGameChatStyle
	GUIStyle_t3956901511 * ___labelGameChatStyle_37;
	// System.Int32 Player_move_c::BulletForce
	int32_t ___BulletForce_38;
	// UnityEngine.GameObject Player_move_c::renderAllObjectPrefab
	GameObject_t1113636619 * ___renderAllObjectPrefab_39;
	// UnityEngine.Texture Player_move_c::zaglushkaTexture
	Texture_t3661962703 * ___zaglushkaTexture_40;
	// UnityEngine.GUIStyle Player_move_c::labelStyle
	GUIStyle_t3956901511 * ___labelStyle_41;
	// System.Boolean Player_move_c::productPurchased
	bool ___productPurchased_42;
	// System.Boolean Player_move_c::killed
	bool ___killed_43;
	// UnityEngine.Vector2 Player_move_c::scrollPosition
	Vector2_t2156229523  ___scrollPosition_44;
	// ZombiManager Player_move_c::zombiManager
	ZombiManager_t1666808103 * ___zombiManager_45;
	// UnityEngine.GameObject Player_move_c::hole
	GameObject_t1113636619 * ___hole_46;
	// UnityEngine.GameObject Player_move_c::bloodParticle
	GameObject_t1113636619 * ___bloodParticle_47;
	// UnityEngine.GameObject Player_move_c::wallParticle
	GameObject_t1113636619 * ___wallParticle_48;
	// System.String Player_move_c::textChat
	String_t* ___textChat_49;
	// System.Boolean Player_move_c::showGUI
	bool ___showGUI_50;
	// System.Boolean Player_move_c::showRanks
	bool ___showRanks_51;
	// UnityEngine.Texture Player_move_c::minerWeaponSoldTexture
	Texture_t3661962703 * ___minerWeaponSoldTexture_52;
	// UnityEngine.Texture Player_move_c::swordSoldTexture
	Texture_t3661962703 * ___swordSoldTexture_53;
	// UnityEngine.Texture Player_move_c::hasElixirTexture
	Texture_t3661962703 * ___hasElixirTexture_54;
	// UnityEngine.Texture Player_move_c::combatRifleSoldTexture
	Texture_t3661962703 * ___combatRifleSoldTexture_55;
	// UnityEngine.Texture Player_move_c::goldenEagleSoldTexture
	Texture_t3661962703 * ___goldenEagleSoldTexture_56;
	// UnityEngine.Texture Player_move_c::magicBowSoldTexture
	Texture_t3661962703 * ___magicBowSoldTexture_57;
	// UnityEngine.Texture Player_move_c::axeBoughtTexture
	Texture_t3661962703 * ___axeBoughtTexture_58;
	// UnityEngine.Texture Player_move_c::spasBoughtTexture
	Texture_t3661962703 * ___spasBoughtTexture_59;
	// UnityEngine.Texture Player_move_c::chainsawOffTexture
	Texture_t3661962703 * ___chainsawOffTexture_60;
	// UnityEngine.Texture Player_move_c::famasOffTexture
	Texture_t3661962703 * ___famasOffTexture_61;
	// UnityEngine.Texture Player_move_c::GlockOffTexture
	Texture_t3661962703 * ___GlockOffTexture_62;
	// UnityEngine.Texture Player_move_c::scytheOffTexture
	Texture_t3661962703 * ___scytheOffTexture_63;
	// UnityEngine.Texture Player_move_c::shovelOffTexture
	Texture_t3661962703 * ___shovelOffTexture_64;
	// UnityEngine.Texture Player_move_c::elixir
	Texture_t3661962703 * ___elixir_65;
	// UnityEngine.Texture Player_move_c::multiplayerInappFon
	Texture_t3661962703 * ___multiplayerInappFon_66;
	// UnityEngine.Texture Player_move_c::ranksFon
	Texture_t3661962703 * ___ranksFon_67;
	// System.String[] Player_move_c::killedSpisok
	StringU5BU5D_t1281789340* ___killedSpisok_68;
	// UnityEngine.GUIStyle Player_move_c::elixirsCountStyle
	GUIStyle_t3956901511 * ___elixirsCountStyle_69;
	// UnityEngine.GUIStyle Player_move_c::ranksStyle
	GUIStyle_t3956901511 * ___ranksStyle_70;
	// UnityEngine.GUIStyle Player_move_c::chatStyle
	GUIStyle_t3956901511 * ___chatStyle_71;
	// UnityEngine.GUIStyle Player_move_c::shopFromPauseStyle
	GUIStyle_t3956901511 * ___shopFromPauseStyle_72;
	// UnityEngine.GUIStyle Player_move_c::killedStyle
	GUIStyle_t3956901511 * ___killedStyle_73;
	// UnityEngine.GUIStyle Player_move_c::combatRifleStyle
	GUIStyle_t3956901511 * ___combatRifleStyle_74;
	// UnityEngine.GUIStyle Player_move_c::goldenEagleInappStyle
	GUIStyle_t3956901511 * ___goldenEagleInappStyle_75;
	// UnityEngine.GUIStyle Player_move_c::magicBowInappStyle
	GUIStyle_t3956901511 * ___magicBowInappStyle_76;
	// UnityEngine.GUIStyle Player_move_c::spasStyle
	GUIStyle_t3956901511 * ___spasStyle_77;
	// UnityEngine.GUIStyle Player_move_c::axeStyle
	GUIStyle_t3956901511 * ___axeStyle_78;
	// UnityEngine.GUIStyle Player_move_c::famasStyle
	GUIStyle_t3956901511 * ___famasStyle_79;
	// UnityEngine.GUIStyle Player_move_c::glockStyle
	GUIStyle_t3956901511 * ___glockStyle_80;
	// UnityEngine.GUIStyle Player_move_c::chainsawStyle
	GUIStyle_t3956901511 * ___chainsawStyle_81;
	// UnityEngine.GUIStyle Player_move_c::scytheStyle
	GUIStyle_t3956901511 * ___scytheStyle_82;
	// UnityEngine.GUIStyle Player_move_c::shovelStyle
	GUIStyle_t3956901511 * ___shovelStyle_83;
	// UnityEngine.GUIStyle Player_move_c::restoreStyle
	GUIStyle_t3956901511 * ___restoreStyle_84;
	// UnityEngine.Vector3 Player_move_c::camPosition
	Vector3_t3722313464  ___camPosition_85;
	// UnityEngine.Quaternion Player_move_c::camRotaion
	Quaternion_t2301928331  ___camRotaion_86;
	// System.Boolean Player_move_c::showChat
	bool ___showChat_87;
	// System.Boolean Player_move_c::showChatOld
	bool ___showChatOld_88;
	// System.Boolean Player_move_c::isDeadFrame
	bool ___isDeadFrame_89;
	// System.String[] Player_move_c::productIdentifiers
	StringU5BU5D_t1281789340* ___productIdentifiers_90;
	// System.String Player_move_c::myIp
	String_t* ___myIp_91;
	// System.Boolean Player_move_c::isKilled
	bool ___isKilled_92;
	// System.Boolean Player_move_c::theEnd
	bool ___theEnd_93;
	// System.String Player_move_c::nickPobeditel
	String_t* ___nickPobeditel_94;
	// System.Boolean Player_move_c::_flashing
	bool ____flashing_95;
	// UnityEngine.Texture Player_move_c::hitTexture
	Texture_t3661962703 * ___hitTexture_96;
	// UnityEngine.Texture Player_move_c::_skin
	Texture_t3661962703 * ____skin_97;
	// System.Single Player_move_c::showNoInetTimer
	float ___showNoInetTimer_98;
	// System.Int32 Player_move_c::countKills
	int32_t ___countKills_99;
	// System.Int32 Player_move_c::maxCountKills
	int32_t ___maxCountKills_100;
	// UnityEngine.GameObject Player_move_c::_leftJoystick
	GameObject_t1113636619 * ____leftJoystick_101;
	// UnityEngine.GameObject Player_move_c::_rightJoystick
	GameObject_t1113636619 * ____rightJoystick_102;
	// System.Single Player_move_c::_curHealth
	float ____curHealth_103;
	// System.Single Player_move_c::_timeWhenPurchShown
	float ____timeWhenPurchShown_104;
	// System.Boolean Player_move_c::inAppOpenedFromPause
	bool ___inAppOpenedFromPause_105;
	// UnityEngine.Texture Player_move_c::sendTek
	Texture_t3661962703 * ___sendTek_106;
	// UnityEngine.Texture Player_move_c::sendUstanovlenii
	Texture_t3661962703 * ___sendUstanovlenii_107;
	// UnityEngine.Texture Player_move_c::restoreWindowTexture
	Texture_t3661962703 * ___restoreWindowTexture_108;
	// UnityEngine.GUIStyle Player_move_c::cancelEindButStyle
	GUIStyle_t3956901511 * ___cancelEindButStyle_109;
	// UnityEngine.GameObject Player_move_c::_label
	GameObject_t1113636619 * ____label_110;
	// System.Int32 Player_move_c::currentCategory
	int32_t ___currentCategory_111;
	// System.Single Player_move_c::MaxHealth
	float ___MaxHealth_112;
	// System.Single Player_move_c::curArmor
	float ___curArmor_113;
	// System.Single Player_move_c::MaxArmor
	float ___MaxArmor_114;
	// System.Int32 Player_move_c::AmmoBoxWidth
	int32_t ___AmmoBoxWidth_115;
	// System.Int32 Player_move_c::AmmoBoxHeight
	int32_t ___AmmoBoxHeight_116;
	// System.Int32 Player_move_c::AmmoBoxOffset
	int32_t ___AmmoBoxOffset_117;
	// System.Int32 Player_move_c::ScoreBoxWidth
	int32_t ___ScoreBoxWidth_118;
	// System.Int32 Player_move_c::ScoreBoxHeight
	int32_t ___ScoreBoxHeight_119;
	// System.Int32 Player_move_c::ScoreBoxOffset
	int32_t ___ScoreBoxOffset_120;
	// System.Single[] Player_move_c::timerShow
	SingleU5BU5D_t1444911251* ___timerShow_121;
	// UnityEngine.AudioClip Player_move_c::deadPlayerSound
	AudioClip_t3680889665 * ___deadPlayerSound_122;
	// UnityEngine.AudioClip Player_move_c::damagePlayerSound
	AudioClip_t3680889665 * ___damagePlayerSound_123;
	// System.Single Player_move_c::GunFlashLifetime
	float ___GunFlashLifetime_124;
	// UnityEngine.GameObject[] Player_move_c::zoneCreatePlayer
	GameObjectU5BU5D_t3328599146* ___zoneCreatePlayer_125;
	// UnityEngine.GUIStyle Player_move_c::ScoreBox
	GUIStyle_t3956901511 * ___ScoreBox_126;
	// UnityEngine.GUIStyle Player_move_c::EnemiesBox
	GUIStyle_t3956901511 * ___EnemiesBox_127;
	// UnityEngine.GUIStyle Player_move_c::AmmoBox
	GUIStyle_t3956901511 * ___AmmoBox_128;
	// UnityEngine.GUIStyle Player_move_c::HealthBox
	GUIStyle_t3956901511 * ___HealthBox_129;
	// UnityEngine.GUIStyle Player_move_c::pauseStyle
	GUIStyle_t3956901511 * ___pauseStyle_130;
	// UnityEngine.GUIStyle Player_move_c::pauseFonStyle
	GUIStyle_t3956901511 * ___pauseFonStyle_131;
	// UnityEngine.GUIStyle Player_move_c::resumeStyle
	GUIStyle_t3956901511 * ___resumeStyle_132;
	// UnityEngine.GUIStyle Player_move_c::menuStyle
	GUIStyle_t3956901511 * ___menuStyle_133;
	// UnityEngine.GUIStyle Player_move_c::soundStyle
	GUIStyle_t3956901511 * ___soundStyle_134;
	// UnityEngine.GUIStyle Player_move_c::buyStyle
	GUIStyle_t3956901511 * ___buyStyle_135;
	// UnityEngine.GUIStyle Player_move_c::resumePauseStyle
	GUIStyle_t3956901511 * ___resumePauseStyle_136;
	// UnityEngine.Texture Player_move_c::sensitPausePlashka
	Texture_t3661962703 * ___sensitPausePlashka_137;
	// UnityEngine.Texture Player_move_c::slow_fast
	Texture_t3661962703 * ___slow_fast_138;
	// UnityEngine.Texture Player_move_c::polzunok
	Texture_t3661962703 * ___polzunok_139;
	// System.Single Player_move_c::mySens
	float ___mySens_140;
	// UnityEngine.GUIStyle Player_move_c::sliderSensStyle
	GUIStyle_t3956901511 * ___sliderSensStyle_141;
	// UnityEngine.GUIStyle Player_move_c::thumbSensStyle
	GUIStyle_t3956901511 * ___thumbSensStyle_142;
	// UnityEngine.GUIStyle Player_move_c::enemiesLeftStyle
	GUIStyle_t3956901511 * ___enemiesLeftStyle_143;
	// UnityEngine.GameObject Player_move_c::damage
	GameObject_t1113636619 * ___damage_144;
	// System.Boolean Player_move_c::damageShown
	bool ___damageShown_145;
	// UnityEngine.Texture Player_move_c::pauseFon
	Texture_t3661962703 * ___pauseFon_146;
	// Pauser Player_move_c::_pauser
	Pauser_t2963840460 * ____pauser_147;
	// UnityEngine.Texture Player_move_c::pauseTitle
	Texture_t3661962703 * ___pauseTitle_148;
	// UnityEngine.GameObject Player_move_c::_gameController
	GameObject_t1113636619 * ____gameController_149;
	// System.Boolean Player_move_c::_backWasPressed
	bool ____backWasPressed_150;
	// UnityEngine.GameObject Player_move_c::_player
	GameObject_t1113636619 * ____player_151;
	// UnityEngine.GameObject Player_move_c::bulletPrefab
	GameObject_t1113636619 * ___bulletPrefab_152;
	// UnityEngine.GameObject Player_move_c::_bulletSpawnPoint
	GameObject_t1113636619 * ____bulletSpawnPoint_153;
	// UnityEngine.GameObject Player_move_c::_purchaseActivityIndicator
	GameObject_t1113636619 * ____purchaseActivityIndicator_154;
	// UnityEngine.GameObject Player_move_c::_inAppGameObject
	GameObject_t1113636619 * ____inAppGameObject_155;
	// StoreKitEventListener Player_move_c::_listener
	StoreKitEventListener_t3151468363 * ____listener_156;
	// UnityEngine.GUIStyle Player_move_c::puliInApp
	GUIStyle_t3956901511 * ___puliInApp_157;
	// UnityEngine.GUIStyle Player_move_c::healthInApp
	GUIStyle_t3956901511 * ___healthInApp_158;
	// UnityEngine.GUIStyle Player_move_c::pulemetInApp
	GUIStyle_t3956901511 * ___pulemetInApp_159;
	// UnityEngine.GUIStyle Player_move_c::crystalSwordInapp
	GUIStyle_t3956901511 * ___crystalSwordInapp_160;
	// UnityEngine.GUIStyle Player_move_c::elixirInapp
	GUIStyle_t3956901511 * ___elixirInapp_161;
	// System.Boolean Player_move_c::isInappWinOpen
	bool ___isInappWinOpen_162;
	// InGameGUI Player_move_c::inGameGUI
	InGameGUI_t3650018622 * ___inGameGUI_163;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Action,UnityEngine.GUIStyle>> Player_move_c::_actionsForPurchasedItems
	Dictionary_2_t736599152 * ____actionsForPurchasedItems_164;
	// System.Boolean Player_move_c::scrollEnabled
	bool ___scrollEnabled_165;
	// UnityEngine.Vector2 Player_move_c::scrollStartTouch
	Vector2_t2156229523  ___scrollStartTouch_166;
	// System.Single Player_move_c::otstupMejduProd
	float ___otstupMejduProd_167;
	// System.Single Player_move_c::widthPoduct
	float ___widthPoduct_168;
	// System.Collections.Generic.List`1<System.Object> Player_move_c::_products
	List_1_t257213610 * ____products_169;
	// System.Collections.Generic.ICollection`1<System.Object> Player_move_c::_productsFull
	RuntimeObject* ____productsFull_170;
	// ZombieCreator Player_move_c::_zombieCreator
	ZombieCreator_t3776728246 * ____zombieCreator_171;
	// WeaponManager Player_move_c::___weaponManager
	WeaponManager_t1762453775 * ______weaponManager_172;
	// UnityEngine.Texture Player_move_c::shopHead
	Texture_t3661962703 * ___shopHead_173;
	// UnityEngine.Texture Player_move_c::shopFon
	Texture_t3661962703 * ___shopFon_174;
	// UnityEngine.GUIStyle[] Player_move_c::catStyles
	GUIStyleU5BU5D_t2383250302* ___catStyles_175;
	// UnityEngine.GUIStyle Player_move_c::armorStyle
	GUIStyle_t3956901511 * ___armorStyle_176;
	// UnityEngine.Texture Player_move_c::armorShield
	Texture_t3661962703 * ___armorShield_177;
	// UnityEngine.Texture[] Player_move_c::categoryHeads
	TextureU5BU5D_t908295702* ___categoryHeads_178;
	// UnityEngine.Vector2 Player_move_c::leftFingerPos
	Vector2_t2156229523  ___leftFingerPos_179;
	// UnityEngine.Vector2 Player_move_c::leftFingerLastPos
	Vector2_t2156229523  ___leftFingerLastPos_180;
	// UnityEngine.Vector2 Player_move_c::leftFingerMovedBy
	Vector2_t2156229523  ___leftFingerMovedBy_181;
	// System.Boolean Player_move_c::canReceiveSwipes
	bool ___canReceiveSwipes_182;
	// System.Single Player_move_c::slideMagnitudeX
	float ___slideMagnitudeX_183;
	// System.Single Player_move_c::slideMagnitudeY
	float ___slideMagnitudeY_184;
	// UnityEngine.AudioClip Player_move_c::ChangeWeaponClip
	AudioClip_t3680889665 * ___ChangeWeaponClip_185;
	// PhotonView Player_move_c::photonView
	PhotonView_t2207721820 * ___photonView_186;
	// System.Single Player_move_c::height
	float ___height_187;
	// System.Single Player_move_c::_width
	float ____width_188;
	// UnityEngine.GUIStyle Player_move_c::sword_2_Style
	GUIStyle_t3956901511 * ___sword_2_Style_189;
	// UnityEngine.GUIStyle Player_move_c::hammerStyle
	GUIStyle_t3956901511 * ___hammerStyle_190;
	// UnityEngine.GUIStyle Player_move_c::staffStyle
	GUIStyle_t3956901511 * ___staffStyle_191;
	// UnityEngine.GUIStyle Player_move_c::laserStyle
	GUIStyle_t3956901511 * ___laserStyle_192;
	// UnityEngine.GUIStyle Player_move_c::lightSwordStyle
	GUIStyle_t3956901511 * ___lightSwordStyle_193;
	// UnityEngine.GUIStyle Player_move_c::berettaStyle
	GUIStyle_t3956901511 * ___berettaStyle_194;
	// UnityEngine.Texture Player_move_c::sword_2_off_text
	Texture_t3661962703 * ___sword_2_off_text_195;
	// UnityEngine.Texture Player_move_c::hammer_off_text
	Texture_t3661962703 * ___hammer_off_text_196;
	// UnityEngine.Texture Player_move_c::staffOff_text
	Texture_t3661962703 * ___staffOff_text_197;
	// UnityEngine.Texture Player_move_c::laserOff_text
	Texture_t3661962703 * ___laserOff_text_198;
	// UnityEngine.Texture Player_move_c::lightSwordOff_text
	Texture_t3661962703 * ___lightSwordOff_text_199;
	// UnityEngine.Texture Player_move_c::berettaOff_text
	Texture_t3661962703 * ___berettaOff_text_200;
	// UnityEngine.GUIStyle Player_move_c::resumeCategories
	GUIStyle_t3956901511 * ___resumeCategories_201;
	// UnityEngine.GUIStyle Player_move_c::maceStyle
	GUIStyle_t3956901511 * ___maceStyle_202;
	// UnityEngine.GUIStyle Player_move_c::crossbowStyle
	GUIStyle_t3956901511 * ___crossbowStyle_203;
	// UnityEngine.GUIStyle Player_move_c::minigunStyle
	GUIStyle_t3956901511 * ___minigunStyle_204;
	// UnityEngine.Texture Player_move_c::mace_off
	Texture_t3661962703 * ___mace_off_205;
	// UnityEngine.Texture Player_move_c::crossbow_off
	Texture_t3661962703 * ___crossbow_off_206;
	// UnityEngine.Texture Player_move_c::minigun_off
	Texture_t3661962703 * ___minigun_off_207;
	// System.Collections.Generic.List`1<Player_move_c/MessageChat> Player_move_c::messages
	List_1_t1461688331 * ___messages_208;

public:
	inline static int32_t get_offset_of_restoreWindButStyle_2() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___restoreWindButStyle_2)); }
	inline GUIStyle_t3956901511 * get_restoreWindButStyle_2() const { return ___restoreWindButStyle_2; }
	inline GUIStyle_t3956901511 ** get_address_of_restoreWindButStyle_2() { return &___restoreWindButStyle_2; }
	inline void set_restoreWindButStyle_2(GUIStyle_t3956901511 * value)
	{
		___restoreWindButStyle_2 = value;
		Il2CppCodeGenWriteBarrier((&___restoreWindButStyle_2), value);
	}

	inline static int32_t get_offset_of_customDialogPrefab_3() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___customDialogPrefab_3)); }
	inline GameObject_t1113636619 * get_customDialogPrefab_3() const { return ___customDialogPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_customDialogPrefab_3() { return &___customDialogPrefab_3; }
	inline void set_customDialogPrefab_3(GameObject_t1113636619 * value)
	{
		___customDialogPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___customDialogPrefab_3), value);
	}

	inline static int32_t get_offset_of_chatViewer_5() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___chatViewer_5)); }
	inline GameObject_t1113636619 * get_chatViewer_5() const { return ___chatViewer_5; }
	inline GameObject_t1113636619 ** get_address_of_chatViewer_5() { return &___chatViewer_5; }
	inline void set_chatViewer_5(GameObject_t1113636619 * value)
	{
		___chatViewer_5 = value;
		Il2CppCodeGenWriteBarrier((&___chatViewer_5), value);
	}

	inline static int32_t get_offset_of_MySkin_6() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___MySkin_6)); }
	inline GUISkin_t1244372282 * get_MySkin_6() const { return ___MySkin_6; }
	inline GUISkin_t1244372282 ** get_address_of_MySkin_6() { return &___MySkin_6; }
	inline void set_MySkin_6(GUISkin_t1244372282 * value)
	{
		___MySkin_6 = value;
		Il2CppCodeGenWriteBarrier((&___MySkin_6), value);
	}

	inline static int32_t get_offset_of_myTable_7() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___myTable_7)); }
	inline GameObject_t1113636619 * get_myTable_7() const { return ___myTable_7; }
	inline GameObject_t1113636619 ** get_address_of_myTable_7() { return &___myTable_7; }
	inline void set_myTable_7(GameObject_t1113636619 * value)
	{
		___myTable_7 = value;
		Il2CppCodeGenWriteBarrier((&___myTable_7), value);
	}

	inline static int32_t get_offset_of_ammoTexture_8() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ammoTexture_8)); }
	inline Texture2D_t3840446185 * get_ammoTexture_8() const { return ___ammoTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_ammoTexture_8() { return &___ammoTexture_8; }
	inline void set_ammoTexture_8(Texture2D_t3840446185 * value)
	{
		___ammoTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___ammoTexture_8), value);
	}

	inline static int32_t get_offset_of_scoreTexture_9() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scoreTexture_9)); }
	inline Texture2D_t3840446185 * get_scoreTexture_9() const { return ___scoreTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_scoreTexture_9() { return &___scoreTexture_9; }
	inline void set_scoreTexture_9(Texture2D_t3840446185 * value)
	{
		___scoreTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___scoreTexture_9), value);
	}

	inline static int32_t get_offset_of_enemiesTxture_10() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___enemiesTxture_10)); }
	inline Texture2D_t3840446185 * get_enemiesTxture_10() const { return ___enemiesTxture_10; }
	inline Texture2D_t3840446185 ** get_address_of_enemiesTxture_10() { return &___enemiesTxture_10; }
	inline void set_enemiesTxture_10(Texture2D_t3840446185 * value)
	{
		___enemiesTxture_10 = value;
		Il2CppCodeGenWriteBarrier((&___enemiesTxture_10), value);
	}

	inline static int32_t get_offset_of_HeartTexture_11() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___HeartTexture_11)); }
	inline Texture_t3661962703 * get_HeartTexture_11() const { return ___HeartTexture_11; }
	inline Texture_t3661962703 ** get_address_of_HeartTexture_11() { return &___HeartTexture_11; }
	inline void set_HeartTexture_11(Texture_t3661962703 * value)
	{
		___HeartTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___HeartTexture_11), value);
	}

	inline static int32_t get_offset_of_buyTexture_12() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___buyTexture_12)); }
	inline Texture_t3661962703 * get_buyTexture_12() const { return ___buyTexture_12; }
	inline Texture_t3661962703 ** get_address_of_buyTexture_12() { return &___buyTexture_12; }
	inline void set_buyTexture_12(Texture_t3661962703 * value)
	{
		___buyTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___buyTexture_12), value);
	}

	inline static int32_t get_offset_of_head_players_13() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___head_players_13)); }
	inline Texture_t3661962703 * get_head_players_13() const { return ___head_players_13; }
	inline Texture_t3661962703 ** get_address_of_head_players_13() { return &___head_players_13; }
	inline void set_head_players_13(Texture_t3661962703 * value)
	{
		___head_players_13 = value;
		Il2CppCodeGenWriteBarrier((&___head_players_13), value);
	}

	inline static int32_t get_offset_of_nicksStyle_14() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___nicksStyle_14)); }
	inline Texture_t3661962703 * get_nicksStyle_14() const { return ___nicksStyle_14; }
	inline Texture_t3661962703 ** get_address_of_nicksStyle_14() { return &___nicksStyle_14; }
	inline void set_nicksStyle_14(Texture_t3661962703 * value)
	{
		___nicksStyle_14 = value;
		Il2CppCodeGenWriteBarrier((&___nicksStyle_14), value);
	}

	inline static int32_t get_offset_of_killsStyle_15() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___killsStyle_15)); }
	inline Texture_t3661962703 * get_killsStyle_15() const { return ___killsStyle_15; }
	inline Texture_t3661962703 ** get_address_of_killsStyle_15() { return &___killsStyle_15; }
	inline void set_killsStyle_15(Texture_t3661962703 * value)
	{
		___killsStyle_15 = value;
		Il2CppCodeGenWriteBarrier((&___killsStyle_15), value);
	}

	inline static int32_t get_offset_of_scoreTextureCOOP_16() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scoreTextureCOOP_16)); }
	inline Texture_t3661962703 * get_scoreTextureCOOP_16() const { return ___scoreTextureCOOP_16; }
	inline Texture_t3661962703 ** get_address_of_scoreTextureCOOP_16() { return &___scoreTextureCOOP_16; }
	inline void set_scoreTextureCOOP_16(Texture_t3661962703 * value)
	{
		___scoreTextureCOOP_16 = value;
		Il2CppCodeGenWriteBarrier((&___scoreTextureCOOP_16), value);
	}

	inline static int32_t get_offset_of_timeTexture_17() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___timeTexture_17)); }
	inline Texture_t3661962703 * get_timeTexture_17() const { return ___timeTexture_17; }
	inline Texture_t3661962703 ** get_address_of_timeTexture_17() { return &___timeTexture_17; }
	inline void set_timeTexture_17(Texture_t3661962703 * value)
	{
		___timeTexture_17 = value;
		Il2CppCodeGenWriteBarrier((&___timeTexture_17), value);
	}

	inline static int32_t get_offset_of_AimTexture_18() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AimTexture_18)); }
	inline Texture2D_t3840446185 * get_AimTexture_18() const { return ___AimTexture_18; }
	inline Texture2D_t3840446185 ** get_address_of_AimTexture_18() { return &___AimTexture_18; }
	inline void set_AimTexture_18(Texture2D_t3840446185 * value)
	{
		___AimTexture_18 = value;
		Il2CppCodeGenWriteBarrier((&___AimTexture_18), value);
	}

	inline static int32_t get_offset_of_AimTextureWidth_19() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AimTextureWidth_19)); }
	inline int32_t get_AimTextureWidth_19() const { return ___AimTextureWidth_19; }
	inline int32_t* get_address_of_AimTextureWidth_19() { return &___AimTextureWidth_19; }
	inline void set_AimTextureWidth_19(int32_t value)
	{
		___AimTextureWidth_19 = value;
	}

	inline static int32_t get_offset_of_AimTextureHeight_20() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AimTextureHeight_20)); }
	inline int32_t get_AimTextureHeight_20() const { return ___AimTextureHeight_20; }
	inline int32_t* get_address_of_AimTextureHeight_20() { return &___AimTextureHeight_20; }
	inline void set_AimTextureHeight_20(int32_t value)
	{
		___AimTextureHeight_20 = value;
	}

	inline static int32_t get_offset_of_GunFlash_21() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___GunFlash_21)); }
	inline Transform_t3600365921 * get_GunFlash_21() const { return ___GunFlash_21; }
	inline Transform_t3600365921 ** get_address_of_GunFlash_21() { return &___GunFlash_21; }
	inline void set_GunFlash_21(Transform_t3600365921 * value)
	{
		___GunFlash_21 = value;
		Il2CppCodeGenWriteBarrier((&___GunFlash_21), value);
	}

	inline static int32_t get_offset_of_showGUIUnlockFullVersion_22() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showGUIUnlockFullVersion_22)); }
	inline bool get_showGUIUnlockFullVersion_22() const { return ___showGUIUnlockFullVersion_22; }
	inline bool* get_address_of_showGUIUnlockFullVersion_22() { return &___showGUIUnlockFullVersion_22; }
	inline void set_showGUIUnlockFullVersion_22(bool value)
	{
		___showGUIUnlockFullVersion_22 = value;
	}

	inline static int32_t get_offset_of_fonFull_23() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___fonFull_23)); }
	inline Texture_t3661962703 * get_fonFull_23() const { return ___fonFull_23; }
	inline Texture_t3661962703 ** get_address_of_fonFull_23() { return &___fonFull_23; }
	inline void set_fonFull_23(Texture_t3661962703 * value)
	{
		___fonFull_23 = value;
		Il2CppCodeGenWriteBarrier((&___fonFull_23), value);
	}

	inline static int32_t get_offset_of_fonFullNoInet_24() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___fonFullNoInet_24)); }
	inline Texture_t3661962703 * get_fonFullNoInet_24() const { return ___fonFullNoInet_24; }
	inline Texture_t3661962703 ** get_address_of_fonFullNoInet_24() { return &___fonFullNoInet_24; }
	inline void set_fonFullNoInet_24(Texture_t3661962703 * value)
	{
		___fonFullNoInet_24 = value;
		Il2CppCodeGenWriteBarrier((&___fonFullNoInet_24), value);
	}

	inline static int32_t get_offset_of_fonChat_25() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___fonChat_25)); }
	inline Texture_t3661962703 * get_fonChat_25() const { return ___fonChat_25; }
	inline Texture_t3661962703 ** get_address_of_fonChat_25() { return &___fonChat_25; }
	inline void set_fonChat_25(Texture_t3661962703 * value)
	{
		___fonChat_25 = value;
		Il2CppCodeGenWriteBarrier((&___fonChat_25), value);
	}

	inline static int32_t get_offset_of_tapChat_26() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___tapChat_26)); }
	inline Texture_t3661962703 * get_tapChat_26() const { return ___tapChat_26; }
	inline Texture_t3661962703 ** get_address_of_tapChat_26() { return &___tapChat_26; }
	inline void set_tapChat_26(Texture_t3661962703 * value)
	{
		___tapChat_26 = value;
		Il2CppCodeGenWriteBarrier((&___tapChat_26), value);
	}

	inline static int32_t get_offset_of_noStyle_27() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___noStyle_27)); }
	inline GUIStyle_t3956901511 * get_noStyle_27() const { return ___noStyle_27; }
	inline GUIStyle_t3956901511 ** get_address_of_noStyle_27() { return &___noStyle_27; }
	inline void set_noStyle_27(GUIStyle_t3956901511 * value)
	{
		___noStyle_27 = value;
		Il2CppCodeGenWriteBarrier((&___noStyle_27), value);
	}

	inline static int32_t get_offset_of_fullVerStyle_28() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___fullVerStyle_28)); }
	inline GUIStyle_t3956901511 * get_fullVerStyle_28() const { return ___fullVerStyle_28; }
	inline GUIStyle_t3956901511 ** get_address_of_fullVerStyle_28() { return &___fullVerStyle_28; }
	inline void set_fullVerStyle_28(GUIStyle_t3956901511 * value)
	{
		___fullVerStyle_28 = value;
		Il2CppCodeGenWriteBarrier((&___fullVerStyle_28), value);
	}

	inline static int32_t get_offset_of_unlockStyle_29() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___unlockStyle_29)); }
	inline GUIStyle_t3956901511 * get_unlockStyle_29() const { return ___unlockStyle_29; }
	inline GUIStyle_t3956901511 ** get_address_of_unlockStyle_29() { return &___unlockStyle_29; }
	inline void set_unlockStyle_29(GUIStyle_t3956901511 * value)
	{
		___unlockStyle_29 = value;
		Il2CppCodeGenWriteBarrier((&___unlockStyle_29), value);
	}

	inline static int32_t get_offset_of_playersWindow_30() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___playersWindow_30)); }
	inline GUIStyle_t3956901511 * get_playersWindow_30() const { return ___playersWindow_30; }
	inline GUIStyle_t3956901511 ** get_address_of_playersWindow_30() { return &___playersWindow_30; }
	inline void set_playersWindow_30(GUIStyle_t3956901511 * value)
	{
		___playersWindow_30 = value;
		Il2CppCodeGenWriteBarrier((&___playersWindow_30), value);
	}

	inline static int32_t get_offset_of_playersWindowFrags_31() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___playersWindowFrags_31)); }
	inline GUIStyle_t3956901511 * get_playersWindowFrags_31() const { return ___playersWindowFrags_31; }
	inline GUIStyle_t3956901511 ** get_address_of_playersWindowFrags_31() { return &___playersWindowFrags_31; }
	inline void set_playersWindowFrags_31(GUIStyle_t3956901511 * value)
	{
		___playersWindowFrags_31 = value;
		Il2CppCodeGenWriteBarrier((&___playersWindowFrags_31), value);
	}

	inline static int32_t get_offset_of_closeRanksStyle_32() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___closeRanksStyle_32)); }
	inline GUIStyle_t3956901511 * get_closeRanksStyle_32() const { return ___closeRanksStyle_32; }
	inline GUIStyle_t3956901511 ** get_address_of_closeRanksStyle_32() { return &___closeRanksStyle_32; }
	inline void set_closeRanksStyle_32(GUIStyle_t3956901511 * value)
	{
		___closeRanksStyle_32 = value;
		Il2CppCodeGenWriteBarrier((&___closeRanksStyle_32), value);
	}

	inline static int32_t get_offset_of_closeChatStyle_33() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___closeChatStyle_33)); }
	inline GUIStyle_t3956901511 * get_closeChatStyle_33() const { return ___closeChatStyle_33; }
	inline GUIStyle_t3956901511 ** get_address_of_closeChatStyle_33() { return &___closeChatStyle_33; }
	inline void set_closeChatStyle_33(GUIStyle_t3956901511 * value)
	{
		___closeChatStyle_33 = value;
		Il2CppCodeGenWriteBarrier((&___closeChatStyle_33), value);
	}

	inline static int32_t get_offset_of_sendChatStyle_34() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sendChatStyle_34)); }
	inline GUIStyle_t3956901511 * get_sendChatStyle_34() const { return ___sendChatStyle_34; }
	inline GUIStyle_t3956901511 ** get_address_of_sendChatStyle_34() { return &___sendChatStyle_34; }
	inline void set_sendChatStyle_34(GUIStyle_t3956901511 * value)
	{
		___sendChatStyle_34 = value;
		Il2CppCodeGenWriteBarrier((&___sendChatStyle_34), value);
	}

	inline static int32_t get_offset_of_textChatStyle_35() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___textChatStyle_35)); }
	inline GUIStyle_t3956901511 * get_textChatStyle_35() const { return ___textChatStyle_35; }
	inline GUIStyle_t3956901511 ** get_address_of_textChatStyle_35() { return &___textChatStyle_35; }
	inline void set_textChatStyle_35(GUIStyle_t3956901511 * value)
	{
		___textChatStyle_35 = value;
		Il2CppCodeGenWriteBarrier((&___textChatStyle_35), value);
	}

	inline static int32_t get_offset_of_labelChatStyle_36() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___labelChatStyle_36)); }
	inline GUIStyle_t3956901511 * get_labelChatStyle_36() const { return ___labelChatStyle_36; }
	inline GUIStyle_t3956901511 ** get_address_of_labelChatStyle_36() { return &___labelChatStyle_36; }
	inline void set_labelChatStyle_36(GUIStyle_t3956901511 * value)
	{
		___labelChatStyle_36 = value;
		Il2CppCodeGenWriteBarrier((&___labelChatStyle_36), value);
	}

	inline static int32_t get_offset_of_labelGameChatStyle_37() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___labelGameChatStyle_37)); }
	inline GUIStyle_t3956901511 * get_labelGameChatStyle_37() const { return ___labelGameChatStyle_37; }
	inline GUIStyle_t3956901511 ** get_address_of_labelGameChatStyle_37() { return &___labelGameChatStyle_37; }
	inline void set_labelGameChatStyle_37(GUIStyle_t3956901511 * value)
	{
		___labelGameChatStyle_37 = value;
		Il2CppCodeGenWriteBarrier((&___labelGameChatStyle_37), value);
	}

	inline static int32_t get_offset_of_BulletForce_38() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___BulletForce_38)); }
	inline int32_t get_BulletForce_38() const { return ___BulletForce_38; }
	inline int32_t* get_address_of_BulletForce_38() { return &___BulletForce_38; }
	inline void set_BulletForce_38(int32_t value)
	{
		___BulletForce_38 = value;
	}

	inline static int32_t get_offset_of_renderAllObjectPrefab_39() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___renderAllObjectPrefab_39)); }
	inline GameObject_t1113636619 * get_renderAllObjectPrefab_39() const { return ___renderAllObjectPrefab_39; }
	inline GameObject_t1113636619 ** get_address_of_renderAllObjectPrefab_39() { return &___renderAllObjectPrefab_39; }
	inline void set_renderAllObjectPrefab_39(GameObject_t1113636619 * value)
	{
		___renderAllObjectPrefab_39 = value;
		Il2CppCodeGenWriteBarrier((&___renderAllObjectPrefab_39), value);
	}

	inline static int32_t get_offset_of_zaglushkaTexture_40() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___zaglushkaTexture_40)); }
	inline Texture_t3661962703 * get_zaglushkaTexture_40() const { return ___zaglushkaTexture_40; }
	inline Texture_t3661962703 ** get_address_of_zaglushkaTexture_40() { return &___zaglushkaTexture_40; }
	inline void set_zaglushkaTexture_40(Texture_t3661962703 * value)
	{
		___zaglushkaTexture_40 = value;
		Il2CppCodeGenWriteBarrier((&___zaglushkaTexture_40), value);
	}

	inline static int32_t get_offset_of_labelStyle_41() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___labelStyle_41)); }
	inline GUIStyle_t3956901511 * get_labelStyle_41() const { return ___labelStyle_41; }
	inline GUIStyle_t3956901511 ** get_address_of_labelStyle_41() { return &___labelStyle_41; }
	inline void set_labelStyle_41(GUIStyle_t3956901511 * value)
	{
		___labelStyle_41 = value;
		Il2CppCodeGenWriteBarrier((&___labelStyle_41), value);
	}

	inline static int32_t get_offset_of_productPurchased_42() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___productPurchased_42)); }
	inline bool get_productPurchased_42() const { return ___productPurchased_42; }
	inline bool* get_address_of_productPurchased_42() { return &___productPurchased_42; }
	inline void set_productPurchased_42(bool value)
	{
		___productPurchased_42 = value;
	}

	inline static int32_t get_offset_of_killed_43() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___killed_43)); }
	inline bool get_killed_43() const { return ___killed_43; }
	inline bool* get_address_of_killed_43() { return &___killed_43; }
	inline void set_killed_43(bool value)
	{
		___killed_43 = value;
	}

	inline static int32_t get_offset_of_scrollPosition_44() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scrollPosition_44)); }
	inline Vector2_t2156229523  get_scrollPosition_44() const { return ___scrollPosition_44; }
	inline Vector2_t2156229523 * get_address_of_scrollPosition_44() { return &___scrollPosition_44; }
	inline void set_scrollPosition_44(Vector2_t2156229523  value)
	{
		___scrollPosition_44 = value;
	}

	inline static int32_t get_offset_of_zombiManager_45() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___zombiManager_45)); }
	inline ZombiManager_t1666808103 * get_zombiManager_45() const { return ___zombiManager_45; }
	inline ZombiManager_t1666808103 ** get_address_of_zombiManager_45() { return &___zombiManager_45; }
	inline void set_zombiManager_45(ZombiManager_t1666808103 * value)
	{
		___zombiManager_45 = value;
		Il2CppCodeGenWriteBarrier((&___zombiManager_45), value);
	}

	inline static int32_t get_offset_of_hole_46() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___hole_46)); }
	inline GameObject_t1113636619 * get_hole_46() const { return ___hole_46; }
	inline GameObject_t1113636619 ** get_address_of_hole_46() { return &___hole_46; }
	inline void set_hole_46(GameObject_t1113636619 * value)
	{
		___hole_46 = value;
		Il2CppCodeGenWriteBarrier((&___hole_46), value);
	}

	inline static int32_t get_offset_of_bloodParticle_47() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___bloodParticle_47)); }
	inline GameObject_t1113636619 * get_bloodParticle_47() const { return ___bloodParticle_47; }
	inline GameObject_t1113636619 ** get_address_of_bloodParticle_47() { return &___bloodParticle_47; }
	inline void set_bloodParticle_47(GameObject_t1113636619 * value)
	{
		___bloodParticle_47 = value;
		Il2CppCodeGenWriteBarrier((&___bloodParticle_47), value);
	}

	inline static int32_t get_offset_of_wallParticle_48() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___wallParticle_48)); }
	inline GameObject_t1113636619 * get_wallParticle_48() const { return ___wallParticle_48; }
	inline GameObject_t1113636619 ** get_address_of_wallParticle_48() { return &___wallParticle_48; }
	inline void set_wallParticle_48(GameObject_t1113636619 * value)
	{
		___wallParticle_48 = value;
		Il2CppCodeGenWriteBarrier((&___wallParticle_48), value);
	}

	inline static int32_t get_offset_of_textChat_49() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___textChat_49)); }
	inline String_t* get_textChat_49() const { return ___textChat_49; }
	inline String_t** get_address_of_textChat_49() { return &___textChat_49; }
	inline void set_textChat_49(String_t* value)
	{
		___textChat_49 = value;
		Il2CppCodeGenWriteBarrier((&___textChat_49), value);
	}

	inline static int32_t get_offset_of_showGUI_50() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showGUI_50)); }
	inline bool get_showGUI_50() const { return ___showGUI_50; }
	inline bool* get_address_of_showGUI_50() { return &___showGUI_50; }
	inline void set_showGUI_50(bool value)
	{
		___showGUI_50 = value;
	}

	inline static int32_t get_offset_of_showRanks_51() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showRanks_51)); }
	inline bool get_showRanks_51() const { return ___showRanks_51; }
	inline bool* get_address_of_showRanks_51() { return &___showRanks_51; }
	inline void set_showRanks_51(bool value)
	{
		___showRanks_51 = value;
	}

	inline static int32_t get_offset_of_minerWeaponSoldTexture_52() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___minerWeaponSoldTexture_52)); }
	inline Texture_t3661962703 * get_minerWeaponSoldTexture_52() const { return ___minerWeaponSoldTexture_52; }
	inline Texture_t3661962703 ** get_address_of_minerWeaponSoldTexture_52() { return &___minerWeaponSoldTexture_52; }
	inline void set_minerWeaponSoldTexture_52(Texture_t3661962703 * value)
	{
		___minerWeaponSoldTexture_52 = value;
		Il2CppCodeGenWriteBarrier((&___minerWeaponSoldTexture_52), value);
	}

	inline static int32_t get_offset_of_swordSoldTexture_53() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___swordSoldTexture_53)); }
	inline Texture_t3661962703 * get_swordSoldTexture_53() const { return ___swordSoldTexture_53; }
	inline Texture_t3661962703 ** get_address_of_swordSoldTexture_53() { return &___swordSoldTexture_53; }
	inline void set_swordSoldTexture_53(Texture_t3661962703 * value)
	{
		___swordSoldTexture_53 = value;
		Il2CppCodeGenWriteBarrier((&___swordSoldTexture_53), value);
	}

	inline static int32_t get_offset_of_hasElixirTexture_54() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___hasElixirTexture_54)); }
	inline Texture_t3661962703 * get_hasElixirTexture_54() const { return ___hasElixirTexture_54; }
	inline Texture_t3661962703 ** get_address_of_hasElixirTexture_54() { return &___hasElixirTexture_54; }
	inline void set_hasElixirTexture_54(Texture_t3661962703 * value)
	{
		___hasElixirTexture_54 = value;
		Il2CppCodeGenWriteBarrier((&___hasElixirTexture_54), value);
	}

	inline static int32_t get_offset_of_combatRifleSoldTexture_55() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___combatRifleSoldTexture_55)); }
	inline Texture_t3661962703 * get_combatRifleSoldTexture_55() const { return ___combatRifleSoldTexture_55; }
	inline Texture_t3661962703 ** get_address_of_combatRifleSoldTexture_55() { return &___combatRifleSoldTexture_55; }
	inline void set_combatRifleSoldTexture_55(Texture_t3661962703 * value)
	{
		___combatRifleSoldTexture_55 = value;
		Il2CppCodeGenWriteBarrier((&___combatRifleSoldTexture_55), value);
	}

	inline static int32_t get_offset_of_goldenEagleSoldTexture_56() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___goldenEagleSoldTexture_56)); }
	inline Texture_t3661962703 * get_goldenEagleSoldTexture_56() const { return ___goldenEagleSoldTexture_56; }
	inline Texture_t3661962703 ** get_address_of_goldenEagleSoldTexture_56() { return &___goldenEagleSoldTexture_56; }
	inline void set_goldenEagleSoldTexture_56(Texture_t3661962703 * value)
	{
		___goldenEagleSoldTexture_56 = value;
		Il2CppCodeGenWriteBarrier((&___goldenEagleSoldTexture_56), value);
	}

	inline static int32_t get_offset_of_magicBowSoldTexture_57() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___magicBowSoldTexture_57)); }
	inline Texture_t3661962703 * get_magicBowSoldTexture_57() const { return ___magicBowSoldTexture_57; }
	inline Texture_t3661962703 ** get_address_of_magicBowSoldTexture_57() { return &___magicBowSoldTexture_57; }
	inline void set_magicBowSoldTexture_57(Texture_t3661962703 * value)
	{
		___magicBowSoldTexture_57 = value;
		Il2CppCodeGenWriteBarrier((&___magicBowSoldTexture_57), value);
	}

	inline static int32_t get_offset_of_axeBoughtTexture_58() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___axeBoughtTexture_58)); }
	inline Texture_t3661962703 * get_axeBoughtTexture_58() const { return ___axeBoughtTexture_58; }
	inline Texture_t3661962703 ** get_address_of_axeBoughtTexture_58() { return &___axeBoughtTexture_58; }
	inline void set_axeBoughtTexture_58(Texture_t3661962703 * value)
	{
		___axeBoughtTexture_58 = value;
		Il2CppCodeGenWriteBarrier((&___axeBoughtTexture_58), value);
	}

	inline static int32_t get_offset_of_spasBoughtTexture_59() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___spasBoughtTexture_59)); }
	inline Texture_t3661962703 * get_spasBoughtTexture_59() const { return ___spasBoughtTexture_59; }
	inline Texture_t3661962703 ** get_address_of_spasBoughtTexture_59() { return &___spasBoughtTexture_59; }
	inline void set_spasBoughtTexture_59(Texture_t3661962703 * value)
	{
		___spasBoughtTexture_59 = value;
		Il2CppCodeGenWriteBarrier((&___spasBoughtTexture_59), value);
	}

	inline static int32_t get_offset_of_chainsawOffTexture_60() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___chainsawOffTexture_60)); }
	inline Texture_t3661962703 * get_chainsawOffTexture_60() const { return ___chainsawOffTexture_60; }
	inline Texture_t3661962703 ** get_address_of_chainsawOffTexture_60() { return &___chainsawOffTexture_60; }
	inline void set_chainsawOffTexture_60(Texture_t3661962703 * value)
	{
		___chainsawOffTexture_60 = value;
		Il2CppCodeGenWriteBarrier((&___chainsawOffTexture_60), value);
	}

	inline static int32_t get_offset_of_famasOffTexture_61() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___famasOffTexture_61)); }
	inline Texture_t3661962703 * get_famasOffTexture_61() const { return ___famasOffTexture_61; }
	inline Texture_t3661962703 ** get_address_of_famasOffTexture_61() { return &___famasOffTexture_61; }
	inline void set_famasOffTexture_61(Texture_t3661962703 * value)
	{
		___famasOffTexture_61 = value;
		Il2CppCodeGenWriteBarrier((&___famasOffTexture_61), value);
	}

	inline static int32_t get_offset_of_GlockOffTexture_62() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___GlockOffTexture_62)); }
	inline Texture_t3661962703 * get_GlockOffTexture_62() const { return ___GlockOffTexture_62; }
	inline Texture_t3661962703 ** get_address_of_GlockOffTexture_62() { return &___GlockOffTexture_62; }
	inline void set_GlockOffTexture_62(Texture_t3661962703 * value)
	{
		___GlockOffTexture_62 = value;
		Il2CppCodeGenWriteBarrier((&___GlockOffTexture_62), value);
	}

	inline static int32_t get_offset_of_scytheOffTexture_63() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scytheOffTexture_63)); }
	inline Texture_t3661962703 * get_scytheOffTexture_63() const { return ___scytheOffTexture_63; }
	inline Texture_t3661962703 ** get_address_of_scytheOffTexture_63() { return &___scytheOffTexture_63; }
	inline void set_scytheOffTexture_63(Texture_t3661962703 * value)
	{
		___scytheOffTexture_63 = value;
		Il2CppCodeGenWriteBarrier((&___scytheOffTexture_63), value);
	}

	inline static int32_t get_offset_of_shovelOffTexture_64() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___shovelOffTexture_64)); }
	inline Texture_t3661962703 * get_shovelOffTexture_64() const { return ___shovelOffTexture_64; }
	inline Texture_t3661962703 ** get_address_of_shovelOffTexture_64() { return &___shovelOffTexture_64; }
	inline void set_shovelOffTexture_64(Texture_t3661962703 * value)
	{
		___shovelOffTexture_64 = value;
		Il2CppCodeGenWriteBarrier((&___shovelOffTexture_64), value);
	}

	inline static int32_t get_offset_of_elixir_65() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___elixir_65)); }
	inline Texture_t3661962703 * get_elixir_65() const { return ___elixir_65; }
	inline Texture_t3661962703 ** get_address_of_elixir_65() { return &___elixir_65; }
	inline void set_elixir_65(Texture_t3661962703 * value)
	{
		___elixir_65 = value;
		Il2CppCodeGenWriteBarrier((&___elixir_65), value);
	}

	inline static int32_t get_offset_of_multiplayerInappFon_66() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___multiplayerInappFon_66)); }
	inline Texture_t3661962703 * get_multiplayerInappFon_66() const { return ___multiplayerInappFon_66; }
	inline Texture_t3661962703 ** get_address_of_multiplayerInappFon_66() { return &___multiplayerInappFon_66; }
	inline void set_multiplayerInappFon_66(Texture_t3661962703 * value)
	{
		___multiplayerInappFon_66 = value;
		Il2CppCodeGenWriteBarrier((&___multiplayerInappFon_66), value);
	}

	inline static int32_t get_offset_of_ranksFon_67() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ranksFon_67)); }
	inline Texture_t3661962703 * get_ranksFon_67() const { return ___ranksFon_67; }
	inline Texture_t3661962703 ** get_address_of_ranksFon_67() { return &___ranksFon_67; }
	inline void set_ranksFon_67(Texture_t3661962703 * value)
	{
		___ranksFon_67 = value;
		Il2CppCodeGenWriteBarrier((&___ranksFon_67), value);
	}

	inline static int32_t get_offset_of_killedSpisok_68() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___killedSpisok_68)); }
	inline StringU5BU5D_t1281789340* get_killedSpisok_68() const { return ___killedSpisok_68; }
	inline StringU5BU5D_t1281789340** get_address_of_killedSpisok_68() { return &___killedSpisok_68; }
	inline void set_killedSpisok_68(StringU5BU5D_t1281789340* value)
	{
		___killedSpisok_68 = value;
		Il2CppCodeGenWriteBarrier((&___killedSpisok_68), value);
	}

	inline static int32_t get_offset_of_elixirsCountStyle_69() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___elixirsCountStyle_69)); }
	inline GUIStyle_t3956901511 * get_elixirsCountStyle_69() const { return ___elixirsCountStyle_69; }
	inline GUIStyle_t3956901511 ** get_address_of_elixirsCountStyle_69() { return &___elixirsCountStyle_69; }
	inline void set_elixirsCountStyle_69(GUIStyle_t3956901511 * value)
	{
		___elixirsCountStyle_69 = value;
		Il2CppCodeGenWriteBarrier((&___elixirsCountStyle_69), value);
	}

	inline static int32_t get_offset_of_ranksStyle_70() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ranksStyle_70)); }
	inline GUIStyle_t3956901511 * get_ranksStyle_70() const { return ___ranksStyle_70; }
	inline GUIStyle_t3956901511 ** get_address_of_ranksStyle_70() { return &___ranksStyle_70; }
	inline void set_ranksStyle_70(GUIStyle_t3956901511 * value)
	{
		___ranksStyle_70 = value;
		Il2CppCodeGenWriteBarrier((&___ranksStyle_70), value);
	}

	inline static int32_t get_offset_of_chatStyle_71() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___chatStyle_71)); }
	inline GUIStyle_t3956901511 * get_chatStyle_71() const { return ___chatStyle_71; }
	inline GUIStyle_t3956901511 ** get_address_of_chatStyle_71() { return &___chatStyle_71; }
	inline void set_chatStyle_71(GUIStyle_t3956901511 * value)
	{
		___chatStyle_71 = value;
		Il2CppCodeGenWriteBarrier((&___chatStyle_71), value);
	}

	inline static int32_t get_offset_of_shopFromPauseStyle_72() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___shopFromPauseStyle_72)); }
	inline GUIStyle_t3956901511 * get_shopFromPauseStyle_72() const { return ___shopFromPauseStyle_72; }
	inline GUIStyle_t3956901511 ** get_address_of_shopFromPauseStyle_72() { return &___shopFromPauseStyle_72; }
	inline void set_shopFromPauseStyle_72(GUIStyle_t3956901511 * value)
	{
		___shopFromPauseStyle_72 = value;
		Il2CppCodeGenWriteBarrier((&___shopFromPauseStyle_72), value);
	}

	inline static int32_t get_offset_of_killedStyle_73() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___killedStyle_73)); }
	inline GUIStyle_t3956901511 * get_killedStyle_73() const { return ___killedStyle_73; }
	inline GUIStyle_t3956901511 ** get_address_of_killedStyle_73() { return &___killedStyle_73; }
	inline void set_killedStyle_73(GUIStyle_t3956901511 * value)
	{
		___killedStyle_73 = value;
		Il2CppCodeGenWriteBarrier((&___killedStyle_73), value);
	}

	inline static int32_t get_offset_of_combatRifleStyle_74() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___combatRifleStyle_74)); }
	inline GUIStyle_t3956901511 * get_combatRifleStyle_74() const { return ___combatRifleStyle_74; }
	inline GUIStyle_t3956901511 ** get_address_of_combatRifleStyle_74() { return &___combatRifleStyle_74; }
	inline void set_combatRifleStyle_74(GUIStyle_t3956901511 * value)
	{
		___combatRifleStyle_74 = value;
		Il2CppCodeGenWriteBarrier((&___combatRifleStyle_74), value);
	}

	inline static int32_t get_offset_of_goldenEagleInappStyle_75() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___goldenEagleInappStyle_75)); }
	inline GUIStyle_t3956901511 * get_goldenEagleInappStyle_75() const { return ___goldenEagleInappStyle_75; }
	inline GUIStyle_t3956901511 ** get_address_of_goldenEagleInappStyle_75() { return &___goldenEagleInappStyle_75; }
	inline void set_goldenEagleInappStyle_75(GUIStyle_t3956901511 * value)
	{
		___goldenEagleInappStyle_75 = value;
		Il2CppCodeGenWriteBarrier((&___goldenEagleInappStyle_75), value);
	}

	inline static int32_t get_offset_of_magicBowInappStyle_76() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___magicBowInappStyle_76)); }
	inline GUIStyle_t3956901511 * get_magicBowInappStyle_76() const { return ___magicBowInappStyle_76; }
	inline GUIStyle_t3956901511 ** get_address_of_magicBowInappStyle_76() { return &___magicBowInappStyle_76; }
	inline void set_magicBowInappStyle_76(GUIStyle_t3956901511 * value)
	{
		___magicBowInappStyle_76 = value;
		Il2CppCodeGenWriteBarrier((&___magicBowInappStyle_76), value);
	}

	inline static int32_t get_offset_of_spasStyle_77() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___spasStyle_77)); }
	inline GUIStyle_t3956901511 * get_spasStyle_77() const { return ___spasStyle_77; }
	inline GUIStyle_t3956901511 ** get_address_of_spasStyle_77() { return &___spasStyle_77; }
	inline void set_spasStyle_77(GUIStyle_t3956901511 * value)
	{
		___spasStyle_77 = value;
		Il2CppCodeGenWriteBarrier((&___spasStyle_77), value);
	}

	inline static int32_t get_offset_of_axeStyle_78() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___axeStyle_78)); }
	inline GUIStyle_t3956901511 * get_axeStyle_78() const { return ___axeStyle_78; }
	inline GUIStyle_t3956901511 ** get_address_of_axeStyle_78() { return &___axeStyle_78; }
	inline void set_axeStyle_78(GUIStyle_t3956901511 * value)
	{
		___axeStyle_78 = value;
		Il2CppCodeGenWriteBarrier((&___axeStyle_78), value);
	}

	inline static int32_t get_offset_of_famasStyle_79() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___famasStyle_79)); }
	inline GUIStyle_t3956901511 * get_famasStyle_79() const { return ___famasStyle_79; }
	inline GUIStyle_t3956901511 ** get_address_of_famasStyle_79() { return &___famasStyle_79; }
	inline void set_famasStyle_79(GUIStyle_t3956901511 * value)
	{
		___famasStyle_79 = value;
		Il2CppCodeGenWriteBarrier((&___famasStyle_79), value);
	}

	inline static int32_t get_offset_of_glockStyle_80() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___glockStyle_80)); }
	inline GUIStyle_t3956901511 * get_glockStyle_80() const { return ___glockStyle_80; }
	inline GUIStyle_t3956901511 ** get_address_of_glockStyle_80() { return &___glockStyle_80; }
	inline void set_glockStyle_80(GUIStyle_t3956901511 * value)
	{
		___glockStyle_80 = value;
		Il2CppCodeGenWriteBarrier((&___glockStyle_80), value);
	}

	inline static int32_t get_offset_of_chainsawStyle_81() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___chainsawStyle_81)); }
	inline GUIStyle_t3956901511 * get_chainsawStyle_81() const { return ___chainsawStyle_81; }
	inline GUIStyle_t3956901511 ** get_address_of_chainsawStyle_81() { return &___chainsawStyle_81; }
	inline void set_chainsawStyle_81(GUIStyle_t3956901511 * value)
	{
		___chainsawStyle_81 = value;
		Il2CppCodeGenWriteBarrier((&___chainsawStyle_81), value);
	}

	inline static int32_t get_offset_of_scytheStyle_82() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scytheStyle_82)); }
	inline GUIStyle_t3956901511 * get_scytheStyle_82() const { return ___scytheStyle_82; }
	inline GUIStyle_t3956901511 ** get_address_of_scytheStyle_82() { return &___scytheStyle_82; }
	inline void set_scytheStyle_82(GUIStyle_t3956901511 * value)
	{
		___scytheStyle_82 = value;
		Il2CppCodeGenWriteBarrier((&___scytheStyle_82), value);
	}

	inline static int32_t get_offset_of_shovelStyle_83() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___shovelStyle_83)); }
	inline GUIStyle_t3956901511 * get_shovelStyle_83() const { return ___shovelStyle_83; }
	inline GUIStyle_t3956901511 ** get_address_of_shovelStyle_83() { return &___shovelStyle_83; }
	inline void set_shovelStyle_83(GUIStyle_t3956901511 * value)
	{
		___shovelStyle_83 = value;
		Il2CppCodeGenWriteBarrier((&___shovelStyle_83), value);
	}

	inline static int32_t get_offset_of_restoreStyle_84() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___restoreStyle_84)); }
	inline GUIStyle_t3956901511 * get_restoreStyle_84() const { return ___restoreStyle_84; }
	inline GUIStyle_t3956901511 ** get_address_of_restoreStyle_84() { return &___restoreStyle_84; }
	inline void set_restoreStyle_84(GUIStyle_t3956901511 * value)
	{
		___restoreStyle_84 = value;
		Il2CppCodeGenWriteBarrier((&___restoreStyle_84), value);
	}

	inline static int32_t get_offset_of_camPosition_85() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___camPosition_85)); }
	inline Vector3_t3722313464  get_camPosition_85() const { return ___camPosition_85; }
	inline Vector3_t3722313464 * get_address_of_camPosition_85() { return &___camPosition_85; }
	inline void set_camPosition_85(Vector3_t3722313464  value)
	{
		___camPosition_85 = value;
	}

	inline static int32_t get_offset_of_camRotaion_86() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___camRotaion_86)); }
	inline Quaternion_t2301928331  get_camRotaion_86() const { return ___camRotaion_86; }
	inline Quaternion_t2301928331 * get_address_of_camRotaion_86() { return &___camRotaion_86; }
	inline void set_camRotaion_86(Quaternion_t2301928331  value)
	{
		___camRotaion_86 = value;
	}

	inline static int32_t get_offset_of_showChat_87() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showChat_87)); }
	inline bool get_showChat_87() const { return ___showChat_87; }
	inline bool* get_address_of_showChat_87() { return &___showChat_87; }
	inline void set_showChat_87(bool value)
	{
		___showChat_87 = value;
	}

	inline static int32_t get_offset_of_showChatOld_88() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showChatOld_88)); }
	inline bool get_showChatOld_88() const { return ___showChatOld_88; }
	inline bool* get_address_of_showChatOld_88() { return &___showChatOld_88; }
	inline void set_showChatOld_88(bool value)
	{
		___showChatOld_88 = value;
	}

	inline static int32_t get_offset_of_isDeadFrame_89() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___isDeadFrame_89)); }
	inline bool get_isDeadFrame_89() const { return ___isDeadFrame_89; }
	inline bool* get_address_of_isDeadFrame_89() { return &___isDeadFrame_89; }
	inline void set_isDeadFrame_89(bool value)
	{
		___isDeadFrame_89 = value;
	}

	inline static int32_t get_offset_of_productIdentifiers_90() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___productIdentifiers_90)); }
	inline StringU5BU5D_t1281789340* get_productIdentifiers_90() const { return ___productIdentifiers_90; }
	inline StringU5BU5D_t1281789340** get_address_of_productIdentifiers_90() { return &___productIdentifiers_90; }
	inline void set_productIdentifiers_90(StringU5BU5D_t1281789340* value)
	{
		___productIdentifiers_90 = value;
		Il2CppCodeGenWriteBarrier((&___productIdentifiers_90), value);
	}

	inline static int32_t get_offset_of_myIp_91() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___myIp_91)); }
	inline String_t* get_myIp_91() const { return ___myIp_91; }
	inline String_t** get_address_of_myIp_91() { return &___myIp_91; }
	inline void set_myIp_91(String_t* value)
	{
		___myIp_91 = value;
		Il2CppCodeGenWriteBarrier((&___myIp_91), value);
	}

	inline static int32_t get_offset_of_isKilled_92() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___isKilled_92)); }
	inline bool get_isKilled_92() const { return ___isKilled_92; }
	inline bool* get_address_of_isKilled_92() { return &___isKilled_92; }
	inline void set_isKilled_92(bool value)
	{
		___isKilled_92 = value;
	}

	inline static int32_t get_offset_of_theEnd_93() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___theEnd_93)); }
	inline bool get_theEnd_93() const { return ___theEnd_93; }
	inline bool* get_address_of_theEnd_93() { return &___theEnd_93; }
	inline void set_theEnd_93(bool value)
	{
		___theEnd_93 = value;
	}

	inline static int32_t get_offset_of_nickPobeditel_94() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___nickPobeditel_94)); }
	inline String_t* get_nickPobeditel_94() const { return ___nickPobeditel_94; }
	inline String_t** get_address_of_nickPobeditel_94() { return &___nickPobeditel_94; }
	inline void set_nickPobeditel_94(String_t* value)
	{
		___nickPobeditel_94 = value;
		Il2CppCodeGenWriteBarrier((&___nickPobeditel_94), value);
	}

	inline static int32_t get_offset_of__flashing_95() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____flashing_95)); }
	inline bool get__flashing_95() const { return ____flashing_95; }
	inline bool* get_address_of__flashing_95() { return &____flashing_95; }
	inline void set__flashing_95(bool value)
	{
		____flashing_95 = value;
	}

	inline static int32_t get_offset_of_hitTexture_96() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___hitTexture_96)); }
	inline Texture_t3661962703 * get_hitTexture_96() const { return ___hitTexture_96; }
	inline Texture_t3661962703 ** get_address_of_hitTexture_96() { return &___hitTexture_96; }
	inline void set_hitTexture_96(Texture_t3661962703 * value)
	{
		___hitTexture_96 = value;
		Il2CppCodeGenWriteBarrier((&___hitTexture_96), value);
	}

	inline static int32_t get_offset_of__skin_97() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____skin_97)); }
	inline Texture_t3661962703 * get__skin_97() const { return ____skin_97; }
	inline Texture_t3661962703 ** get_address_of__skin_97() { return &____skin_97; }
	inline void set__skin_97(Texture_t3661962703 * value)
	{
		____skin_97 = value;
		Il2CppCodeGenWriteBarrier((&____skin_97), value);
	}

	inline static int32_t get_offset_of_showNoInetTimer_98() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___showNoInetTimer_98)); }
	inline float get_showNoInetTimer_98() const { return ___showNoInetTimer_98; }
	inline float* get_address_of_showNoInetTimer_98() { return &___showNoInetTimer_98; }
	inline void set_showNoInetTimer_98(float value)
	{
		___showNoInetTimer_98 = value;
	}

	inline static int32_t get_offset_of_countKills_99() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___countKills_99)); }
	inline int32_t get_countKills_99() const { return ___countKills_99; }
	inline int32_t* get_address_of_countKills_99() { return &___countKills_99; }
	inline void set_countKills_99(int32_t value)
	{
		___countKills_99 = value;
	}

	inline static int32_t get_offset_of_maxCountKills_100() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___maxCountKills_100)); }
	inline int32_t get_maxCountKills_100() const { return ___maxCountKills_100; }
	inline int32_t* get_address_of_maxCountKills_100() { return &___maxCountKills_100; }
	inline void set_maxCountKills_100(int32_t value)
	{
		___maxCountKills_100 = value;
	}

	inline static int32_t get_offset_of__leftJoystick_101() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____leftJoystick_101)); }
	inline GameObject_t1113636619 * get__leftJoystick_101() const { return ____leftJoystick_101; }
	inline GameObject_t1113636619 ** get_address_of__leftJoystick_101() { return &____leftJoystick_101; }
	inline void set__leftJoystick_101(GameObject_t1113636619 * value)
	{
		____leftJoystick_101 = value;
		Il2CppCodeGenWriteBarrier((&____leftJoystick_101), value);
	}

	inline static int32_t get_offset_of__rightJoystick_102() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____rightJoystick_102)); }
	inline GameObject_t1113636619 * get__rightJoystick_102() const { return ____rightJoystick_102; }
	inline GameObject_t1113636619 ** get_address_of__rightJoystick_102() { return &____rightJoystick_102; }
	inline void set__rightJoystick_102(GameObject_t1113636619 * value)
	{
		____rightJoystick_102 = value;
		Il2CppCodeGenWriteBarrier((&____rightJoystick_102), value);
	}

	inline static int32_t get_offset_of__curHealth_103() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____curHealth_103)); }
	inline float get__curHealth_103() const { return ____curHealth_103; }
	inline float* get_address_of__curHealth_103() { return &____curHealth_103; }
	inline void set__curHealth_103(float value)
	{
		____curHealth_103 = value;
	}

	inline static int32_t get_offset_of__timeWhenPurchShown_104() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____timeWhenPurchShown_104)); }
	inline float get__timeWhenPurchShown_104() const { return ____timeWhenPurchShown_104; }
	inline float* get_address_of__timeWhenPurchShown_104() { return &____timeWhenPurchShown_104; }
	inline void set__timeWhenPurchShown_104(float value)
	{
		____timeWhenPurchShown_104 = value;
	}

	inline static int32_t get_offset_of_inAppOpenedFromPause_105() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___inAppOpenedFromPause_105)); }
	inline bool get_inAppOpenedFromPause_105() const { return ___inAppOpenedFromPause_105; }
	inline bool* get_address_of_inAppOpenedFromPause_105() { return &___inAppOpenedFromPause_105; }
	inline void set_inAppOpenedFromPause_105(bool value)
	{
		___inAppOpenedFromPause_105 = value;
	}

	inline static int32_t get_offset_of_sendTek_106() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sendTek_106)); }
	inline Texture_t3661962703 * get_sendTek_106() const { return ___sendTek_106; }
	inline Texture_t3661962703 ** get_address_of_sendTek_106() { return &___sendTek_106; }
	inline void set_sendTek_106(Texture_t3661962703 * value)
	{
		___sendTek_106 = value;
		Il2CppCodeGenWriteBarrier((&___sendTek_106), value);
	}

	inline static int32_t get_offset_of_sendUstanovlenii_107() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sendUstanovlenii_107)); }
	inline Texture_t3661962703 * get_sendUstanovlenii_107() const { return ___sendUstanovlenii_107; }
	inline Texture_t3661962703 ** get_address_of_sendUstanovlenii_107() { return &___sendUstanovlenii_107; }
	inline void set_sendUstanovlenii_107(Texture_t3661962703 * value)
	{
		___sendUstanovlenii_107 = value;
		Il2CppCodeGenWriteBarrier((&___sendUstanovlenii_107), value);
	}

	inline static int32_t get_offset_of_restoreWindowTexture_108() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___restoreWindowTexture_108)); }
	inline Texture_t3661962703 * get_restoreWindowTexture_108() const { return ___restoreWindowTexture_108; }
	inline Texture_t3661962703 ** get_address_of_restoreWindowTexture_108() { return &___restoreWindowTexture_108; }
	inline void set_restoreWindowTexture_108(Texture_t3661962703 * value)
	{
		___restoreWindowTexture_108 = value;
		Il2CppCodeGenWriteBarrier((&___restoreWindowTexture_108), value);
	}

	inline static int32_t get_offset_of_cancelEindButStyle_109() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___cancelEindButStyle_109)); }
	inline GUIStyle_t3956901511 * get_cancelEindButStyle_109() const { return ___cancelEindButStyle_109; }
	inline GUIStyle_t3956901511 ** get_address_of_cancelEindButStyle_109() { return &___cancelEindButStyle_109; }
	inline void set_cancelEindButStyle_109(GUIStyle_t3956901511 * value)
	{
		___cancelEindButStyle_109 = value;
		Il2CppCodeGenWriteBarrier((&___cancelEindButStyle_109), value);
	}

	inline static int32_t get_offset_of__label_110() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____label_110)); }
	inline GameObject_t1113636619 * get__label_110() const { return ____label_110; }
	inline GameObject_t1113636619 ** get_address_of__label_110() { return &____label_110; }
	inline void set__label_110(GameObject_t1113636619 * value)
	{
		____label_110 = value;
		Il2CppCodeGenWriteBarrier((&____label_110), value);
	}

	inline static int32_t get_offset_of_currentCategory_111() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___currentCategory_111)); }
	inline int32_t get_currentCategory_111() const { return ___currentCategory_111; }
	inline int32_t* get_address_of_currentCategory_111() { return &___currentCategory_111; }
	inline void set_currentCategory_111(int32_t value)
	{
		___currentCategory_111 = value;
	}

	inline static int32_t get_offset_of_MaxHealth_112() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___MaxHealth_112)); }
	inline float get_MaxHealth_112() const { return ___MaxHealth_112; }
	inline float* get_address_of_MaxHealth_112() { return &___MaxHealth_112; }
	inline void set_MaxHealth_112(float value)
	{
		___MaxHealth_112 = value;
	}

	inline static int32_t get_offset_of_curArmor_113() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___curArmor_113)); }
	inline float get_curArmor_113() const { return ___curArmor_113; }
	inline float* get_address_of_curArmor_113() { return &___curArmor_113; }
	inline void set_curArmor_113(float value)
	{
		___curArmor_113 = value;
	}

	inline static int32_t get_offset_of_MaxArmor_114() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___MaxArmor_114)); }
	inline float get_MaxArmor_114() const { return ___MaxArmor_114; }
	inline float* get_address_of_MaxArmor_114() { return &___MaxArmor_114; }
	inline void set_MaxArmor_114(float value)
	{
		___MaxArmor_114 = value;
	}

	inline static int32_t get_offset_of_AmmoBoxWidth_115() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AmmoBoxWidth_115)); }
	inline int32_t get_AmmoBoxWidth_115() const { return ___AmmoBoxWidth_115; }
	inline int32_t* get_address_of_AmmoBoxWidth_115() { return &___AmmoBoxWidth_115; }
	inline void set_AmmoBoxWidth_115(int32_t value)
	{
		___AmmoBoxWidth_115 = value;
	}

	inline static int32_t get_offset_of_AmmoBoxHeight_116() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AmmoBoxHeight_116)); }
	inline int32_t get_AmmoBoxHeight_116() const { return ___AmmoBoxHeight_116; }
	inline int32_t* get_address_of_AmmoBoxHeight_116() { return &___AmmoBoxHeight_116; }
	inline void set_AmmoBoxHeight_116(int32_t value)
	{
		___AmmoBoxHeight_116 = value;
	}

	inline static int32_t get_offset_of_AmmoBoxOffset_117() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AmmoBoxOffset_117)); }
	inline int32_t get_AmmoBoxOffset_117() const { return ___AmmoBoxOffset_117; }
	inline int32_t* get_address_of_AmmoBoxOffset_117() { return &___AmmoBoxOffset_117; }
	inline void set_AmmoBoxOffset_117(int32_t value)
	{
		___AmmoBoxOffset_117 = value;
	}

	inline static int32_t get_offset_of_ScoreBoxWidth_118() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ScoreBoxWidth_118)); }
	inline int32_t get_ScoreBoxWidth_118() const { return ___ScoreBoxWidth_118; }
	inline int32_t* get_address_of_ScoreBoxWidth_118() { return &___ScoreBoxWidth_118; }
	inline void set_ScoreBoxWidth_118(int32_t value)
	{
		___ScoreBoxWidth_118 = value;
	}

	inline static int32_t get_offset_of_ScoreBoxHeight_119() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ScoreBoxHeight_119)); }
	inline int32_t get_ScoreBoxHeight_119() const { return ___ScoreBoxHeight_119; }
	inline int32_t* get_address_of_ScoreBoxHeight_119() { return &___ScoreBoxHeight_119; }
	inline void set_ScoreBoxHeight_119(int32_t value)
	{
		___ScoreBoxHeight_119 = value;
	}

	inline static int32_t get_offset_of_ScoreBoxOffset_120() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ScoreBoxOffset_120)); }
	inline int32_t get_ScoreBoxOffset_120() const { return ___ScoreBoxOffset_120; }
	inline int32_t* get_address_of_ScoreBoxOffset_120() { return &___ScoreBoxOffset_120; }
	inline void set_ScoreBoxOffset_120(int32_t value)
	{
		___ScoreBoxOffset_120 = value;
	}

	inline static int32_t get_offset_of_timerShow_121() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___timerShow_121)); }
	inline SingleU5BU5D_t1444911251* get_timerShow_121() const { return ___timerShow_121; }
	inline SingleU5BU5D_t1444911251** get_address_of_timerShow_121() { return &___timerShow_121; }
	inline void set_timerShow_121(SingleU5BU5D_t1444911251* value)
	{
		___timerShow_121 = value;
		Il2CppCodeGenWriteBarrier((&___timerShow_121), value);
	}

	inline static int32_t get_offset_of_deadPlayerSound_122() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___deadPlayerSound_122)); }
	inline AudioClip_t3680889665 * get_deadPlayerSound_122() const { return ___deadPlayerSound_122; }
	inline AudioClip_t3680889665 ** get_address_of_deadPlayerSound_122() { return &___deadPlayerSound_122; }
	inline void set_deadPlayerSound_122(AudioClip_t3680889665 * value)
	{
		___deadPlayerSound_122 = value;
		Il2CppCodeGenWriteBarrier((&___deadPlayerSound_122), value);
	}

	inline static int32_t get_offset_of_damagePlayerSound_123() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___damagePlayerSound_123)); }
	inline AudioClip_t3680889665 * get_damagePlayerSound_123() const { return ___damagePlayerSound_123; }
	inline AudioClip_t3680889665 ** get_address_of_damagePlayerSound_123() { return &___damagePlayerSound_123; }
	inline void set_damagePlayerSound_123(AudioClip_t3680889665 * value)
	{
		___damagePlayerSound_123 = value;
		Il2CppCodeGenWriteBarrier((&___damagePlayerSound_123), value);
	}

	inline static int32_t get_offset_of_GunFlashLifetime_124() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___GunFlashLifetime_124)); }
	inline float get_GunFlashLifetime_124() const { return ___GunFlashLifetime_124; }
	inline float* get_address_of_GunFlashLifetime_124() { return &___GunFlashLifetime_124; }
	inline void set_GunFlashLifetime_124(float value)
	{
		___GunFlashLifetime_124 = value;
	}

	inline static int32_t get_offset_of_zoneCreatePlayer_125() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___zoneCreatePlayer_125)); }
	inline GameObjectU5BU5D_t3328599146* get_zoneCreatePlayer_125() const { return ___zoneCreatePlayer_125; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_zoneCreatePlayer_125() { return &___zoneCreatePlayer_125; }
	inline void set_zoneCreatePlayer_125(GameObjectU5BU5D_t3328599146* value)
	{
		___zoneCreatePlayer_125 = value;
		Il2CppCodeGenWriteBarrier((&___zoneCreatePlayer_125), value);
	}

	inline static int32_t get_offset_of_ScoreBox_126() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ScoreBox_126)); }
	inline GUIStyle_t3956901511 * get_ScoreBox_126() const { return ___ScoreBox_126; }
	inline GUIStyle_t3956901511 ** get_address_of_ScoreBox_126() { return &___ScoreBox_126; }
	inline void set_ScoreBox_126(GUIStyle_t3956901511 * value)
	{
		___ScoreBox_126 = value;
		Il2CppCodeGenWriteBarrier((&___ScoreBox_126), value);
	}

	inline static int32_t get_offset_of_EnemiesBox_127() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___EnemiesBox_127)); }
	inline GUIStyle_t3956901511 * get_EnemiesBox_127() const { return ___EnemiesBox_127; }
	inline GUIStyle_t3956901511 ** get_address_of_EnemiesBox_127() { return &___EnemiesBox_127; }
	inline void set_EnemiesBox_127(GUIStyle_t3956901511 * value)
	{
		___EnemiesBox_127 = value;
		Il2CppCodeGenWriteBarrier((&___EnemiesBox_127), value);
	}

	inline static int32_t get_offset_of_AmmoBox_128() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___AmmoBox_128)); }
	inline GUIStyle_t3956901511 * get_AmmoBox_128() const { return ___AmmoBox_128; }
	inline GUIStyle_t3956901511 ** get_address_of_AmmoBox_128() { return &___AmmoBox_128; }
	inline void set_AmmoBox_128(GUIStyle_t3956901511 * value)
	{
		___AmmoBox_128 = value;
		Il2CppCodeGenWriteBarrier((&___AmmoBox_128), value);
	}

	inline static int32_t get_offset_of_HealthBox_129() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___HealthBox_129)); }
	inline GUIStyle_t3956901511 * get_HealthBox_129() const { return ___HealthBox_129; }
	inline GUIStyle_t3956901511 ** get_address_of_HealthBox_129() { return &___HealthBox_129; }
	inline void set_HealthBox_129(GUIStyle_t3956901511 * value)
	{
		___HealthBox_129 = value;
		Il2CppCodeGenWriteBarrier((&___HealthBox_129), value);
	}

	inline static int32_t get_offset_of_pauseStyle_130() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___pauseStyle_130)); }
	inline GUIStyle_t3956901511 * get_pauseStyle_130() const { return ___pauseStyle_130; }
	inline GUIStyle_t3956901511 ** get_address_of_pauseStyle_130() { return &___pauseStyle_130; }
	inline void set_pauseStyle_130(GUIStyle_t3956901511 * value)
	{
		___pauseStyle_130 = value;
		Il2CppCodeGenWriteBarrier((&___pauseStyle_130), value);
	}

	inline static int32_t get_offset_of_pauseFonStyle_131() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___pauseFonStyle_131)); }
	inline GUIStyle_t3956901511 * get_pauseFonStyle_131() const { return ___pauseFonStyle_131; }
	inline GUIStyle_t3956901511 ** get_address_of_pauseFonStyle_131() { return &___pauseFonStyle_131; }
	inline void set_pauseFonStyle_131(GUIStyle_t3956901511 * value)
	{
		___pauseFonStyle_131 = value;
		Il2CppCodeGenWriteBarrier((&___pauseFonStyle_131), value);
	}

	inline static int32_t get_offset_of_resumeStyle_132() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___resumeStyle_132)); }
	inline GUIStyle_t3956901511 * get_resumeStyle_132() const { return ___resumeStyle_132; }
	inline GUIStyle_t3956901511 ** get_address_of_resumeStyle_132() { return &___resumeStyle_132; }
	inline void set_resumeStyle_132(GUIStyle_t3956901511 * value)
	{
		___resumeStyle_132 = value;
		Il2CppCodeGenWriteBarrier((&___resumeStyle_132), value);
	}

	inline static int32_t get_offset_of_menuStyle_133() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___menuStyle_133)); }
	inline GUIStyle_t3956901511 * get_menuStyle_133() const { return ___menuStyle_133; }
	inline GUIStyle_t3956901511 ** get_address_of_menuStyle_133() { return &___menuStyle_133; }
	inline void set_menuStyle_133(GUIStyle_t3956901511 * value)
	{
		___menuStyle_133 = value;
		Il2CppCodeGenWriteBarrier((&___menuStyle_133), value);
	}

	inline static int32_t get_offset_of_soundStyle_134() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___soundStyle_134)); }
	inline GUIStyle_t3956901511 * get_soundStyle_134() const { return ___soundStyle_134; }
	inline GUIStyle_t3956901511 ** get_address_of_soundStyle_134() { return &___soundStyle_134; }
	inline void set_soundStyle_134(GUIStyle_t3956901511 * value)
	{
		___soundStyle_134 = value;
		Il2CppCodeGenWriteBarrier((&___soundStyle_134), value);
	}

	inline static int32_t get_offset_of_buyStyle_135() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___buyStyle_135)); }
	inline GUIStyle_t3956901511 * get_buyStyle_135() const { return ___buyStyle_135; }
	inline GUIStyle_t3956901511 ** get_address_of_buyStyle_135() { return &___buyStyle_135; }
	inline void set_buyStyle_135(GUIStyle_t3956901511 * value)
	{
		___buyStyle_135 = value;
		Il2CppCodeGenWriteBarrier((&___buyStyle_135), value);
	}

	inline static int32_t get_offset_of_resumePauseStyle_136() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___resumePauseStyle_136)); }
	inline GUIStyle_t3956901511 * get_resumePauseStyle_136() const { return ___resumePauseStyle_136; }
	inline GUIStyle_t3956901511 ** get_address_of_resumePauseStyle_136() { return &___resumePauseStyle_136; }
	inline void set_resumePauseStyle_136(GUIStyle_t3956901511 * value)
	{
		___resumePauseStyle_136 = value;
		Il2CppCodeGenWriteBarrier((&___resumePauseStyle_136), value);
	}

	inline static int32_t get_offset_of_sensitPausePlashka_137() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sensitPausePlashka_137)); }
	inline Texture_t3661962703 * get_sensitPausePlashka_137() const { return ___sensitPausePlashka_137; }
	inline Texture_t3661962703 ** get_address_of_sensitPausePlashka_137() { return &___sensitPausePlashka_137; }
	inline void set_sensitPausePlashka_137(Texture_t3661962703 * value)
	{
		___sensitPausePlashka_137 = value;
		Il2CppCodeGenWriteBarrier((&___sensitPausePlashka_137), value);
	}

	inline static int32_t get_offset_of_slow_fast_138() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___slow_fast_138)); }
	inline Texture_t3661962703 * get_slow_fast_138() const { return ___slow_fast_138; }
	inline Texture_t3661962703 ** get_address_of_slow_fast_138() { return &___slow_fast_138; }
	inline void set_slow_fast_138(Texture_t3661962703 * value)
	{
		___slow_fast_138 = value;
		Il2CppCodeGenWriteBarrier((&___slow_fast_138), value);
	}

	inline static int32_t get_offset_of_polzunok_139() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___polzunok_139)); }
	inline Texture_t3661962703 * get_polzunok_139() const { return ___polzunok_139; }
	inline Texture_t3661962703 ** get_address_of_polzunok_139() { return &___polzunok_139; }
	inline void set_polzunok_139(Texture_t3661962703 * value)
	{
		___polzunok_139 = value;
		Il2CppCodeGenWriteBarrier((&___polzunok_139), value);
	}

	inline static int32_t get_offset_of_mySens_140() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___mySens_140)); }
	inline float get_mySens_140() const { return ___mySens_140; }
	inline float* get_address_of_mySens_140() { return &___mySens_140; }
	inline void set_mySens_140(float value)
	{
		___mySens_140 = value;
	}

	inline static int32_t get_offset_of_sliderSensStyle_141() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sliderSensStyle_141)); }
	inline GUIStyle_t3956901511 * get_sliderSensStyle_141() const { return ___sliderSensStyle_141; }
	inline GUIStyle_t3956901511 ** get_address_of_sliderSensStyle_141() { return &___sliderSensStyle_141; }
	inline void set_sliderSensStyle_141(GUIStyle_t3956901511 * value)
	{
		___sliderSensStyle_141 = value;
		Il2CppCodeGenWriteBarrier((&___sliderSensStyle_141), value);
	}

	inline static int32_t get_offset_of_thumbSensStyle_142() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___thumbSensStyle_142)); }
	inline GUIStyle_t3956901511 * get_thumbSensStyle_142() const { return ___thumbSensStyle_142; }
	inline GUIStyle_t3956901511 ** get_address_of_thumbSensStyle_142() { return &___thumbSensStyle_142; }
	inline void set_thumbSensStyle_142(GUIStyle_t3956901511 * value)
	{
		___thumbSensStyle_142 = value;
		Il2CppCodeGenWriteBarrier((&___thumbSensStyle_142), value);
	}

	inline static int32_t get_offset_of_enemiesLeftStyle_143() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___enemiesLeftStyle_143)); }
	inline GUIStyle_t3956901511 * get_enemiesLeftStyle_143() const { return ___enemiesLeftStyle_143; }
	inline GUIStyle_t3956901511 ** get_address_of_enemiesLeftStyle_143() { return &___enemiesLeftStyle_143; }
	inline void set_enemiesLeftStyle_143(GUIStyle_t3956901511 * value)
	{
		___enemiesLeftStyle_143 = value;
		Il2CppCodeGenWriteBarrier((&___enemiesLeftStyle_143), value);
	}

	inline static int32_t get_offset_of_damage_144() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___damage_144)); }
	inline GameObject_t1113636619 * get_damage_144() const { return ___damage_144; }
	inline GameObject_t1113636619 ** get_address_of_damage_144() { return &___damage_144; }
	inline void set_damage_144(GameObject_t1113636619 * value)
	{
		___damage_144 = value;
		Il2CppCodeGenWriteBarrier((&___damage_144), value);
	}

	inline static int32_t get_offset_of_damageShown_145() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___damageShown_145)); }
	inline bool get_damageShown_145() const { return ___damageShown_145; }
	inline bool* get_address_of_damageShown_145() { return &___damageShown_145; }
	inline void set_damageShown_145(bool value)
	{
		___damageShown_145 = value;
	}

	inline static int32_t get_offset_of_pauseFon_146() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___pauseFon_146)); }
	inline Texture_t3661962703 * get_pauseFon_146() const { return ___pauseFon_146; }
	inline Texture_t3661962703 ** get_address_of_pauseFon_146() { return &___pauseFon_146; }
	inline void set_pauseFon_146(Texture_t3661962703 * value)
	{
		___pauseFon_146 = value;
		Il2CppCodeGenWriteBarrier((&___pauseFon_146), value);
	}

	inline static int32_t get_offset_of__pauser_147() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____pauser_147)); }
	inline Pauser_t2963840460 * get__pauser_147() const { return ____pauser_147; }
	inline Pauser_t2963840460 ** get_address_of__pauser_147() { return &____pauser_147; }
	inline void set__pauser_147(Pauser_t2963840460 * value)
	{
		____pauser_147 = value;
		Il2CppCodeGenWriteBarrier((&____pauser_147), value);
	}

	inline static int32_t get_offset_of_pauseTitle_148() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___pauseTitle_148)); }
	inline Texture_t3661962703 * get_pauseTitle_148() const { return ___pauseTitle_148; }
	inline Texture_t3661962703 ** get_address_of_pauseTitle_148() { return &___pauseTitle_148; }
	inline void set_pauseTitle_148(Texture_t3661962703 * value)
	{
		___pauseTitle_148 = value;
		Il2CppCodeGenWriteBarrier((&___pauseTitle_148), value);
	}

	inline static int32_t get_offset_of__gameController_149() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____gameController_149)); }
	inline GameObject_t1113636619 * get__gameController_149() const { return ____gameController_149; }
	inline GameObject_t1113636619 ** get_address_of__gameController_149() { return &____gameController_149; }
	inline void set__gameController_149(GameObject_t1113636619 * value)
	{
		____gameController_149 = value;
		Il2CppCodeGenWriteBarrier((&____gameController_149), value);
	}

	inline static int32_t get_offset_of__backWasPressed_150() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____backWasPressed_150)); }
	inline bool get__backWasPressed_150() const { return ____backWasPressed_150; }
	inline bool* get_address_of__backWasPressed_150() { return &____backWasPressed_150; }
	inline void set__backWasPressed_150(bool value)
	{
		____backWasPressed_150 = value;
	}

	inline static int32_t get_offset_of__player_151() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____player_151)); }
	inline GameObject_t1113636619 * get__player_151() const { return ____player_151; }
	inline GameObject_t1113636619 ** get_address_of__player_151() { return &____player_151; }
	inline void set__player_151(GameObject_t1113636619 * value)
	{
		____player_151 = value;
		Il2CppCodeGenWriteBarrier((&____player_151), value);
	}

	inline static int32_t get_offset_of_bulletPrefab_152() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___bulletPrefab_152)); }
	inline GameObject_t1113636619 * get_bulletPrefab_152() const { return ___bulletPrefab_152; }
	inline GameObject_t1113636619 ** get_address_of_bulletPrefab_152() { return &___bulletPrefab_152; }
	inline void set_bulletPrefab_152(GameObject_t1113636619 * value)
	{
		___bulletPrefab_152 = value;
		Il2CppCodeGenWriteBarrier((&___bulletPrefab_152), value);
	}

	inline static int32_t get_offset_of__bulletSpawnPoint_153() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____bulletSpawnPoint_153)); }
	inline GameObject_t1113636619 * get__bulletSpawnPoint_153() const { return ____bulletSpawnPoint_153; }
	inline GameObject_t1113636619 ** get_address_of__bulletSpawnPoint_153() { return &____bulletSpawnPoint_153; }
	inline void set__bulletSpawnPoint_153(GameObject_t1113636619 * value)
	{
		____bulletSpawnPoint_153 = value;
		Il2CppCodeGenWriteBarrier((&____bulletSpawnPoint_153), value);
	}

	inline static int32_t get_offset_of__purchaseActivityIndicator_154() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____purchaseActivityIndicator_154)); }
	inline GameObject_t1113636619 * get__purchaseActivityIndicator_154() const { return ____purchaseActivityIndicator_154; }
	inline GameObject_t1113636619 ** get_address_of__purchaseActivityIndicator_154() { return &____purchaseActivityIndicator_154; }
	inline void set__purchaseActivityIndicator_154(GameObject_t1113636619 * value)
	{
		____purchaseActivityIndicator_154 = value;
		Il2CppCodeGenWriteBarrier((&____purchaseActivityIndicator_154), value);
	}

	inline static int32_t get_offset_of__inAppGameObject_155() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____inAppGameObject_155)); }
	inline GameObject_t1113636619 * get__inAppGameObject_155() const { return ____inAppGameObject_155; }
	inline GameObject_t1113636619 ** get_address_of__inAppGameObject_155() { return &____inAppGameObject_155; }
	inline void set__inAppGameObject_155(GameObject_t1113636619 * value)
	{
		____inAppGameObject_155 = value;
		Il2CppCodeGenWriteBarrier((&____inAppGameObject_155), value);
	}

	inline static int32_t get_offset_of__listener_156() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____listener_156)); }
	inline StoreKitEventListener_t3151468363 * get__listener_156() const { return ____listener_156; }
	inline StoreKitEventListener_t3151468363 ** get_address_of__listener_156() { return &____listener_156; }
	inline void set__listener_156(StoreKitEventListener_t3151468363 * value)
	{
		____listener_156 = value;
		Il2CppCodeGenWriteBarrier((&____listener_156), value);
	}

	inline static int32_t get_offset_of_puliInApp_157() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___puliInApp_157)); }
	inline GUIStyle_t3956901511 * get_puliInApp_157() const { return ___puliInApp_157; }
	inline GUIStyle_t3956901511 ** get_address_of_puliInApp_157() { return &___puliInApp_157; }
	inline void set_puliInApp_157(GUIStyle_t3956901511 * value)
	{
		___puliInApp_157 = value;
		Il2CppCodeGenWriteBarrier((&___puliInApp_157), value);
	}

	inline static int32_t get_offset_of_healthInApp_158() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___healthInApp_158)); }
	inline GUIStyle_t3956901511 * get_healthInApp_158() const { return ___healthInApp_158; }
	inline GUIStyle_t3956901511 ** get_address_of_healthInApp_158() { return &___healthInApp_158; }
	inline void set_healthInApp_158(GUIStyle_t3956901511 * value)
	{
		___healthInApp_158 = value;
		Il2CppCodeGenWriteBarrier((&___healthInApp_158), value);
	}

	inline static int32_t get_offset_of_pulemetInApp_159() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___pulemetInApp_159)); }
	inline GUIStyle_t3956901511 * get_pulemetInApp_159() const { return ___pulemetInApp_159; }
	inline GUIStyle_t3956901511 ** get_address_of_pulemetInApp_159() { return &___pulemetInApp_159; }
	inline void set_pulemetInApp_159(GUIStyle_t3956901511 * value)
	{
		___pulemetInApp_159 = value;
		Il2CppCodeGenWriteBarrier((&___pulemetInApp_159), value);
	}

	inline static int32_t get_offset_of_crystalSwordInapp_160() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___crystalSwordInapp_160)); }
	inline GUIStyle_t3956901511 * get_crystalSwordInapp_160() const { return ___crystalSwordInapp_160; }
	inline GUIStyle_t3956901511 ** get_address_of_crystalSwordInapp_160() { return &___crystalSwordInapp_160; }
	inline void set_crystalSwordInapp_160(GUIStyle_t3956901511 * value)
	{
		___crystalSwordInapp_160 = value;
		Il2CppCodeGenWriteBarrier((&___crystalSwordInapp_160), value);
	}

	inline static int32_t get_offset_of_elixirInapp_161() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___elixirInapp_161)); }
	inline GUIStyle_t3956901511 * get_elixirInapp_161() const { return ___elixirInapp_161; }
	inline GUIStyle_t3956901511 ** get_address_of_elixirInapp_161() { return &___elixirInapp_161; }
	inline void set_elixirInapp_161(GUIStyle_t3956901511 * value)
	{
		___elixirInapp_161 = value;
		Il2CppCodeGenWriteBarrier((&___elixirInapp_161), value);
	}

	inline static int32_t get_offset_of_isInappWinOpen_162() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___isInappWinOpen_162)); }
	inline bool get_isInappWinOpen_162() const { return ___isInappWinOpen_162; }
	inline bool* get_address_of_isInappWinOpen_162() { return &___isInappWinOpen_162; }
	inline void set_isInappWinOpen_162(bool value)
	{
		___isInappWinOpen_162 = value;
	}

	inline static int32_t get_offset_of_inGameGUI_163() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___inGameGUI_163)); }
	inline InGameGUI_t3650018622 * get_inGameGUI_163() const { return ___inGameGUI_163; }
	inline InGameGUI_t3650018622 ** get_address_of_inGameGUI_163() { return &___inGameGUI_163; }
	inline void set_inGameGUI_163(InGameGUI_t3650018622 * value)
	{
		___inGameGUI_163 = value;
		Il2CppCodeGenWriteBarrier((&___inGameGUI_163), value);
	}

	inline static int32_t get_offset_of__actionsForPurchasedItems_164() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____actionsForPurchasedItems_164)); }
	inline Dictionary_2_t736599152 * get__actionsForPurchasedItems_164() const { return ____actionsForPurchasedItems_164; }
	inline Dictionary_2_t736599152 ** get_address_of__actionsForPurchasedItems_164() { return &____actionsForPurchasedItems_164; }
	inline void set__actionsForPurchasedItems_164(Dictionary_2_t736599152 * value)
	{
		____actionsForPurchasedItems_164 = value;
		Il2CppCodeGenWriteBarrier((&____actionsForPurchasedItems_164), value);
	}

	inline static int32_t get_offset_of_scrollEnabled_165() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scrollEnabled_165)); }
	inline bool get_scrollEnabled_165() const { return ___scrollEnabled_165; }
	inline bool* get_address_of_scrollEnabled_165() { return &___scrollEnabled_165; }
	inline void set_scrollEnabled_165(bool value)
	{
		___scrollEnabled_165 = value;
	}

	inline static int32_t get_offset_of_scrollStartTouch_166() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___scrollStartTouch_166)); }
	inline Vector2_t2156229523  get_scrollStartTouch_166() const { return ___scrollStartTouch_166; }
	inline Vector2_t2156229523 * get_address_of_scrollStartTouch_166() { return &___scrollStartTouch_166; }
	inline void set_scrollStartTouch_166(Vector2_t2156229523  value)
	{
		___scrollStartTouch_166 = value;
	}

	inline static int32_t get_offset_of_otstupMejduProd_167() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___otstupMejduProd_167)); }
	inline float get_otstupMejduProd_167() const { return ___otstupMejduProd_167; }
	inline float* get_address_of_otstupMejduProd_167() { return &___otstupMejduProd_167; }
	inline void set_otstupMejduProd_167(float value)
	{
		___otstupMejduProd_167 = value;
	}

	inline static int32_t get_offset_of_widthPoduct_168() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___widthPoduct_168)); }
	inline float get_widthPoduct_168() const { return ___widthPoduct_168; }
	inline float* get_address_of_widthPoduct_168() { return &___widthPoduct_168; }
	inline void set_widthPoduct_168(float value)
	{
		___widthPoduct_168 = value;
	}

	inline static int32_t get_offset_of__products_169() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____products_169)); }
	inline List_1_t257213610 * get__products_169() const { return ____products_169; }
	inline List_1_t257213610 ** get_address_of__products_169() { return &____products_169; }
	inline void set__products_169(List_1_t257213610 * value)
	{
		____products_169 = value;
		Il2CppCodeGenWriteBarrier((&____products_169), value);
	}

	inline static int32_t get_offset_of__productsFull_170() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____productsFull_170)); }
	inline RuntimeObject* get__productsFull_170() const { return ____productsFull_170; }
	inline RuntimeObject** get_address_of__productsFull_170() { return &____productsFull_170; }
	inline void set__productsFull_170(RuntimeObject* value)
	{
		____productsFull_170 = value;
		Il2CppCodeGenWriteBarrier((&____productsFull_170), value);
	}

	inline static int32_t get_offset_of__zombieCreator_171() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____zombieCreator_171)); }
	inline ZombieCreator_t3776728246 * get__zombieCreator_171() const { return ____zombieCreator_171; }
	inline ZombieCreator_t3776728246 ** get_address_of__zombieCreator_171() { return &____zombieCreator_171; }
	inline void set__zombieCreator_171(ZombieCreator_t3776728246 * value)
	{
		____zombieCreator_171 = value;
		Il2CppCodeGenWriteBarrier((&____zombieCreator_171), value);
	}

	inline static int32_t get_offset_of____weaponManager_172() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ______weaponManager_172)); }
	inline WeaponManager_t1762453775 * get____weaponManager_172() const { return ______weaponManager_172; }
	inline WeaponManager_t1762453775 ** get_address_of____weaponManager_172() { return &______weaponManager_172; }
	inline void set____weaponManager_172(WeaponManager_t1762453775 * value)
	{
		______weaponManager_172 = value;
		Il2CppCodeGenWriteBarrier((&______weaponManager_172), value);
	}

	inline static int32_t get_offset_of_shopHead_173() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___shopHead_173)); }
	inline Texture_t3661962703 * get_shopHead_173() const { return ___shopHead_173; }
	inline Texture_t3661962703 ** get_address_of_shopHead_173() { return &___shopHead_173; }
	inline void set_shopHead_173(Texture_t3661962703 * value)
	{
		___shopHead_173 = value;
		Il2CppCodeGenWriteBarrier((&___shopHead_173), value);
	}

	inline static int32_t get_offset_of_shopFon_174() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___shopFon_174)); }
	inline Texture_t3661962703 * get_shopFon_174() const { return ___shopFon_174; }
	inline Texture_t3661962703 ** get_address_of_shopFon_174() { return &___shopFon_174; }
	inline void set_shopFon_174(Texture_t3661962703 * value)
	{
		___shopFon_174 = value;
		Il2CppCodeGenWriteBarrier((&___shopFon_174), value);
	}

	inline static int32_t get_offset_of_catStyles_175() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___catStyles_175)); }
	inline GUIStyleU5BU5D_t2383250302* get_catStyles_175() const { return ___catStyles_175; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_catStyles_175() { return &___catStyles_175; }
	inline void set_catStyles_175(GUIStyleU5BU5D_t2383250302* value)
	{
		___catStyles_175 = value;
		Il2CppCodeGenWriteBarrier((&___catStyles_175), value);
	}

	inline static int32_t get_offset_of_armorStyle_176() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___armorStyle_176)); }
	inline GUIStyle_t3956901511 * get_armorStyle_176() const { return ___armorStyle_176; }
	inline GUIStyle_t3956901511 ** get_address_of_armorStyle_176() { return &___armorStyle_176; }
	inline void set_armorStyle_176(GUIStyle_t3956901511 * value)
	{
		___armorStyle_176 = value;
		Il2CppCodeGenWriteBarrier((&___armorStyle_176), value);
	}

	inline static int32_t get_offset_of_armorShield_177() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___armorShield_177)); }
	inline Texture_t3661962703 * get_armorShield_177() const { return ___armorShield_177; }
	inline Texture_t3661962703 ** get_address_of_armorShield_177() { return &___armorShield_177; }
	inline void set_armorShield_177(Texture_t3661962703 * value)
	{
		___armorShield_177 = value;
		Il2CppCodeGenWriteBarrier((&___armorShield_177), value);
	}

	inline static int32_t get_offset_of_categoryHeads_178() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___categoryHeads_178)); }
	inline TextureU5BU5D_t908295702* get_categoryHeads_178() const { return ___categoryHeads_178; }
	inline TextureU5BU5D_t908295702** get_address_of_categoryHeads_178() { return &___categoryHeads_178; }
	inline void set_categoryHeads_178(TextureU5BU5D_t908295702* value)
	{
		___categoryHeads_178 = value;
		Il2CppCodeGenWriteBarrier((&___categoryHeads_178), value);
	}

	inline static int32_t get_offset_of_leftFingerPos_179() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___leftFingerPos_179)); }
	inline Vector2_t2156229523  get_leftFingerPos_179() const { return ___leftFingerPos_179; }
	inline Vector2_t2156229523 * get_address_of_leftFingerPos_179() { return &___leftFingerPos_179; }
	inline void set_leftFingerPos_179(Vector2_t2156229523  value)
	{
		___leftFingerPos_179 = value;
	}

	inline static int32_t get_offset_of_leftFingerLastPos_180() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___leftFingerLastPos_180)); }
	inline Vector2_t2156229523  get_leftFingerLastPos_180() const { return ___leftFingerLastPos_180; }
	inline Vector2_t2156229523 * get_address_of_leftFingerLastPos_180() { return &___leftFingerLastPos_180; }
	inline void set_leftFingerLastPos_180(Vector2_t2156229523  value)
	{
		___leftFingerLastPos_180 = value;
	}

	inline static int32_t get_offset_of_leftFingerMovedBy_181() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___leftFingerMovedBy_181)); }
	inline Vector2_t2156229523  get_leftFingerMovedBy_181() const { return ___leftFingerMovedBy_181; }
	inline Vector2_t2156229523 * get_address_of_leftFingerMovedBy_181() { return &___leftFingerMovedBy_181; }
	inline void set_leftFingerMovedBy_181(Vector2_t2156229523  value)
	{
		___leftFingerMovedBy_181 = value;
	}

	inline static int32_t get_offset_of_canReceiveSwipes_182() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___canReceiveSwipes_182)); }
	inline bool get_canReceiveSwipes_182() const { return ___canReceiveSwipes_182; }
	inline bool* get_address_of_canReceiveSwipes_182() { return &___canReceiveSwipes_182; }
	inline void set_canReceiveSwipes_182(bool value)
	{
		___canReceiveSwipes_182 = value;
	}

	inline static int32_t get_offset_of_slideMagnitudeX_183() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___slideMagnitudeX_183)); }
	inline float get_slideMagnitudeX_183() const { return ___slideMagnitudeX_183; }
	inline float* get_address_of_slideMagnitudeX_183() { return &___slideMagnitudeX_183; }
	inline void set_slideMagnitudeX_183(float value)
	{
		___slideMagnitudeX_183 = value;
	}

	inline static int32_t get_offset_of_slideMagnitudeY_184() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___slideMagnitudeY_184)); }
	inline float get_slideMagnitudeY_184() const { return ___slideMagnitudeY_184; }
	inline float* get_address_of_slideMagnitudeY_184() { return &___slideMagnitudeY_184; }
	inline void set_slideMagnitudeY_184(float value)
	{
		___slideMagnitudeY_184 = value;
	}

	inline static int32_t get_offset_of_ChangeWeaponClip_185() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___ChangeWeaponClip_185)); }
	inline AudioClip_t3680889665 * get_ChangeWeaponClip_185() const { return ___ChangeWeaponClip_185; }
	inline AudioClip_t3680889665 ** get_address_of_ChangeWeaponClip_185() { return &___ChangeWeaponClip_185; }
	inline void set_ChangeWeaponClip_185(AudioClip_t3680889665 * value)
	{
		___ChangeWeaponClip_185 = value;
		Il2CppCodeGenWriteBarrier((&___ChangeWeaponClip_185), value);
	}

	inline static int32_t get_offset_of_photonView_186() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___photonView_186)); }
	inline PhotonView_t2207721820 * get_photonView_186() const { return ___photonView_186; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_186() { return &___photonView_186; }
	inline void set_photonView_186(PhotonView_t2207721820 * value)
	{
		___photonView_186 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_186), value);
	}

	inline static int32_t get_offset_of_height_187() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___height_187)); }
	inline float get_height_187() const { return ___height_187; }
	inline float* get_address_of_height_187() { return &___height_187; }
	inline void set_height_187(float value)
	{
		___height_187 = value;
	}

	inline static int32_t get_offset_of__width_188() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ____width_188)); }
	inline float get__width_188() const { return ____width_188; }
	inline float* get_address_of__width_188() { return &____width_188; }
	inline void set__width_188(float value)
	{
		____width_188 = value;
	}

	inline static int32_t get_offset_of_sword_2_Style_189() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sword_2_Style_189)); }
	inline GUIStyle_t3956901511 * get_sword_2_Style_189() const { return ___sword_2_Style_189; }
	inline GUIStyle_t3956901511 ** get_address_of_sword_2_Style_189() { return &___sword_2_Style_189; }
	inline void set_sword_2_Style_189(GUIStyle_t3956901511 * value)
	{
		___sword_2_Style_189 = value;
		Il2CppCodeGenWriteBarrier((&___sword_2_Style_189), value);
	}

	inline static int32_t get_offset_of_hammerStyle_190() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___hammerStyle_190)); }
	inline GUIStyle_t3956901511 * get_hammerStyle_190() const { return ___hammerStyle_190; }
	inline GUIStyle_t3956901511 ** get_address_of_hammerStyle_190() { return &___hammerStyle_190; }
	inline void set_hammerStyle_190(GUIStyle_t3956901511 * value)
	{
		___hammerStyle_190 = value;
		Il2CppCodeGenWriteBarrier((&___hammerStyle_190), value);
	}

	inline static int32_t get_offset_of_staffStyle_191() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___staffStyle_191)); }
	inline GUIStyle_t3956901511 * get_staffStyle_191() const { return ___staffStyle_191; }
	inline GUIStyle_t3956901511 ** get_address_of_staffStyle_191() { return &___staffStyle_191; }
	inline void set_staffStyle_191(GUIStyle_t3956901511 * value)
	{
		___staffStyle_191 = value;
		Il2CppCodeGenWriteBarrier((&___staffStyle_191), value);
	}

	inline static int32_t get_offset_of_laserStyle_192() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___laserStyle_192)); }
	inline GUIStyle_t3956901511 * get_laserStyle_192() const { return ___laserStyle_192; }
	inline GUIStyle_t3956901511 ** get_address_of_laserStyle_192() { return &___laserStyle_192; }
	inline void set_laserStyle_192(GUIStyle_t3956901511 * value)
	{
		___laserStyle_192 = value;
		Il2CppCodeGenWriteBarrier((&___laserStyle_192), value);
	}

	inline static int32_t get_offset_of_lightSwordStyle_193() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___lightSwordStyle_193)); }
	inline GUIStyle_t3956901511 * get_lightSwordStyle_193() const { return ___lightSwordStyle_193; }
	inline GUIStyle_t3956901511 ** get_address_of_lightSwordStyle_193() { return &___lightSwordStyle_193; }
	inline void set_lightSwordStyle_193(GUIStyle_t3956901511 * value)
	{
		___lightSwordStyle_193 = value;
		Il2CppCodeGenWriteBarrier((&___lightSwordStyle_193), value);
	}

	inline static int32_t get_offset_of_berettaStyle_194() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___berettaStyle_194)); }
	inline GUIStyle_t3956901511 * get_berettaStyle_194() const { return ___berettaStyle_194; }
	inline GUIStyle_t3956901511 ** get_address_of_berettaStyle_194() { return &___berettaStyle_194; }
	inline void set_berettaStyle_194(GUIStyle_t3956901511 * value)
	{
		___berettaStyle_194 = value;
		Il2CppCodeGenWriteBarrier((&___berettaStyle_194), value);
	}

	inline static int32_t get_offset_of_sword_2_off_text_195() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___sword_2_off_text_195)); }
	inline Texture_t3661962703 * get_sword_2_off_text_195() const { return ___sword_2_off_text_195; }
	inline Texture_t3661962703 ** get_address_of_sword_2_off_text_195() { return &___sword_2_off_text_195; }
	inline void set_sword_2_off_text_195(Texture_t3661962703 * value)
	{
		___sword_2_off_text_195 = value;
		Il2CppCodeGenWriteBarrier((&___sword_2_off_text_195), value);
	}

	inline static int32_t get_offset_of_hammer_off_text_196() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___hammer_off_text_196)); }
	inline Texture_t3661962703 * get_hammer_off_text_196() const { return ___hammer_off_text_196; }
	inline Texture_t3661962703 ** get_address_of_hammer_off_text_196() { return &___hammer_off_text_196; }
	inline void set_hammer_off_text_196(Texture_t3661962703 * value)
	{
		___hammer_off_text_196 = value;
		Il2CppCodeGenWriteBarrier((&___hammer_off_text_196), value);
	}

	inline static int32_t get_offset_of_staffOff_text_197() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___staffOff_text_197)); }
	inline Texture_t3661962703 * get_staffOff_text_197() const { return ___staffOff_text_197; }
	inline Texture_t3661962703 ** get_address_of_staffOff_text_197() { return &___staffOff_text_197; }
	inline void set_staffOff_text_197(Texture_t3661962703 * value)
	{
		___staffOff_text_197 = value;
		Il2CppCodeGenWriteBarrier((&___staffOff_text_197), value);
	}

	inline static int32_t get_offset_of_laserOff_text_198() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___laserOff_text_198)); }
	inline Texture_t3661962703 * get_laserOff_text_198() const { return ___laserOff_text_198; }
	inline Texture_t3661962703 ** get_address_of_laserOff_text_198() { return &___laserOff_text_198; }
	inline void set_laserOff_text_198(Texture_t3661962703 * value)
	{
		___laserOff_text_198 = value;
		Il2CppCodeGenWriteBarrier((&___laserOff_text_198), value);
	}

	inline static int32_t get_offset_of_lightSwordOff_text_199() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___lightSwordOff_text_199)); }
	inline Texture_t3661962703 * get_lightSwordOff_text_199() const { return ___lightSwordOff_text_199; }
	inline Texture_t3661962703 ** get_address_of_lightSwordOff_text_199() { return &___lightSwordOff_text_199; }
	inline void set_lightSwordOff_text_199(Texture_t3661962703 * value)
	{
		___lightSwordOff_text_199 = value;
		Il2CppCodeGenWriteBarrier((&___lightSwordOff_text_199), value);
	}

	inline static int32_t get_offset_of_berettaOff_text_200() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___berettaOff_text_200)); }
	inline Texture_t3661962703 * get_berettaOff_text_200() const { return ___berettaOff_text_200; }
	inline Texture_t3661962703 ** get_address_of_berettaOff_text_200() { return &___berettaOff_text_200; }
	inline void set_berettaOff_text_200(Texture_t3661962703 * value)
	{
		___berettaOff_text_200 = value;
		Il2CppCodeGenWriteBarrier((&___berettaOff_text_200), value);
	}

	inline static int32_t get_offset_of_resumeCategories_201() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___resumeCategories_201)); }
	inline GUIStyle_t3956901511 * get_resumeCategories_201() const { return ___resumeCategories_201; }
	inline GUIStyle_t3956901511 ** get_address_of_resumeCategories_201() { return &___resumeCategories_201; }
	inline void set_resumeCategories_201(GUIStyle_t3956901511 * value)
	{
		___resumeCategories_201 = value;
		Il2CppCodeGenWriteBarrier((&___resumeCategories_201), value);
	}

	inline static int32_t get_offset_of_maceStyle_202() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___maceStyle_202)); }
	inline GUIStyle_t3956901511 * get_maceStyle_202() const { return ___maceStyle_202; }
	inline GUIStyle_t3956901511 ** get_address_of_maceStyle_202() { return &___maceStyle_202; }
	inline void set_maceStyle_202(GUIStyle_t3956901511 * value)
	{
		___maceStyle_202 = value;
		Il2CppCodeGenWriteBarrier((&___maceStyle_202), value);
	}

	inline static int32_t get_offset_of_crossbowStyle_203() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___crossbowStyle_203)); }
	inline GUIStyle_t3956901511 * get_crossbowStyle_203() const { return ___crossbowStyle_203; }
	inline GUIStyle_t3956901511 ** get_address_of_crossbowStyle_203() { return &___crossbowStyle_203; }
	inline void set_crossbowStyle_203(GUIStyle_t3956901511 * value)
	{
		___crossbowStyle_203 = value;
		Il2CppCodeGenWriteBarrier((&___crossbowStyle_203), value);
	}

	inline static int32_t get_offset_of_minigunStyle_204() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___minigunStyle_204)); }
	inline GUIStyle_t3956901511 * get_minigunStyle_204() const { return ___minigunStyle_204; }
	inline GUIStyle_t3956901511 ** get_address_of_minigunStyle_204() { return &___minigunStyle_204; }
	inline void set_minigunStyle_204(GUIStyle_t3956901511 * value)
	{
		___minigunStyle_204 = value;
		Il2CppCodeGenWriteBarrier((&___minigunStyle_204), value);
	}

	inline static int32_t get_offset_of_mace_off_205() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___mace_off_205)); }
	inline Texture_t3661962703 * get_mace_off_205() const { return ___mace_off_205; }
	inline Texture_t3661962703 ** get_address_of_mace_off_205() { return &___mace_off_205; }
	inline void set_mace_off_205(Texture_t3661962703 * value)
	{
		___mace_off_205 = value;
		Il2CppCodeGenWriteBarrier((&___mace_off_205), value);
	}

	inline static int32_t get_offset_of_crossbow_off_206() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___crossbow_off_206)); }
	inline Texture_t3661962703 * get_crossbow_off_206() const { return ___crossbow_off_206; }
	inline Texture_t3661962703 ** get_address_of_crossbow_off_206() { return &___crossbow_off_206; }
	inline void set_crossbow_off_206(Texture_t3661962703 * value)
	{
		___crossbow_off_206 = value;
		Il2CppCodeGenWriteBarrier((&___crossbow_off_206), value);
	}

	inline static int32_t get_offset_of_minigun_off_207() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___minigun_off_207)); }
	inline Texture_t3661962703 * get_minigun_off_207() const { return ___minigun_off_207; }
	inline Texture_t3661962703 ** get_address_of_minigun_off_207() { return &___minigun_off_207; }
	inline void set_minigun_off_207(Texture_t3661962703 * value)
	{
		___minigun_off_207 = value;
		Il2CppCodeGenWriteBarrier((&___minigun_off_207), value);
	}

	inline static int32_t get_offset_of_messages_208() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069, ___messages_208)); }
	inline List_1_t1461688331 * get_messages_208() const { return ___messages_208; }
	inline List_1_t1461688331 ** get_address_of_messages_208() { return &___messages_208; }
	inline void set_messages_208(List_1_t1461688331 * value)
	{
		___messages_208 = value;
		Il2CppCodeGenWriteBarrier((&___messages_208), value);
	}
};

struct Player_move_c_t367674069_StaticFields
{
public:
	// System.String[] Player_move_c::restorableProducts
	StringU5BU5D_t1281789340* ___restorableProducts_4;
	// System.Action Player_move_c::_003C_003Ef__am_0024cacheCF
	Action_t1264377477 * ____003C_003Ef__am_0024cacheCF_209;
	// System.Action Player_move_c::<>f__mg$cache0
	Action_t1264377477 * ___U3CU3Ef__mgU24cache0_210;

public:
	inline static int32_t get_offset_of_restorableProducts_4() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069_StaticFields, ___restorableProducts_4)); }
	inline StringU5BU5D_t1281789340* get_restorableProducts_4() const { return ___restorableProducts_4; }
	inline StringU5BU5D_t1281789340** get_address_of_restorableProducts_4() { return &___restorableProducts_4; }
	inline void set_restorableProducts_4(StringU5BU5D_t1281789340* value)
	{
		___restorableProducts_4 = value;
		Il2CppCodeGenWriteBarrier((&___restorableProducts_4), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cacheCF_209() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069_StaticFields, ____003C_003Ef__am_0024cacheCF_209)); }
	inline Action_t1264377477 * get__003C_003Ef__am_0024cacheCF_209() const { return ____003C_003Ef__am_0024cacheCF_209; }
	inline Action_t1264377477 ** get_address_of__003C_003Ef__am_0024cacheCF_209() { return &____003C_003Ef__am_0024cacheCF_209; }
	inline void set__003C_003Ef__am_0024cacheCF_209(Action_t1264377477 * value)
	{
		____003C_003Ef__am_0024cacheCF_209 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cacheCF_209), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_210() { return static_cast<int32_t>(offsetof(Player_move_c_t367674069_StaticFields, ___U3CU3Ef__mgU24cache0_210)); }
	inline Action_t1264377477 * get_U3CU3Ef__mgU24cache0_210() const { return ___U3CU3Ef__mgU24cache0_210; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__mgU24cache0_210() { return &___U3CU3Ef__mgU24cache0_210; }
	inline void set_U3CU3Ef__mgU24cache0_210(Action_t1264377477 * value)
	{
		___U3CU3Ef__mgU24cache0_210 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_210), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_MOVE_C_T367674069_H
#ifndef WATERMOVEMENT_T3974566801_H
#define WATERMOVEMENT_T3974566801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterMovement
struct  WaterMovement_t3974566801  : public MonoBehaviour_t3962482529
{
public:
	// System.Single WaterMovement::speed
	float ___speed_2;
	// System.Single WaterMovement::alpha
	float ___alpha_3;
	// System.Single WaterMovement::waveScale
	float ___waveScale_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(WaterMovement_t3974566801, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(WaterMovement_t3974566801, ___alpha_3)); }
	inline float get_alpha_3() const { return ___alpha_3; }
	inline float* get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(float value)
	{
		___alpha_3 = value;
	}

	inline static int32_t get_offset_of_waveScale_4() { return static_cast<int32_t>(offsetof(WaterMovement_t3974566801, ___waveScale_4)); }
	inline float get_waveScale_4() const { return ___waveScale_4; }
	inline float* get_address_of_waveScale_4() { return &___waveScale_4; }
	inline void set_waveScale_4(float value)
	{
		___waveScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERMOVEMENT_T3974566801_H
#ifndef NETWORKSTARTTABLE_T3389559616_H
#define NETWORKSTARTTABLE_T3389559616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkStartTable
struct  NetworkStartTable_t3389559616  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture NetworkStartTable::mySkin
	Texture_t3661962703 * ___mySkin_2;
	// UnityEngine.Texture NetworkStartTable::plashkaStartMultu
	Texture_t3661962703 * ___plashkaStartMultu_3;
	// UnityEngine.Texture NetworkStartTable::plashkaStartCoop
	Texture_t3661962703 * ___plashkaStartCoop_4;
	// UnityEngine.Texture NetworkStartTable::kubochek
	Texture_t3661962703 * ___kubochek_5;
	// UnityEngine.Texture NetworkStartTable::zagolovokWiner
	Texture_t3661962703 * ___zagolovokWiner_6;
	// UnityEngine.Texture NetworkStartTable::zagolovokStart
	Texture_t3661962703 * ___zagolovokStart_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NetworkStartTable::zombiePrefabs
	List_1_t2585711361 * ___zombiePrefabs_8;
	// UnityEngine.GameObject NetworkStartTable::_playerPrefab
	GameObject_t1113636619 * ____playerPrefab_9;
	// UnityEngine.GameObject NetworkStartTable::tempCam
	GameObject_t1113636619 * ___tempCam_10;
	// UnityEngine.GameObject NetworkStartTable::zombieManagerPrefab
	GameObject_t1113636619 * ___zombieManagerPrefab_11;
	// System.Boolean NetworkStartTable::_isMultiplayer
	bool ____isMultiplayer_12;
	// System.Int32 NetworkStartTable::addCoins
	int32_t ___addCoins_13;
	// System.Int32 NetworkStartTable::minCoin1
	int32_t ___minCoin1_14;
	// System.Int32 NetworkStartTable::minCoin2
	int32_t ___minCoin2_15;
	// System.Int32 NetworkStartTable::minCoin3
	int32_t ___minCoin3_16;
	// System.Boolean NetworkStartTable::showMessagFacebook
	bool ___showMessagFacebook_17;
	// System.Boolean NetworkStartTable::showMessagTiwtter
	bool ___showMessagTiwtter_18;
	// System.Boolean NetworkStartTable::clickButtonFacebook
	bool ___clickButtonFacebook_19;
	// System.Boolean NetworkStartTable::isIwin
	bool ___isIwin_20;
	// System.Collections.Generic.List`1<NetworkStartTable/infoClient> NetworkStartTable::players
	List_1_t845153904 * ___players_21;
	// UnityEngine.GUIStyle NetworkStartTable::back
	GUIStyle_t3956901511 * ___back_22;
	// UnityEngine.GUIStyle NetworkStartTable::start
	GUIStyle_t3956901511 * ___start_23;
	// UnityEngine.GUIStyle NetworkStartTable::restart
	GUIStyle_t3956901511 * ___restart_24;
	// UnityEngine.GUIStyle NetworkStartTable::playersWindow
	GUIStyle_t3956901511 * ___playersWindow_25;
	// UnityEngine.GUIStyle NetworkStartTable::playersWindowFrags
	GUIStyle_t3956901511 * ___playersWindowFrags_26;
	// UnityEngine.GUIStyle NetworkStartTable::twitterStyle
	GUIStyle_t3956901511 * ___twitterStyle_27;
	// UnityEngine.GUIStyle NetworkStartTable::facebookStyle
	GUIStyle_t3956901511 * ___facebookStyle_28;
	// UnityEngine.GUIStyle NetworkStartTable::labelStyle
	GUIStyle_t3956901511 * ___labelStyle_29;
	// UnityEngine.GUIStyle NetworkStartTable::messagesStyle
	GUIStyle_t3956901511 * ___messagesStyle_30;
	// UnityEngine.Texture NetworkStartTable::head_players
	Texture_t3661962703 * ___head_players_31;
	// UnityEngine.Texture NetworkStartTable::nicksStyle
	Texture_t3661962703 * ___nicksStyle_32;
	// UnityEngine.Texture NetworkStartTable::killsStyle
	Texture_t3661962703 * ___killsStyle_33;
	// UnityEngine.Texture NetworkStartTable::scoreTexture
	Texture_t3661962703 * ___scoreTexture_34;
	// UnityEngine.Vector2 NetworkStartTable::scrollPosition
	Vector2_t2156229523  ___scrollPosition_35;
	// UnityEngine.GameObject NetworkStartTable::_purchaseActivityIndicator
	GameObject_t1113636619 * ____purchaseActivityIndicator_36;
	// System.Single NetworkStartTable::koofScreen
	float ___koofScreen_37;
	// WeaponManager NetworkStartTable::_weaponManager
	WeaponManager_t1762453775 * ____weaponManager_38;
	// System.Boolean NetworkStartTable::showTable
	bool ___showTable_39;
	// System.String NetworkStartTable::nickPobeditelya
	String_t* ___nickPobeditelya_40;
	// System.Boolean NetworkStartTable::isShowNickTable
	bool ___isShowNickTable_41;
	// System.Boolean NetworkStartTable::runGame
	bool ___runGame_42;
	// UnityEngine.GUIStyle NetworkStartTable::zagolovokStyle
	GUIStyle_t3956901511 * ___zagolovokStyle_43;
	// UnityEngine.GameObject[] NetworkStartTable::zoneCreatePlayer
	GameObjectU5BU5D_t3328599146* ___zoneCreatePlayer_44;
	// UnityEngine.GameObject NetworkStartTable::_cam
	GameObject_t1113636619 * ____cam_45;
	// System.Boolean NetworkStartTable::showDisconnectFromServer
	bool ___showDisconnectFromServer_46;
	// System.Boolean NetworkStartTable::showDisconnectFromMasterServer
	bool ___showDisconnectFromMasterServer_47;
	// System.Single NetworkStartTable::timerShow
	float ___timerShow_48;
	// System.String NetworkStartTable::NamePlayer
	String_t* ___NamePlayer_49;
	// System.Int32 NetworkStartTable::CountKills
	int32_t ___CountKills_50;
	// System.Int32 NetworkStartTable::oldCountKills
	int32_t ___oldCountKills_51;
	// System.String[] NetworkStartTable::oldSpisokName
	StringU5BU5D_t1281789340* ___oldSpisokName_52;
	// System.String[] NetworkStartTable::oldCountLilsSpisok
	StringU5BU5D_t1281789340* ___oldCountLilsSpisok_53;
	// System.Int32 NetworkStartTable::oldIndexMy
	int32_t ___oldIndexMy_54;
	// UnityEngine.GameObject NetworkStartTable::tc
	GameObject_t1113636619 * ___tc_55;
	// System.Single NetworkStartTable::score
	float ___score_56;
	// System.Single NetworkStartTable::scoreOld
	float ___scoreOld_57;
	// PhotonView NetworkStartTable::photonView
	PhotonView_t2207721820 * ___photonView_58;
	// System.Boolean NetworkStartTable::_canUserUseFacebookComposer
	bool ____canUserUseFacebookComposer_59;
	// System.Boolean NetworkStartTable::_hasPublishPermission
	bool ____hasPublishPermission_60;
	// System.Boolean NetworkStartTable::_hasPublishActions
	bool ____hasPublishActions_61;

public:
	inline static int32_t get_offset_of_mySkin_2() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___mySkin_2)); }
	inline Texture_t3661962703 * get_mySkin_2() const { return ___mySkin_2; }
	inline Texture_t3661962703 ** get_address_of_mySkin_2() { return &___mySkin_2; }
	inline void set_mySkin_2(Texture_t3661962703 * value)
	{
		___mySkin_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySkin_2), value);
	}

	inline static int32_t get_offset_of_plashkaStartMultu_3() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___plashkaStartMultu_3)); }
	inline Texture_t3661962703 * get_plashkaStartMultu_3() const { return ___plashkaStartMultu_3; }
	inline Texture_t3661962703 ** get_address_of_plashkaStartMultu_3() { return &___plashkaStartMultu_3; }
	inline void set_plashkaStartMultu_3(Texture_t3661962703 * value)
	{
		___plashkaStartMultu_3 = value;
		Il2CppCodeGenWriteBarrier((&___plashkaStartMultu_3), value);
	}

	inline static int32_t get_offset_of_plashkaStartCoop_4() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___plashkaStartCoop_4)); }
	inline Texture_t3661962703 * get_plashkaStartCoop_4() const { return ___plashkaStartCoop_4; }
	inline Texture_t3661962703 ** get_address_of_plashkaStartCoop_4() { return &___plashkaStartCoop_4; }
	inline void set_plashkaStartCoop_4(Texture_t3661962703 * value)
	{
		___plashkaStartCoop_4 = value;
		Il2CppCodeGenWriteBarrier((&___plashkaStartCoop_4), value);
	}

	inline static int32_t get_offset_of_kubochek_5() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___kubochek_5)); }
	inline Texture_t3661962703 * get_kubochek_5() const { return ___kubochek_5; }
	inline Texture_t3661962703 ** get_address_of_kubochek_5() { return &___kubochek_5; }
	inline void set_kubochek_5(Texture_t3661962703 * value)
	{
		___kubochek_5 = value;
		Il2CppCodeGenWriteBarrier((&___kubochek_5), value);
	}

	inline static int32_t get_offset_of_zagolovokWiner_6() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zagolovokWiner_6)); }
	inline Texture_t3661962703 * get_zagolovokWiner_6() const { return ___zagolovokWiner_6; }
	inline Texture_t3661962703 ** get_address_of_zagolovokWiner_6() { return &___zagolovokWiner_6; }
	inline void set_zagolovokWiner_6(Texture_t3661962703 * value)
	{
		___zagolovokWiner_6 = value;
		Il2CppCodeGenWriteBarrier((&___zagolovokWiner_6), value);
	}

	inline static int32_t get_offset_of_zagolovokStart_7() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zagolovokStart_7)); }
	inline Texture_t3661962703 * get_zagolovokStart_7() const { return ___zagolovokStart_7; }
	inline Texture_t3661962703 ** get_address_of_zagolovokStart_7() { return &___zagolovokStart_7; }
	inline void set_zagolovokStart_7(Texture_t3661962703 * value)
	{
		___zagolovokStart_7 = value;
		Il2CppCodeGenWriteBarrier((&___zagolovokStart_7), value);
	}

	inline static int32_t get_offset_of_zombiePrefabs_8() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zombiePrefabs_8)); }
	inline List_1_t2585711361 * get_zombiePrefabs_8() const { return ___zombiePrefabs_8; }
	inline List_1_t2585711361 ** get_address_of_zombiePrefabs_8() { return &___zombiePrefabs_8; }
	inline void set_zombiePrefabs_8(List_1_t2585711361 * value)
	{
		___zombiePrefabs_8 = value;
		Il2CppCodeGenWriteBarrier((&___zombiePrefabs_8), value);
	}

	inline static int32_t get_offset_of__playerPrefab_9() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____playerPrefab_9)); }
	inline GameObject_t1113636619 * get__playerPrefab_9() const { return ____playerPrefab_9; }
	inline GameObject_t1113636619 ** get_address_of__playerPrefab_9() { return &____playerPrefab_9; }
	inline void set__playerPrefab_9(GameObject_t1113636619 * value)
	{
		____playerPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((&____playerPrefab_9), value);
	}

	inline static int32_t get_offset_of_tempCam_10() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___tempCam_10)); }
	inline GameObject_t1113636619 * get_tempCam_10() const { return ___tempCam_10; }
	inline GameObject_t1113636619 ** get_address_of_tempCam_10() { return &___tempCam_10; }
	inline void set_tempCam_10(GameObject_t1113636619 * value)
	{
		___tempCam_10 = value;
		Il2CppCodeGenWriteBarrier((&___tempCam_10), value);
	}

	inline static int32_t get_offset_of_zombieManagerPrefab_11() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zombieManagerPrefab_11)); }
	inline GameObject_t1113636619 * get_zombieManagerPrefab_11() const { return ___zombieManagerPrefab_11; }
	inline GameObject_t1113636619 ** get_address_of_zombieManagerPrefab_11() { return &___zombieManagerPrefab_11; }
	inline void set_zombieManagerPrefab_11(GameObject_t1113636619 * value)
	{
		___zombieManagerPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___zombieManagerPrefab_11), value);
	}

	inline static int32_t get_offset_of__isMultiplayer_12() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____isMultiplayer_12)); }
	inline bool get__isMultiplayer_12() const { return ____isMultiplayer_12; }
	inline bool* get_address_of__isMultiplayer_12() { return &____isMultiplayer_12; }
	inline void set__isMultiplayer_12(bool value)
	{
		____isMultiplayer_12 = value;
	}

	inline static int32_t get_offset_of_addCoins_13() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___addCoins_13)); }
	inline int32_t get_addCoins_13() const { return ___addCoins_13; }
	inline int32_t* get_address_of_addCoins_13() { return &___addCoins_13; }
	inline void set_addCoins_13(int32_t value)
	{
		___addCoins_13 = value;
	}

	inline static int32_t get_offset_of_minCoin1_14() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___minCoin1_14)); }
	inline int32_t get_minCoin1_14() const { return ___minCoin1_14; }
	inline int32_t* get_address_of_minCoin1_14() { return &___minCoin1_14; }
	inline void set_minCoin1_14(int32_t value)
	{
		___minCoin1_14 = value;
	}

	inline static int32_t get_offset_of_minCoin2_15() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___minCoin2_15)); }
	inline int32_t get_minCoin2_15() const { return ___minCoin2_15; }
	inline int32_t* get_address_of_minCoin2_15() { return &___minCoin2_15; }
	inline void set_minCoin2_15(int32_t value)
	{
		___minCoin2_15 = value;
	}

	inline static int32_t get_offset_of_minCoin3_16() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___minCoin3_16)); }
	inline int32_t get_minCoin3_16() const { return ___minCoin3_16; }
	inline int32_t* get_address_of_minCoin3_16() { return &___minCoin3_16; }
	inline void set_minCoin3_16(int32_t value)
	{
		___minCoin3_16 = value;
	}

	inline static int32_t get_offset_of_showMessagFacebook_17() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___showMessagFacebook_17)); }
	inline bool get_showMessagFacebook_17() const { return ___showMessagFacebook_17; }
	inline bool* get_address_of_showMessagFacebook_17() { return &___showMessagFacebook_17; }
	inline void set_showMessagFacebook_17(bool value)
	{
		___showMessagFacebook_17 = value;
	}

	inline static int32_t get_offset_of_showMessagTiwtter_18() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___showMessagTiwtter_18)); }
	inline bool get_showMessagTiwtter_18() const { return ___showMessagTiwtter_18; }
	inline bool* get_address_of_showMessagTiwtter_18() { return &___showMessagTiwtter_18; }
	inline void set_showMessagTiwtter_18(bool value)
	{
		___showMessagTiwtter_18 = value;
	}

	inline static int32_t get_offset_of_clickButtonFacebook_19() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___clickButtonFacebook_19)); }
	inline bool get_clickButtonFacebook_19() const { return ___clickButtonFacebook_19; }
	inline bool* get_address_of_clickButtonFacebook_19() { return &___clickButtonFacebook_19; }
	inline void set_clickButtonFacebook_19(bool value)
	{
		___clickButtonFacebook_19 = value;
	}

	inline static int32_t get_offset_of_isIwin_20() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___isIwin_20)); }
	inline bool get_isIwin_20() const { return ___isIwin_20; }
	inline bool* get_address_of_isIwin_20() { return &___isIwin_20; }
	inline void set_isIwin_20(bool value)
	{
		___isIwin_20 = value;
	}

	inline static int32_t get_offset_of_players_21() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___players_21)); }
	inline List_1_t845153904 * get_players_21() const { return ___players_21; }
	inline List_1_t845153904 ** get_address_of_players_21() { return &___players_21; }
	inline void set_players_21(List_1_t845153904 * value)
	{
		___players_21 = value;
		Il2CppCodeGenWriteBarrier((&___players_21), value);
	}

	inline static int32_t get_offset_of_back_22() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___back_22)); }
	inline GUIStyle_t3956901511 * get_back_22() const { return ___back_22; }
	inline GUIStyle_t3956901511 ** get_address_of_back_22() { return &___back_22; }
	inline void set_back_22(GUIStyle_t3956901511 * value)
	{
		___back_22 = value;
		Il2CppCodeGenWriteBarrier((&___back_22), value);
	}

	inline static int32_t get_offset_of_start_23() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___start_23)); }
	inline GUIStyle_t3956901511 * get_start_23() const { return ___start_23; }
	inline GUIStyle_t3956901511 ** get_address_of_start_23() { return &___start_23; }
	inline void set_start_23(GUIStyle_t3956901511 * value)
	{
		___start_23 = value;
		Il2CppCodeGenWriteBarrier((&___start_23), value);
	}

	inline static int32_t get_offset_of_restart_24() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___restart_24)); }
	inline GUIStyle_t3956901511 * get_restart_24() const { return ___restart_24; }
	inline GUIStyle_t3956901511 ** get_address_of_restart_24() { return &___restart_24; }
	inline void set_restart_24(GUIStyle_t3956901511 * value)
	{
		___restart_24 = value;
		Il2CppCodeGenWriteBarrier((&___restart_24), value);
	}

	inline static int32_t get_offset_of_playersWindow_25() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___playersWindow_25)); }
	inline GUIStyle_t3956901511 * get_playersWindow_25() const { return ___playersWindow_25; }
	inline GUIStyle_t3956901511 ** get_address_of_playersWindow_25() { return &___playersWindow_25; }
	inline void set_playersWindow_25(GUIStyle_t3956901511 * value)
	{
		___playersWindow_25 = value;
		Il2CppCodeGenWriteBarrier((&___playersWindow_25), value);
	}

	inline static int32_t get_offset_of_playersWindowFrags_26() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___playersWindowFrags_26)); }
	inline GUIStyle_t3956901511 * get_playersWindowFrags_26() const { return ___playersWindowFrags_26; }
	inline GUIStyle_t3956901511 ** get_address_of_playersWindowFrags_26() { return &___playersWindowFrags_26; }
	inline void set_playersWindowFrags_26(GUIStyle_t3956901511 * value)
	{
		___playersWindowFrags_26 = value;
		Il2CppCodeGenWriteBarrier((&___playersWindowFrags_26), value);
	}

	inline static int32_t get_offset_of_twitterStyle_27() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___twitterStyle_27)); }
	inline GUIStyle_t3956901511 * get_twitterStyle_27() const { return ___twitterStyle_27; }
	inline GUIStyle_t3956901511 ** get_address_of_twitterStyle_27() { return &___twitterStyle_27; }
	inline void set_twitterStyle_27(GUIStyle_t3956901511 * value)
	{
		___twitterStyle_27 = value;
		Il2CppCodeGenWriteBarrier((&___twitterStyle_27), value);
	}

	inline static int32_t get_offset_of_facebookStyle_28() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___facebookStyle_28)); }
	inline GUIStyle_t3956901511 * get_facebookStyle_28() const { return ___facebookStyle_28; }
	inline GUIStyle_t3956901511 ** get_address_of_facebookStyle_28() { return &___facebookStyle_28; }
	inline void set_facebookStyle_28(GUIStyle_t3956901511 * value)
	{
		___facebookStyle_28 = value;
		Il2CppCodeGenWriteBarrier((&___facebookStyle_28), value);
	}

	inline static int32_t get_offset_of_labelStyle_29() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___labelStyle_29)); }
	inline GUIStyle_t3956901511 * get_labelStyle_29() const { return ___labelStyle_29; }
	inline GUIStyle_t3956901511 ** get_address_of_labelStyle_29() { return &___labelStyle_29; }
	inline void set_labelStyle_29(GUIStyle_t3956901511 * value)
	{
		___labelStyle_29 = value;
		Il2CppCodeGenWriteBarrier((&___labelStyle_29), value);
	}

	inline static int32_t get_offset_of_messagesStyle_30() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___messagesStyle_30)); }
	inline GUIStyle_t3956901511 * get_messagesStyle_30() const { return ___messagesStyle_30; }
	inline GUIStyle_t3956901511 ** get_address_of_messagesStyle_30() { return &___messagesStyle_30; }
	inline void set_messagesStyle_30(GUIStyle_t3956901511 * value)
	{
		___messagesStyle_30 = value;
		Il2CppCodeGenWriteBarrier((&___messagesStyle_30), value);
	}

	inline static int32_t get_offset_of_head_players_31() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___head_players_31)); }
	inline Texture_t3661962703 * get_head_players_31() const { return ___head_players_31; }
	inline Texture_t3661962703 ** get_address_of_head_players_31() { return &___head_players_31; }
	inline void set_head_players_31(Texture_t3661962703 * value)
	{
		___head_players_31 = value;
		Il2CppCodeGenWriteBarrier((&___head_players_31), value);
	}

	inline static int32_t get_offset_of_nicksStyle_32() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___nicksStyle_32)); }
	inline Texture_t3661962703 * get_nicksStyle_32() const { return ___nicksStyle_32; }
	inline Texture_t3661962703 ** get_address_of_nicksStyle_32() { return &___nicksStyle_32; }
	inline void set_nicksStyle_32(Texture_t3661962703 * value)
	{
		___nicksStyle_32 = value;
		Il2CppCodeGenWriteBarrier((&___nicksStyle_32), value);
	}

	inline static int32_t get_offset_of_killsStyle_33() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___killsStyle_33)); }
	inline Texture_t3661962703 * get_killsStyle_33() const { return ___killsStyle_33; }
	inline Texture_t3661962703 ** get_address_of_killsStyle_33() { return &___killsStyle_33; }
	inline void set_killsStyle_33(Texture_t3661962703 * value)
	{
		___killsStyle_33 = value;
		Il2CppCodeGenWriteBarrier((&___killsStyle_33), value);
	}

	inline static int32_t get_offset_of_scoreTexture_34() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___scoreTexture_34)); }
	inline Texture_t3661962703 * get_scoreTexture_34() const { return ___scoreTexture_34; }
	inline Texture_t3661962703 ** get_address_of_scoreTexture_34() { return &___scoreTexture_34; }
	inline void set_scoreTexture_34(Texture_t3661962703 * value)
	{
		___scoreTexture_34 = value;
		Il2CppCodeGenWriteBarrier((&___scoreTexture_34), value);
	}

	inline static int32_t get_offset_of_scrollPosition_35() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___scrollPosition_35)); }
	inline Vector2_t2156229523  get_scrollPosition_35() const { return ___scrollPosition_35; }
	inline Vector2_t2156229523 * get_address_of_scrollPosition_35() { return &___scrollPosition_35; }
	inline void set_scrollPosition_35(Vector2_t2156229523  value)
	{
		___scrollPosition_35 = value;
	}

	inline static int32_t get_offset_of__purchaseActivityIndicator_36() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____purchaseActivityIndicator_36)); }
	inline GameObject_t1113636619 * get__purchaseActivityIndicator_36() const { return ____purchaseActivityIndicator_36; }
	inline GameObject_t1113636619 ** get_address_of__purchaseActivityIndicator_36() { return &____purchaseActivityIndicator_36; }
	inline void set__purchaseActivityIndicator_36(GameObject_t1113636619 * value)
	{
		____purchaseActivityIndicator_36 = value;
		Il2CppCodeGenWriteBarrier((&____purchaseActivityIndicator_36), value);
	}

	inline static int32_t get_offset_of_koofScreen_37() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___koofScreen_37)); }
	inline float get_koofScreen_37() const { return ___koofScreen_37; }
	inline float* get_address_of_koofScreen_37() { return &___koofScreen_37; }
	inline void set_koofScreen_37(float value)
	{
		___koofScreen_37 = value;
	}

	inline static int32_t get_offset_of__weaponManager_38() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____weaponManager_38)); }
	inline WeaponManager_t1762453775 * get__weaponManager_38() const { return ____weaponManager_38; }
	inline WeaponManager_t1762453775 ** get_address_of__weaponManager_38() { return &____weaponManager_38; }
	inline void set__weaponManager_38(WeaponManager_t1762453775 * value)
	{
		____weaponManager_38 = value;
		Il2CppCodeGenWriteBarrier((&____weaponManager_38), value);
	}

	inline static int32_t get_offset_of_showTable_39() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___showTable_39)); }
	inline bool get_showTable_39() const { return ___showTable_39; }
	inline bool* get_address_of_showTable_39() { return &___showTable_39; }
	inline void set_showTable_39(bool value)
	{
		___showTable_39 = value;
	}

	inline static int32_t get_offset_of_nickPobeditelya_40() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___nickPobeditelya_40)); }
	inline String_t* get_nickPobeditelya_40() const { return ___nickPobeditelya_40; }
	inline String_t** get_address_of_nickPobeditelya_40() { return &___nickPobeditelya_40; }
	inline void set_nickPobeditelya_40(String_t* value)
	{
		___nickPobeditelya_40 = value;
		Il2CppCodeGenWriteBarrier((&___nickPobeditelya_40), value);
	}

	inline static int32_t get_offset_of_isShowNickTable_41() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___isShowNickTable_41)); }
	inline bool get_isShowNickTable_41() const { return ___isShowNickTable_41; }
	inline bool* get_address_of_isShowNickTable_41() { return &___isShowNickTable_41; }
	inline void set_isShowNickTable_41(bool value)
	{
		___isShowNickTable_41 = value;
	}

	inline static int32_t get_offset_of_runGame_42() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___runGame_42)); }
	inline bool get_runGame_42() const { return ___runGame_42; }
	inline bool* get_address_of_runGame_42() { return &___runGame_42; }
	inline void set_runGame_42(bool value)
	{
		___runGame_42 = value;
	}

	inline static int32_t get_offset_of_zagolovokStyle_43() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zagolovokStyle_43)); }
	inline GUIStyle_t3956901511 * get_zagolovokStyle_43() const { return ___zagolovokStyle_43; }
	inline GUIStyle_t3956901511 ** get_address_of_zagolovokStyle_43() { return &___zagolovokStyle_43; }
	inline void set_zagolovokStyle_43(GUIStyle_t3956901511 * value)
	{
		___zagolovokStyle_43 = value;
		Il2CppCodeGenWriteBarrier((&___zagolovokStyle_43), value);
	}

	inline static int32_t get_offset_of_zoneCreatePlayer_44() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___zoneCreatePlayer_44)); }
	inline GameObjectU5BU5D_t3328599146* get_zoneCreatePlayer_44() const { return ___zoneCreatePlayer_44; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_zoneCreatePlayer_44() { return &___zoneCreatePlayer_44; }
	inline void set_zoneCreatePlayer_44(GameObjectU5BU5D_t3328599146* value)
	{
		___zoneCreatePlayer_44 = value;
		Il2CppCodeGenWriteBarrier((&___zoneCreatePlayer_44), value);
	}

	inline static int32_t get_offset_of__cam_45() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____cam_45)); }
	inline GameObject_t1113636619 * get__cam_45() const { return ____cam_45; }
	inline GameObject_t1113636619 ** get_address_of__cam_45() { return &____cam_45; }
	inline void set__cam_45(GameObject_t1113636619 * value)
	{
		____cam_45 = value;
		Il2CppCodeGenWriteBarrier((&____cam_45), value);
	}

	inline static int32_t get_offset_of_showDisconnectFromServer_46() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___showDisconnectFromServer_46)); }
	inline bool get_showDisconnectFromServer_46() const { return ___showDisconnectFromServer_46; }
	inline bool* get_address_of_showDisconnectFromServer_46() { return &___showDisconnectFromServer_46; }
	inline void set_showDisconnectFromServer_46(bool value)
	{
		___showDisconnectFromServer_46 = value;
	}

	inline static int32_t get_offset_of_showDisconnectFromMasterServer_47() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___showDisconnectFromMasterServer_47)); }
	inline bool get_showDisconnectFromMasterServer_47() const { return ___showDisconnectFromMasterServer_47; }
	inline bool* get_address_of_showDisconnectFromMasterServer_47() { return &___showDisconnectFromMasterServer_47; }
	inline void set_showDisconnectFromMasterServer_47(bool value)
	{
		___showDisconnectFromMasterServer_47 = value;
	}

	inline static int32_t get_offset_of_timerShow_48() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___timerShow_48)); }
	inline float get_timerShow_48() const { return ___timerShow_48; }
	inline float* get_address_of_timerShow_48() { return &___timerShow_48; }
	inline void set_timerShow_48(float value)
	{
		___timerShow_48 = value;
	}

	inline static int32_t get_offset_of_NamePlayer_49() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___NamePlayer_49)); }
	inline String_t* get_NamePlayer_49() const { return ___NamePlayer_49; }
	inline String_t** get_address_of_NamePlayer_49() { return &___NamePlayer_49; }
	inline void set_NamePlayer_49(String_t* value)
	{
		___NamePlayer_49 = value;
		Il2CppCodeGenWriteBarrier((&___NamePlayer_49), value);
	}

	inline static int32_t get_offset_of_CountKills_50() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___CountKills_50)); }
	inline int32_t get_CountKills_50() const { return ___CountKills_50; }
	inline int32_t* get_address_of_CountKills_50() { return &___CountKills_50; }
	inline void set_CountKills_50(int32_t value)
	{
		___CountKills_50 = value;
	}

	inline static int32_t get_offset_of_oldCountKills_51() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___oldCountKills_51)); }
	inline int32_t get_oldCountKills_51() const { return ___oldCountKills_51; }
	inline int32_t* get_address_of_oldCountKills_51() { return &___oldCountKills_51; }
	inline void set_oldCountKills_51(int32_t value)
	{
		___oldCountKills_51 = value;
	}

	inline static int32_t get_offset_of_oldSpisokName_52() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___oldSpisokName_52)); }
	inline StringU5BU5D_t1281789340* get_oldSpisokName_52() const { return ___oldSpisokName_52; }
	inline StringU5BU5D_t1281789340** get_address_of_oldSpisokName_52() { return &___oldSpisokName_52; }
	inline void set_oldSpisokName_52(StringU5BU5D_t1281789340* value)
	{
		___oldSpisokName_52 = value;
		Il2CppCodeGenWriteBarrier((&___oldSpisokName_52), value);
	}

	inline static int32_t get_offset_of_oldCountLilsSpisok_53() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___oldCountLilsSpisok_53)); }
	inline StringU5BU5D_t1281789340* get_oldCountLilsSpisok_53() const { return ___oldCountLilsSpisok_53; }
	inline StringU5BU5D_t1281789340** get_address_of_oldCountLilsSpisok_53() { return &___oldCountLilsSpisok_53; }
	inline void set_oldCountLilsSpisok_53(StringU5BU5D_t1281789340* value)
	{
		___oldCountLilsSpisok_53 = value;
		Il2CppCodeGenWriteBarrier((&___oldCountLilsSpisok_53), value);
	}

	inline static int32_t get_offset_of_oldIndexMy_54() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___oldIndexMy_54)); }
	inline int32_t get_oldIndexMy_54() const { return ___oldIndexMy_54; }
	inline int32_t* get_address_of_oldIndexMy_54() { return &___oldIndexMy_54; }
	inline void set_oldIndexMy_54(int32_t value)
	{
		___oldIndexMy_54 = value;
	}

	inline static int32_t get_offset_of_tc_55() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___tc_55)); }
	inline GameObject_t1113636619 * get_tc_55() const { return ___tc_55; }
	inline GameObject_t1113636619 ** get_address_of_tc_55() { return &___tc_55; }
	inline void set_tc_55(GameObject_t1113636619 * value)
	{
		___tc_55 = value;
		Il2CppCodeGenWriteBarrier((&___tc_55), value);
	}

	inline static int32_t get_offset_of_score_56() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___score_56)); }
	inline float get_score_56() const { return ___score_56; }
	inline float* get_address_of_score_56() { return &___score_56; }
	inline void set_score_56(float value)
	{
		___score_56 = value;
	}

	inline static int32_t get_offset_of_scoreOld_57() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___scoreOld_57)); }
	inline float get_scoreOld_57() const { return ___scoreOld_57; }
	inline float* get_address_of_scoreOld_57() { return &___scoreOld_57; }
	inline void set_scoreOld_57(float value)
	{
		___scoreOld_57 = value;
	}

	inline static int32_t get_offset_of_photonView_58() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ___photonView_58)); }
	inline PhotonView_t2207721820 * get_photonView_58() const { return ___photonView_58; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_58() { return &___photonView_58; }
	inline void set_photonView_58(PhotonView_t2207721820 * value)
	{
		___photonView_58 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_58), value);
	}

	inline static int32_t get_offset_of__canUserUseFacebookComposer_59() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____canUserUseFacebookComposer_59)); }
	inline bool get__canUserUseFacebookComposer_59() const { return ____canUserUseFacebookComposer_59; }
	inline bool* get_address_of__canUserUseFacebookComposer_59() { return &____canUserUseFacebookComposer_59; }
	inline void set__canUserUseFacebookComposer_59(bool value)
	{
		____canUserUseFacebookComposer_59 = value;
	}

	inline static int32_t get_offset_of__hasPublishPermission_60() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____hasPublishPermission_60)); }
	inline bool get__hasPublishPermission_60() const { return ____hasPublishPermission_60; }
	inline bool* get_address_of__hasPublishPermission_60() { return &____hasPublishPermission_60; }
	inline void set__hasPublishPermission_60(bool value)
	{
		____hasPublishPermission_60 = value;
	}

	inline static int32_t get_offset_of__hasPublishActions_61() { return static_cast<int32_t>(offsetof(NetworkStartTable_t3389559616, ____hasPublishActions_61)); }
	inline bool get__hasPublishActions_61() const { return ____hasPublishActions_61; }
	inline bool* get_address_of__hasPublishActions_61() { return &____hasPublishActions_61; }
	inline void set__hasPublishActions_61(bool value)
	{
		____hasPublishActions_61 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTARTTABLE_T3389559616_H
#ifndef WEAPONBONUS_T1073004861_H
#define WEAPONBONUS_T1073004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponBonus
struct  WeaponBonus_t1073004861  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject WeaponBonus::weaponPrefab
	GameObject_t1113636619 * ___weaponPrefab_2;
	// UnityEngine.GameObject WeaponBonus::_player
	GameObject_t1113636619 * ____player_3;
	// Player_move_c WeaponBonus::_playerMoveC
	Player_move_c_t367674069 * ____playerMoveC_4;

public:
	inline static int32_t get_offset_of_weaponPrefab_2() { return static_cast<int32_t>(offsetof(WeaponBonus_t1073004861, ___weaponPrefab_2)); }
	inline GameObject_t1113636619 * get_weaponPrefab_2() const { return ___weaponPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_weaponPrefab_2() { return &___weaponPrefab_2; }
	inline void set_weaponPrefab_2(GameObject_t1113636619 * value)
	{
		___weaponPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___weaponPrefab_2), value);
	}

	inline static int32_t get_offset_of__player_3() { return static_cast<int32_t>(offsetof(WeaponBonus_t1073004861, ____player_3)); }
	inline GameObject_t1113636619 * get__player_3() const { return ____player_3; }
	inline GameObject_t1113636619 ** get_address_of__player_3() { return &____player_3; }
	inline void set__player_3(GameObject_t1113636619 * value)
	{
		____player_3 = value;
		Il2CppCodeGenWriteBarrier((&____player_3), value);
	}

	inline static int32_t get_offset_of__playerMoveC_4() { return static_cast<int32_t>(offsetof(WeaponBonus_t1073004861, ____playerMoveC_4)); }
	inline Player_move_c_t367674069 * get__playerMoveC_4() const { return ____playerMoveC_4; }
	inline Player_move_c_t367674069 ** get_address_of__playerMoveC_4() { return &____playerMoveC_4; }
	inline void set__playerMoveC_4(Player_move_c_t367674069 * value)
	{
		____playerMoveC_4 = value;
		Il2CppCodeGenWriteBarrier((&____playerMoveC_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPONBONUS_T1073004861_H
#ifndef MONOBEHAVIOUR_T3225183318_H
#define MONOBEHAVIOUR_T3225183318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.MonoBehaviour
struct  MonoBehaviour_t3225183318  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3225183318_H
#ifndef STOREKITEVENTLISTENER_T3151468363_H
#define STOREKITEVENTLISTENER_T3151468363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoreKitEventListener
struct  StoreKitEventListener_t3151468363  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.ICollection`1<Rilisoft.IMarketProduct> StoreKitEventListener::_products
	RuntimeObject* ____products_13;
	// System.Collections.Generic.ICollection`1<GoogleSkuInfo> StoreKitEventListener::_skinProducts
	RuntimeObject* ____skinProducts_14;
	// System.Boolean StoreKitEventListener::_hasCoins
	bool ____hasCoins_18;
	// UnityEngine.GameObject StoreKitEventListener::messagePrefab
	GameObject_t1113636619 * ___messagePrefab_70;

public:
	inline static int32_t get_offset_of__products_13() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363, ____products_13)); }
	inline RuntimeObject* get__products_13() const { return ____products_13; }
	inline RuntimeObject** get_address_of__products_13() { return &____products_13; }
	inline void set__products_13(RuntimeObject* value)
	{
		____products_13 = value;
		Il2CppCodeGenWriteBarrier((&____products_13), value);
	}

	inline static int32_t get_offset_of__skinProducts_14() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363, ____skinProducts_14)); }
	inline RuntimeObject* get__skinProducts_14() const { return ____skinProducts_14; }
	inline RuntimeObject** get_address_of__skinProducts_14() { return &____skinProducts_14; }
	inline void set__skinProducts_14(RuntimeObject* value)
	{
		____skinProducts_14 = value;
		Il2CppCodeGenWriteBarrier((&____skinProducts_14), value);
	}

	inline static int32_t get_offset_of__hasCoins_18() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363, ____hasCoins_18)); }
	inline bool get__hasCoins_18() const { return ____hasCoins_18; }
	inline bool* get_address_of__hasCoins_18() { return &____hasCoins_18; }
	inline void set__hasCoins_18(bool value)
	{
		____hasCoins_18 = value;
	}

	inline static int32_t get_offset_of_messagePrefab_70() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363, ___messagePrefab_70)); }
	inline GameObject_t1113636619 * get_messagePrefab_70() const { return ___messagePrefab_70; }
	inline GameObject_t1113636619 ** get_address_of_messagePrefab_70() { return &___messagePrefab_70; }
	inline void set_messagePrefab_70(GameObject_t1113636619 * value)
	{
		___messagePrefab_70 = value;
		Il2CppCodeGenWriteBarrier((&___messagePrefab_70), value);
	}
};

struct StoreKitEventListener_t3151468363_StaticFields
{
public:
	// System.Boolean StoreKitEventListener::billingSupported
	bool ___billingSupported_15;
	// System.String[] StoreKitEventListener::coinIds
	StringU5BU5D_t1281789340* ___coinIds_16;
	// System.String[] StoreKitEventListener::_productIds
	StringU5BU5D_t1281789340* ____productIds_17;
	// System.String StoreKitEventListener::elixirSettName
	String_t* ___elixirSettName_19;
	// System.String StoreKitEventListener::fullSettName
	String_t* ___fullSettName_20;
	// System.Boolean StoreKitEventListener::purchaseInProcess
	bool ___purchaseInProcess_21;
	// System.Boolean StoreKitEventListener::restoreInProcess
	bool ___restoreInProcess_22;
	// UnityEngine.GameObject StoreKitEventListener::purchaseActivityInd
	GameObject_t1113636619 * ___purchaseActivityInd_23;
	// System.String StoreKitEventListener::elixirID
	String_t* ___elixirID_24;
	// System.String StoreKitEventListener::endmanskin
	String_t* ___endmanskin_25;
	// System.String StoreKitEventListener::chief
	String_t* ___chief_26;
	// System.String StoreKitEventListener::spaceengineer
	String_t* ___spaceengineer_27;
	// System.String StoreKitEventListener::nanosoldier
	String_t* ___nanosoldier_28;
	// System.String StoreKitEventListener::steelman
	String_t* ___steelman_29;
	// System.String StoreKitEventListener::CaptainSkin
	String_t* ___CaptainSkin_30;
	// System.String StoreKitEventListener::HawkSkin
	String_t* ___HawkSkin_31;
	// System.String StoreKitEventListener::GreenGuySkin
	String_t* ___GreenGuySkin_32;
	// System.String StoreKitEventListener::TunderGodSkin
	String_t* ___TunderGodSkin_33;
	// System.String StoreKitEventListener::GordonSkin
	String_t* ___GordonSkin_34;
	// System.String StoreKitEventListener::animeGirl
	String_t* ___animeGirl_35;
	// System.String StoreKitEventListener::EMOGirl
	String_t* ___EMOGirl_36;
	// System.String StoreKitEventListener::Nurse
	String_t* ___Nurse_37;
	// System.String StoreKitEventListener::magicGirl
	String_t* ___magicGirl_38;
	// System.String StoreKitEventListener::braveGirl
	String_t* ___braveGirl_39;
	// System.String StoreKitEventListener::glamDoll
	String_t* ___glamDoll_40;
	// System.String StoreKitEventListener::kittyGirl
	String_t* ___kittyGirl_41;
	// System.String StoreKitEventListener::famosBoy
	String_t* ___famosBoy_42;
	// System.String StoreKitEventListener::combatrifle
	String_t* ___combatrifle_43;
	// System.String StoreKitEventListener::goldeneagle
	String_t* ___goldeneagle_44;
	// System.String StoreKitEventListener::magicbow
	String_t* ___magicbow_45;
	// System.String StoreKitEventListener::fullVersion
	String_t* ___fullVersion_46;
	// System.String StoreKitEventListener::axe
	String_t* ___axe_47;
	// System.String StoreKitEventListener::spas
	String_t* ___spas_48;
	// System.String StoreKitEventListener::chainsaw
	String_t* ___chainsaw_49;
	// System.String StoreKitEventListener::famas
	String_t* ___famas_50;
	// System.String StoreKitEventListener::glock
	String_t* ___glock_51;
	// System.String StoreKitEventListener::scythe
	String_t* ___scythe_52;
	// System.String StoreKitEventListener::shovel
	String_t* ___shovel_53;
	// System.String StoreKitEventListener::hammer
	String_t* ___hammer_54;
	// System.String StoreKitEventListener::sword_2
	String_t* ___sword_2_55;
	// System.String StoreKitEventListener::staff
	String_t* ___staff_56;
	// System.String StoreKitEventListener::laser
	String_t* ___laser_57;
	// System.String StoreKitEventListener::armor
	String_t* ___armor_58;
	// System.String StoreKitEventListener::lightSword
	String_t* ___lightSword_59;
	// System.String StoreKitEventListener::beretta
	String_t* ___beretta_60;
	// System.String StoreKitEventListener::mace
	String_t* ___mace_61;
	// System.String StoreKitEventListener::minigun
	String_t* ___minigun_62;
	// System.String StoreKitEventListener::crossbow
	String_t* ___crossbow_63;
	// System.String[] StoreKitEventListener::skinIDs
	StringU5BU5D_t1281789340* ___skinIDs_64;
	// System.String[] StoreKitEventListener::idsForSingle
	StringU5BU5D_t1281789340* ___idsForSingle_65;
	// System.String[] StoreKitEventListener::idsForMulti
	StringU5BU5D_t1281789340* ___idsForMulti_66;
	// System.String[] StoreKitEventListener::idsForFull
	StringU5BU5D_t1281789340* ___idsForFull_67;
	// System.String[][] StoreKitEventListener::categoriesSingle
	StringU5BU5DU5BU5D_t2611993717* ___categoriesSingle_68;
	// System.String[][] StoreKitEventListener::categoriesMulti
	StringU5BU5DU5BU5D_t2611993717* ___categoriesMulti_69;
	// System.String[] StoreKitEventListener::categoryNames
	StringU5BU5D_t1281789340* ___categoryNames_71;
	// System.Func`2<GoogleSkuInfo,System.Boolean> StoreKitEventListener::_003C_003Ef__am_0024cache3B
	Func_2_t1441243940 * ____003C_003Ef__am_0024cache3B_72;
	// System.Func`2<GoogleSkuInfo,System.String> StoreKitEventListener::_003C_003Ef__am_0024cache3C
	Func_2_t3191406664 * ____003C_003Ef__am_0024cache3C_73;
	// System.Func`2<GooglePurchase,System.String> StoreKitEventListener::_003C_003Ef__am_0024cache3D
	Func_2_t2566913764 * ____003C_003Ef__am_0024cache3D_74;
	// System.Func`2<GoogleSkuInfo,System.Boolean> StoreKitEventListener::_003C_003Ef__am_0024cache3E
	Func_2_t1441243940 * ____003C_003Ef__am_0024cache3E_75;
	// System.Func`2<AmazonItem,System.String> StoreKitEventListener::_003C_003Ef__am_0024cache3F
	Func_2_t1902466687 * ____003C_003Ef__am_0024cache3F_76;
	// System.Func`2<AmazonItem,System.Boolean> StoreKitEventListener::_003C_003Ef__am_0024cache40
	Func_2_t152303963 * ____003C_003Ef__am_0024cache40_77;
	// System.Func`2<AmazonReceipt,System.String> StoreKitEventListener::_003C_003Ef__am_0024cache41
	Func_2_t2769542166 * ____003C_003Ef__am_0024cache41_78;
	// System.Func`2<GoogleSkuInfo,System.Boolean> StoreKitEventListener::<>f__mg$cache0
	Func_2_t1441243940 * ___U3CU3Ef__mgU24cache0_79;
	// System.Func`2<GoogleSkuInfo,System.String> StoreKitEventListener::<>f__mg$cache1
	Func_2_t3191406664 * ___U3CU3Ef__mgU24cache1_80;
	// System.Func`2<GooglePurchase,System.String> StoreKitEventListener::<>f__mg$cache2
	Func_2_t2566913764 * ___U3CU3Ef__mgU24cache2_81;
	// System.Func`2<GoogleSkuInfo,System.Boolean> StoreKitEventListener::<>f__mg$cache3
	Func_2_t1441243940 * ___U3CU3Ef__mgU24cache3_82;
	// System.Func`2<GoogleSkuInfo,Rilisoft.GoogleMarketProduct> StoreKitEventListener::<>f__mg$cache4
	Func_2_t3178620764 * ___U3CU3Ef__mgU24cache4_83;
	// System.Func`2<AmazonItem,System.String> StoreKitEventListener::<>f__mg$cache5
	Func_2_t1902466687 * ___U3CU3Ef__mgU24cache5_84;
	// System.Func`2<AmazonItem,System.Boolean> StoreKitEventListener::<>f__mg$cache6
	Func_2_t152303963 * ___U3CU3Ef__mgU24cache6_85;
	// System.Func`2<AmazonItem,Rilisoft.AmazonMarketProduct> StoreKitEventListener::<>f__mg$cache7
	Func_2_t318140342 * ___U3CU3Ef__mgU24cache7_86;
	// System.Func`2<AmazonReceipt,System.String> StoreKitEventListener::<>f__mg$cache8
	Func_2_t2769542166 * ___U3CU3Ef__mgU24cache8_87;

public:
	inline static int32_t get_offset_of_billingSupported_15() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___billingSupported_15)); }
	inline bool get_billingSupported_15() const { return ___billingSupported_15; }
	inline bool* get_address_of_billingSupported_15() { return &___billingSupported_15; }
	inline void set_billingSupported_15(bool value)
	{
		___billingSupported_15 = value;
	}

	inline static int32_t get_offset_of_coinIds_16() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___coinIds_16)); }
	inline StringU5BU5D_t1281789340* get_coinIds_16() const { return ___coinIds_16; }
	inline StringU5BU5D_t1281789340** get_address_of_coinIds_16() { return &___coinIds_16; }
	inline void set_coinIds_16(StringU5BU5D_t1281789340* value)
	{
		___coinIds_16 = value;
		Il2CppCodeGenWriteBarrier((&___coinIds_16), value);
	}

	inline static int32_t get_offset_of__productIds_17() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____productIds_17)); }
	inline StringU5BU5D_t1281789340* get__productIds_17() const { return ____productIds_17; }
	inline StringU5BU5D_t1281789340** get_address_of__productIds_17() { return &____productIds_17; }
	inline void set__productIds_17(StringU5BU5D_t1281789340* value)
	{
		____productIds_17 = value;
		Il2CppCodeGenWriteBarrier((&____productIds_17), value);
	}

	inline static int32_t get_offset_of_elixirSettName_19() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___elixirSettName_19)); }
	inline String_t* get_elixirSettName_19() const { return ___elixirSettName_19; }
	inline String_t** get_address_of_elixirSettName_19() { return &___elixirSettName_19; }
	inline void set_elixirSettName_19(String_t* value)
	{
		___elixirSettName_19 = value;
		Il2CppCodeGenWriteBarrier((&___elixirSettName_19), value);
	}

	inline static int32_t get_offset_of_fullSettName_20() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___fullSettName_20)); }
	inline String_t* get_fullSettName_20() const { return ___fullSettName_20; }
	inline String_t** get_address_of_fullSettName_20() { return &___fullSettName_20; }
	inline void set_fullSettName_20(String_t* value)
	{
		___fullSettName_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullSettName_20), value);
	}

	inline static int32_t get_offset_of_purchaseInProcess_21() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___purchaseInProcess_21)); }
	inline bool get_purchaseInProcess_21() const { return ___purchaseInProcess_21; }
	inline bool* get_address_of_purchaseInProcess_21() { return &___purchaseInProcess_21; }
	inline void set_purchaseInProcess_21(bool value)
	{
		___purchaseInProcess_21 = value;
	}

	inline static int32_t get_offset_of_restoreInProcess_22() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___restoreInProcess_22)); }
	inline bool get_restoreInProcess_22() const { return ___restoreInProcess_22; }
	inline bool* get_address_of_restoreInProcess_22() { return &___restoreInProcess_22; }
	inline void set_restoreInProcess_22(bool value)
	{
		___restoreInProcess_22 = value;
	}

	inline static int32_t get_offset_of_purchaseActivityInd_23() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___purchaseActivityInd_23)); }
	inline GameObject_t1113636619 * get_purchaseActivityInd_23() const { return ___purchaseActivityInd_23; }
	inline GameObject_t1113636619 ** get_address_of_purchaseActivityInd_23() { return &___purchaseActivityInd_23; }
	inline void set_purchaseActivityInd_23(GameObject_t1113636619 * value)
	{
		___purchaseActivityInd_23 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseActivityInd_23), value);
	}

	inline static int32_t get_offset_of_elixirID_24() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___elixirID_24)); }
	inline String_t* get_elixirID_24() const { return ___elixirID_24; }
	inline String_t** get_address_of_elixirID_24() { return &___elixirID_24; }
	inline void set_elixirID_24(String_t* value)
	{
		___elixirID_24 = value;
		Il2CppCodeGenWriteBarrier((&___elixirID_24), value);
	}

	inline static int32_t get_offset_of_endmanskin_25() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___endmanskin_25)); }
	inline String_t* get_endmanskin_25() const { return ___endmanskin_25; }
	inline String_t** get_address_of_endmanskin_25() { return &___endmanskin_25; }
	inline void set_endmanskin_25(String_t* value)
	{
		___endmanskin_25 = value;
		Il2CppCodeGenWriteBarrier((&___endmanskin_25), value);
	}

	inline static int32_t get_offset_of_chief_26() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___chief_26)); }
	inline String_t* get_chief_26() const { return ___chief_26; }
	inline String_t** get_address_of_chief_26() { return &___chief_26; }
	inline void set_chief_26(String_t* value)
	{
		___chief_26 = value;
		Il2CppCodeGenWriteBarrier((&___chief_26), value);
	}

	inline static int32_t get_offset_of_spaceengineer_27() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___spaceengineer_27)); }
	inline String_t* get_spaceengineer_27() const { return ___spaceengineer_27; }
	inline String_t** get_address_of_spaceengineer_27() { return &___spaceengineer_27; }
	inline void set_spaceengineer_27(String_t* value)
	{
		___spaceengineer_27 = value;
		Il2CppCodeGenWriteBarrier((&___spaceengineer_27), value);
	}

	inline static int32_t get_offset_of_nanosoldier_28() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___nanosoldier_28)); }
	inline String_t* get_nanosoldier_28() const { return ___nanosoldier_28; }
	inline String_t** get_address_of_nanosoldier_28() { return &___nanosoldier_28; }
	inline void set_nanosoldier_28(String_t* value)
	{
		___nanosoldier_28 = value;
		Il2CppCodeGenWriteBarrier((&___nanosoldier_28), value);
	}

	inline static int32_t get_offset_of_steelman_29() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___steelman_29)); }
	inline String_t* get_steelman_29() const { return ___steelman_29; }
	inline String_t** get_address_of_steelman_29() { return &___steelman_29; }
	inline void set_steelman_29(String_t* value)
	{
		___steelman_29 = value;
		Il2CppCodeGenWriteBarrier((&___steelman_29), value);
	}

	inline static int32_t get_offset_of_CaptainSkin_30() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___CaptainSkin_30)); }
	inline String_t* get_CaptainSkin_30() const { return ___CaptainSkin_30; }
	inline String_t** get_address_of_CaptainSkin_30() { return &___CaptainSkin_30; }
	inline void set_CaptainSkin_30(String_t* value)
	{
		___CaptainSkin_30 = value;
		Il2CppCodeGenWriteBarrier((&___CaptainSkin_30), value);
	}

	inline static int32_t get_offset_of_HawkSkin_31() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___HawkSkin_31)); }
	inline String_t* get_HawkSkin_31() const { return ___HawkSkin_31; }
	inline String_t** get_address_of_HawkSkin_31() { return &___HawkSkin_31; }
	inline void set_HawkSkin_31(String_t* value)
	{
		___HawkSkin_31 = value;
		Il2CppCodeGenWriteBarrier((&___HawkSkin_31), value);
	}

	inline static int32_t get_offset_of_GreenGuySkin_32() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___GreenGuySkin_32)); }
	inline String_t* get_GreenGuySkin_32() const { return ___GreenGuySkin_32; }
	inline String_t** get_address_of_GreenGuySkin_32() { return &___GreenGuySkin_32; }
	inline void set_GreenGuySkin_32(String_t* value)
	{
		___GreenGuySkin_32 = value;
		Il2CppCodeGenWriteBarrier((&___GreenGuySkin_32), value);
	}

	inline static int32_t get_offset_of_TunderGodSkin_33() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___TunderGodSkin_33)); }
	inline String_t* get_TunderGodSkin_33() const { return ___TunderGodSkin_33; }
	inline String_t** get_address_of_TunderGodSkin_33() { return &___TunderGodSkin_33; }
	inline void set_TunderGodSkin_33(String_t* value)
	{
		___TunderGodSkin_33 = value;
		Il2CppCodeGenWriteBarrier((&___TunderGodSkin_33), value);
	}

	inline static int32_t get_offset_of_GordonSkin_34() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___GordonSkin_34)); }
	inline String_t* get_GordonSkin_34() const { return ___GordonSkin_34; }
	inline String_t** get_address_of_GordonSkin_34() { return &___GordonSkin_34; }
	inline void set_GordonSkin_34(String_t* value)
	{
		___GordonSkin_34 = value;
		Il2CppCodeGenWriteBarrier((&___GordonSkin_34), value);
	}

	inline static int32_t get_offset_of_animeGirl_35() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___animeGirl_35)); }
	inline String_t* get_animeGirl_35() const { return ___animeGirl_35; }
	inline String_t** get_address_of_animeGirl_35() { return &___animeGirl_35; }
	inline void set_animeGirl_35(String_t* value)
	{
		___animeGirl_35 = value;
		Il2CppCodeGenWriteBarrier((&___animeGirl_35), value);
	}

	inline static int32_t get_offset_of_EMOGirl_36() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___EMOGirl_36)); }
	inline String_t* get_EMOGirl_36() const { return ___EMOGirl_36; }
	inline String_t** get_address_of_EMOGirl_36() { return &___EMOGirl_36; }
	inline void set_EMOGirl_36(String_t* value)
	{
		___EMOGirl_36 = value;
		Il2CppCodeGenWriteBarrier((&___EMOGirl_36), value);
	}

	inline static int32_t get_offset_of_Nurse_37() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___Nurse_37)); }
	inline String_t* get_Nurse_37() const { return ___Nurse_37; }
	inline String_t** get_address_of_Nurse_37() { return &___Nurse_37; }
	inline void set_Nurse_37(String_t* value)
	{
		___Nurse_37 = value;
		Il2CppCodeGenWriteBarrier((&___Nurse_37), value);
	}

	inline static int32_t get_offset_of_magicGirl_38() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___magicGirl_38)); }
	inline String_t* get_magicGirl_38() const { return ___magicGirl_38; }
	inline String_t** get_address_of_magicGirl_38() { return &___magicGirl_38; }
	inline void set_magicGirl_38(String_t* value)
	{
		___magicGirl_38 = value;
		Il2CppCodeGenWriteBarrier((&___magicGirl_38), value);
	}

	inline static int32_t get_offset_of_braveGirl_39() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___braveGirl_39)); }
	inline String_t* get_braveGirl_39() const { return ___braveGirl_39; }
	inline String_t** get_address_of_braveGirl_39() { return &___braveGirl_39; }
	inline void set_braveGirl_39(String_t* value)
	{
		___braveGirl_39 = value;
		Il2CppCodeGenWriteBarrier((&___braveGirl_39), value);
	}

	inline static int32_t get_offset_of_glamDoll_40() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___glamDoll_40)); }
	inline String_t* get_glamDoll_40() const { return ___glamDoll_40; }
	inline String_t** get_address_of_glamDoll_40() { return &___glamDoll_40; }
	inline void set_glamDoll_40(String_t* value)
	{
		___glamDoll_40 = value;
		Il2CppCodeGenWriteBarrier((&___glamDoll_40), value);
	}

	inline static int32_t get_offset_of_kittyGirl_41() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___kittyGirl_41)); }
	inline String_t* get_kittyGirl_41() const { return ___kittyGirl_41; }
	inline String_t** get_address_of_kittyGirl_41() { return &___kittyGirl_41; }
	inline void set_kittyGirl_41(String_t* value)
	{
		___kittyGirl_41 = value;
		Il2CppCodeGenWriteBarrier((&___kittyGirl_41), value);
	}

	inline static int32_t get_offset_of_famosBoy_42() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___famosBoy_42)); }
	inline String_t* get_famosBoy_42() const { return ___famosBoy_42; }
	inline String_t** get_address_of_famosBoy_42() { return &___famosBoy_42; }
	inline void set_famosBoy_42(String_t* value)
	{
		___famosBoy_42 = value;
		Il2CppCodeGenWriteBarrier((&___famosBoy_42), value);
	}

	inline static int32_t get_offset_of_combatrifle_43() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___combatrifle_43)); }
	inline String_t* get_combatrifle_43() const { return ___combatrifle_43; }
	inline String_t** get_address_of_combatrifle_43() { return &___combatrifle_43; }
	inline void set_combatrifle_43(String_t* value)
	{
		___combatrifle_43 = value;
		Il2CppCodeGenWriteBarrier((&___combatrifle_43), value);
	}

	inline static int32_t get_offset_of_goldeneagle_44() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___goldeneagle_44)); }
	inline String_t* get_goldeneagle_44() const { return ___goldeneagle_44; }
	inline String_t** get_address_of_goldeneagle_44() { return &___goldeneagle_44; }
	inline void set_goldeneagle_44(String_t* value)
	{
		___goldeneagle_44 = value;
		Il2CppCodeGenWriteBarrier((&___goldeneagle_44), value);
	}

	inline static int32_t get_offset_of_magicbow_45() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___magicbow_45)); }
	inline String_t* get_magicbow_45() const { return ___magicbow_45; }
	inline String_t** get_address_of_magicbow_45() { return &___magicbow_45; }
	inline void set_magicbow_45(String_t* value)
	{
		___magicbow_45 = value;
		Il2CppCodeGenWriteBarrier((&___magicbow_45), value);
	}

	inline static int32_t get_offset_of_fullVersion_46() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___fullVersion_46)); }
	inline String_t* get_fullVersion_46() const { return ___fullVersion_46; }
	inline String_t** get_address_of_fullVersion_46() { return &___fullVersion_46; }
	inline void set_fullVersion_46(String_t* value)
	{
		___fullVersion_46 = value;
		Il2CppCodeGenWriteBarrier((&___fullVersion_46), value);
	}

	inline static int32_t get_offset_of_axe_47() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___axe_47)); }
	inline String_t* get_axe_47() const { return ___axe_47; }
	inline String_t** get_address_of_axe_47() { return &___axe_47; }
	inline void set_axe_47(String_t* value)
	{
		___axe_47 = value;
		Il2CppCodeGenWriteBarrier((&___axe_47), value);
	}

	inline static int32_t get_offset_of_spas_48() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___spas_48)); }
	inline String_t* get_spas_48() const { return ___spas_48; }
	inline String_t** get_address_of_spas_48() { return &___spas_48; }
	inline void set_spas_48(String_t* value)
	{
		___spas_48 = value;
		Il2CppCodeGenWriteBarrier((&___spas_48), value);
	}

	inline static int32_t get_offset_of_chainsaw_49() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___chainsaw_49)); }
	inline String_t* get_chainsaw_49() const { return ___chainsaw_49; }
	inline String_t** get_address_of_chainsaw_49() { return &___chainsaw_49; }
	inline void set_chainsaw_49(String_t* value)
	{
		___chainsaw_49 = value;
		Il2CppCodeGenWriteBarrier((&___chainsaw_49), value);
	}

	inline static int32_t get_offset_of_famas_50() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___famas_50)); }
	inline String_t* get_famas_50() const { return ___famas_50; }
	inline String_t** get_address_of_famas_50() { return &___famas_50; }
	inline void set_famas_50(String_t* value)
	{
		___famas_50 = value;
		Il2CppCodeGenWriteBarrier((&___famas_50), value);
	}

	inline static int32_t get_offset_of_glock_51() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___glock_51)); }
	inline String_t* get_glock_51() const { return ___glock_51; }
	inline String_t** get_address_of_glock_51() { return &___glock_51; }
	inline void set_glock_51(String_t* value)
	{
		___glock_51 = value;
		Il2CppCodeGenWriteBarrier((&___glock_51), value);
	}

	inline static int32_t get_offset_of_scythe_52() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___scythe_52)); }
	inline String_t* get_scythe_52() const { return ___scythe_52; }
	inline String_t** get_address_of_scythe_52() { return &___scythe_52; }
	inline void set_scythe_52(String_t* value)
	{
		___scythe_52 = value;
		Il2CppCodeGenWriteBarrier((&___scythe_52), value);
	}

	inline static int32_t get_offset_of_shovel_53() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___shovel_53)); }
	inline String_t* get_shovel_53() const { return ___shovel_53; }
	inline String_t** get_address_of_shovel_53() { return &___shovel_53; }
	inline void set_shovel_53(String_t* value)
	{
		___shovel_53 = value;
		Il2CppCodeGenWriteBarrier((&___shovel_53), value);
	}

	inline static int32_t get_offset_of_hammer_54() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___hammer_54)); }
	inline String_t* get_hammer_54() const { return ___hammer_54; }
	inline String_t** get_address_of_hammer_54() { return &___hammer_54; }
	inline void set_hammer_54(String_t* value)
	{
		___hammer_54 = value;
		Il2CppCodeGenWriteBarrier((&___hammer_54), value);
	}

	inline static int32_t get_offset_of_sword_2_55() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___sword_2_55)); }
	inline String_t* get_sword_2_55() const { return ___sword_2_55; }
	inline String_t** get_address_of_sword_2_55() { return &___sword_2_55; }
	inline void set_sword_2_55(String_t* value)
	{
		___sword_2_55 = value;
		Il2CppCodeGenWriteBarrier((&___sword_2_55), value);
	}

	inline static int32_t get_offset_of_staff_56() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___staff_56)); }
	inline String_t* get_staff_56() const { return ___staff_56; }
	inline String_t** get_address_of_staff_56() { return &___staff_56; }
	inline void set_staff_56(String_t* value)
	{
		___staff_56 = value;
		Il2CppCodeGenWriteBarrier((&___staff_56), value);
	}

	inline static int32_t get_offset_of_laser_57() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___laser_57)); }
	inline String_t* get_laser_57() const { return ___laser_57; }
	inline String_t** get_address_of_laser_57() { return &___laser_57; }
	inline void set_laser_57(String_t* value)
	{
		___laser_57 = value;
		Il2CppCodeGenWriteBarrier((&___laser_57), value);
	}

	inline static int32_t get_offset_of_armor_58() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___armor_58)); }
	inline String_t* get_armor_58() const { return ___armor_58; }
	inline String_t** get_address_of_armor_58() { return &___armor_58; }
	inline void set_armor_58(String_t* value)
	{
		___armor_58 = value;
		Il2CppCodeGenWriteBarrier((&___armor_58), value);
	}

	inline static int32_t get_offset_of_lightSword_59() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___lightSword_59)); }
	inline String_t* get_lightSword_59() const { return ___lightSword_59; }
	inline String_t** get_address_of_lightSword_59() { return &___lightSword_59; }
	inline void set_lightSword_59(String_t* value)
	{
		___lightSword_59 = value;
		Il2CppCodeGenWriteBarrier((&___lightSword_59), value);
	}

	inline static int32_t get_offset_of_beretta_60() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___beretta_60)); }
	inline String_t* get_beretta_60() const { return ___beretta_60; }
	inline String_t** get_address_of_beretta_60() { return &___beretta_60; }
	inline void set_beretta_60(String_t* value)
	{
		___beretta_60 = value;
		Il2CppCodeGenWriteBarrier((&___beretta_60), value);
	}

	inline static int32_t get_offset_of_mace_61() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___mace_61)); }
	inline String_t* get_mace_61() const { return ___mace_61; }
	inline String_t** get_address_of_mace_61() { return &___mace_61; }
	inline void set_mace_61(String_t* value)
	{
		___mace_61 = value;
		Il2CppCodeGenWriteBarrier((&___mace_61), value);
	}

	inline static int32_t get_offset_of_minigun_62() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___minigun_62)); }
	inline String_t* get_minigun_62() const { return ___minigun_62; }
	inline String_t** get_address_of_minigun_62() { return &___minigun_62; }
	inline void set_minigun_62(String_t* value)
	{
		___minigun_62 = value;
		Il2CppCodeGenWriteBarrier((&___minigun_62), value);
	}

	inline static int32_t get_offset_of_crossbow_63() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___crossbow_63)); }
	inline String_t* get_crossbow_63() const { return ___crossbow_63; }
	inline String_t** get_address_of_crossbow_63() { return &___crossbow_63; }
	inline void set_crossbow_63(String_t* value)
	{
		___crossbow_63 = value;
		Il2CppCodeGenWriteBarrier((&___crossbow_63), value);
	}

	inline static int32_t get_offset_of_skinIDs_64() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___skinIDs_64)); }
	inline StringU5BU5D_t1281789340* get_skinIDs_64() const { return ___skinIDs_64; }
	inline StringU5BU5D_t1281789340** get_address_of_skinIDs_64() { return &___skinIDs_64; }
	inline void set_skinIDs_64(StringU5BU5D_t1281789340* value)
	{
		___skinIDs_64 = value;
		Il2CppCodeGenWriteBarrier((&___skinIDs_64), value);
	}

	inline static int32_t get_offset_of_idsForSingle_65() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___idsForSingle_65)); }
	inline StringU5BU5D_t1281789340* get_idsForSingle_65() const { return ___idsForSingle_65; }
	inline StringU5BU5D_t1281789340** get_address_of_idsForSingle_65() { return &___idsForSingle_65; }
	inline void set_idsForSingle_65(StringU5BU5D_t1281789340* value)
	{
		___idsForSingle_65 = value;
		Il2CppCodeGenWriteBarrier((&___idsForSingle_65), value);
	}

	inline static int32_t get_offset_of_idsForMulti_66() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___idsForMulti_66)); }
	inline StringU5BU5D_t1281789340* get_idsForMulti_66() const { return ___idsForMulti_66; }
	inline StringU5BU5D_t1281789340** get_address_of_idsForMulti_66() { return &___idsForMulti_66; }
	inline void set_idsForMulti_66(StringU5BU5D_t1281789340* value)
	{
		___idsForMulti_66 = value;
		Il2CppCodeGenWriteBarrier((&___idsForMulti_66), value);
	}

	inline static int32_t get_offset_of_idsForFull_67() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___idsForFull_67)); }
	inline StringU5BU5D_t1281789340* get_idsForFull_67() const { return ___idsForFull_67; }
	inline StringU5BU5D_t1281789340** get_address_of_idsForFull_67() { return &___idsForFull_67; }
	inline void set_idsForFull_67(StringU5BU5D_t1281789340* value)
	{
		___idsForFull_67 = value;
		Il2CppCodeGenWriteBarrier((&___idsForFull_67), value);
	}

	inline static int32_t get_offset_of_categoriesSingle_68() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___categoriesSingle_68)); }
	inline StringU5BU5DU5BU5D_t2611993717* get_categoriesSingle_68() const { return ___categoriesSingle_68; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of_categoriesSingle_68() { return &___categoriesSingle_68; }
	inline void set_categoriesSingle_68(StringU5BU5DU5BU5D_t2611993717* value)
	{
		___categoriesSingle_68 = value;
		Il2CppCodeGenWriteBarrier((&___categoriesSingle_68), value);
	}

	inline static int32_t get_offset_of_categoriesMulti_69() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___categoriesMulti_69)); }
	inline StringU5BU5DU5BU5D_t2611993717* get_categoriesMulti_69() const { return ___categoriesMulti_69; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of_categoriesMulti_69() { return &___categoriesMulti_69; }
	inline void set_categoriesMulti_69(StringU5BU5DU5BU5D_t2611993717* value)
	{
		___categoriesMulti_69 = value;
		Il2CppCodeGenWriteBarrier((&___categoriesMulti_69), value);
	}

	inline static int32_t get_offset_of_categoryNames_71() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___categoryNames_71)); }
	inline StringU5BU5D_t1281789340* get_categoryNames_71() const { return ___categoryNames_71; }
	inline StringU5BU5D_t1281789340** get_address_of_categoryNames_71() { return &___categoryNames_71; }
	inline void set_categoryNames_71(StringU5BU5D_t1281789340* value)
	{
		___categoryNames_71 = value;
		Il2CppCodeGenWriteBarrier((&___categoryNames_71), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache3B_72() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache3B_72)); }
	inline Func_2_t1441243940 * get__003C_003Ef__am_0024cache3B_72() const { return ____003C_003Ef__am_0024cache3B_72; }
	inline Func_2_t1441243940 ** get_address_of__003C_003Ef__am_0024cache3B_72() { return &____003C_003Ef__am_0024cache3B_72; }
	inline void set__003C_003Ef__am_0024cache3B_72(Func_2_t1441243940 * value)
	{
		____003C_003Ef__am_0024cache3B_72 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache3B_72), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache3C_73() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache3C_73)); }
	inline Func_2_t3191406664 * get__003C_003Ef__am_0024cache3C_73() const { return ____003C_003Ef__am_0024cache3C_73; }
	inline Func_2_t3191406664 ** get_address_of__003C_003Ef__am_0024cache3C_73() { return &____003C_003Ef__am_0024cache3C_73; }
	inline void set__003C_003Ef__am_0024cache3C_73(Func_2_t3191406664 * value)
	{
		____003C_003Ef__am_0024cache3C_73 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache3C_73), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache3D_74() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache3D_74)); }
	inline Func_2_t2566913764 * get__003C_003Ef__am_0024cache3D_74() const { return ____003C_003Ef__am_0024cache3D_74; }
	inline Func_2_t2566913764 ** get_address_of__003C_003Ef__am_0024cache3D_74() { return &____003C_003Ef__am_0024cache3D_74; }
	inline void set__003C_003Ef__am_0024cache3D_74(Func_2_t2566913764 * value)
	{
		____003C_003Ef__am_0024cache3D_74 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache3D_74), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache3E_75() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache3E_75)); }
	inline Func_2_t1441243940 * get__003C_003Ef__am_0024cache3E_75() const { return ____003C_003Ef__am_0024cache3E_75; }
	inline Func_2_t1441243940 ** get_address_of__003C_003Ef__am_0024cache3E_75() { return &____003C_003Ef__am_0024cache3E_75; }
	inline void set__003C_003Ef__am_0024cache3E_75(Func_2_t1441243940 * value)
	{
		____003C_003Ef__am_0024cache3E_75 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache3E_75), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache3F_76() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache3F_76)); }
	inline Func_2_t1902466687 * get__003C_003Ef__am_0024cache3F_76() const { return ____003C_003Ef__am_0024cache3F_76; }
	inline Func_2_t1902466687 ** get_address_of__003C_003Ef__am_0024cache3F_76() { return &____003C_003Ef__am_0024cache3F_76; }
	inline void set__003C_003Ef__am_0024cache3F_76(Func_2_t1902466687 * value)
	{
		____003C_003Ef__am_0024cache3F_76 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache3F_76), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache40_77() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache40_77)); }
	inline Func_2_t152303963 * get__003C_003Ef__am_0024cache40_77() const { return ____003C_003Ef__am_0024cache40_77; }
	inline Func_2_t152303963 ** get_address_of__003C_003Ef__am_0024cache40_77() { return &____003C_003Ef__am_0024cache40_77; }
	inline void set__003C_003Ef__am_0024cache40_77(Func_2_t152303963 * value)
	{
		____003C_003Ef__am_0024cache40_77 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache40_77), value);
	}

	inline static int32_t get_offset_of__003C_003Ef__am_0024cache41_78() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ____003C_003Ef__am_0024cache41_78)); }
	inline Func_2_t2769542166 * get__003C_003Ef__am_0024cache41_78() const { return ____003C_003Ef__am_0024cache41_78; }
	inline Func_2_t2769542166 ** get_address_of__003C_003Ef__am_0024cache41_78() { return &____003C_003Ef__am_0024cache41_78; }
	inline void set__003C_003Ef__am_0024cache41_78(Func_2_t2769542166 * value)
	{
		____003C_003Ef__am_0024cache41_78 = value;
		Il2CppCodeGenWriteBarrier((&____003C_003Ef__am_0024cache41_78), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_79() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache0_79)); }
	inline Func_2_t1441243940 * get_U3CU3Ef__mgU24cache0_79() const { return ___U3CU3Ef__mgU24cache0_79; }
	inline Func_2_t1441243940 ** get_address_of_U3CU3Ef__mgU24cache0_79() { return &___U3CU3Ef__mgU24cache0_79; }
	inline void set_U3CU3Ef__mgU24cache0_79(Func_2_t1441243940 * value)
	{
		___U3CU3Ef__mgU24cache0_79 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_79), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_80() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache1_80)); }
	inline Func_2_t3191406664 * get_U3CU3Ef__mgU24cache1_80() const { return ___U3CU3Ef__mgU24cache1_80; }
	inline Func_2_t3191406664 ** get_address_of_U3CU3Ef__mgU24cache1_80() { return &___U3CU3Ef__mgU24cache1_80; }
	inline void set_U3CU3Ef__mgU24cache1_80(Func_2_t3191406664 * value)
	{
		___U3CU3Ef__mgU24cache1_80 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_80), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_81() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache2_81)); }
	inline Func_2_t2566913764 * get_U3CU3Ef__mgU24cache2_81() const { return ___U3CU3Ef__mgU24cache2_81; }
	inline Func_2_t2566913764 ** get_address_of_U3CU3Ef__mgU24cache2_81() { return &___U3CU3Ef__mgU24cache2_81; }
	inline void set_U3CU3Ef__mgU24cache2_81(Func_2_t2566913764 * value)
	{
		___U3CU3Ef__mgU24cache2_81 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_81), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_82() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache3_82)); }
	inline Func_2_t1441243940 * get_U3CU3Ef__mgU24cache3_82() const { return ___U3CU3Ef__mgU24cache3_82; }
	inline Func_2_t1441243940 ** get_address_of_U3CU3Ef__mgU24cache3_82() { return &___U3CU3Ef__mgU24cache3_82; }
	inline void set_U3CU3Ef__mgU24cache3_82(Func_2_t1441243940 * value)
	{
		___U3CU3Ef__mgU24cache3_82 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_82), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_83() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache4_83)); }
	inline Func_2_t3178620764 * get_U3CU3Ef__mgU24cache4_83() const { return ___U3CU3Ef__mgU24cache4_83; }
	inline Func_2_t3178620764 ** get_address_of_U3CU3Ef__mgU24cache4_83() { return &___U3CU3Ef__mgU24cache4_83; }
	inline void set_U3CU3Ef__mgU24cache4_83(Func_2_t3178620764 * value)
	{
		___U3CU3Ef__mgU24cache4_83 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_83), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_84() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache5_84)); }
	inline Func_2_t1902466687 * get_U3CU3Ef__mgU24cache5_84() const { return ___U3CU3Ef__mgU24cache5_84; }
	inline Func_2_t1902466687 ** get_address_of_U3CU3Ef__mgU24cache5_84() { return &___U3CU3Ef__mgU24cache5_84; }
	inline void set_U3CU3Ef__mgU24cache5_84(Func_2_t1902466687 * value)
	{
		___U3CU3Ef__mgU24cache5_84 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_84), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_85() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache6_85)); }
	inline Func_2_t152303963 * get_U3CU3Ef__mgU24cache6_85() const { return ___U3CU3Ef__mgU24cache6_85; }
	inline Func_2_t152303963 ** get_address_of_U3CU3Ef__mgU24cache6_85() { return &___U3CU3Ef__mgU24cache6_85; }
	inline void set_U3CU3Ef__mgU24cache6_85(Func_2_t152303963 * value)
	{
		___U3CU3Ef__mgU24cache6_85 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_85), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_86() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache7_86)); }
	inline Func_2_t318140342 * get_U3CU3Ef__mgU24cache7_86() const { return ___U3CU3Ef__mgU24cache7_86; }
	inline Func_2_t318140342 ** get_address_of_U3CU3Ef__mgU24cache7_86() { return &___U3CU3Ef__mgU24cache7_86; }
	inline void set_U3CU3Ef__mgU24cache7_86(Func_2_t318140342 * value)
	{
		___U3CU3Ef__mgU24cache7_86 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_86), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_87() { return static_cast<int32_t>(offsetof(StoreKitEventListener_t3151468363_StaticFields, ___U3CU3Ef__mgU24cache8_87)); }
	inline Func_2_t2769542166 * get_U3CU3Ef__mgU24cache8_87() const { return ___U3CU3Ef__mgU24cache8_87; }
	inline Func_2_t2769542166 ** get_address_of_U3CU3Ef__mgU24cache8_87() { return &___U3CU3Ef__mgU24cache8_87; }
	inline void set_U3CU3Ef__mgU24cache8_87(Func_2_t2769542166 * value)
	{
		___U3CU3Ef__mgU24cache8_87 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_87), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOREKITEVENTLISTENER_T3151468363_H
#ifndef WEAPONMANAGER_T1762453775_H
#define WEAPONMANAGER_T1762453775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponManager
struct  WeaponManager_t1762453775  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.HostData WeaponManager::hostDataServer
	HostData_t1124963648 * ___hostDataServer_9;
	// System.String WeaponManager::ServerIp
	String_t* ___ServerIp_10;
	// UnityEngine.GameObject WeaponManager::myPlayer
	GameObject_t1113636619 * ___myPlayer_11;
	// UnityEngine.GameObject WeaponManager::myGun
	GameObject_t1113636619 * ___myGun_12;
	// UnityEngine.GameObject WeaponManager::myTable
	GameObject_t1113636619 * ___myTable_13;
	// UnityEngine.Object[] WeaponManager::_weaponsInGame
	ObjectU5BU5D_t1417781964* ____weaponsInGame_14;
	// System.Collections.ArrayList WeaponManager::_playerWeapons
	ArrayList_t2718874744 * ____playerWeapons_15;
	// System.Int32 WeaponManager::CurrentWeaponIndex
	int32_t ___CurrentWeaponIndex_16;
	// UnityEngine.Camera WeaponManager::useCam
	Camera_t4157153871 * ___useCam_17;
	// WeaponSounds WeaponManager::_currentWeaponSounds
	WeaponSounds_t105296586 * ____currentWeaponSounds_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> WeaponManager::_purchaseActinos
	Dictionary_2_t1049633776 * ____purchaseActinos_19;
	// System.Collections.Generic.List`1<WeaponManager/infoClient> WeaponManager::players
	List_1_t2869380684 * ___players_20;

public:
	inline static int32_t get_offset_of_hostDataServer_9() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___hostDataServer_9)); }
	inline HostData_t1124963648 * get_hostDataServer_9() const { return ___hostDataServer_9; }
	inline HostData_t1124963648 ** get_address_of_hostDataServer_9() { return &___hostDataServer_9; }
	inline void set_hostDataServer_9(HostData_t1124963648 * value)
	{
		___hostDataServer_9 = value;
		Il2CppCodeGenWriteBarrier((&___hostDataServer_9), value);
	}

	inline static int32_t get_offset_of_ServerIp_10() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___ServerIp_10)); }
	inline String_t* get_ServerIp_10() const { return ___ServerIp_10; }
	inline String_t** get_address_of_ServerIp_10() { return &___ServerIp_10; }
	inline void set_ServerIp_10(String_t* value)
	{
		___ServerIp_10 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIp_10), value);
	}

	inline static int32_t get_offset_of_myPlayer_11() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___myPlayer_11)); }
	inline GameObject_t1113636619 * get_myPlayer_11() const { return ___myPlayer_11; }
	inline GameObject_t1113636619 ** get_address_of_myPlayer_11() { return &___myPlayer_11; }
	inline void set_myPlayer_11(GameObject_t1113636619 * value)
	{
		___myPlayer_11 = value;
		Il2CppCodeGenWriteBarrier((&___myPlayer_11), value);
	}

	inline static int32_t get_offset_of_myGun_12() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___myGun_12)); }
	inline GameObject_t1113636619 * get_myGun_12() const { return ___myGun_12; }
	inline GameObject_t1113636619 ** get_address_of_myGun_12() { return &___myGun_12; }
	inline void set_myGun_12(GameObject_t1113636619 * value)
	{
		___myGun_12 = value;
		Il2CppCodeGenWriteBarrier((&___myGun_12), value);
	}

	inline static int32_t get_offset_of_myTable_13() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___myTable_13)); }
	inline GameObject_t1113636619 * get_myTable_13() const { return ___myTable_13; }
	inline GameObject_t1113636619 ** get_address_of_myTable_13() { return &___myTable_13; }
	inline void set_myTable_13(GameObject_t1113636619 * value)
	{
		___myTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___myTable_13), value);
	}

	inline static int32_t get_offset_of__weaponsInGame_14() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ____weaponsInGame_14)); }
	inline ObjectU5BU5D_t1417781964* get__weaponsInGame_14() const { return ____weaponsInGame_14; }
	inline ObjectU5BU5D_t1417781964** get_address_of__weaponsInGame_14() { return &____weaponsInGame_14; }
	inline void set__weaponsInGame_14(ObjectU5BU5D_t1417781964* value)
	{
		____weaponsInGame_14 = value;
		Il2CppCodeGenWriteBarrier((&____weaponsInGame_14), value);
	}

	inline static int32_t get_offset_of__playerWeapons_15() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ____playerWeapons_15)); }
	inline ArrayList_t2718874744 * get__playerWeapons_15() const { return ____playerWeapons_15; }
	inline ArrayList_t2718874744 ** get_address_of__playerWeapons_15() { return &____playerWeapons_15; }
	inline void set__playerWeapons_15(ArrayList_t2718874744 * value)
	{
		____playerWeapons_15 = value;
		Il2CppCodeGenWriteBarrier((&____playerWeapons_15), value);
	}

	inline static int32_t get_offset_of_CurrentWeaponIndex_16() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___CurrentWeaponIndex_16)); }
	inline int32_t get_CurrentWeaponIndex_16() const { return ___CurrentWeaponIndex_16; }
	inline int32_t* get_address_of_CurrentWeaponIndex_16() { return &___CurrentWeaponIndex_16; }
	inline void set_CurrentWeaponIndex_16(int32_t value)
	{
		___CurrentWeaponIndex_16 = value;
	}

	inline static int32_t get_offset_of_useCam_17() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___useCam_17)); }
	inline Camera_t4157153871 * get_useCam_17() const { return ___useCam_17; }
	inline Camera_t4157153871 ** get_address_of_useCam_17() { return &___useCam_17; }
	inline void set_useCam_17(Camera_t4157153871 * value)
	{
		___useCam_17 = value;
		Il2CppCodeGenWriteBarrier((&___useCam_17), value);
	}

	inline static int32_t get_offset_of__currentWeaponSounds_18() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ____currentWeaponSounds_18)); }
	inline WeaponSounds_t105296586 * get__currentWeaponSounds_18() const { return ____currentWeaponSounds_18; }
	inline WeaponSounds_t105296586 ** get_address_of__currentWeaponSounds_18() { return &____currentWeaponSounds_18; }
	inline void set__currentWeaponSounds_18(WeaponSounds_t105296586 * value)
	{
		____currentWeaponSounds_18 = value;
		Il2CppCodeGenWriteBarrier((&____currentWeaponSounds_18), value);
	}

	inline static int32_t get_offset_of__purchaseActinos_19() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ____purchaseActinos_19)); }
	inline Dictionary_2_t1049633776 * get__purchaseActinos_19() const { return ____purchaseActinos_19; }
	inline Dictionary_2_t1049633776 ** get_address_of__purchaseActinos_19() { return &____purchaseActinos_19; }
	inline void set__purchaseActinos_19(Dictionary_2_t1049633776 * value)
	{
		____purchaseActinos_19 = value;
		Il2CppCodeGenWriteBarrier((&____purchaseActinos_19), value);
	}

	inline static int32_t get_offset_of_players_20() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775, ___players_20)); }
	inline List_1_t2869380684 * get_players_20() const { return ___players_20; }
	inline List_1_t2869380684 ** get_address_of_players_20() { return &___players_20; }
	inline void set_players_20(List_1_t2869380684 * value)
	{
		___players_20 = value;
		Il2CppCodeGenWriteBarrier((&___players_20), value);
	}
};

struct WeaponManager_t1762453775_StaticFields
{
public:
	// System.String WeaponManager::CrystalSwordTag
	String_t* ___CrystalSwordTag_2;
	// System.String WeaponManager::MinersWeaponTag
	String_t* ___MinersWeaponTag_3;
	// System.String WeaponManager::MaceTag
	String_t* ___MaceTag_4;
	// System.String WeaponManager::CrossbowTag
	String_t* ___CrossbowTag_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WeaponManager::tagToStoreIDMapping
	Dictionary_2_t1632706988 * ___tagToStoreIDMapping_6;
	// System.String[] WeaponManager::multiplayerWeaponTags
	StringU5BU5D_t1281789340* ___multiplayerWeaponTags_7;
	// System.String[] WeaponManager::_initialMultiplayerWeaponTags
	StringU5BU5D_t1281789340* ____initialMultiplayerWeaponTags_8;

public:
	inline static int32_t get_offset_of_CrystalSwordTag_2() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___CrystalSwordTag_2)); }
	inline String_t* get_CrystalSwordTag_2() const { return ___CrystalSwordTag_2; }
	inline String_t** get_address_of_CrystalSwordTag_2() { return &___CrystalSwordTag_2; }
	inline void set_CrystalSwordTag_2(String_t* value)
	{
		___CrystalSwordTag_2 = value;
		Il2CppCodeGenWriteBarrier((&___CrystalSwordTag_2), value);
	}

	inline static int32_t get_offset_of_MinersWeaponTag_3() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___MinersWeaponTag_3)); }
	inline String_t* get_MinersWeaponTag_3() const { return ___MinersWeaponTag_3; }
	inline String_t** get_address_of_MinersWeaponTag_3() { return &___MinersWeaponTag_3; }
	inline void set_MinersWeaponTag_3(String_t* value)
	{
		___MinersWeaponTag_3 = value;
		Il2CppCodeGenWriteBarrier((&___MinersWeaponTag_3), value);
	}

	inline static int32_t get_offset_of_MaceTag_4() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___MaceTag_4)); }
	inline String_t* get_MaceTag_4() const { return ___MaceTag_4; }
	inline String_t** get_address_of_MaceTag_4() { return &___MaceTag_4; }
	inline void set_MaceTag_4(String_t* value)
	{
		___MaceTag_4 = value;
		Il2CppCodeGenWriteBarrier((&___MaceTag_4), value);
	}

	inline static int32_t get_offset_of_CrossbowTag_5() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___CrossbowTag_5)); }
	inline String_t* get_CrossbowTag_5() const { return ___CrossbowTag_5; }
	inline String_t** get_address_of_CrossbowTag_5() { return &___CrossbowTag_5; }
	inline void set_CrossbowTag_5(String_t* value)
	{
		___CrossbowTag_5 = value;
		Il2CppCodeGenWriteBarrier((&___CrossbowTag_5), value);
	}

	inline static int32_t get_offset_of_tagToStoreIDMapping_6() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___tagToStoreIDMapping_6)); }
	inline Dictionary_2_t1632706988 * get_tagToStoreIDMapping_6() const { return ___tagToStoreIDMapping_6; }
	inline Dictionary_2_t1632706988 ** get_address_of_tagToStoreIDMapping_6() { return &___tagToStoreIDMapping_6; }
	inline void set_tagToStoreIDMapping_6(Dictionary_2_t1632706988 * value)
	{
		___tagToStoreIDMapping_6 = value;
		Il2CppCodeGenWriteBarrier((&___tagToStoreIDMapping_6), value);
	}

	inline static int32_t get_offset_of_multiplayerWeaponTags_7() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ___multiplayerWeaponTags_7)); }
	inline StringU5BU5D_t1281789340* get_multiplayerWeaponTags_7() const { return ___multiplayerWeaponTags_7; }
	inline StringU5BU5D_t1281789340** get_address_of_multiplayerWeaponTags_7() { return &___multiplayerWeaponTags_7; }
	inline void set_multiplayerWeaponTags_7(StringU5BU5D_t1281789340* value)
	{
		___multiplayerWeaponTags_7 = value;
		Il2CppCodeGenWriteBarrier((&___multiplayerWeaponTags_7), value);
	}

	inline static int32_t get_offset_of__initialMultiplayerWeaponTags_8() { return static_cast<int32_t>(offsetof(WeaponManager_t1762453775_StaticFields, ____initialMultiplayerWeaponTags_8)); }
	inline StringU5BU5D_t1281789340* get__initialMultiplayerWeaponTags_8() const { return ____initialMultiplayerWeaponTags_8; }
	inline StringU5BU5D_t1281789340** get_address_of__initialMultiplayerWeaponTags_8() { return &____initialMultiplayerWeaponTags_8; }
	inline void set__initialMultiplayerWeaponTags_8(StringU5BU5D_t1281789340* value)
	{
		____initialMultiplayerWeaponTags_8 = value;
		Il2CppCodeGenWriteBarrier((&____initialMultiplayerWeaponTags_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPONMANAGER_T1762453775_H
#ifndef WEAPONSOUNDS_T105296586_H
#define WEAPONSOUNDS_T105296586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponSounds
struct  WeaponSounds_t105296586  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip WeaponSounds::shoot
	AudioClip_t3680889665 * ___shoot_2;
	// UnityEngine.AudioClip WeaponSounds::reload
	AudioClip_t3680889665 * ___reload_3;
	// UnityEngine.AudioClip WeaponSounds::empty
	AudioClip_t3680889665 * ___empty_4;
	// System.Boolean WeaponSounds::isSerialShooting
	bool ___isSerialShooting_5;
	// UnityEngine.GameObject WeaponSounds::bonusPrefab
	GameObject_t1113636619 * ___bonusPrefab_6;
	// System.Int32 WeaponSounds::InitialAmmo
	int32_t ___InitialAmmo_7;
	// System.Int32 WeaponSounds::ammoInClip
	int32_t ___ammoInClip_8;
	// System.Int32 WeaponSounds::maxAmmo
	int32_t ___maxAmmo_9;
	// System.Boolean WeaponSounds::isMelee
	bool ___isMelee_10;
	// System.Single WeaponSounds::range
	float ___range_11;
	// System.Int32 WeaponSounds::damage
	int32_t ___damage_12;
	// System.Single WeaponSounds::speedModifier
	float ___speedModifier_13;
	// UnityEngine.GameObject WeaponSounds::animationObject
	GameObject_t1113636619 * ___animationObject_14;
	// System.Int32 WeaponSounds::Probability
	int32_t ___Probability_15;
	// UnityEngine.Vector2 WeaponSounds::damageRange
	Vector2_t2156229523  ___damageRange_16;
	// UnityEngine.Vector3 WeaponSounds::gunPosition
	Vector3_t3722313464  ___gunPosition_17;
	// UnityEngine.Texture WeaponSounds::preview
	Texture_t3661962703 * ___preview_18;
	// System.Int32 WeaponSounds::inAppExtensionModifier
	int32_t ___inAppExtensionModifier_19;
	// System.Single WeaponSounds::meleeAngle
	float ___meleeAngle_20;
	// System.Single WeaponSounds::multiplayerDamage
	float ___multiplayerDamage_21;
	// System.Single WeaponSounds::meleeAttackTimeModifier
	float ___meleeAttackTimeModifier_22;

public:
	inline static int32_t get_offset_of_shoot_2() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___shoot_2)); }
	inline AudioClip_t3680889665 * get_shoot_2() const { return ___shoot_2; }
	inline AudioClip_t3680889665 ** get_address_of_shoot_2() { return &___shoot_2; }
	inline void set_shoot_2(AudioClip_t3680889665 * value)
	{
		___shoot_2 = value;
		Il2CppCodeGenWriteBarrier((&___shoot_2), value);
	}

	inline static int32_t get_offset_of_reload_3() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___reload_3)); }
	inline AudioClip_t3680889665 * get_reload_3() const { return ___reload_3; }
	inline AudioClip_t3680889665 ** get_address_of_reload_3() { return &___reload_3; }
	inline void set_reload_3(AudioClip_t3680889665 * value)
	{
		___reload_3 = value;
		Il2CppCodeGenWriteBarrier((&___reload_3), value);
	}

	inline static int32_t get_offset_of_empty_4() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___empty_4)); }
	inline AudioClip_t3680889665 * get_empty_4() const { return ___empty_4; }
	inline AudioClip_t3680889665 ** get_address_of_empty_4() { return &___empty_4; }
	inline void set_empty_4(AudioClip_t3680889665 * value)
	{
		___empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___empty_4), value);
	}

	inline static int32_t get_offset_of_isSerialShooting_5() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___isSerialShooting_5)); }
	inline bool get_isSerialShooting_5() const { return ___isSerialShooting_5; }
	inline bool* get_address_of_isSerialShooting_5() { return &___isSerialShooting_5; }
	inline void set_isSerialShooting_5(bool value)
	{
		___isSerialShooting_5 = value;
	}

	inline static int32_t get_offset_of_bonusPrefab_6() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___bonusPrefab_6)); }
	inline GameObject_t1113636619 * get_bonusPrefab_6() const { return ___bonusPrefab_6; }
	inline GameObject_t1113636619 ** get_address_of_bonusPrefab_6() { return &___bonusPrefab_6; }
	inline void set_bonusPrefab_6(GameObject_t1113636619 * value)
	{
		___bonusPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___bonusPrefab_6), value);
	}

	inline static int32_t get_offset_of_InitialAmmo_7() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___InitialAmmo_7)); }
	inline int32_t get_InitialAmmo_7() const { return ___InitialAmmo_7; }
	inline int32_t* get_address_of_InitialAmmo_7() { return &___InitialAmmo_7; }
	inline void set_InitialAmmo_7(int32_t value)
	{
		___InitialAmmo_7 = value;
	}

	inline static int32_t get_offset_of_ammoInClip_8() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___ammoInClip_8)); }
	inline int32_t get_ammoInClip_8() const { return ___ammoInClip_8; }
	inline int32_t* get_address_of_ammoInClip_8() { return &___ammoInClip_8; }
	inline void set_ammoInClip_8(int32_t value)
	{
		___ammoInClip_8 = value;
	}

	inline static int32_t get_offset_of_maxAmmo_9() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___maxAmmo_9)); }
	inline int32_t get_maxAmmo_9() const { return ___maxAmmo_9; }
	inline int32_t* get_address_of_maxAmmo_9() { return &___maxAmmo_9; }
	inline void set_maxAmmo_9(int32_t value)
	{
		___maxAmmo_9 = value;
	}

	inline static int32_t get_offset_of_isMelee_10() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___isMelee_10)); }
	inline bool get_isMelee_10() const { return ___isMelee_10; }
	inline bool* get_address_of_isMelee_10() { return &___isMelee_10; }
	inline void set_isMelee_10(bool value)
	{
		___isMelee_10 = value;
	}

	inline static int32_t get_offset_of_range_11() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___range_11)); }
	inline float get_range_11() const { return ___range_11; }
	inline float* get_address_of_range_11() { return &___range_11; }
	inline void set_range_11(float value)
	{
		___range_11 = value;
	}

	inline static int32_t get_offset_of_damage_12() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___damage_12)); }
	inline int32_t get_damage_12() const { return ___damage_12; }
	inline int32_t* get_address_of_damage_12() { return &___damage_12; }
	inline void set_damage_12(int32_t value)
	{
		___damage_12 = value;
	}

	inline static int32_t get_offset_of_speedModifier_13() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___speedModifier_13)); }
	inline float get_speedModifier_13() const { return ___speedModifier_13; }
	inline float* get_address_of_speedModifier_13() { return &___speedModifier_13; }
	inline void set_speedModifier_13(float value)
	{
		___speedModifier_13 = value;
	}

	inline static int32_t get_offset_of_animationObject_14() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___animationObject_14)); }
	inline GameObject_t1113636619 * get_animationObject_14() const { return ___animationObject_14; }
	inline GameObject_t1113636619 ** get_address_of_animationObject_14() { return &___animationObject_14; }
	inline void set_animationObject_14(GameObject_t1113636619 * value)
	{
		___animationObject_14 = value;
		Il2CppCodeGenWriteBarrier((&___animationObject_14), value);
	}

	inline static int32_t get_offset_of_Probability_15() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___Probability_15)); }
	inline int32_t get_Probability_15() const { return ___Probability_15; }
	inline int32_t* get_address_of_Probability_15() { return &___Probability_15; }
	inline void set_Probability_15(int32_t value)
	{
		___Probability_15 = value;
	}

	inline static int32_t get_offset_of_damageRange_16() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___damageRange_16)); }
	inline Vector2_t2156229523  get_damageRange_16() const { return ___damageRange_16; }
	inline Vector2_t2156229523 * get_address_of_damageRange_16() { return &___damageRange_16; }
	inline void set_damageRange_16(Vector2_t2156229523  value)
	{
		___damageRange_16 = value;
	}

	inline static int32_t get_offset_of_gunPosition_17() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___gunPosition_17)); }
	inline Vector3_t3722313464  get_gunPosition_17() const { return ___gunPosition_17; }
	inline Vector3_t3722313464 * get_address_of_gunPosition_17() { return &___gunPosition_17; }
	inline void set_gunPosition_17(Vector3_t3722313464  value)
	{
		___gunPosition_17 = value;
	}

	inline static int32_t get_offset_of_preview_18() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___preview_18)); }
	inline Texture_t3661962703 * get_preview_18() const { return ___preview_18; }
	inline Texture_t3661962703 ** get_address_of_preview_18() { return &___preview_18; }
	inline void set_preview_18(Texture_t3661962703 * value)
	{
		___preview_18 = value;
		Il2CppCodeGenWriteBarrier((&___preview_18), value);
	}

	inline static int32_t get_offset_of_inAppExtensionModifier_19() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___inAppExtensionModifier_19)); }
	inline int32_t get_inAppExtensionModifier_19() const { return ___inAppExtensionModifier_19; }
	inline int32_t* get_address_of_inAppExtensionModifier_19() { return &___inAppExtensionModifier_19; }
	inline void set_inAppExtensionModifier_19(int32_t value)
	{
		___inAppExtensionModifier_19 = value;
	}

	inline static int32_t get_offset_of_meleeAngle_20() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___meleeAngle_20)); }
	inline float get_meleeAngle_20() const { return ___meleeAngle_20; }
	inline float* get_address_of_meleeAngle_20() { return &___meleeAngle_20; }
	inline void set_meleeAngle_20(float value)
	{
		___meleeAngle_20 = value;
	}

	inline static int32_t get_offset_of_multiplayerDamage_21() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___multiplayerDamage_21)); }
	inline float get_multiplayerDamage_21() const { return ___multiplayerDamage_21; }
	inline float* get_address_of_multiplayerDamage_21() { return &___multiplayerDamage_21; }
	inline void set_multiplayerDamage_21(float value)
	{
		___multiplayerDamage_21 = value;
	}

	inline static int32_t get_offset_of_meleeAttackTimeModifier_22() { return static_cast<int32_t>(offsetof(WeaponSounds_t105296586, ___meleeAttackTimeModifier_22)); }
	inline float get_meleeAttackTimeModifier_22() const { return ___meleeAttackTimeModifier_22; }
	inline float* get_address_of_meleeAttackTimeModifier_22() { return &___meleeAttackTimeModifier_22; }
	inline void set_meleeAttackTimeModifier_22(float value)
	{
		___meleeAttackTimeModifier_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPONSOUNDS_T105296586_H
#ifndef ZOMBIMANAGER_T1666808103_H
#define ZOMBIMANAGER_T1666808103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiManager
struct  ZombiManager_t1666808103  : public MonoBehaviour_t3962482529
{
public:
	// System.Single ZombiManager::timeGame
	float ___timeGame_2;
	// System.Single ZombiManager::nextTimeSynch
	float ___nextTimeSynch_3;
	// System.Single ZombiManager::nextAddZombi
	float ___nextAddZombi_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ZombiManager::zombiePrefabs
	List_1_t2585711361 * ___zombiePrefabs_5;
	// System.Collections.Generic.List`1<System.String[]> ZombiManager::_enemies
	List_1_t2753864082 * ____enemies_6;
	// UnityEngine.GameObject[] ZombiManager::_enemyCreationZones
	GameObjectU5BU5D_t3328599146* ____enemyCreationZones_7;
	// System.Boolean ZombiManager::startGame
	bool ___startGame_8;
	// System.Single ZombiManager::maxTimeGame
	float ___maxTimeGame_9;
	// PhotonView ZombiManager::photonView
	PhotonView_t2207721820 * ___photonView_10;

public:
	inline static int32_t get_offset_of_timeGame_2() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___timeGame_2)); }
	inline float get_timeGame_2() const { return ___timeGame_2; }
	inline float* get_address_of_timeGame_2() { return &___timeGame_2; }
	inline void set_timeGame_2(float value)
	{
		___timeGame_2 = value;
	}

	inline static int32_t get_offset_of_nextTimeSynch_3() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___nextTimeSynch_3)); }
	inline float get_nextTimeSynch_3() const { return ___nextTimeSynch_3; }
	inline float* get_address_of_nextTimeSynch_3() { return &___nextTimeSynch_3; }
	inline void set_nextTimeSynch_3(float value)
	{
		___nextTimeSynch_3 = value;
	}

	inline static int32_t get_offset_of_nextAddZombi_4() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___nextAddZombi_4)); }
	inline float get_nextAddZombi_4() const { return ___nextAddZombi_4; }
	inline float* get_address_of_nextAddZombi_4() { return &___nextAddZombi_4; }
	inline void set_nextAddZombi_4(float value)
	{
		___nextAddZombi_4 = value;
	}

	inline static int32_t get_offset_of_zombiePrefabs_5() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___zombiePrefabs_5)); }
	inline List_1_t2585711361 * get_zombiePrefabs_5() const { return ___zombiePrefabs_5; }
	inline List_1_t2585711361 ** get_address_of_zombiePrefabs_5() { return &___zombiePrefabs_5; }
	inline void set_zombiePrefabs_5(List_1_t2585711361 * value)
	{
		___zombiePrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((&___zombiePrefabs_5), value);
	}

	inline static int32_t get_offset_of__enemies_6() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ____enemies_6)); }
	inline List_1_t2753864082 * get__enemies_6() const { return ____enemies_6; }
	inline List_1_t2753864082 ** get_address_of__enemies_6() { return &____enemies_6; }
	inline void set__enemies_6(List_1_t2753864082 * value)
	{
		____enemies_6 = value;
		Il2CppCodeGenWriteBarrier((&____enemies_6), value);
	}

	inline static int32_t get_offset_of__enemyCreationZones_7() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ____enemyCreationZones_7)); }
	inline GameObjectU5BU5D_t3328599146* get__enemyCreationZones_7() const { return ____enemyCreationZones_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__enemyCreationZones_7() { return &____enemyCreationZones_7; }
	inline void set__enemyCreationZones_7(GameObjectU5BU5D_t3328599146* value)
	{
		____enemyCreationZones_7 = value;
		Il2CppCodeGenWriteBarrier((&____enemyCreationZones_7), value);
	}

	inline static int32_t get_offset_of_startGame_8() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___startGame_8)); }
	inline bool get_startGame_8() const { return ___startGame_8; }
	inline bool* get_address_of_startGame_8() { return &___startGame_8; }
	inline void set_startGame_8(bool value)
	{
		___startGame_8 = value;
	}

	inline static int32_t get_offset_of_maxTimeGame_9() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___maxTimeGame_9)); }
	inline float get_maxTimeGame_9() const { return ___maxTimeGame_9; }
	inline float* get_address_of_maxTimeGame_9() { return &___maxTimeGame_9; }
	inline void set_maxTimeGame_9(float value)
	{
		___maxTimeGame_9 = value;
	}

	inline static int32_t get_offset_of_photonView_10() { return static_cast<int32_t>(offsetof(ZombiManager_t1666808103, ___photonView_10)); }
	inline PhotonView_t2207721820 * get_photonView_10() const { return ___photonView_10; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_10() { return &___photonView_10; }
	inline void set_photonView_10(PhotonView_t2207721820 * value)
	{
		___photonView_10 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIMANAGER_T1666808103_H
#ifndef ZOMBIUPRAVLENIE_T207883660_H
#define ZOMBIUPRAVLENIE_T207883660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiUpravlenie
struct  ZombiUpravlenie_t207883660  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ZombiUpravlenie::playerKill
	GameObject_t1113636619 * ___playerKill_2;
	// Player_move_c ZombiUpravlenie::healthDown
	Player_move_c_t367674069 * ___healthDown_3;
	// UnityEngine.GameObject ZombiUpravlenie::player
	GameObject_t1113636619 * ___player_4;
	// System.Single ZombiUpravlenie::CurLifeTime
	float ___CurLifeTime_5;
	// System.String ZombiUpravlenie::idleAnim
	String_t* ___idleAnim_6;
	// System.String ZombiUpravlenie::normWalkAnim
	String_t* ___normWalkAnim_7;
	// System.String ZombiUpravlenie::zombieWalkAnim
	String_t* ___zombieWalkAnim_8;
	// System.String ZombiUpravlenie::offAnim
	String_t* ___offAnim_9;
	// System.String ZombiUpravlenie::deathAnim
	String_t* ___deathAnim_10;
	// System.String ZombiUpravlenie::onAnim
	String_t* ___onAnim_11;
	// System.String ZombiUpravlenie::attackAnim
	String_t* ___attackAnim_12;
	// System.String ZombiUpravlenie::shootAnim
	String_t* ___shootAnim_13;
	// UnityEngine.GameObject ZombiUpravlenie::_modelChild
	GameObject_t1113636619 * ____modelChild_14;
	// Sounds ZombiUpravlenie::_soundClips
	Sounds_t3004079410 * ____soundClips_15;
	// System.Boolean ZombiUpravlenie::falling
	bool ___falling_16;
	// UnityEngine.AI.NavMeshAgent ZombiUpravlenie::_nma
	NavMeshAgent_t1276799816 * ____nma_17;
	// UnityEngine.BoxCollider ZombiUpravlenie::_modelChildCollider
	BoxCollider_t1640800422 * ____modelChildCollider_18;
	// ZombiManager ZombiUpravlenie::_gameController
	ZombiManager_t1666808103 * ____gameController_19;
	// System.Boolean ZombiUpravlenie::deaded
	bool ___deaded_20;
	// UnityEngine.Transform ZombiUpravlenie::target
	Transform_t3600365921 * ___target_21;
	// System.Single ZombiUpravlenie::health
	float ___health_22;
	// PhotonView ZombiUpravlenie::photonView
	PhotonView_t2207721820 * ___photonView_23;
	// UnityEngine.Texture ZombiUpravlenie::hitTexture
	Texture_t3661962703 * ___hitTexture_24;
	// UnityEngine.Texture ZombiUpravlenie::_skin
	Texture_t3661962703 * ____skin_25;
	// System.Boolean ZombiUpravlenie::_flashing
	bool ____flashing_27;
	// System.Int32 ZombiUpravlenie::typeZombInMas
	int32_t ___typeZombInMas_28;
	// System.Single ZombiUpravlenie::timeToUpdateTarget
	float ___timeToUpdateTarget_29;
	// System.Single ZombiUpravlenie::timeToUpdateNavMesh
	float ___timeToUpdateNavMesh_30;
	// System.Int32 ZombiUpravlenie::tekAnim
	int32_t ___tekAnim_31;

public:
	inline static int32_t get_offset_of_playerKill_2() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___playerKill_2)); }
	inline GameObject_t1113636619 * get_playerKill_2() const { return ___playerKill_2; }
	inline GameObject_t1113636619 ** get_address_of_playerKill_2() { return &___playerKill_2; }
	inline void set_playerKill_2(GameObject_t1113636619 * value)
	{
		___playerKill_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerKill_2), value);
	}

	inline static int32_t get_offset_of_healthDown_3() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___healthDown_3)); }
	inline Player_move_c_t367674069 * get_healthDown_3() const { return ___healthDown_3; }
	inline Player_move_c_t367674069 ** get_address_of_healthDown_3() { return &___healthDown_3; }
	inline void set_healthDown_3(Player_move_c_t367674069 * value)
	{
		___healthDown_3 = value;
		Il2CppCodeGenWriteBarrier((&___healthDown_3), value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_CurLifeTime_5() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___CurLifeTime_5)); }
	inline float get_CurLifeTime_5() const { return ___CurLifeTime_5; }
	inline float* get_address_of_CurLifeTime_5() { return &___CurLifeTime_5; }
	inline void set_CurLifeTime_5(float value)
	{
		___CurLifeTime_5 = value;
	}

	inline static int32_t get_offset_of_idleAnim_6() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___idleAnim_6)); }
	inline String_t* get_idleAnim_6() const { return ___idleAnim_6; }
	inline String_t** get_address_of_idleAnim_6() { return &___idleAnim_6; }
	inline void set_idleAnim_6(String_t* value)
	{
		___idleAnim_6 = value;
		Il2CppCodeGenWriteBarrier((&___idleAnim_6), value);
	}

	inline static int32_t get_offset_of_normWalkAnim_7() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___normWalkAnim_7)); }
	inline String_t* get_normWalkAnim_7() const { return ___normWalkAnim_7; }
	inline String_t** get_address_of_normWalkAnim_7() { return &___normWalkAnim_7; }
	inline void set_normWalkAnim_7(String_t* value)
	{
		___normWalkAnim_7 = value;
		Il2CppCodeGenWriteBarrier((&___normWalkAnim_7), value);
	}

	inline static int32_t get_offset_of_zombieWalkAnim_8() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___zombieWalkAnim_8)); }
	inline String_t* get_zombieWalkAnim_8() const { return ___zombieWalkAnim_8; }
	inline String_t** get_address_of_zombieWalkAnim_8() { return &___zombieWalkAnim_8; }
	inline void set_zombieWalkAnim_8(String_t* value)
	{
		___zombieWalkAnim_8 = value;
		Il2CppCodeGenWriteBarrier((&___zombieWalkAnim_8), value);
	}

	inline static int32_t get_offset_of_offAnim_9() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___offAnim_9)); }
	inline String_t* get_offAnim_9() const { return ___offAnim_9; }
	inline String_t** get_address_of_offAnim_9() { return &___offAnim_9; }
	inline void set_offAnim_9(String_t* value)
	{
		___offAnim_9 = value;
		Il2CppCodeGenWriteBarrier((&___offAnim_9), value);
	}

	inline static int32_t get_offset_of_deathAnim_10() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___deathAnim_10)); }
	inline String_t* get_deathAnim_10() const { return ___deathAnim_10; }
	inline String_t** get_address_of_deathAnim_10() { return &___deathAnim_10; }
	inline void set_deathAnim_10(String_t* value)
	{
		___deathAnim_10 = value;
		Il2CppCodeGenWriteBarrier((&___deathAnim_10), value);
	}

	inline static int32_t get_offset_of_onAnim_11() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___onAnim_11)); }
	inline String_t* get_onAnim_11() const { return ___onAnim_11; }
	inline String_t** get_address_of_onAnim_11() { return &___onAnim_11; }
	inline void set_onAnim_11(String_t* value)
	{
		___onAnim_11 = value;
		Il2CppCodeGenWriteBarrier((&___onAnim_11), value);
	}

	inline static int32_t get_offset_of_attackAnim_12() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___attackAnim_12)); }
	inline String_t* get_attackAnim_12() const { return ___attackAnim_12; }
	inline String_t** get_address_of_attackAnim_12() { return &___attackAnim_12; }
	inline void set_attackAnim_12(String_t* value)
	{
		___attackAnim_12 = value;
		Il2CppCodeGenWriteBarrier((&___attackAnim_12), value);
	}

	inline static int32_t get_offset_of_shootAnim_13() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___shootAnim_13)); }
	inline String_t* get_shootAnim_13() const { return ___shootAnim_13; }
	inline String_t** get_address_of_shootAnim_13() { return &___shootAnim_13; }
	inline void set_shootAnim_13(String_t* value)
	{
		___shootAnim_13 = value;
		Il2CppCodeGenWriteBarrier((&___shootAnim_13), value);
	}

	inline static int32_t get_offset_of__modelChild_14() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____modelChild_14)); }
	inline GameObject_t1113636619 * get__modelChild_14() const { return ____modelChild_14; }
	inline GameObject_t1113636619 ** get_address_of__modelChild_14() { return &____modelChild_14; }
	inline void set__modelChild_14(GameObject_t1113636619 * value)
	{
		____modelChild_14 = value;
		Il2CppCodeGenWriteBarrier((&____modelChild_14), value);
	}

	inline static int32_t get_offset_of__soundClips_15() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____soundClips_15)); }
	inline Sounds_t3004079410 * get__soundClips_15() const { return ____soundClips_15; }
	inline Sounds_t3004079410 ** get_address_of__soundClips_15() { return &____soundClips_15; }
	inline void set__soundClips_15(Sounds_t3004079410 * value)
	{
		____soundClips_15 = value;
		Il2CppCodeGenWriteBarrier((&____soundClips_15), value);
	}

	inline static int32_t get_offset_of_falling_16() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___falling_16)); }
	inline bool get_falling_16() const { return ___falling_16; }
	inline bool* get_address_of_falling_16() { return &___falling_16; }
	inline void set_falling_16(bool value)
	{
		___falling_16 = value;
	}

	inline static int32_t get_offset_of__nma_17() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____nma_17)); }
	inline NavMeshAgent_t1276799816 * get__nma_17() const { return ____nma_17; }
	inline NavMeshAgent_t1276799816 ** get_address_of__nma_17() { return &____nma_17; }
	inline void set__nma_17(NavMeshAgent_t1276799816 * value)
	{
		____nma_17 = value;
		Il2CppCodeGenWriteBarrier((&____nma_17), value);
	}

	inline static int32_t get_offset_of__modelChildCollider_18() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____modelChildCollider_18)); }
	inline BoxCollider_t1640800422 * get__modelChildCollider_18() const { return ____modelChildCollider_18; }
	inline BoxCollider_t1640800422 ** get_address_of__modelChildCollider_18() { return &____modelChildCollider_18; }
	inline void set__modelChildCollider_18(BoxCollider_t1640800422 * value)
	{
		____modelChildCollider_18 = value;
		Il2CppCodeGenWriteBarrier((&____modelChildCollider_18), value);
	}

	inline static int32_t get_offset_of__gameController_19() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____gameController_19)); }
	inline ZombiManager_t1666808103 * get__gameController_19() const { return ____gameController_19; }
	inline ZombiManager_t1666808103 ** get_address_of__gameController_19() { return &____gameController_19; }
	inline void set__gameController_19(ZombiManager_t1666808103 * value)
	{
		____gameController_19 = value;
		Il2CppCodeGenWriteBarrier((&____gameController_19), value);
	}

	inline static int32_t get_offset_of_deaded_20() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___deaded_20)); }
	inline bool get_deaded_20() const { return ___deaded_20; }
	inline bool* get_address_of_deaded_20() { return &___deaded_20; }
	inline void set_deaded_20(bool value)
	{
		___deaded_20 = value;
	}

	inline static int32_t get_offset_of_target_21() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___target_21)); }
	inline Transform_t3600365921 * get_target_21() const { return ___target_21; }
	inline Transform_t3600365921 ** get_address_of_target_21() { return &___target_21; }
	inline void set_target_21(Transform_t3600365921 * value)
	{
		___target_21 = value;
		Il2CppCodeGenWriteBarrier((&___target_21), value);
	}

	inline static int32_t get_offset_of_health_22() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___health_22)); }
	inline float get_health_22() const { return ___health_22; }
	inline float* get_address_of_health_22() { return &___health_22; }
	inline void set_health_22(float value)
	{
		___health_22 = value;
	}

	inline static int32_t get_offset_of_photonView_23() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___photonView_23)); }
	inline PhotonView_t2207721820 * get_photonView_23() const { return ___photonView_23; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_23() { return &___photonView_23; }
	inline void set_photonView_23(PhotonView_t2207721820 * value)
	{
		___photonView_23 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_23), value);
	}

	inline static int32_t get_offset_of_hitTexture_24() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___hitTexture_24)); }
	inline Texture_t3661962703 * get_hitTexture_24() const { return ___hitTexture_24; }
	inline Texture_t3661962703 ** get_address_of_hitTexture_24() { return &___hitTexture_24; }
	inline void set_hitTexture_24(Texture_t3661962703 * value)
	{
		___hitTexture_24 = value;
		Il2CppCodeGenWriteBarrier((&___hitTexture_24), value);
	}

	inline static int32_t get_offset_of__skin_25() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____skin_25)); }
	inline Texture_t3661962703 * get__skin_25() const { return ____skin_25; }
	inline Texture_t3661962703 ** get_address_of__skin_25() { return &____skin_25; }
	inline void set__skin_25(Texture_t3661962703 * value)
	{
		____skin_25 = value;
		Il2CppCodeGenWriteBarrier((&____skin_25), value);
	}

	inline static int32_t get_offset_of__flashing_27() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ____flashing_27)); }
	inline bool get__flashing_27() const { return ____flashing_27; }
	inline bool* get_address_of__flashing_27() { return &____flashing_27; }
	inline void set__flashing_27(bool value)
	{
		____flashing_27 = value;
	}

	inline static int32_t get_offset_of_typeZombInMas_28() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___typeZombInMas_28)); }
	inline int32_t get_typeZombInMas_28() const { return ___typeZombInMas_28; }
	inline int32_t* get_address_of_typeZombInMas_28() { return &___typeZombInMas_28; }
	inline void set_typeZombInMas_28(int32_t value)
	{
		___typeZombInMas_28 = value;
	}

	inline static int32_t get_offset_of_timeToUpdateTarget_29() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___timeToUpdateTarget_29)); }
	inline float get_timeToUpdateTarget_29() const { return ___timeToUpdateTarget_29; }
	inline float* get_address_of_timeToUpdateTarget_29() { return &___timeToUpdateTarget_29; }
	inline void set_timeToUpdateTarget_29(float value)
	{
		___timeToUpdateTarget_29 = value;
	}

	inline static int32_t get_offset_of_timeToUpdateNavMesh_30() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___timeToUpdateNavMesh_30)); }
	inline float get_timeToUpdateNavMesh_30() const { return ___timeToUpdateNavMesh_30; }
	inline float* get_address_of_timeToUpdateNavMesh_30() { return &___timeToUpdateNavMesh_30; }
	inline void set_timeToUpdateNavMesh_30(float value)
	{
		___timeToUpdateNavMesh_30 = value;
	}

	inline static int32_t get_offset_of_tekAnim_31() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660, ___tekAnim_31)); }
	inline int32_t get_tekAnim_31() const { return ___tekAnim_31; }
	inline int32_t* get_address_of_tekAnim_31() { return &___tekAnim_31; }
	inline void set_tekAnim_31(int32_t value)
	{
		___tekAnim_31 = value;
	}
};

struct ZombiUpravlenie_t207883660_StaticFields
{
public:
	// SkinsManagerPixlGun ZombiUpravlenie::_skinsManager
	SkinsManagerPixlGun_t2582742119 * ____skinsManager_26;

public:
	inline static int32_t get_offset_of__skinsManager_26() { return static_cast<int32_t>(offsetof(ZombiUpravlenie_t207883660_StaticFields, ____skinsManager_26)); }
	inline SkinsManagerPixlGun_t2582742119 * get__skinsManager_26() const { return ____skinsManager_26; }
	inline SkinsManagerPixlGun_t2582742119 ** get_address_of__skinsManager_26() { return &____skinsManager_26; }
	inline void set__skinsManager_26(SkinsManagerPixlGun_t2582742119 * value)
	{
		____skinsManager_26 = value;
		Il2CppCodeGenWriteBarrier((&____skinsManager_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIUPRAVLENIE_T207883660_H
#ifndef ROTATOR_T2834280094_H
#define ROTATOR_T2834280094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZeichenKraftwerk.Rotator
struct  Rotator_t2834280094  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 ZeichenKraftwerk.Rotator::eulersPerSecond
	Vector3_t3722313464  ___eulersPerSecond_2;
	// UnityEngine.Transform ZeichenKraftwerk.Rotator::myTransform
	Transform_t3600365921 * ___myTransform_3;

public:
	inline static int32_t get_offset_of_eulersPerSecond_2() { return static_cast<int32_t>(offsetof(Rotator_t2834280094, ___eulersPerSecond_2)); }
	inline Vector3_t3722313464  get_eulersPerSecond_2() const { return ___eulersPerSecond_2; }
	inline Vector3_t3722313464 * get_address_of_eulersPerSecond_2() { return &___eulersPerSecond_2; }
	inline void set_eulersPerSecond_2(Vector3_t3722313464  value)
	{
		___eulersPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_myTransform_3() { return static_cast<int32_t>(offsetof(Rotator_t2834280094, ___myTransform_3)); }
	inline Transform_t3600365921 * get_myTransform_3() const { return ___myTransform_3; }
	inline Transform_t3600365921 ** get_address_of_myTransform_3() { return &___myTransform_3; }
	inline void set_myTransform_3(Transform_t3600365921 * value)
	{
		___myTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&___myTransform_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATOR_T2834280094_H
#ifndef SKINSMANAGERPIXLGUN_T2582742119_H
#define SKINSMANAGERPIXLGUN_T2582742119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinsManagerPixlGun
struct  SkinsManagerPixlGun_t2582742119  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Hashtable SkinsManagerPixlGun::skins
	Hashtable_t1853889766 * ___skins_2;

public:
	inline static int32_t get_offset_of_skins_2() { return static_cast<int32_t>(offsetof(SkinsManagerPixlGun_t2582742119, ___skins_2)); }
	inline Hashtable_t1853889766 * get_skins_2() const { return ___skins_2; }
	inline Hashtable_t1853889766 ** get_address_of_skins_2() { return &___skins_2; }
	inline void set_skins_2(Hashtable_t1853889766 * value)
	{
		___skins_2 = value;
		Il2CppCodeGenWriteBarrier((&___skins_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINSMANAGERPIXLGUN_T2582742119_H
#ifndef WEBVIEWOBJECT_T110525398_H
#define WEBVIEWOBJECT_T110525398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebViewObject
struct  WebViewObject_t110525398  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`1<System.String> WebViewObject::callback
	Action_1_t2019918284 * ___callback_2;
	// UnityEngine.AndroidJavaObject WebViewObject::webView
	AndroidJavaObject_t4131667876 * ___webView_3;
	// UnityEngine.Vector2 WebViewObject::offset
	Vector2_t2156229523  ___offset_4;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(WebViewObject_t110525398, ___callback_2)); }
	inline Action_1_t2019918284 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t2019918284 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t2019918284 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_webView_3() { return static_cast<int32_t>(offsetof(WebViewObject_t110525398, ___webView_3)); }
	inline AndroidJavaObject_t4131667876 * get_webView_3() const { return ___webView_3; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_webView_3() { return &___webView_3; }
	inline void set_webView_3(AndroidJavaObject_t4131667876 * value)
	{
		___webView_3 = value;
		Il2CppCodeGenWriteBarrier((&___webView_3), value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(WebViewObject_t110525398, ___offset_4)); }
	inline Vector2_t2156229523  get_offset_4() const { return ___offset_4; }
	inline Vector2_t2156229523 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector2_t2156229523  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBVIEWOBJECT_T110525398_H
#ifndef SPAWNMONSTER_T4219141508_H
#define SPAWNMONSTER_T4219141508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnMonster
struct  SpawnMonster_t4219141508  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SpawnMonster::shouldMove
	bool ___shouldMove_2;
	// System.Boolean SpawnMonster::isCycle
	bool ___isCycle_3;
	// UnityEngine.GameObject[] SpawnMonster::_targetCyclePoints
	GameObjectU5BU5D_t3328599146* ____targetCyclePoints_4;
	// System.Int32 SpawnMonster::_targetIndex
	int32_t ____targetIndex_5;
	// System.Single SpawnMonster::_minDist
	float ____minDist_6;
	// UnityEngine.Vector2 SpawnMonster::_spawnPoint
	Vector2_t2156229523  ____spawnPoint_7;
	// System.Single SpawnMonster::_lastTimeGo
	float ____lastTimeGo_8;
	// System.Single SpawnMonster::_timeForIdle
	float ____timeForIdle_9;
	// UnityEngine.Vector3 SpawnMonster::_targetPoint
	Vector3_t3722313464  ____targetPoint_10;
	// UnityEngine.Rect SpawnMonster::_moveBounds
	Rect_t2360479859  ____moveBounds_11;
	// System.Single SpawnMonster::halbLength
	float ___halbLength_12;
	// System.Single SpawnMonster::_dst
	float ____dst_13;
	// UnityEngine.GameObject SpawnMonster::_modelChild
	GameObject_t1113636619 * ____modelChild_14;
	// Sounds SpawnMonster::_soundClips
	Sounds_t3004079410 * ____soundClips_15;
	// UnityEngine.AI.NavMeshAgent SpawnMonster::_nma
	NavMeshAgent_t1276799816 * ____nma_16;

public:
	inline static int32_t get_offset_of_shouldMove_2() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ___shouldMove_2)); }
	inline bool get_shouldMove_2() const { return ___shouldMove_2; }
	inline bool* get_address_of_shouldMove_2() { return &___shouldMove_2; }
	inline void set_shouldMove_2(bool value)
	{
		___shouldMove_2 = value;
	}

	inline static int32_t get_offset_of_isCycle_3() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ___isCycle_3)); }
	inline bool get_isCycle_3() const { return ___isCycle_3; }
	inline bool* get_address_of_isCycle_3() { return &___isCycle_3; }
	inline void set_isCycle_3(bool value)
	{
		___isCycle_3 = value;
	}

	inline static int32_t get_offset_of__targetCyclePoints_4() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____targetCyclePoints_4)); }
	inline GameObjectU5BU5D_t3328599146* get__targetCyclePoints_4() const { return ____targetCyclePoints_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__targetCyclePoints_4() { return &____targetCyclePoints_4; }
	inline void set__targetCyclePoints_4(GameObjectU5BU5D_t3328599146* value)
	{
		____targetCyclePoints_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetCyclePoints_4), value);
	}

	inline static int32_t get_offset_of__targetIndex_5() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____targetIndex_5)); }
	inline int32_t get__targetIndex_5() const { return ____targetIndex_5; }
	inline int32_t* get_address_of__targetIndex_5() { return &____targetIndex_5; }
	inline void set__targetIndex_5(int32_t value)
	{
		____targetIndex_5 = value;
	}

	inline static int32_t get_offset_of__minDist_6() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____minDist_6)); }
	inline float get__minDist_6() const { return ____minDist_6; }
	inline float* get_address_of__minDist_6() { return &____minDist_6; }
	inline void set__minDist_6(float value)
	{
		____minDist_6 = value;
	}

	inline static int32_t get_offset_of__spawnPoint_7() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____spawnPoint_7)); }
	inline Vector2_t2156229523  get__spawnPoint_7() const { return ____spawnPoint_7; }
	inline Vector2_t2156229523 * get_address_of__spawnPoint_7() { return &____spawnPoint_7; }
	inline void set__spawnPoint_7(Vector2_t2156229523  value)
	{
		____spawnPoint_7 = value;
	}

	inline static int32_t get_offset_of__lastTimeGo_8() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____lastTimeGo_8)); }
	inline float get__lastTimeGo_8() const { return ____lastTimeGo_8; }
	inline float* get_address_of__lastTimeGo_8() { return &____lastTimeGo_8; }
	inline void set__lastTimeGo_8(float value)
	{
		____lastTimeGo_8 = value;
	}

	inline static int32_t get_offset_of__timeForIdle_9() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____timeForIdle_9)); }
	inline float get__timeForIdle_9() const { return ____timeForIdle_9; }
	inline float* get_address_of__timeForIdle_9() { return &____timeForIdle_9; }
	inline void set__timeForIdle_9(float value)
	{
		____timeForIdle_9 = value;
	}

	inline static int32_t get_offset_of__targetPoint_10() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____targetPoint_10)); }
	inline Vector3_t3722313464  get__targetPoint_10() const { return ____targetPoint_10; }
	inline Vector3_t3722313464 * get_address_of__targetPoint_10() { return &____targetPoint_10; }
	inline void set__targetPoint_10(Vector3_t3722313464  value)
	{
		____targetPoint_10 = value;
	}

	inline static int32_t get_offset_of__moveBounds_11() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____moveBounds_11)); }
	inline Rect_t2360479859  get__moveBounds_11() const { return ____moveBounds_11; }
	inline Rect_t2360479859 * get_address_of__moveBounds_11() { return &____moveBounds_11; }
	inline void set__moveBounds_11(Rect_t2360479859  value)
	{
		____moveBounds_11 = value;
	}

	inline static int32_t get_offset_of_halbLength_12() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ___halbLength_12)); }
	inline float get_halbLength_12() const { return ___halbLength_12; }
	inline float* get_address_of_halbLength_12() { return &___halbLength_12; }
	inline void set_halbLength_12(float value)
	{
		___halbLength_12 = value;
	}

	inline static int32_t get_offset_of__dst_13() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____dst_13)); }
	inline float get__dst_13() const { return ____dst_13; }
	inline float* get_address_of__dst_13() { return &____dst_13; }
	inline void set__dst_13(float value)
	{
		____dst_13 = value;
	}

	inline static int32_t get_offset_of__modelChild_14() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____modelChild_14)); }
	inline GameObject_t1113636619 * get__modelChild_14() const { return ____modelChild_14; }
	inline GameObject_t1113636619 ** get_address_of__modelChild_14() { return &____modelChild_14; }
	inline void set__modelChild_14(GameObject_t1113636619 * value)
	{
		____modelChild_14 = value;
		Il2CppCodeGenWriteBarrier((&____modelChild_14), value);
	}

	inline static int32_t get_offset_of__soundClips_15() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____soundClips_15)); }
	inline Sounds_t3004079410 * get__soundClips_15() const { return ____soundClips_15; }
	inline Sounds_t3004079410 ** get_address_of__soundClips_15() { return &____soundClips_15; }
	inline void set__soundClips_15(Sounds_t3004079410 * value)
	{
		____soundClips_15 = value;
		Il2CppCodeGenWriteBarrier((&____soundClips_15), value);
	}

	inline static int32_t get_offset_of__nma_16() { return static_cast<int32_t>(offsetof(SpawnMonster_t4219141508, ____nma_16)); }
	inline NavMeshAgent_t1276799816 * get__nma_16() const { return ____nma_16; }
	inline NavMeshAgent_t1276799816 ** get_address_of__nma_16() { return &____nma_16; }
	inline void set__nma_16(NavMeshAgent_t1276799816 * value)
	{
		____nma_16 = value;
		Il2CppCodeGenWriteBarrier((&____nma_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNMONSTER_T4219141508_H
#ifndef SOUNDS_T3004079410_H
#define SOUNDS_T3004079410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sounds
struct  Sounds_t3004079410  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip Sounds::hurt
	AudioClip_t3680889665 * ___hurt_2;
	// UnityEngine.AudioClip Sounds::voice
	AudioClip_t3680889665 * ___voice_3;
	// UnityEngine.AudioClip Sounds::bite
	AudioClip_t3680889665 * ___bite_4;
	// UnityEngine.AudioClip Sounds::death
	AudioClip_t3680889665 * ___death_5;
	// System.Single Sounds::notAttackingSpeed
	float ___notAttackingSpeed_6;
	// System.Single Sounds::attackingSpeed
	float ___attackingSpeed_7;
	// System.Single Sounds::health
	float ___health_8;
	// System.Single Sounds::attackDistance
	float ___attackDistance_9;
	// System.Single Sounds::timeToHit
	float ___timeToHit_10;
	// System.Single Sounds::detectRadius
	float ___detectRadius_11;
	// System.Int32 Sounds::damagePerHit
	int32_t ___damagePerHit_12;
	// System.Int32 Sounds::scorePerKill
	int32_t ___scorePerKill_13;
	// System.Single[] Sounds::attackingSpeedRandomRange
	SingleU5BU5D_t1444911251* ___attackingSpeedRandomRange_14;

public:
	inline static int32_t get_offset_of_hurt_2() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___hurt_2)); }
	inline AudioClip_t3680889665 * get_hurt_2() const { return ___hurt_2; }
	inline AudioClip_t3680889665 ** get_address_of_hurt_2() { return &___hurt_2; }
	inline void set_hurt_2(AudioClip_t3680889665 * value)
	{
		___hurt_2 = value;
		Il2CppCodeGenWriteBarrier((&___hurt_2), value);
	}

	inline static int32_t get_offset_of_voice_3() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___voice_3)); }
	inline AudioClip_t3680889665 * get_voice_3() const { return ___voice_3; }
	inline AudioClip_t3680889665 ** get_address_of_voice_3() { return &___voice_3; }
	inline void set_voice_3(AudioClip_t3680889665 * value)
	{
		___voice_3 = value;
		Il2CppCodeGenWriteBarrier((&___voice_3), value);
	}

	inline static int32_t get_offset_of_bite_4() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___bite_4)); }
	inline AudioClip_t3680889665 * get_bite_4() const { return ___bite_4; }
	inline AudioClip_t3680889665 ** get_address_of_bite_4() { return &___bite_4; }
	inline void set_bite_4(AudioClip_t3680889665 * value)
	{
		___bite_4 = value;
		Il2CppCodeGenWriteBarrier((&___bite_4), value);
	}

	inline static int32_t get_offset_of_death_5() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___death_5)); }
	inline AudioClip_t3680889665 * get_death_5() const { return ___death_5; }
	inline AudioClip_t3680889665 ** get_address_of_death_5() { return &___death_5; }
	inline void set_death_5(AudioClip_t3680889665 * value)
	{
		___death_5 = value;
		Il2CppCodeGenWriteBarrier((&___death_5), value);
	}

	inline static int32_t get_offset_of_notAttackingSpeed_6() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___notAttackingSpeed_6)); }
	inline float get_notAttackingSpeed_6() const { return ___notAttackingSpeed_6; }
	inline float* get_address_of_notAttackingSpeed_6() { return &___notAttackingSpeed_6; }
	inline void set_notAttackingSpeed_6(float value)
	{
		___notAttackingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_attackingSpeed_7() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___attackingSpeed_7)); }
	inline float get_attackingSpeed_7() const { return ___attackingSpeed_7; }
	inline float* get_address_of_attackingSpeed_7() { return &___attackingSpeed_7; }
	inline void set_attackingSpeed_7(float value)
	{
		___attackingSpeed_7 = value;
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___health_8)); }
	inline float get_health_8() const { return ___health_8; }
	inline float* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(float value)
	{
		___health_8 = value;
	}

	inline static int32_t get_offset_of_attackDistance_9() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___attackDistance_9)); }
	inline float get_attackDistance_9() const { return ___attackDistance_9; }
	inline float* get_address_of_attackDistance_9() { return &___attackDistance_9; }
	inline void set_attackDistance_9(float value)
	{
		___attackDistance_9 = value;
	}

	inline static int32_t get_offset_of_timeToHit_10() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___timeToHit_10)); }
	inline float get_timeToHit_10() const { return ___timeToHit_10; }
	inline float* get_address_of_timeToHit_10() { return &___timeToHit_10; }
	inline void set_timeToHit_10(float value)
	{
		___timeToHit_10 = value;
	}

	inline static int32_t get_offset_of_detectRadius_11() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___detectRadius_11)); }
	inline float get_detectRadius_11() const { return ___detectRadius_11; }
	inline float* get_address_of_detectRadius_11() { return &___detectRadius_11; }
	inline void set_detectRadius_11(float value)
	{
		___detectRadius_11 = value;
	}

	inline static int32_t get_offset_of_damagePerHit_12() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___damagePerHit_12)); }
	inline int32_t get_damagePerHit_12() const { return ___damagePerHit_12; }
	inline int32_t* get_address_of_damagePerHit_12() { return &___damagePerHit_12; }
	inline void set_damagePerHit_12(int32_t value)
	{
		___damagePerHit_12 = value;
	}

	inline static int32_t get_offset_of_scorePerKill_13() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___scorePerKill_13)); }
	inline int32_t get_scorePerKill_13() const { return ___scorePerKill_13; }
	inline int32_t* get_address_of_scorePerKill_13() { return &___scorePerKill_13; }
	inline void set_scorePerKill_13(int32_t value)
	{
		___scorePerKill_13 = value;
	}

	inline static int32_t get_offset_of_attackingSpeedRandomRange_14() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___attackingSpeedRandomRange_14)); }
	inline SingleU5BU5D_t1444911251* get_attackingSpeedRandomRange_14() const { return ___attackingSpeedRandomRange_14; }
	inline SingleU5BU5D_t1444911251** get_address_of_attackingSpeedRandomRange_14() { return &___attackingSpeedRandomRange_14; }
	inline void set_attackingSpeedRandomRange_14(SingleU5BU5D_t1444911251* value)
	{
		___attackingSpeedRandomRange_14 = value;
		Il2CppCodeGenWriteBarrier((&___attackingSpeedRandomRange_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDS_T3004079410_H
#ifndef ZOMBIMANAGERSYNCH_T926835508_H
#define ZOMBIMANAGERSYNCH_T926835508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiManagerSynch
struct  ZombiManagerSynch_t926835508  : public MonoBehaviour_t3962482529
{
public:
	// ThirdPersonCamera ZombiManagerSynch::cameraScript
	ThirdPersonCamera_t2998681409 * ___cameraScript_2;
	// ThirdPersonController ZombiManagerSynch::controllerScript
	ThirdPersonController_t2544474708 * ___controllerScript_3;
	// UnityEngine.Vector3 ZombiManagerSynch::correctPlayerPos
	Vector3_t3722313464  ___correctPlayerPos_4;
	// UnityEngine.Quaternion ZombiManagerSynch::correctPlayerRot
	Quaternion_t2301928331  ___correctPlayerRot_5;

public:
	inline static int32_t get_offset_of_cameraScript_2() { return static_cast<int32_t>(offsetof(ZombiManagerSynch_t926835508, ___cameraScript_2)); }
	inline ThirdPersonCamera_t2998681409 * get_cameraScript_2() const { return ___cameraScript_2; }
	inline ThirdPersonCamera_t2998681409 ** get_address_of_cameraScript_2() { return &___cameraScript_2; }
	inline void set_cameraScript_2(ThirdPersonCamera_t2998681409 * value)
	{
		___cameraScript_2 = value;
		Il2CppCodeGenWriteBarrier((&___cameraScript_2), value);
	}

	inline static int32_t get_offset_of_controllerScript_3() { return static_cast<int32_t>(offsetof(ZombiManagerSynch_t926835508, ___controllerScript_3)); }
	inline ThirdPersonController_t2544474708 * get_controllerScript_3() const { return ___controllerScript_3; }
	inline ThirdPersonController_t2544474708 ** get_address_of_controllerScript_3() { return &___controllerScript_3; }
	inline void set_controllerScript_3(ThirdPersonController_t2544474708 * value)
	{
		___controllerScript_3 = value;
		Il2CppCodeGenWriteBarrier((&___controllerScript_3), value);
	}

	inline static int32_t get_offset_of_correctPlayerPos_4() { return static_cast<int32_t>(offsetof(ZombiManagerSynch_t926835508, ___correctPlayerPos_4)); }
	inline Vector3_t3722313464  get_correctPlayerPos_4() const { return ___correctPlayerPos_4; }
	inline Vector3_t3722313464 * get_address_of_correctPlayerPos_4() { return &___correctPlayerPos_4; }
	inline void set_correctPlayerPos_4(Vector3_t3722313464  value)
	{
		___correctPlayerPos_4 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_5() { return static_cast<int32_t>(offsetof(ZombiManagerSynch_t926835508, ___correctPlayerRot_5)); }
	inline Quaternion_t2301928331  get_correctPlayerRot_5() const { return ___correctPlayerRot_5; }
	inline Quaternion_t2301928331 * get_address_of_correctPlayerRot_5() { return &___correctPlayerRot_5; }
	inline void set_correctPlayerRot_5(Quaternion_t2301928331  value)
	{
		___correctPlayerRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIMANAGERSYNCH_T926835508_H
#ifndef ZOMBIECREATOR_T3776728246_H
#define ZOMBIECREATOR_T3776728246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieCreator
struct  ZombieCreator_t3776728246  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] ZombieCreator::_teleports
	GameObjectU5BU5D_t3328599146* ____teleports_2;
	// System.Boolean ZombieCreator::bossShowm
	bool ___bossShowm_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ZombieCreator::zombiePrefabs
	List_1_t2585711361 * ___zombiePrefabs_4;
	// System.Boolean ZombieCreator::_isMultiplayer
	bool ____isMultiplayer_5;
	// System.Int32 ZombieCreator::_numOfLiveZombies
	int32_t ____numOfLiveZombies_6;
	// System.Int32 ZombieCreator::_numOfDeadZombies
	int32_t ____numOfDeadZombies_7;
	// System.Int32 ZombieCreator::_numOfDeadZombsSinceLastFast
	int32_t ____numOfDeadZombsSinceLastFast_8;
	// System.Single ZombieCreator::curInterval
	float ___curInterval_9;
	// UnityEngine.GameObject[] ZombieCreator::_enemyCreationZones
	GameObjectU5BU5D_t3328599146* ____enemyCreationZones_10;
	// System.Collections.Generic.List`1<System.String[]> ZombieCreator::_enemies
	List_1_t2753864082 * ____enemies_11;

public:
	inline static int32_t get_offset_of__teleports_2() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____teleports_2)); }
	inline GameObjectU5BU5D_t3328599146* get__teleports_2() const { return ____teleports_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__teleports_2() { return &____teleports_2; }
	inline void set__teleports_2(GameObjectU5BU5D_t3328599146* value)
	{
		____teleports_2 = value;
		Il2CppCodeGenWriteBarrier((&____teleports_2), value);
	}

	inline static int32_t get_offset_of_bossShowm_3() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ___bossShowm_3)); }
	inline bool get_bossShowm_3() const { return ___bossShowm_3; }
	inline bool* get_address_of_bossShowm_3() { return &___bossShowm_3; }
	inline void set_bossShowm_3(bool value)
	{
		___bossShowm_3 = value;
	}

	inline static int32_t get_offset_of_zombiePrefabs_4() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ___zombiePrefabs_4)); }
	inline List_1_t2585711361 * get_zombiePrefabs_4() const { return ___zombiePrefabs_4; }
	inline List_1_t2585711361 ** get_address_of_zombiePrefabs_4() { return &___zombiePrefabs_4; }
	inline void set_zombiePrefabs_4(List_1_t2585711361 * value)
	{
		___zombiePrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((&___zombiePrefabs_4), value);
	}

	inline static int32_t get_offset_of__isMultiplayer_5() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____isMultiplayer_5)); }
	inline bool get__isMultiplayer_5() const { return ____isMultiplayer_5; }
	inline bool* get_address_of__isMultiplayer_5() { return &____isMultiplayer_5; }
	inline void set__isMultiplayer_5(bool value)
	{
		____isMultiplayer_5 = value;
	}

	inline static int32_t get_offset_of__numOfLiveZombies_6() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____numOfLiveZombies_6)); }
	inline int32_t get__numOfLiveZombies_6() const { return ____numOfLiveZombies_6; }
	inline int32_t* get_address_of__numOfLiveZombies_6() { return &____numOfLiveZombies_6; }
	inline void set__numOfLiveZombies_6(int32_t value)
	{
		____numOfLiveZombies_6 = value;
	}

	inline static int32_t get_offset_of__numOfDeadZombies_7() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____numOfDeadZombies_7)); }
	inline int32_t get__numOfDeadZombies_7() const { return ____numOfDeadZombies_7; }
	inline int32_t* get_address_of__numOfDeadZombies_7() { return &____numOfDeadZombies_7; }
	inline void set__numOfDeadZombies_7(int32_t value)
	{
		____numOfDeadZombies_7 = value;
	}

	inline static int32_t get_offset_of__numOfDeadZombsSinceLastFast_8() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____numOfDeadZombsSinceLastFast_8)); }
	inline int32_t get__numOfDeadZombsSinceLastFast_8() const { return ____numOfDeadZombsSinceLastFast_8; }
	inline int32_t* get_address_of__numOfDeadZombsSinceLastFast_8() { return &____numOfDeadZombsSinceLastFast_8; }
	inline void set__numOfDeadZombsSinceLastFast_8(int32_t value)
	{
		____numOfDeadZombsSinceLastFast_8 = value;
	}

	inline static int32_t get_offset_of_curInterval_9() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ___curInterval_9)); }
	inline float get_curInterval_9() const { return ___curInterval_9; }
	inline float* get_address_of_curInterval_9() { return &___curInterval_9; }
	inline void set_curInterval_9(float value)
	{
		___curInterval_9 = value;
	}

	inline static int32_t get_offset_of__enemyCreationZones_10() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____enemyCreationZones_10)); }
	inline GameObjectU5BU5D_t3328599146* get__enemyCreationZones_10() const { return ____enemyCreationZones_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__enemyCreationZones_10() { return &____enemyCreationZones_10; }
	inline void set__enemyCreationZones_10(GameObjectU5BU5D_t3328599146* value)
	{
		____enemyCreationZones_10 = value;
		Il2CppCodeGenWriteBarrier((&____enemyCreationZones_10), value);
	}

	inline static int32_t get_offset_of__enemies_11() { return static_cast<int32_t>(offsetof(ZombieCreator_t3776728246, ____enemies_11)); }
	inline List_1_t2753864082 * get__enemies_11() const { return ____enemies_11; }
	inline List_1_t2753864082 ** get_address_of__enemies_11() { return &____enemies_11; }
	inline void set__enemies_11(List_1_t2753864082 * value)
	{
		____enemies_11 = value;
		Il2CppCodeGenWriteBarrier((&____enemies_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIECREATOR_T3776728246_H
#ifndef ZOMBISYNCHPHOTON_T1457927756_H
#define ZOMBISYNCHPHOTON_T1457927756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombiSynchPhoton
struct  ZombiSynchPhoton_t1457927756  : public MonoBehaviour_t3962482529
{
public:
	// ThirdPersonCamera ZombiSynchPhoton::cameraScript
	ThirdPersonCamera_t2998681409 * ___cameraScript_2;
	// ThirdPersonController ZombiSynchPhoton::controllerScript
	ThirdPersonController_t2544474708 * ___controllerScript_3;
	// PhotonView ZombiSynchPhoton::photonView
	PhotonView_t2207721820 * ___photonView_4;
	// UnityEngine.Vector3 ZombiSynchPhoton::correctPlayerPos
	Vector3_t3722313464  ___correctPlayerPos_5;
	// UnityEngine.Quaternion ZombiSynchPhoton::correctPlayerRot
	Quaternion_t2301928331  ___correctPlayerRot_6;

public:
	inline static int32_t get_offset_of_cameraScript_2() { return static_cast<int32_t>(offsetof(ZombiSynchPhoton_t1457927756, ___cameraScript_2)); }
	inline ThirdPersonCamera_t2998681409 * get_cameraScript_2() const { return ___cameraScript_2; }
	inline ThirdPersonCamera_t2998681409 ** get_address_of_cameraScript_2() { return &___cameraScript_2; }
	inline void set_cameraScript_2(ThirdPersonCamera_t2998681409 * value)
	{
		___cameraScript_2 = value;
		Il2CppCodeGenWriteBarrier((&___cameraScript_2), value);
	}

	inline static int32_t get_offset_of_controllerScript_3() { return static_cast<int32_t>(offsetof(ZombiSynchPhoton_t1457927756, ___controllerScript_3)); }
	inline ThirdPersonController_t2544474708 * get_controllerScript_3() const { return ___controllerScript_3; }
	inline ThirdPersonController_t2544474708 ** get_address_of_controllerScript_3() { return &___controllerScript_3; }
	inline void set_controllerScript_3(ThirdPersonController_t2544474708 * value)
	{
		___controllerScript_3 = value;
		Il2CppCodeGenWriteBarrier((&___controllerScript_3), value);
	}

	inline static int32_t get_offset_of_photonView_4() { return static_cast<int32_t>(offsetof(ZombiSynchPhoton_t1457927756, ___photonView_4)); }
	inline PhotonView_t2207721820 * get_photonView_4() const { return ___photonView_4; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_4() { return &___photonView_4; }
	inline void set_photonView_4(PhotonView_t2207721820 * value)
	{
		___photonView_4 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_4), value);
	}

	inline static int32_t get_offset_of_correctPlayerPos_5() { return static_cast<int32_t>(offsetof(ZombiSynchPhoton_t1457927756, ___correctPlayerPos_5)); }
	inline Vector3_t3722313464  get_correctPlayerPos_5() const { return ___correctPlayerPos_5; }
	inline Vector3_t3722313464 * get_address_of_correctPlayerPos_5() { return &___correctPlayerPos_5; }
	inline void set_correctPlayerPos_5(Vector3_t3722313464  value)
	{
		___correctPlayerPos_5 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_6() { return static_cast<int32_t>(offsetof(ZombiSynchPhoton_t1457927756, ___correctPlayerRot_6)); }
	inline Quaternion_t2301928331  get_correctPlayerRot_6() const { return ___correctPlayerRot_6; }
	inline Quaternion_t2301928331 * get_address_of_correctPlayerRot_6() { return &___correctPlayerRot_6; }
	inline void set_correctPlayerRot_6(Quaternion_t2301928331  value)
	{
		___correctPlayerRot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBISYNCHPHOTON_T1457927756_H
#ifndef ZOOMCAMERA_T1350885688_H
#define ZOOMCAMERA_T1350885688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZoomCamera
struct  ZoomCamera_t1350885688  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform ZoomCamera::origin
	Transform_t3600365921 * ___origin_2;
	// System.Single ZoomCamera::zoom
	float ___zoom_3;
	// System.Single ZoomCamera::zoomMin
	float ___zoomMin_4;
	// System.Single ZoomCamera::zoomMax
	float ___zoomMax_5;
	// System.Single ZoomCamera::seekTime
	float ___seekTime_6;
	// System.Boolean ZoomCamera::smoothZoomIn
	bool ___smoothZoomIn_7;
	// UnityEngine.Vector3 ZoomCamera::defaultLocalPosition
	Vector3_t3722313464  ___defaultLocalPosition_8;
	// UnityEngine.Transform ZoomCamera::thisTransform
	Transform_t3600365921 * ___thisTransform_9;
	// System.Single ZoomCamera::currentZoom
	float ___currentZoom_10;
	// System.Single ZoomCamera::targetZoom
	float ___targetZoom_11;
	// System.Single ZoomCamera::zoomVelocity
	float ___zoomVelocity_12;

public:
	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___origin_2)); }
	inline Transform_t3600365921 * get_origin_2() const { return ___origin_2; }
	inline Transform_t3600365921 ** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(Transform_t3600365921 * value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier((&___origin_2), value);
	}

	inline static int32_t get_offset_of_zoom_3() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___zoom_3)); }
	inline float get_zoom_3() const { return ___zoom_3; }
	inline float* get_address_of_zoom_3() { return &___zoom_3; }
	inline void set_zoom_3(float value)
	{
		___zoom_3 = value;
	}

	inline static int32_t get_offset_of_zoomMin_4() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___zoomMin_4)); }
	inline float get_zoomMin_4() const { return ___zoomMin_4; }
	inline float* get_address_of_zoomMin_4() { return &___zoomMin_4; }
	inline void set_zoomMin_4(float value)
	{
		___zoomMin_4 = value;
	}

	inline static int32_t get_offset_of_zoomMax_5() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___zoomMax_5)); }
	inline float get_zoomMax_5() const { return ___zoomMax_5; }
	inline float* get_address_of_zoomMax_5() { return &___zoomMax_5; }
	inline void set_zoomMax_5(float value)
	{
		___zoomMax_5 = value;
	}

	inline static int32_t get_offset_of_seekTime_6() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___seekTime_6)); }
	inline float get_seekTime_6() const { return ___seekTime_6; }
	inline float* get_address_of_seekTime_6() { return &___seekTime_6; }
	inline void set_seekTime_6(float value)
	{
		___seekTime_6 = value;
	}

	inline static int32_t get_offset_of_smoothZoomIn_7() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___smoothZoomIn_7)); }
	inline bool get_smoothZoomIn_7() const { return ___smoothZoomIn_7; }
	inline bool* get_address_of_smoothZoomIn_7() { return &___smoothZoomIn_7; }
	inline void set_smoothZoomIn_7(bool value)
	{
		___smoothZoomIn_7 = value;
	}

	inline static int32_t get_offset_of_defaultLocalPosition_8() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___defaultLocalPosition_8)); }
	inline Vector3_t3722313464  get_defaultLocalPosition_8() const { return ___defaultLocalPosition_8; }
	inline Vector3_t3722313464 * get_address_of_defaultLocalPosition_8() { return &___defaultLocalPosition_8; }
	inline void set_defaultLocalPosition_8(Vector3_t3722313464  value)
	{
		___defaultLocalPosition_8 = value;
	}

	inline static int32_t get_offset_of_thisTransform_9() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___thisTransform_9)); }
	inline Transform_t3600365921 * get_thisTransform_9() const { return ___thisTransform_9; }
	inline Transform_t3600365921 ** get_address_of_thisTransform_9() { return &___thisTransform_9; }
	inline void set_thisTransform_9(Transform_t3600365921 * value)
	{
		___thisTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___thisTransform_9), value);
	}

	inline static int32_t get_offset_of_currentZoom_10() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___currentZoom_10)); }
	inline float get_currentZoom_10() const { return ___currentZoom_10; }
	inline float* get_address_of_currentZoom_10() { return &___currentZoom_10; }
	inline void set_currentZoom_10(float value)
	{
		___currentZoom_10 = value;
	}

	inline static int32_t get_offset_of_targetZoom_11() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___targetZoom_11)); }
	inline float get_targetZoom_11() const { return ___targetZoom_11; }
	inline float* get_address_of_targetZoom_11() { return &___targetZoom_11; }
	inline void set_targetZoom_11(float value)
	{
		___targetZoom_11 = value;
	}

	inline static int32_t get_offset_of_zoomVelocity_12() { return static_cast<int32_t>(offsetof(ZoomCamera_t1350885688, ___zoomVelocity_12)); }
	inline float get_zoomVelocity_12() const { return ___zoomVelocity_12; }
	inline float* get_address_of_zoomVelocity_12() { return &___zoomVelocity_12; }
	inline void set_zoomVelocity_12(float value)
	{
		___zoomVelocity_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOOMCAMERA_T1350885688_H
#ifndef PHOTONVIEW_T2207721820_H
#define PHOTONVIEW_T2207721820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonView
struct  PhotonView_t2207721820  : public MonoBehaviour_t3225183318
{
public:
	// System.Int32 PhotonView::subId
	int32_t ___subId_2;
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_3;
	// System.Int32 PhotonView::group
	int32_t ___group_4;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_5;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_6;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t2843939325* ___instantiationDataField_7;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t2843939325* ___lastOnSerializeDataSent_8;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t2843939325* ___lastOnSerializeDataReceived_9;
	// UnityEngine.Component PhotonView::observed
	Component_t1923634451 * ___observed_10;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_11;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_12;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_13;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_14;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_15;
	// System.Boolean PhotonView::destroyedByPhotonNetworkOrQuit
	bool ___destroyedByPhotonNetworkOrQuit_16;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_17;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_18;

public:
	inline static int32_t get_offset_of_subId_2() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___subId_2)); }
	inline int32_t get_subId_2() const { return ___subId_2; }
	inline int32_t* get_address_of_subId_2() { return &___subId_2; }
	inline void set_subId_2(int32_t value)
	{
		___subId_2 = value;
	}

	inline static int32_t get_offset_of_ownerId_3() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___ownerId_3)); }
	inline int32_t get_ownerId_3() const { return ___ownerId_3; }
	inline int32_t* get_address_of_ownerId_3() { return &___ownerId_3; }
	inline void set_ownerId_3(int32_t value)
	{
		___ownerId_3 = value;
	}

	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___group_4)); }
	inline int32_t get_group_4() const { return ___group_4; }
	inline int32_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(int32_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_5() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___mixedModeIsReliable_5)); }
	inline bool get_mixedModeIsReliable_5() const { return ___mixedModeIsReliable_5; }
	inline bool* get_address_of_mixedModeIsReliable_5() { return &___mixedModeIsReliable_5; }
	inline void set_mixedModeIsReliable_5(bool value)
	{
		___mixedModeIsReliable_5 = value;
	}

	inline static int32_t get_offset_of_prefixBackup_6() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___prefixBackup_6)); }
	inline int32_t get_prefixBackup_6() const { return ___prefixBackup_6; }
	inline int32_t* get_address_of_prefixBackup_6() { return &___prefixBackup_6; }
	inline void set_prefixBackup_6(int32_t value)
	{
		___prefixBackup_6 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_7() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___instantiationDataField_7)); }
	inline ObjectU5BU5D_t2843939325* get_instantiationDataField_7() const { return ___instantiationDataField_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_instantiationDataField_7() { return &___instantiationDataField_7; }
	inline void set_instantiationDataField_7(ObjectU5BU5D_t2843939325* value)
	{
		___instantiationDataField_7 = value;
		Il2CppCodeGenWriteBarrier((&___instantiationDataField_7), value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_8() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___lastOnSerializeDataSent_8)); }
	inline ObjectU5BU5D_t2843939325* get_lastOnSerializeDataSent_8() const { return ___lastOnSerializeDataSent_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_lastOnSerializeDataSent_8() { return &___lastOnSerializeDataSent_8; }
	inline void set_lastOnSerializeDataSent_8(ObjectU5BU5D_t2843939325* value)
	{
		___lastOnSerializeDataSent_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastOnSerializeDataSent_8), value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_t2843939325* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_t2843939325** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_t2843939325* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((&___lastOnSerializeDataReceived_9), value);
	}

	inline static int32_t get_offset_of_observed_10() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___observed_10)); }
	inline Component_t1923634451 * get_observed_10() const { return ___observed_10; }
	inline Component_t1923634451 ** get_address_of_observed_10() { return &___observed_10; }
	inline void set_observed_10(Component_t1923634451 * value)
	{
		___observed_10 = value;
		Il2CppCodeGenWriteBarrier((&___observed_10), value);
	}

	inline static int32_t get_offset_of_synchronization_11() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___synchronization_11)); }
	inline int32_t get_synchronization_11() const { return ___synchronization_11; }
	inline int32_t* get_address_of_synchronization_11() { return &___synchronization_11; }
	inline void set_synchronization_11(int32_t value)
	{
		___synchronization_11 = value;
	}

	inline static int32_t get_offset_of_onSerializeTransformOption_12() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___onSerializeTransformOption_12)); }
	inline int32_t get_onSerializeTransformOption_12() const { return ___onSerializeTransformOption_12; }
	inline int32_t* get_address_of_onSerializeTransformOption_12() { return &___onSerializeTransformOption_12; }
	inline void set_onSerializeTransformOption_12(int32_t value)
	{
		___onSerializeTransformOption_12 = value;
	}

	inline static int32_t get_offset_of_onSerializeRigidBodyOption_13() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___onSerializeRigidBodyOption_13)); }
	inline int32_t get_onSerializeRigidBodyOption_13() const { return ___onSerializeRigidBodyOption_13; }
	inline int32_t* get_address_of_onSerializeRigidBodyOption_13() { return &___onSerializeRigidBodyOption_13; }
	inline void set_onSerializeRigidBodyOption_13(int32_t value)
	{
		___onSerializeRigidBodyOption_13 = value;
	}

	inline static int32_t get_offset_of_instantiationId_14() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___instantiationId_14)); }
	inline int32_t get_instantiationId_14() const { return ___instantiationId_14; }
	inline int32_t* get_address_of_instantiationId_14() { return &___instantiationId_14; }
	inline void set_instantiationId_14(int32_t value)
	{
		___instantiationId_14 = value;
	}

	inline static int32_t get_offset_of_didAwake_15() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___didAwake_15)); }
	inline bool get_didAwake_15() const { return ___didAwake_15; }
	inline bool* get_address_of_didAwake_15() { return &___didAwake_15; }
	inline void set_didAwake_15(bool value)
	{
		___didAwake_15 = value;
	}

	inline static int32_t get_offset_of_destroyedByPhotonNetworkOrQuit_16() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___destroyedByPhotonNetworkOrQuit_16)); }
	inline bool get_destroyedByPhotonNetworkOrQuit_16() const { return ___destroyedByPhotonNetworkOrQuit_16; }
	inline bool* get_address_of_destroyedByPhotonNetworkOrQuit_16() { return &___destroyedByPhotonNetworkOrQuit_16; }
	inline void set_destroyedByPhotonNetworkOrQuit_16(bool value)
	{
		___destroyedByPhotonNetworkOrQuit_16 = value;
	}

	inline static int32_t get_offset_of_OnSerializeMethodInfo_17() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___OnSerializeMethodInfo_17)); }
	inline MethodInfo_t * get_OnSerializeMethodInfo_17() const { return ___OnSerializeMethodInfo_17; }
	inline MethodInfo_t ** get_address_of_OnSerializeMethodInfo_17() { return &___OnSerializeMethodInfo_17; }
	inline void set_OnSerializeMethodInfo_17(MethodInfo_t * value)
	{
		___OnSerializeMethodInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnSerializeMethodInfo_17), value);
	}

	inline static int32_t get_offset_of_failedToFindOnSerialize_18() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___failedToFindOnSerialize_18)); }
	inline bool get_failedToFindOnSerialize_18() const { return ___failedToFindOnSerialize_18; }
	inline bool* get_address_of_failedToFindOnSerialize_18() { return &___failedToFindOnSerialize_18; }
	inline void set_failedToFindOnSerialize_18(bool value)
	{
		___failedToFindOnSerialize_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONVIEW_T2207721820_H
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
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m289627909_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<WeaponManager/infoClient>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1770779276_gshared (List_1_t2869380684 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m3944231312_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m93346280_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1363558904_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2263725670_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_PingPong_m2878066270 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(__this, method) ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m2452486895 (Material_t340375123 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Material_get_color_m3827673574 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_m2067513003 (Material_t340375123 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player_move_c>()
#define GameObject_GetComponent_TisPlayer_move_c_t367674069_m896625391(__this, method) ((  Player_move_c_t367674069 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_InverseTransformDirection_m3843238577 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void Player_move_c::AddWeapon(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_AddWeapon_m985391910 (Player_move_c_t367674069 * __this, GameObject_t1113636619 * ___weaponPrefab0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m3302800229(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.String WeaponManager::get_MultiplayerMeleeTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MultiplayerMeleeTag_m3765635439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get__initialWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get__initialWeaponName_m2841770456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_m16Tag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_m16Tag_m291637480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_EagleTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_EagleTag_m3685011897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_MagicBowTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MagicBowTag_m3080495106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_GoldenAxeTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenAxeTag_m923047896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_SPASTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SPASTag_m2206785740 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_GlockTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GlockTag_m3546785105 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_FAMASTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_FAMASTag_m476420310 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ChainsawTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ChainsawTag_m2479377328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ScytheTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ScytheTag_m2026640649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ShovelTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ShovelTag_m3668724671 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_HammerTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_HammerTag_m2524420269 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_Sword_2Tag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Sword_2Tag_m2523352659 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_StaffTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_StaffTag_m1158770884 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_Red_StoneTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Red_StoneTag_m2648559010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_LightSwordTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LightSwordTag_m747118550 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_BerettaTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_BerettaTag_m2966482996 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_MinigunTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MinigunTag_m2880631243 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_UziTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_UziTag_m675781882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m633427275(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Void WeaponSounds::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponSounds__ctor_m2694092377 (WeaponSounds_t105296586 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
#define Dictionary_2__ctor_m1104614235(__this, method) ((  void (*) (Dictionary_2_t1049633776 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WeaponManager/infoClient>::.ctor()
#define List_1__ctor_m1770779276(__this, method) ((  void (*) (List_1_t2869380684 *, const RuntimeMethod*))List_1__ctor_m1770779276_gshared)(__this, method)
// WeaponSounds WeaponManager::get_currentWeaponSounds()
extern "C" IL2CPP_METHOD_ATTR WeaponSounds_t105296586 * WeaponManager_get_currentWeaponSounds_m4289826546 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.String Defs::CAnim(UnityEngine.GameObject,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_CAnim_m3082801395 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___animator0, String_t* ___con1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::LoadAll(System.String)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* Resources_LoadAll_m2792647427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.String>(!!0[],!!0)
#define Array_IndexOf_TisString_t_m3727315756(__this /* static, unused */, p0, p1, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, StringU5BU5D_t1281789340*, String_t*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m3944231312_gshared)(__this /* static, unused */, p0, p1, method)
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m3797620966 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Weapon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Weapon__ctor_m3095181171 (Weapon_t4063826929 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<WeaponSounds>()
#define GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(__this, method) ((  WeaponSounds_t105296586 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String Defs::get_MinerWeaponSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_MinerWeaponSett_m4176423767 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_PickWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_PickWeaponName_m2507155128 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void WeaponManager::AddWeaponIfBought(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddWeaponIfBought_m1585898930 (WeaponManager_t1762453775 * __this, String_t* ___settName0, String_t* ___prefabName1, const RuntimeMethod* method);
// System.String Defs::get_SwordSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_SwordSett_m1707973847 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_SwordWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SwordWeaponName_m1884679502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_GoldenAxeSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_GoldenAxeSett_m1746611471 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_GoldenAxeWeaponnName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenAxeWeaponnName_m3989543615 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_SPASSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_SPASSett_m359545668 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_SpasWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SpasWeaponName_m2154833812 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_ChainsawS()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_ChainsawS_m1036568084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ChainsawWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ChainsawWN_m2959097056 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_GlockSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_GlockSett_m3116461980 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_GlockWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GlockWN_m326926806 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_ScytheSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_ScytheSN_m4095766121 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ScytheWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ScytheWN_m2686880199 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_ShovelSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_ShovelSN_m535558202 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_ShovelWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ShovelWN_m4277715065 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_Sword_2_SN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_Sword_2_SN_m295873404 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_Sword_2_WN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Sword_2_WN_m3042372647 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_HammerSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_HammerSN_m2902333949 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_HammerWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_HammerWN_m1436230627 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_LaserRifleSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_LaserRifleSN_m982086458 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_LaserRifleWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LaserRifleWN_m92723408 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_LightSwordSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_LightSwordSN_m4039712287 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_LightSwordWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LightSwordWN_m405515106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_BerettaSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_BerettaSN_m2326687211 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_BerettaWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_BerettaWN_m872803409 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_CombatRifleSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_CombatRifleSett_m3375071308 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_CombatRifleWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_CombatRifleWeaponName_m1295803920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_GoldenEagleSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_GoldenEagleSett_m2209051915 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_GoldenEagleWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenEagleWeaponName_m1120865988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_MagicBowSett()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_MagicBowSett_m2792069435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_MagicBowWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MagicBowWeaponName_m3487257396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_FAMASS()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_FAMASS_m399705988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_FAMASWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_FAMASWN_m419502995 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_StaffSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_StaffSN_m728487771 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_StaffWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_StaffWN_m1075261091 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_MaceSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_MaceSN_m366779797 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_MaceWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MaceWN_m1604268619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_CrossbowSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_CrossbowSN_m2733947154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_CrossbowWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_CrossbowWN_m1140501696 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String Defs::get_MinigunSN()
extern "C" IL2CPP_METHOD_ATTR String_t* Defs_get_MinigunSN_m1330859472 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String WeaponManager::get_MinigunWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MinigunWN_m3839728566 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.ArrayList WeaponManager::get_playerWeapons()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * WeaponManager_get_playerWeapons_m669423090 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void WeaponsComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponsComparer__ctor_m958703356 (WeaponsComparer_t4255210887 * __this, const RuntimeMethod* method);
// System.Int32 Storager::getInt(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Storager_getInt_m191561888 (RuntimeObject * __this /* static, unused */, String_t* ___key0, bool ___useICloud1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C" IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean WeaponManager::AddAmmo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool WeaponManager_AddAmmo_m778608817 (WeaponManager_t1762453775 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Int32 Defs::get_ScoreForSurplusAmmo()
extern "C" IL2CPP_METHOD_ATTR int32_t Defs_get_ScoreForSurplusAmmo_m1360565554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Object[] WeaponManager::get_weaponsInGame()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* WeaponManager_get_weaponsInGame_m3462245750 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Int32 WeaponSounds::get_MaxAmmoWithRespectToInApp()
extern "C" IL2CPP_METHOD_ATTR int32_t WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981 (WeaponSounds_t105296586 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(!0,!1)
#define Dictionary_2_Add_m1226049488(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1049633776 *, String_t*, Action_t1264377477 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePurchase>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2637699291(__this, p0, p1, method) ((  void (*) (Action_1_t2353251714 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void GoogleIABManager::add_purchaseSucceededEvent(System.Action`1<GooglePurchase>)
extern "C" IL2CPP_METHOD_ATTR void GoogleIABManager_add_purchaseSucceededEvent_m2797593167 (RuntimeObject * __this /* static, unused */, Action_1_t2353251714 * p0, const RuntimeMethod* method);
// UnityEngine.Object[] WeaponManager::GetWeaponPrefabs()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* WeaponManager_GetWeaponPrefabs_m971570581 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void WeaponManager::Reset()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_Reset_m1150209106 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveStaffPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveStaffPrefs_m2461362389 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetStaffPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetStaffPrefab_m3154531876 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Boolean WeaponManager::AddWeapon(UnityEngine.GameObject,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WeaponManager_AddWeapon_m4003918992 (WeaponManager_t1762453775 * __this, GameObject_t1113636619 * ___weaponPrefab0, int32_t* ___score1, const RuntimeMethod* method);
// System.Void Player_move_c::SaveLaserRiflePrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveLaserRiflePrefs_m265629767 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetLaserRiflePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetLaserRiflePrefab_m1890122545 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveMGoldenAxeInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveMGoldenAxeInPrefs_m368842993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetAxePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetAxePrefab_m1640247276 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveLightSwordInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveLightSwordInPrefs_m868619313 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetLightSwordPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetLightSwordPrefab_m3332159941 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveMaceInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveMaceInPrefs_m3447060552 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetMacePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMacePrefab_m2206130233 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveCrossbowInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveCrossbowInPrefs_m1189851882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetCrossbowPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetCrossbowPrefab_m2110084666 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveMinigunInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveMinigunInPrefs_m2135716533 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetMinigunPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMinigunPrefab_m2283339191 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveBerettaInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveBerettaInPrefs_m1940320266 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetBerettaPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetBerettaPrefab_m4277481885 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveSPASInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveSPASInPrefs_m937429908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetSPASPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSPASPrefab_m536042736 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveChainsawInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveChainsawInPrefs_m3742142703 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetChainsawPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetChainsawPrefab_m738668970 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveGlockInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveGlockInPrefs_m426799757 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetGlockPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetGlockPrefab_m1509057101 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveFAMASPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveFAMASPrefs_m3082056497 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetFAMASPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetFAMASPrefab_m769449454 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveScytheInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveScytheInPrefs_m447281372 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetScythePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetScythePrefab_m4069152087 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveShovelPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveShovelPrefs_m917652690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetShovelPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetShovelPrefab_m2835031729 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveSword_2_InPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveSword_2_InPrefs_m3525120328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetSword_2_Prefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSword_2_Prefab_m3587141929 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveHammerPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveHammerPrefs_m2123039118 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetHammerPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetHammerPrefab_m2557199588 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveMinerWeaponInPrefabs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveMinerWeaponInPrefabs_m1768795613 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetPickPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetPickPrefab_m1591361075 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveSwordInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveSwordInPrefs_m3395515906 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetSwordPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSwordPrefab_m1472854058 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveCombatRifleInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveCombatRifleInPrefs_m249698024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetCombatRiflePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetCombatRiflePrefab_m2496607767 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveGoldenEagleInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveGoldenEagleInPrefs_m3050790056 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetGoldenEaglePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetGoldenEaglePrefab_m2095640434 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void Player_move_c::SaveMagicBowInPrefs()
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_SaveMagicBowInPrefs_m1372128475 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject WeaponManager::GetMagicBowPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMagicBowPrefab_m250447049 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m789394797(__this, p0, method) ((  bool (*) (Dictionary_2_t1049633776 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Action>::get_Item(!0)
#define Dictionary_2_get_Item_m3836654965(__this, p0, method) ((  Action_t1264377477 * (*) (Dictionary_2_t1049633776 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.String GooglePurchase::get_productId()
extern "C" IL2CPP_METHOD_ATTR String_t* GooglePurchase_get_productId_m3495448764 (GooglePurchase_t2180784119 * __this, const RuntimeMethod* method);
// System.Void WeaponManager::AddMinerWeapon(System.String)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMinerWeapon_m2167009370 (WeaponManager_t1762453775 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void GoogleIABManager::remove_purchaseSucceededEvent(System.Action`1<GooglePurchase>)
extern "C" IL2CPP_METHOD_ATTR void GoogleIABManager_remove_purchaseSucceededEvent_m978184015 (RuntimeObject * __this /* static, unused */, Action_1_t2353251714 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
#define GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(__this, method) ((  Animation_t3648466861 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.String WeaponManager::myCAnim(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_myCAnim_m3806326573 (WeaponManager_t1762453775 * __this, String_t* ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m126566212 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m2177301990 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m27531216 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m4284770383 (int32_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<WebViewObject>()
#define GameObject_AddComponent_TisWebViewObject_t110525398_m2285099848(__this, method) ((  WebViewObject_t110525398 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m93346280_gshared)(__this, method)
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m4099869023(__this, p0, p1, method) ((  void (*) (Action_1_t2019918284 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void WebViewObject::Init(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void WebViewObject_Init_m4278364764 (WebViewObject_t110525398 * __this, Action_1_t2019918284 * p0, const RuntimeMethod* method);
// System.Void WebViewObject::LoadURL(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebViewObject_LoadURL_m84799980 (WebViewObject_t110525398 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void WebViewObject::SetVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WebViewObject_SetVisibility_m207219664 (WebViewObject_t110525398 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void WebViewObject::EvaluateJS(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebViewObject_EvaluateJS_m615691215 (WebViewObject_t110525398 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m463784026(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor()
#define List_1__ctor_m909264078(__this, method) ((  void (*) (List_1_t2753864082 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Int32 ZombieCreator::get_NumOfLiveZombies()
extern "C" IL2CPP_METHOD_ATTR int32_t ZombieCreator_get_NumOfLiveZombies_m951669513 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method);
// System.Void ZombieCreator::set_NumOfLiveZombies(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_set_NumOfLiveZombies_m587366575 (ZombieCreator_t3776728246 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 GlobalGameController::get_EnemiesToKill()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_EnemiesToKill_m946529693 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 GlobalGameController::get_currentLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_currentLevel_m1105921388 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m1363558904(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1363558904_gshared)(__this, p0, method)
// System.Void ZombieCreator::_createBoss()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator__createBoss_m3329339339 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String[]>::Add(!0)
#define List_1_Add_m3968569714(__this, p0, method) ((  void (*) (List_1_t2753864082 *, StringU5BU5D_t1281789340*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 GlobalGameController::get_previousLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_previousLevel_m1363325466 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String[]>::get_Item(System.Int32)
#define List_1_get_Item_m3286979944(__this, p0, method) ((  StringU5BU5D_t1281789340* (*) (List_1_t2753864082 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m4119991052(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 GlobalGameController::get_AllLevelsCompleted()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_AllLevelsCompleted_m723468905 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Collections.IEnumerator ZombieCreator::AddZombies()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombieCreator_AddZombies_m2537486331 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void ZombieCreator/<AddZombies>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAddZombiesU3Ec__Iterator0__ctor_m5804719 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
#define GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221(__this, method) ((  BoxCollider_t1640800422 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoxCollider_get_size_m1798011124 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
#define List_1_Contains_m2263725670(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Contains_m2263725670_gshared)(__this, p0, method)
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 ZombieCreator::_createPos(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ZombieCreator__createPos_m1145009354 (ZombieCreator_t3776728246 * __this, GameObject_t1113636619 * ___spawnZone0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Int32 GlobalGameController::get_ZombiesInWave()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_ZombiesInWave_m1550326451 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 GlobalGameController::get_SimultaneousEnemiesOnLevelConstraint()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalGameController_get_SimultaneousEnemiesOnLevelConstraint_m719220001 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 ZombieCreator::get_NumOfDeadZombies()
extern "C" IL2CPP_METHOD_ATTR int32_t ZombieCreator_get_NumOfDeadZombies_m3641787925 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m910824056(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C" IL2CPP_METHOD_ATTR PhotonView_t2207721820 * PhotonView_Get_m1953794030 (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___component0, const RuntimeMethod* method);
// System.Boolean PhotonView::get_isMine()
extern "C" IL2CPP_METHOD_ATTR bool PhotonView_get_isMine_m4153946987 (PhotonView_t2207721820 * __this, const RuntimeMethod* method);
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void PhotonView_RPC_m4037858114 (PhotonView_t2207721820 * __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t2843939325* ___parameters2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<NetworkStartTable>()
#define GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459(__this, method) ((  NetworkStartTable_t3389559616 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void ZombiManager::addZombi()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_addZombi_m2696549348 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<WeaponManager>()
#define GameObject_GetComponent_TisWeaponManager_t1762453775_m1321501039(__this, method) ((  WeaponManager_t1762453775 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void NetworkStartTable::win(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkStartTable_win_m405134720 (NetworkStartTable_t3389559616 * __this, String_t* ___winner0, const RuntimeMethod* method);
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotonNetwork_AllocateViewID_m2823368424 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ZombiUpravlenie>()
#define GameObject_GetComponent_TisZombiUpravlenie_t207883660_m132784980(__this, method) ((  ZombiUpravlenie_t207883660 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PhotonView>()
#define GameObject_GetComponent_TisPhotonView_t2207721820_m3241823210(__this, method) ((  PhotonView_t2207721820 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void PhotonView::set_viewID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PhotonView_set_viewID_m2597632237 (PhotonView_t2207721820 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean PhotonStream::get_isWriting()
extern "C" IL2CPP_METHOD_ATTR bool PhotonStream_get_isWriting_m2805645485 (PhotonStream_t1003850889 * __this, const RuntimeMethod* method);
// System.Void PhotonStream::SendNext(System.Object)
extern "C" IL2CPP_METHOD_ATTR void PhotonStream_SendNext_m3094139315 (PhotonStream_t1003850889 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Object PhotonStream::ReceiveNext()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PhotonStream_ReceiveNext_m3398442404 (PhotonStream_t1003850889 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Sounds>()
#define GameObject_GetComponent_TisSounds_t3004079410_m1008272002(__this, method) ((  Sounds_t3004079410 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Collections.IEnumerator ZombiUpravlenie::Flash()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombiUpravlenie_Flash_m741033771 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SkinsManagerPixlGun>()
#define GameObject_GetComponent_TisSkinsManagerPixlGun_t2582742119_m152784281(__this, method) ((  SkinsManagerPixlGun_t2582742119 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.String ZombiUpravlenie::SkinNameForObj(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ZombiUpravlenie_SkinNameForObj_m635002016 (RuntimeObject * __this /* static, unused */, String_t* ___objName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::SetTextureRecursivelyFrom(UnityEngine.GameObject,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, Texture_t3661962703 * ___txt1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" IL2CPP_METHOD_ATTR MaterialU5BU5D_t561872642* Renderer_get_materials_m2188790026 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Void ZombiUpravlenie/<Flash>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFlashU3Ec__Iterator0__ctor_m1681520674 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method);
// UnityEngine.Texture ZombiUpravlenie::SetSkinForObj(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * ZombiUpravlenie_SetSkinForObj_m3191347847 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, method) ((  NavMeshAgent_t1276799816 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<ZombiManager>()
#define GameObject_GetComponent_TisZombiManager_t1666808103_m2321611112(__this, method) ((  ZombiManager_t1666808103 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m289627909_gshared)(__this, method)
// System.Void UnityEngine.Animation::Stop()
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m195768787 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::Walk()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Walk_m587632063 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PhotonView>()
#define Component_GetComponent_TisPhotonView_t2207721820_m3929953755(__this, method) ((  PhotonView_t2207721820 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m2826390109 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m359410752 (NavMeshAgent_t1276799816 * __this, float p0, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::PlayZombieRun()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieRun_m24001830 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method);
// UnityEngine.AI.NavMeshPath UnityEngine.AI.NavMeshAgent::get_path()
extern "C" IL2CPP_METHOD_ATTR NavMeshPath_t2698325962 * NavMeshAgent_get_path_m3133857361 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_m2491688543 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.String PlayerPrefsX::get_SndSetting()
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerPrefsX_get_SndSetting_m3466715375 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean PlayerPrefsX::GetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool PlayerPrefsX_GetBool_m2206470107 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___defaultValue1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player_move_c>()
#define Component_GetComponent_TisPlayer_move_c_t367674069_m2300611317(__this, method) ((  Player_move_c_t367674069 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Player_move_c::minusLiveFromZombi(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Player_move_c_minusLiveFromZombi_m1236425043 (Player_move_c_t367674069 * __this, int32_t ____minusLive0, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::PlayZombieAttack()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieAttack_m2946499684 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_m4269890037 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// System.String ZombiUpravlenie::myCAnim(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ZombiUpravlenie_myCAnim_m2122570633 (ZombiUpravlenie_t207883660 * __this, String_t* ___a0, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_get_Item_m2435218778 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Implicit_m166179420 (RuntimeObject * __this /* static, unused */, TrackedReference_t1199777556 * p0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationState::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_length_m2177740858 (AnimationState_t1108360407 * __this, const RuntimeMethod* method);
// System.Void ZombiUpravlenie/DelayedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelayedCallback__ctor_m3110140634 (DelayedCallback_t4289022917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::CodeAfterDelay(System.Single,ZombiUpravlenie/DelayedCallback)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_CodeAfterDelay_m2582877979 (ZombiUpravlenie_t207883660 * __this, float ___delay0, DelayedCallback_t4289022917 * ___callback1, const RuntimeMethod* method);
// System.Void ZombiUpravlenie::StartFall()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_StartFall_m472706208 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SpawnMonster>()
#define Component_GetComponent_TisSpawnMonster_t4219141508_m4183193302(__this, method) ((  SpawnMonster_t4219141508 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void SpawnMonster::set_ShouldMove(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpawnMonster_set_ShouldMove_m151235478 (SpawnMonster_t4219141508 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator ZombiUpravlenie::___DelayedCallback(System.Single,ZombiUpravlenie/DelayedCallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombiUpravlenie____DelayedCallback_m2093632133 (ZombiUpravlenie_t207883660 * __this, float ___time0, DelayedCallback_t4289022917 * ___callback1, const RuntimeMethod* method);
// System.Void ZombiUpravlenie/<___DelayedCallback>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C___DelayedCallbackU3Ec__Iterator1__ctor_m59277986 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method);
// System.Void ZombiUpravlenie/DelayedCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void DelayedCallback_Invoke_m249063468 (DelayedCallback_t4289022917 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m2155187179 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, RaycastHit_t1056001966 * p2, int32_t p3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_TransformDirection_m3784028109 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WaterMovement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaterMovement__ctor_m34282329 (WaterMovement_t3974566801 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_speed_2((0.7f));
		__this->set_alpha_3((0.5f));
		__this->set_waveScale_4((3.0f));
		return;
	}
}
// System.Void WaterMovement::Update()
extern "C" IL2CPP_METHOD_ATTR void WaterMovement_Update_m52765506 (WaterMovement_t3974566801 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaterMovement_Update_m52765506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Color_t2555686324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Color_t2555686324  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Color_t2555686324  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_PingPong_m2878066270(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (100.0f), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)(0.15f)));
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_t2627027031 * L_5 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_4, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t340375123 * L_6 = Renderer_get_material_m4171603682(L_5, /*hidden argument*/NULL);
		float L_7 = V_1;
		float L_8 = V_1;
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_set_mainTextureOffset_m2452486895(L_6, L_9, /*hidden argument*/NULL);
		float L_10 = __this->get_alpha_3();
		V_2 = L_10;
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Renderer_t2627027031 * L_12 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_11, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t340375123 * L_13 = Renderer_get_material_m4171603682(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Color_t2555686324  L_14 = Material_get_color_m3827673574(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = L_15;
		V_5 = L_16;
		(&V_3)->set_a_3(L_16);
		float L_17 = V_5;
		V_4 = L_17;
		Color_t2555686324  L_18 = V_3;
		V_7 = L_18;
		GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Renderer_t2627027031 * L_20 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_19, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		NullCheck(L_20);
		Material_t340375123 * L_21 = Renderer_get_material_m4171603682(L_20, /*hidden argument*/NULL);
		Color_t2555686324  L_22 = V_7;
		NullCheck(L_21);
		Material_set_color_m1794818007(L_21, L_22, /*hidden argument*/NULL);
		Color_t2555686324  L_23 = V_7;
		V_6 = L_23;
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Renderer_t2627027031 * L_25 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
		NullCheck(L_25);
		Material_t340375123 * L_26 = Renderer_get_material_m4171603682(L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_waveScale_4();
		float L_28 = __this->get_waveScale_4();
		Vector2_t2156229523  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector2__ctor_m3970636864((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_set_mainTextureScale_m2067513003(L_26, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaterMovement::Main()
extern "C" IL2CPP_METHOD_ATTR void WaterMovement_Main_m3612315687 (WaterMovement_t3974566801 * __this, const RuntimeMethod* method)
{
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
// System.Void Weapon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Weapon__ctor_m3095181171 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
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
// System.Void WeaponBonus::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponBonus__ctor_m286577532 (WeaponBonus_t1073004861 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponBonus::Start()
extern "C" IL2CPP_METHOD_ATTR void WeaponBonus_Start_m1571641398 (WeaponBonus_t1073004861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponBonus_Start_m1571641398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		__this->set__player_3(L_0);
		GameObject_t1113636619 * L_1 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral88903714, /*hidden argument*/NULL);
		NullCheck(L_1);
		Player_move_c_t367674069 * L_2 = GameObject_GetComponent_TisPlayer_move_c_t367674069_m896625391(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayer_move_c_t367674069_m896625391_RuntimeMethod_var);
		__this->set__playerMoveC_4(L_2);
		return;
	}
}
// System.Void WeaponBonus::Update()
extern "C" IL2CPP_METHOD_ATTR void WeaponBonus_Update_m4170613255 (WeaponBonus_t1073004861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponBonus_Update_m4170613255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (120.0f);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_3 = Transform_InverseTransformDirection_m3843238577(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		float L_5 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m1749346957(L_0, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get__player_3();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		float L_11 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		if ((!(((float)L_11) < ((float)(1.5f)))))
		{
			goto IL_006e;
		}
	}
	{
		Player_move_c_t367674069 * L_12 = __this->get__playerMoveC_4();
		GameObject_t1113636619 * L_13 = __this->get_weaponPrefab_2();
		NullCheck(L_12);
		Player_move_c_AddWeapon_m985391910(L_12, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_006e:
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
// System.Void WeaponManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager__cctor_m2053314936 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager__cctor_m2053314936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_CrystalSwordTag_2(_stringLiteral2313074255);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_MinersWeaponTag_3(_stringLiteral1192155552);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_MaceTag_4(_stringLiteral3551123518);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_CrossbowTag_5(_stringLiteral556377502);
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3302800229(L_0, /*hidden argument*/Dictionary_2__ctor_m3302800229_RuntimeMethod_var);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_tagToStoreIDMapping_6(L_0);
		StringU5BU5D_t1281789340* L_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30)));
		String_t* L_2 = WeaponManager_get_MultiplayerMeleeTag_m3765635439(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t1281789340* L_3 = L_1;
		String_t* L_4 = WeaponManager_get__initialWeaponName_m2841770456(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t1281789340* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral141426456);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral141426456);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1921098969);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1921098969);
		StringU5BU5D_t1281789340* L_7 = L_6;
		String_t* L_8 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrystalSwordTag_2();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t1281789340* L_9 = L_7;
		String_t* L_10 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MinersWeaponTag_3();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t1281789340* L_11 = L_9;
		String_t* L_12 = WeaponManager_get_m16Tag_m291637480(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_12);
		StringU5BU5D_t1281789340* L_13 = L_11;
		String_t* L_14 = WeaponManager_get_EagleTag_m3685011897(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		String_t* L_16 = WeaponManager_get_MagicBowTag_m3080495106(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_16);
		StringU5BU5D_t1281789340* L_17 = L_15;
		String_t* L_18 = WeaponManager_get_GoldenAxeTag_m923047896(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		StringU5BU5D_t1281789340* L_19 = L_17;
		String_t* L_20 = WeaponManager_get_SPASTag_m2206785740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_20);
		StringU5BU5D_t1281789340* L_21 = L_19;
		String_t* L_22 = WeaponManager_get_GlockTag_m3546785105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_22);
		StringU5BU5D_t1281789340* L_23 = L_21;
		String_t* L_24 = WeaponManager_get_FAMASTag_m476420310(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_24);
		StringU5BU5D_t1281789340* L_25 = L_23;
		String_t* L_26 = WeaponManager_get_ChainsawTag_m2479377328(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_26);
		StringU5BU5D_t1281789340* L_27 = L_25;
		String_t* L_28 = WeaponManager_get_ScytheTag_m2026640649(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_28);
		StringU5BU5D_t1281789340* L_29 = L_27;
		String_t* L_30 = WeaponManager_get_ShovelTag_m3668724671(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_29;
		String_t* L_32 = WeaponManager_get_HammerTag_m2524420269(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)L_32);
		StringU5BU5D_t1281789340* L_33 = L_31;
		String_t* L_34 = WeaponManager_get_Sword_2Tag_m2523352659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_34);
		StringU5BU5D_t1281789340* L_35 = L_33;
		String_t* L_36 = WeaponManager_get_StaffTag_m1158770884(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_36);
		StringU5BU5D_t1281789340* L_37 = L_35;
		String_t* L_38 = WeaponManager_get_Red_StoneTag_m2648559010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_38);
		StringU5BU5D_t1281789340* L_39 = L_37;
		String_t* L_40 = WeaponManager_get_LightSwordTag_m747118550(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)L_40);
		StringU5BU5D_t1281789340* L_41 = L_39;
		String_t* L_42 = WeaponManager_get_BerettaTag_m2966482996(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_42);
		StringU5BU5D_t1281789340* L_43 = L_41;
		String_t* L_44 = WeaponManager_get_MinigunTag_m2880631243(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)L_44);
		StringU5BU5D_t1281789340* L_45 = L_43;
		String_t* L_46 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrossbowTag_5();
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_46);
		StringU5BU5D_t1281789340* L_47 = L_45;
		String_t* L_48 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MaceTag_4();
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)L_48);
		StringU5BU5D_t1281789340* L_49 = L_47;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral3156421093);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral3156421093);
		StringU5BU5D_t1281789340* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral2232477129);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral2232477129);
		StringU5BU5D_t1281789340* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral3541567793);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral3541567793);
		StringU5BU5D_t1281789340* L_52 = L_51;
		String_t* L_53 = WeaponManager_get_UziTag_m675781882(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)L_53);
		StringU5BU5D_t1281789340* L_54 = L_52;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral2097419566);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral2097419566);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set_multiplayerWeaponTags_7(L_54);
		StringU5BU5D_t1281789340* L_55 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30)));
		String_t* L_56 = WeaponManager_get_MultiplayerMeleeTag_m3765635439(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_56);
		StringU5BU5D_t1281789340* L_57 = L_55;
		String_t* L_58 = WeaponManager_get__initialWeaponName_m2841770456(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_58);
		StringU5BU5D_t1281789340* L_59 = L_57;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral141426456);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral141426456);
		StringU5BU5D_t1281789340* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteral1921098969);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1921098969);
		StringU5BU5D_t1281789340* L_61 = L_60;
		String_t* L_62 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrystalSwordTag_2();
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_62);
		StringU5BU5D_t1281789340* L_63 = L_61;
		String_t* L_64 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MinersWeaponTag_3();
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_64);
		StringU5BU5D_t1281789340* L_65 = L_63;
		String_t* L_66 = WeaponManager_get_m16Tag_m291637480(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_66);
		StringU5BU5D_t1281789340* L_67 = L_65;
		String_t* L_68 = WeaponManager_get_EagleTag_m3685011897(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_68);
		StringU5BU5D_t1281789340* L_69 = L_67;
		String_t* L_70 = WeaponManager_get_MagicBowTag_m3080495106(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_70);
		StringU5BU5D_t1281789340* L_71 = L_69;
		String_t* L_72 = WeaponManager_get_GoldenAxeTag_m923047896(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_72);
		StringU5BU5D_t1281789340* L_73 = L_71;
		String_t* L_74 = WeaponManager_get_SPASTag_m2206785740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_74);
		StringU5BU5D_t1281789340* L_75 = L_73;
		String_t* L_76 = WeaponManager_get_GlockTag_m3546785105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_76);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_76);
		StringU5BU5D_t1281789340* L_77 = L_75;
		String_t* L_78 = WeaponManager_get_FAMASTag_m476420310(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_78);
		StringU5BU5D_t1281789340* L_79 = L_77;
		String_t* L_80 = WeaponManager_get_ChainsawTag_m2479377328(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_80);
		StringU5BU5D_t1281789340* L_81 = L_79;
		String_t* L_82 = WeaponManager_get_ScytheTag_m2026640649(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_82);
		StringU5BU5D_t1281789340* L_83 = L_81;
		String_t* L_84 = WeaponManager_get_ShovelTag_m3668724671(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_84);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_84);
		StringU5BU5D_t1281789340* L_85 = L_83;
		String_t* L_86 = WeaponManager_get_HammerTag_m2524420269(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_86);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)L_86);
		StringU5BU5D_t1281789340* L_87 = L_85;
		String_t* L_88 = WeaponManager_get_Sword_2Tag_m2523352659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_88);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_88);
		StringU5BU5D_t1281789340* L_89 = L_87;
		String_t* L_90 = WeaponManager_get_StaffTag_m1158770884(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_90);
		StringU5BU5D_t1281789340* L_91 = L_89;
		String_t* L_92 = WeaponManager_get_Red_StoneTag_m2648559010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_92);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_92);
		StringU5BU5D_t1281789340* L_93 = L_91;
		String_t* L_94 = WeaponManager_get_LightSwordTag_m747118550(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)L_94);
		StringU5BU5D_t1281789340* L_95 = L_93;
		String_t* L_96 = WeaponManager_get_BerettaTag_m2966482996(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_96);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_96);
		StringU5BU5D_t1281789340* L_97 = L_95;
		String_t* L_98 = WeaponManager_get_MinigunTag_m2880631243(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_98);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)L_98);
		StringU5BU5D_t1281789340* L_99 = L_97;
		String_t* L_100 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrossbowTag_5();
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_100);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_100);
		StringU5BU5D_t1281789340* L_101 = L_99;
		String_t* L_102 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MaceTag_4();
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)L_102);
		StringU5BU5D_t1281789340* L_103 = L_101;
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, _stringLiteral3156421093);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral3156421093);
		StringU5BU5D_t1281789340* L_104 = L_103;
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, _stringLiteral2232477129);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral2232477129);
		StringU5BU5D_t1281789340* L_105 = L_104;
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, _stringLiteral3541567793);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral3541567793);
		StringU5BU5D_t1281789340* L_106 = L_105;
		String_t* L_107 = WeaponManager_get_UziTag_m675781882(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_107);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)L_107);
		StringU5BU5D_t1281789340* L_108 = L_106;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, _stringLiteral2097419566);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral2097419566);
		((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->set__initialMultiplayerWeaponTags_8(L_108);
		Dictionary_2_t1632706988 * L_109 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_110 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrystalSwordTag_2();
		NullCheck(L_109);
		Dictionary_2_Add_m633427275(L_109, L_110, _stringLiteral1652438831, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_111 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_112 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MinersWeaponTag_3();
		NullCheck(L_111);
		Dictionary_2_Add_m633427275(L_111, L_112, _stringLiteral4118587484, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_113 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_114 = WeaponManager_get_m16Tag_m291637480(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var);
		String_t* L_115 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_combatrifle_43();
		NullCheck(L_113);
		Dictionary_2_Add_m633427275(L_113, L_114, L_115, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_116 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_117 = WeaponManager_get_EagleTag_m3685011897(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_118 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_goldeneagle_44();
		NullCheck(L_116);
		Dictionary_2_Add_m633427275(L_116, L_117, L_118, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_119 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_120 = WeaponManager_get_MagicBowTag_m3080495106(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_121 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_magicbow_45();
		NullCheck(L_119);
		Dictionary_2_Add_m633427275(L_119, L_120, L_121, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_122 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_123 = WeaponManager_get_GoldenAxeTag_m923047896(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_124 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_axe_47();
		NullCheck(L_122);
		Dictionary_2_Add_m633427275(L_122, L_123, L_124, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_125 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_126 = WeaponManager_get_SPASTag_m2206785740(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_127 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_spas_48();
		NullCheck(L_125);
		Dictionary_2_Add_m633427275(L_125, L_126, L_127, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_128 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_129 = WeaponManager_get_GlockTag_m3546785105(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_130 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_glock_51();
		NullCheck(L_128);
		Dictionary_2_Add_m633427275(L_128, L_129, L_130, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_131 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_132 = WeaponManager_get_FAMASTag_m476420310(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_133 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_famas_50();
		NullCheck(L_131);
		Dictionary_2_Add_m633427275(L_131, L_132, L_133, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_134 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_135 = WeaponManager_get_ChainsawTag_m2479377328(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_136 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_chainsaw_49();
		NullCheck(L_134);
		Dictionary_2_Add_m633427275(L_134, L_135, L_136, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_137 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_138 = WeaponManager_get_ScytheTag_m2026640649(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_139 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_scythe_52();
		NullCheck(L_137);
		Dictionary_2_Add_m633427275(L_137, L_138, L_139, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_140 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_141 = WeaponManager_get_ShovelTag_m3668724671(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_142 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_shovel_53();
		NullCheck(L_140);
		Dictionary_2_Add_m633427275(L_140, L_141, L_142, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_143 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_144 = WeaponManager_get_HammerTag_m2524420269(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_145 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_hammer_54();
		NullCheck(L_143);
		Dictionary_2_Add_m633427275(L_143, L_144, L_145, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_146 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_147 = WeaponManager_get_Sword_2Tag_m2523352659(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_148 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_sword_2_55();
		NullCheck(L_146);
		Dictionary_2_Add_m633427275(L_146, L_147, L_148, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_149 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_150 = WeaponManager_get_StaffTag_m1158770884(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_151 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_staff_56();
		NullCheck(L_149);
		Dictionary_2_Add_m633427275(L_149, L_150, L_151, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_152 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_153 = WeaponManager_get_Red_StoneTag_m2648559010(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_154 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_laser_57();
		NullCheck(L_152);
		Dictionary_2_Add_m633427275(L_152, L_153, L_154, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_155 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_156 = WeaponManager_get_LightSwordTag_m747118550(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_157 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_lightSword_59();
		NullCheck(L_155);
		Dictionary_2_Add_m633427275(L_155, L_156, L_157, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_158 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_159 = WeaponManager_get_BerettaTag_m2966482996(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_160 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_beretta_60();
		NullCheck(L_158);
		Dictionary_2_Add_m633427275(L_158, L_159, L_160, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_161 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_162 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_MaceTag_4();
		String_t* L_163 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_mace_61();
		NullCheck(L_161);
		Dictionary_2_Add_m633427275(L_161, L_162, L_163, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_164 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_165 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_CrossbowTag_5();
		String_t* L_166 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_crossbow_63();
		NullCheck(L_164);
		Dictionary_2_Add_m633427275(L_164, L_165, L_166, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_167 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get_tagToStoreIDMapping_6();
		String_t* L_168 = WeaponManager_get_MinigunTag_m2880631243(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_169 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_minigun_62();
		NullCheck(L_167);
		Dictionary_2_Add_m633427275(L_167, L_168, L_169, /*hidden argument*/Dictionary_2_Add_m633427275_RuntimeMethod_var);
		return;
	}
}
// System.Void WeaponManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager__ctor_m334708146 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager__ctor_m334708146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set__playerWeapons_15(L_0);
		WeaponSounds_t105296586 * L_1 = (WeaponSounds_t105296586 *)il2cpp_codegen_object_new(WeaponSounds_t105296586_il2cpp_TypeInfo_var);
		WeaponSounds__ctor_m2694092377(L_1, /*hidden argument*/NULL);
		__this->set__currentWeaponSounds_18(L_1);
		Dictionary_2_t1049633776 * L_2 = (Dictionary_2_t1049633776 *)il2cpp_codegen_object_new(Dictionary_2_t1049633776_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1104614235(L_2, /*hidden argument*/Dictionary_2__ctor_m1104614235_RuntimeMethod_var);
		__this->set__purchaseActinos_19(L_2);
		List_1_t2869380684 * L_3 = (List_1_t2869380684 *)il2cpp_codegen_object_new(List_1_t2869380684_il2cpp_TypeInfo_var);
		List_1__ctor_m1770779276(L_3, /*hidden argument*/List_1__ctor_m1770779276_RuntimeMethod_var);
		__this->set_players_20(L_3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String WeaponManager::myCAnim(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_myCAnim_m3806326573 (WeaponManager_t1762453775 * __this, String_t* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_myCAnim_m3806326573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeaponSounds_t105296586 * L_0 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = L_0->get_animationObject_14();
		String_t* L_2 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
		String_t* L_3 = Defs_CAnim_m3082801395(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String WeaponManager::get_m16Tag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_m16Tag_m291637480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_m16Tag_m291637480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2268009215;
	}
}
// System.String WeaponManager::get_EagleTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_EagleTag_m3685011897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_EagleTag_m3685011897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral382924224;
	}
}
// System.String WeaponManager::get_GoldenAxeTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenAxeTag_m923047896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_GoldenAxeTag_m923047896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral9353509;
	}
}
// System.String WeaponManager::get_SPASTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SPASTag_m2206785740 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_SPASTag_m2206785740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1935104946;
	}
}
// System.String WeaponManager::get_GlockTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GlockTag_m3546785105 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_GlockTag_m3546785105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral424788389;
	}
}
// System.String WeaponManager::get_FAMASTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_FAMASTag_m476420310 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_FAMASTag_m476420310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral100222198;
	}
}
// System.String WeaponManager::get_ChainsawTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ChainsawTag_m2479377328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ChainsawTag_m2479377328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral847028901;
	}
}
// System.String WeaponManager::get_ScytheTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ScytheTag_m2026640649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ScytheTag_m2026640649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1221901976;
	}
}
// System.String WeaponManager::get_ShovelTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ShovelTag_m3668724671 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ShovelTag_m3668724671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral769311735;
	}
}
// System.String WeaponManager::get_UziTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_UziTag_m675781882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_UziTag_m675781882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3314502200;
	}
}
// System.String WeaponManager::get_HammerTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_HammerTag_m2524420269 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_HammerTag_m2524420269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral403561042;
	}
}
// System.String WeaponManager::get_Sword_2Tag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Sword_2Tag_m2523352659 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_Sword_2Tag_m2523352659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4081456458;
	}
}
// System.String WeaponManager::get_StaffTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_StaffTag_m1158770884 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_StaffTag_m1158770884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3178868010;
	}
}
// System.String WeaponManager::get_Red_StoneTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Red_StoneTag_m2648559010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_Red_StoneTag_m2648559010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1226225166;
	}
}
// System.String WeaponManager::get_LightSwordTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LightSwordTag_m747118550 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_LightSwordTag_m747118550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1382609333;
	}
}
// System.String WeaponManager::get_BerettaTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_BerettaTag_m2966482996 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_BerettaTag_m2966482996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3552318465;
	}
}
// System.String WeaponManager::get_MagicBowTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MagicBowTag_m3080495106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MagicBowTag_m3080495106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2150326517;
	}
}
// System.String WeaponManager::get_MinigunTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MinigunTag_m2880631243 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MinigunTag_m2880631243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2835823132;
	}
}
// System.String WeaponManager::get__initialWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get__initialWeaponName_m2841770456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get__initialWeaponName_m2841770456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral478641456;
	}
}
// System.String WeaponManager::get_PickWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_PickWeaponName_m2507155128 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_PickWeaponName_m2507155128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3510314171;
	}
}
// System.String WeaponManager::get_MultiplayerMeleeTag()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MultiplayerMeleeTag_m3765635439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MultiplayerMeleeTag_m3765635439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2801010509;
	}
}
// System.String WeaponManager::get_SwordWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SwordWeaponName_m1884679502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_SwordWeaponName_m1884679502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral781430816;
	}
}
// System.String WeaponManager::get_CombatRifleWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_CombatRifleWeaponName_m1295803920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_CombatRifleWeaponName_m1295803920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral204785386;
	}
}
// System.String WeaponManager::get_GoldenEagleWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenEagleWeaponName_m1120865988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_GoldenEagleWeaponName_m1120865988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2543437546;
	}
}
// System.String WeaponManager::get_MagicBowWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MagicBowWeaponName_m3487257396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MagicBowWeaponName_m3487257396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4117415658;
	}
}
// System.String WeaponManager::get_SpasWeaponName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_SpasWeaponName_m2154833812 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_SpasWeaponName_m2154833812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2161100522;
	}
}
// System.String WeaponManager::get_GoldenAxeWeaponnName()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GoldenAxeWeaponnName_m3989543615 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_GoldenAxeWeaponnName_m3989543615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3735078634;
	}
}
// System.String WeaponManager::get_ChainsawWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ChainsawWN_m2959097056 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ChainsawWN_m2959097056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1778763498;
	}
}
// System.String WeaponManager::get_FAMASWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_FAMASWN_m419502995 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_FAMASWN_m419502995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3352741610;
	}
}
// System.String WeaponManager::get_GlockWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_GlockWN_m326926806 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_GlockWN_m326926806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1396426474;
	}
}
// System.String WeaponManager::get_ScytheWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ScytheWN_m2686880199 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ScytheWN_m2686880199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2970404586;
	}
}
// System.String WeaponManager::get_ShovelWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_ShovelWN_m4277715065 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_ShovelWN_m4277715065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1014089450;
	}
}
// System.String WeaponManager::get_HammerWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_HammerWN_m1436230627 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_HammerWN_m1436230627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1770869327;
	}
}
// System.String WeaponManager::get_Sword_2_WN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_Sword_2_WN_m3042372647 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_Sword_2_WN_m3042372647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4109521487;
	}
}
// System.String WeaponManager::get_StaffWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_StaffWN_m1075261091 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_StaffWN_m1075261091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1388532303;
	}
}
// System.String WeaponManager::get_LaserRifleWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LaserRifleWN_m92723408 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_LaserRifleWN_m92723408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3727184463;
	}
}
// System.String WeaponManager::get_LightSwordWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_LightSwordWN_m405515106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_LightSwordWN_m405515106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1006195279;
	}
}
// System.String WeaponManager::get_BerettaWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_BerettaWN_m872803409 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_BerettaWN_m872803409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3344847439;
	}
}
// System.String WeaponManager::get_MaceWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MaceWN_m1604268619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MaceWN_m1604268619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral623858255;
	}
}
// System.String WeaponManager::get_CrossbowWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_CrossbowWN_m1140501696 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_CrossbowWN_m1140501696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2962510415;
	}
}
// System.String WeaponManager::get_MinigunWN()
extern "C" IL2CPP_METHOD_ATTR String_t* WeaponManager_get_MinigunWN_m3839728566 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_get_MinigunWN_m3839728566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral241521231;
	}
}
// UnityEngine.Object[] WeaponManager::get_weaponsInGame()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* WeaponManager_get_weaponsInGame_m3462245750 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t1417781964* L_0 = __this->get__weaponsInGame_14();
		return L_0;
	}
}
// System.Collections.ArrayList WeaponManager::get_playerWeapons()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * WeaponManager_get_playerWeapons_m669423090 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get__playerWeapons_15();
		return L_0;
	}
}
// WeaponSounds WeaponManager::get_currentWeaponSounds()
extern "C" IL2CPP_METHOD_ATTR WeaponSounds_t105296586 * WeaponManager_get_currentWeaponSounds_m4289826546 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	{
		WeaponSounds_t105296586 * L_0 = __this->get__currentWeaponSounds_18();
		return L_0;
	}
}
// System.Void WeaponManager::set_currentWeaponSounds(WeaponSounds)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_set_currentWeaponSounds_m1727506371 (WeaponManager_t1762453775 * __this, WeaponSounds_t105296586 * ___value0, const RuntimeMethod* method)
{
	{
		WeaponSounds_t105296586 * L_0 = ___value0;
		__this->set__currentWeaponSounds_18(L_0);
		return;
	}
}
// UnityEngine.Object[] WeaponManager::GetWeaponPrefabs()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* WeaponManager_GetWeaponPrefabs_m971570581 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetWeaponPrefabs_m971570581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t1417781964* L_0 = Resources_LoadAll_m2792647427(NULL /*static, unused*/, _stringLiteral1305674868, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void WeaponManager::Reset()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_Reset_m1150209106 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_Reset_m1150209106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	Weapon_t4063826929 * V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		ArrayList_t2718874744 * L_0 = __this->get__playerWeapons_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		__this->set_CurrentWeaponIndex_16(0);
		V_0 = ((ObjectU5BU5D_t1417781964*)SZArrayNew(ObjectU5BU5D_t1417781964_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30)));
		V_1 = 0;
		goto IL_0041;
	}

IL_0021:
	{
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		ObjectU5BU5D_t1417781964* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3373989363, L_6, /*hidden argument*/NULL);
		Object_t631007953 * L_8 = Resources_Load_m3880010804(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Object_t631007953 *)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)30))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t1417781964* L_11 = V_0;
		Object_t631007953 * L_12 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3984397021, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Object_t631007953 *)L_12);
		V_3 = 0;
		goto IL_00f8;
	}

IL_005e:
	{
		ObjectU5BU5D_t1417781964* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Object_t631007953 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_16, GameObject_t1113636619_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_17 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get__initialMultiplayerWeaponTags_8();
		GameObject_t1113636619 * L_18 = V_4;
		NullCheck(L_18);
		String_t* L_19 = GameObject_get_tag_m3951609671(L_18, /*hidden argument*/NULL);
		int32_t L_20 = Array_IndexOf_TisString_t_m3727315756(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/Array_IndexOf_TisString_t_m3727315756_RuntimeMethod_var);
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_21 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1550659595, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00f4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_22 = ((WeaponManager_t1762453775_StaticFields*)il2cpp_codegen_static_fields_for(WeaponManager_t1762453775_il2cpp_TypeInfo_var))->get__initialMultiplayerWeaponTags_8();
		GameObject_t1113636619 * L_23 = V_4;
		NullCheck(L_23);
		String_t* L_24 = GameObject_get_tag_m3951609671(L_23, /*hidden argument*/NULL);
		int32_t L_25 = Array_IndexOf_TisString_t_m3727315756(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/Array_IndexOf_TisString_t_m3727315756_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}

IL_00a6:
	{
		Weapon_t4063826929 * L_26 = (Weapon_t4063826929 *)il2cpp_codegen_object_new(Weapon_t4063826929_il2cpp_TypeInfo_var);
		Weapon__ctor_m3095181171(L_26, /*hidden argument*/NULL);
		V_5 = L_26;
		Weapon_t4063826929 * L_27 = V_5;
		GameObject_t1113636619 * L_28 = V_4;
		NullCheck(L_27);
		L_27->set_weaponPrefab_0(L_28);
		Weapon_t4063826929 * L_29 = V_5;
		Weapon_t4063826929 * L_30 = V_5;
		NullCheck(L_30);
		GameObject_t1113636619 * L_31 = L_30->get_weaponPrefab_0();
		NullCheck(L_31);
		WeaponSounds_t105296586 * L_32 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_31, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_33 = L_32->get_InitialAmmo_7();
		NullCheck(L_29);
		L_29->set_currentAmmoInBackpack_1(L_33);
		Weapon_t4063826929 * L_34 = V_5;
		Weapon_t4063826929 * L_35 = V_5;
		NullCheck(L_35);
		GameObject_t1113636619 * L_36 = L_35->get_weaponPrefab_0();
		NullCheck(L_36);
		WeaponSounds_t105296586 * L_37 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_36, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_37);
		int32_t L_38 = L_37->get_ammoInClip_8();
		NullCheck(L_34);
		L_34->set_currentAmmoInClip_2(L_38);
		ArrayList_t2718874744 * L_39 = __this->get__playerWeapons_15();
		Weapon_t4063826929 * L_40 = V_5;
		NullCheck(L_39);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_39, L_40);
	}

IL_00f4:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00f8:
	{
		int32_t L_42 = V_3;
		ObjectU5BU5D_t1417781964* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_005e;
		}
	}
	{
		ArrayList_t2718874744 * L_44 = __this->get__playerWeapons_15();
		NullCheck(L_44);
		int32_t L_45 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_44);
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral62940736, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
		String_t* L_49 = Defs_get_MinerWeaponSett_m4176423767(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_50 = WeaponManager_get_PickWeaponName_m2507155128(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_49, L_50, /*hidden argument*/NULL);
		String_t* L_51 = Defs_get_SwordSett_m1707973847(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_51;
		String_t* L_52 = WeaponManager_get_SwordWeaponName_m1884679502(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_52;
		String_t* L_53 = V_6;
		String_t* L_54 = V_7;
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_53, L_54, /*hidden argument*/NULL);
		String_t* L_55 = Defs_get_GoldenAxeSett_m1746611471(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_56 = WeaponManager_get_GoldenAxeWeaponnName_m3989543615(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_55, L_56, /*hidden argument*/NULL);
		String_t* L_57 = Defs_get_SPASSett_m359545668(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_58 = WeaponManager_get_SpasWeaponName_m2154833812(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_57, L_58, /*hidden argument*/NULL);
		String_t* L_59 = Defs_get_ChainsawS_m1036568084(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_60 = WeaponManager_get_ChainsawWN_m2959097056(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_59, L_60, /*hidden argument*/NULL);
		String_t* L_61 = Defs_get_GlockSett_m3116461980(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_62 = WeaponManager_get_GlockWN_m326926806(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_61, L_62, /*hidden argument*/NULL);
		String_t* L_63 = Defs_get_ScytheSN_m4095766121(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_64 = WeaponManager_get_ScytheWN_m2686880199(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_63, L_64, /*hidden argument*/NULL);
		String_t* L_65 = Defs_get_ShovelSN_m535558202(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_66 = WeaponManager_get_ShovelWN_m4277715065(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_65, L_66, /*hidden argument*/NULL);
		String_t* L_67 = Defs_get_Sword_2_SN_m295873404(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_68 = WeaponManager_get_Sword_2_WN_m3042372647(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_67, L_68, /*hidden argument*/NULL);
		String_t* L_69 = Defs_get_HammerSN_m2902333949(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_70 = WeaponManager_get_HammerWN_m1436230627(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_69, L_70, /*hidden argument*/NULL);
		String_t* L_71 = Defs_get_LaserRifleSN_m982086458(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_72 = WeaponManager_get_LaserRifleWN_m92723408(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_71, L_72, /*hidden argument*/NULL);
		String_t* L_73 = Defs_get_LightSwordSN_m4039712287(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_74 = WeaponManager_get_LightSwordWN_m405515106(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_73, L_74, /*hidden argument*/NULL);
		String_t* L_75 = Defs_get_BerettaSN_m2326687211(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_76 = WeaponManager_get_BerettaWN_m872803409(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_75, L_76, /*hidden argument*/NULL);
		String_t* L_77 = Defs_get_CombatRifleSett_m3375071308(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_78 = WeaponManager_get_CombatRifleWeaponName_m1295803920(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_77, L_78, /*hidden argument*/NULL);
		String_t* L_79 = Defs_get_GoldenEagleSett_m2209051915(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_80 = WeaponManager_get_GoldenEagleWeaponName_m1120865988(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_79, L_80, /*hidden argument*/NULL);
		String_t* L_81 = Defs_get_MagicBowSett_m2792069435(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_82 = WeaponManager_get_MagicBowWeaponName_m3487257396(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_81, L_82, /*hidden argument*/NULL);
		String_t* L_83 = Defs_get_FAMASS_m399705988(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_84 = WeaponManager_get_FAMASWN_m419502995(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_83, L_84, /*hidden argument*/NULL);
		String_t* L_85 = Defs_get_StaffSN_m728487771(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_86 = WeaponManager_get_StaffWN_m1075261091(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_85, L_86, /*hidden argument*/NULL);
		String_t* L_87 = Defs_get_MaceSN_m366779797(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_88 = WeaponManager_get_MaceWN_m1604268619(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_87, L_88, /*hidden argument*/NULL);
		String_t* L_89 = Defs_get_CrossbowSN_m2733947154(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_90 = WeaponManager_get_CrossbowWN_m1140501696(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_89, L_90, /*hidden argument*/NULL);
		String_t* L_91 = Defs_get_MinigunSN_m1330859472(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_92 = WeaponManager_get_MinigunWN_m3839728566(NULL /*static, unused*/, /*hidden argument*/NULL);
		WeaponManager_AddWeaponIfBought_m1585898930(__this, L_91, L_92, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_93 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		WeaponsComparer_t4255210887 * L_94 = (WeaponsComparer_t4255210887 *)il2cpp_codegen_object_new(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var);
		WeaponsComparer__ctor_m958703356(L_94, /*hidden argument*/NULL);
		NullCheck(L_93);
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_93, L_94);
		return;
	}
}
// System.Void WeaponManager::AddWeaponIfBought(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddWeaponIfBought_m1585898930 (WeaponManager_t1762453775 * __this, String_t* ___settName0, String_t* ___prefabName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddWeaponIfBought_m1585898930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	Weapon_t4063826929 * V_5 = NULL;
	{
		String_t* L_0 = ___settName0;
		IL2CPP_RUNTIME_CLASS_INIT(Storager_t283934908_il2cpp_TypeInfo_var);
		int32_t L_1 = Storager_getInt_m191561888(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		V_0 = ((ObjectU5BU5D_t1417781964*)SZArrayNew(ObjectU5BU5D_t1417781964_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29)));
		V_1 = 0;
		goto IL_003d;
	}

IL_001d:
	{
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		ObjectU5BU5D_t1417781964* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3373989363, L_7, /*hidden argument*/NULL);
		Object_t631007953 * L_9 = Resources_Load_m3880010804(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Object_t631007953 *)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)29))))
		{
			goto IL_001d;
		}
	}
	{
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		Object_t631007953 * L_13 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral446209602, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (Object_t631007953 *)L_13);
		V_3 = 0;
		goto IL_00da;
	}

IL_005a:
	{
		ObjectU5BU5D_t1417781964* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Object_t631007953 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_17, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_18 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		GameObject_t1113636619 * L_20 = V_4;
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_m4211327027(L_20, /*hidden argument*/NULL);
		String_t* L_22 = ___prefabName1;
		NullCheck(L_21);
		bool L_23 = String_Equals_m2270643605(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		Weapon_t4063826929 * L_24 = (Weapon_t4063826929 *)il2cpp_codegen_object_new(Weapon_t4063826929_il2cpp_TypeInfo_var);
		Weapon__ctor_m3095181171(L_24, /*hidden argument*/NULL);
		V_5 = L_24;
		Weapon_t4063826929 * L_25 = V_5;
		GameObject_t1113636619 * L_26 = V_4;
		NullCheck(L_25);
		L_25->set_weaponPrefab_0(L_26);
		Weapon_t4063826929 * L_27 = V_5;
		Weapon_t4063826929 * L_28 = V_5;
		NullCheck(L_28);
		GameObject_t1113636619 * L_29 = L_28->get_weaponPrefab_0();
		NullCheck(L_29);
		WeaponSounds_t105296586 * L_30 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_29, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31 = L_30->get_InitialAmmo_7();
		NullCheck(L_27);
		L_27->set_currentAmmoInBackpack_1(L_31);
		Weapon_t4063826929 * L_32 = V_5;
		Weapon_t4063826929 * L_33 = V_5;
		NullCheck(L_33);
		GameObject_t1113636619 * L_34 = L_33->get_weaponPrefab_0();
		NullCheck(L_34);
		WeaponSounds_t105296586 * L_35 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_34, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36 = L_35->get_ammoInClip_8();
		NullCheck(L_32);
		L_32->set_currentAmmoInClip_2(L_36);
		ArrayList_t2718874744 * L_37 = __this->get__playerWeapons_15();
		Weapon_t4063826929 * L_38 = V_5;
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_37, L_38);
		goto IL_00e3;
	}

IL_00d6:
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00da:
	{
		int32_t L_40 = V_3;
		ObjectU5BU5D_t1417781964* L_41 = V_0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_005a;
		}
	}

IL_00e3:
	{
		return;
	}
}
// System.Boolean WeaponManager::AddWeapon(UnityEngine.GameObject,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WeaponManager_AddWeapon_m4003918992 (WeaponManager_t1762453775 * __this, GameObject_t1113636619 * ___weaponPrefab0, int32_t* ___score1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddWeapon_m4003918992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Weapon_t4063826929 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Weapon_t4063826929 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t* L_0 = ___score1;
		*((int32_t*)(L_0)) = (int32_t)0;
		ArrayList_t2718874744 * L_1 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0014:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_4, Weapon_t4063826929_il2cpp_TypeInfo_var));
			Weapon_t4063826929 * L_5 = V_0;
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = L_5->get_weaponPrefab_0();
			GameObject_t1113636619 * L_7 = ___weaponPrefab0;
			NullCheck(L_7);
			String_t* L_8 = GameObject_get_tag_m3951609671(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = GameObject_CompareTag_m3144439756(L_6, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0060;
			}
		}

IL_0036:
		{
			ArrayList_t2718874744 * L_10 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
			Weapon_t4063826929 * L_11 = V_0;
			NullCheck(L_10);
			int32_t L_12 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_10, L_11);
			V_2 = L_12;
			int32_t L_13 = V_2;
			bool L_14 = WeaponManager_AddAmmo_m778608817(__this, L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_0059;
			}
		}

IL_004f:
		{
			int32_t* L_15 = ___score1;
			int32_t* L_16 = ___score1;
			IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
			int32_t L_17 = Defs_get_ScoreForSurplusAmmo_m1360565554(NULL /*static, unused*/, /*hidden argument*/NULL);
			*((int32_t*)(L_15)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_16)), (int32_t)L_17));
		}

IL_0059:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0xF8, FINALLY_0070);
		}

IL_0060:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0014;
			}
		}

IL_006b:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_1;
			RuntimeObject* L_21 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_21;
			if (!L_21)
			{
				goto IL_0085;
			}
		}

IL_007e:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		Weapon_t4063826929 * L_23 = (Weapon_t4063826929 *)il2cpp_codegen_object_new(Weapon_t4063826929_il2cpp_TypeInfo_var);
		Weapon__ctor_m3095181171(L_23, /*hidden argument*/NULL);
		V_5 = L_23;
		Weapon_t4063826929 * L_24 = V_5;
		GameObject_t1113636619 * L_25 = ___weaponPrefab0;
		NullCheck(L_24);
		L_24->set_weaponPrefab_0(L_25);
		Weapon_t4063826929 * L_26 = V_5;
		Weapon_t4063826929 * L_27 = V_5;
		NullCheck(L_27);
		GameObject_t1113636619 * L_28 = L_27->get_weaponPrefab_0();
		NullCheck(L_28);
		WeaponSounds_t105296586 * L_29 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_28, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->get_InitialAmmo_7();
		NullCheck(L_26);
		L_26->set_currentAmmoInBackpack_1(L_30);
		Weapon_t4063826929 * L_31 = V_5;
		Weapon_t4063826929 * L_32 = V_5;
		NullCheck(L_32);
		GameObject_t1113636619 * L_33 = L_32->get_weaponPrefab_0();
		NullCheck(L_33);
		WeaponSounds_t105296586 * L_34 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_33, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		NullCheck(L_34);
		int32_t L_35 = L_34->get_ammoInClip_8();
		NullCheck(L_31);
		L_31->set_currentAmmoInClip_2(L_35);
		ArrayList_t2718874744 * L_36 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_37 = V_5;
		NullCheck(L_36);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_36, L_37);
		ArrayList_t2718874744 * L_38 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		WeaponsComparer_t4255210887 * L_39 = (WeaponsComparer_t4255210887 *)il2cpp_codegen_object_new(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var);
		WeaponsComparer__ctor_m958703356(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_38, L_39);
		ArrayList_t2718874744 * L_40 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_40, L_41);
		__this->set_CurrentWeaponIndex_16(L_42);
		return (bool)1;
	}

IL_00f8:
	{
		bool L_43 = V_3;
		return L_43;
	}
}
// UnityEngine.GameObject WeaponManager::GetPickPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetPickPrefab_m1591361075 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetPickPrefab_m1591361075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_PickWeaponName_m2507155128(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetSwordPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSwordPrefab_m1472854058 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetSwordPrefab_m1472854058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_SwordWeaponName_m1884679502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetCombatRiflePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetCombatRiflePrefab_m2496607767 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetCombatRiflePrefab_m2496607767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_CombatRifleWeaponName_m1295803920(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetMacePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMacePrefab_m2206130233 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetMacePrefab_m2206130233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_MaceWN_m1604268619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetCrossbowPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetCrossbowPrefab_m2110084666 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetCrossbowPrefab_m2110084666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_CrossbowWN_m1140501696(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetMinigunPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMinigunPrefab_m2283339191 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetMinigunPrefab_m2283339191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_MinigunWN_m3839728566(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetGoldenEaglePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetGoldenEaglePrefab_m2095640434 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetGoldenEaglePrefab_m2095640434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_GoldenEagleWeaponName_m1120865988(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetMagicBowPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetMagicBowPrefab_m250447049 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetMagicBowPrefab_m250447049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_MagicBowWeaponName_m3487257396(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetSPASPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSPASPrefab_m536042736 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetSPASPrefab_m536042736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_SpasWeaponName_m2154833812(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetStaffPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetStaffPrefab_m3154531876 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetStaffPrefab_m3154531876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_StaffWN_m1075261091(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetAxePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetAxePrefab_m1640247276 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetAxePrefab_m1640247276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_GoldenAxeWeaponnName_m3989543615(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetChainsawPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetChainsawPrefab_m738668970 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetChainsawPrefab_m738668970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_ChainsawWN_m2959097056(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetGlockPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetGlockPrefab_m1509057101 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetGlockPrefab_m1509057101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_GlockWN_m326926806(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetFAMASPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetFAMASPrefab_m769449454 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetFAMASPrefab_m769449454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_FAMASWN_m419502995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetScythePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetScythePrefab_m4069152087 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetScythePrefab_m4069152087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_ScytheWN_m2686880199(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetShovelPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetShovelPrefab_m2835031729 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetShovelPrefab_m2835031729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_ShovelWN_m4277715065(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetSword_2_Prefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetSword_2_Prefab_m3587141929 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetSword_2_Prefab_m3587141929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_Sword_2_WN_m3042372647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetHammerPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetHammerPrefab_m2557199588 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetHammerPrefab_m2557199588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_HammerWN_m1436230627(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetLaserRiflePrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetLaserRiflePrefab_m1890122545 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetLaserRiflePrefab_m1890122545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_LaserRifleWN_m92723408(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetLightSwordPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetLightSwordPrefab_m3332159941 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetLightSwordPrefab_m3332159941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_LightSwordWN_m405515106(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject WeaponManager::GetBerettaPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * WeaponManager_GetBerettaPrefab_m4277481885 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_GetBerettaPrefab_m4277481885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t1417781964* L_0 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000e:
	{
		ObjectU5BU5D_t1417781964* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Object_t631007953 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_7 = WeaponManager_get_BerettaWN_m872803409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = String_Equals_m2270643605(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_2;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t1417781964* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// System.Boolean WeaponManager::AddAmmo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool WeaponManager_AddAmmo_m778608817 (WeaponManager_t1762453775 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddAmmo_m778608817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Weapon_t4063826929 * V_0 = NULL;
	WeaponSounds_t105296586 * V_1 = NULL;
	{
		int32_t L_0 = ___idx0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->get_CurrentWeaponIndex_16();
		___idx0 = L_1;
	}

IL_000f:
	{
		int32_t L_2 = ___idx0;
		int32_t L_3 = __this->get_CurrentWeaponIndex_16();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		WeaponSounds_t105296586 * L_4 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = L_4->get_isMelee_10();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		ArrayList_t2718874744 * L_6 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_7 = ___idx0;
		NullCheck(L_6);
		RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		V_0 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_8, Weapon_t4063826929_il2cpp_TypeInfo_var));
		Weapon_t4063826929 * L_9 = V_0;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = L_9->get_weaponPrefab_0();
		NullCheck(L_10);
		WeaponSounds_t105296586 * L_11 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_10, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
		V_1 = L_11;
		Weapon_t4063826929 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_currentAmmoInBackpack_1();
		WeaponSounds_t105296586 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_008e;
		}
	}
	{
		Weapon_t4063826929 * L_16 = V_0;
		Weapon_t4063826929 * L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_currentAmmoInBackpack_1();
		WeaponSounds_t105296586 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_ammoInClip_8();
		NullCheck(L_17);
		L_17->set_currentAmmoInBackpack_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_20)));
		Weapon_t4063826929 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_currentAmmoInBackpack_1();
		WeaponSounds_t105296586 * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)L_24)))
		{
			goto IL_008c;
		}
	}
	{
		Weapon_t4063826929 * L_25 = V_0;
		WeaponSounds_t105296586 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_currentAmmoInBackpack_1(L_27);
	}

IL_008c:
	{
		return (bool)1;
	}

IL_008e:
	{
		return (bool)0;
	}
}
// System.Void WeaponManager::SetMaxAmmoFrAllWeapons()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_SetMaxAmmoFrAllWeapons_m2053703160 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_SetMaxAmmoFrAllWeapons_m2053703160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Weapon_t4063826929 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t2718874744 * L_0 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_3, Weapon_t4063826929_il2cpp_TypeInfo_var));
			Weapon_t4063826929 * L_4 = V_0;
			Weapon_t4063826929 * L_5 = V_0;
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = L_5->get_weaponPrefab_0();
			NullCheck(L_6);
			WeaponSounds_t105296586 * L_7 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_6, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
			NullCheck(L_7);
			int32_t L_8 = L_7->get_ammoInClip_8();
			NullCheck(L_4);
			L_4->set_currentAmmoInClip_2(L_8);
			Weapon_t4063826929 * L_9 = V_0;
			Weapon_t4063826929 * L_10 = V_0;
			NullCheck(L_10);
			GameObject_t1113636619 * L_11 = L_10->get_weaponPrefab_0();
			NullCheck(L_11);
			WeaponSounds_t105296586 * L_12 = GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784(L_11, /*hidden argument*/GameObject_GetComponent_TisWeaponSounds_t105296586_m3935251784_RuntimeMethod_var);
			NullCheck(L_12);
			int32_t L_13 = WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981(L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			L_9->set_currentAmmoInBackpack_1(L_13);
		}

IL_0049:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0011;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0059);
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
			RuntimeObject* L_16 = V_1;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_17;
			if (!L_17)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		return;
	}
}
// System.Void WeaponManager::Start()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_Start_m1945335170 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_Start_m1945335170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Dictionary_2_t1049633776 * L_0 = __this->get__purchaseActinos_19();
		intptr_t L_1 = (intptr_t)WeaponManager_AddMinerWeaponToInventoryAndSaveInApp_m2343157213_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m1226049488(L_0, _stringLiteral4118587484, L_2, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_3 = __this->get__purchaseActinos_19();
		intptr_t L_4 = (intptr_t)WeaponManager_AddSwordToInventoryAndSaveInApp_m2737097039_RuntimeMethod_var;
		Action_t1264377477 * L_5 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m1226049488(L_3, _stringLiteral1652438831, L_5, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_6 = __this->get__purchaseActinos_19();
		IL2CPP_RUNTIME_CLASS_INIT(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var);
		String_t* L_7 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_combatrifle_43();
		intptr_t L_8 = (intptr_t)WeaponManager_AddCombatRifle_m3322214953_RuntimeMethod_var;
		Action_t1264377477 * L_9 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m1226049488(L_6, L_7, L_9, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_10 = __this->get__purchaseActinos_19();
		String_t* L_11 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_goldeneagle_44();
		intptr_t L_12 = (intptr_t)WeaponManager_AddGoldenEagle_m2174282641_RuntimeMethod_var;
		Action_t1264377477 * L_13 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_13, __this, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m1226049488(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_14 = __this->get__purchaseActinos_19();
		String_t* L_15 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_magicbow_45();
		intptr_t L_16 = (intptr_t)WeaponManager_AddMagicBow_m2544710047_RuntimeMethod_var;
		Action_t1264377477 * L_17 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_17, __this, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Dictionary_2_Add_m1226049488(L_14, L_15, L_17, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_18 = __this->get__purchaseActinos_19();
		String_t* L_19 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_axe_47();
		intptr_t L_20 = (intptr_t)WeaponManager_AddGoldenAxe_m3289765478_RuntimeMethod_var;
		Action_t1264377477 * L_21 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_21, __this, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Dictionary_2_Add_m1226049488(L_18, L_19, L_21, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_22 = __this->get__purchaseActinos_19();
		String_t* L_23 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_spas_48();
		intptr_t L_24 = (intptr_t)WeaponManager_AddSPAS_m204641602_RuntimeMethod_var;
		Action_t1264377477 * L_25 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_25, __this, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_Add_m1226049488(L_22, L_23, L_25, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_26 = __this->get__purchaseActinos_19();
		String_t* L_27 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_chainsaw_49();
		intptr_t L_28 = (intptr_t)WeaponManager_AddChainsaw_m774115026_RuntimeMethod_var;
		Action_t1264377477 * L_29 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_29, __this, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Dictionary_2_Add_m1226049488(L_26, L_27, L_29, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_30 = __this->get__purchaseActinos_19();
		String_t* L_31 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_glock_51();
		intptr_t L_32 = (intptr_t)WeaponManager_AddGlock_m413525425_RuntimeMethod_var;
		Action_t1264377477 * L_33 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_33, __this, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Dictionary_2_Add_m1226049488(L_30, L_31, L_33, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_34 = __this->get__purchaseActinos_19();
		String_t* L_35 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_famas_50();
		intptr_t L_36 = (intptr_t)WeaponManager_AddFAMAS_m3976141324_RuntimeMethod_var;
		Action_t1264377477 * L_37 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_37, __this, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		Dictionary_2_Add_m1226049488(L_34, L_35, L_37, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_38 = __this->get__purchaseActinos_19();
		String_t* L_39 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_scythe_52();
		intptr_t L_40 = (intptr_t)WeaponManager_AddScythe_m990556609_RuntimeMethod_var;
		Action_t1264377477 * L_41 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_41, __this, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		Dictionary_2_Add_m1226049488(L_38, L_39, L_41, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_42 = __this->get__purchaseActinos_19();
		String_t* L_43 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_shovel_53();
		intptr_t L_44 = (intptr_t)WeaponManager_AddShovel_m3092487190_RuntimeMethod_var;
		Action_t1264377477 * L_45 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_45, __this, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Dictionary_2_Add_m1226049488(L_42, L_43, L_45, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_46 = __this->get__purchaseActinos_19();
		String_t* L_47 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_sword_2_55();
		intptr_t L_48 = (intptr_t)WeaponManager_AddSword_2_m3702998587_RuntimeMethod_var;
		Action_t1264377477 * L_49 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_49, __this, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Dictionary_2_Add_m1226049488(L_46, L_47, L_49, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_50 = __this->get__purchaseActinos_19();
		String_t* L_51 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_hammer_54();
		intptr_t L_52 = (intptr_t)WeaponManager_AddHammer_m1065716975_RuntimeMethod_var;
		Action_t1264377477 * L_53 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_53, __this, L_52, /*hidden argument*/NULL);
		NullCheck(L_50);
		Dictionary_2_Add_m1226049488(L_50, L_51, L_53, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_54 = __this->get__purchaseActinos_19();
		String_t* L_55 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_staff_56();
		intptr_t L_56 = (intptr_t)WeaponManager_AddStaff_m949763208_RuntimeMethod_var;
		Action_t1264377477 * L_57 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_57, __this, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Dictionary_2_Add_m1226049488(L_54, L_55, L_57, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_58 = __this->get__purchaseActinos_19();
		String_t* L_59 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_laser_57();
		intptr_t L_60 = (intptr_t)WeaponManager_AddLaser_m549971975_RuntimeMethod_var;
		Action_t1264377477 * L_61 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_61, __this, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Dictionary_2_Add_m1226049488(L_58, L_59, L_61, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_62 = __this->get__purchaseActinos_19();
		String_t* L_63 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_lightSword_59();
		intptr_t L_64 = (intptr_t)WeaponManager_AddLightSword_m1051082219_RuntimeMethod_var;
		Action_t1264377477 * L_65 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_65, __this, L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		Dictionary_2_Add_m1226049488(L_62, L_63, L_65, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_66 = __this->get__purchaseActinos_19();
		String_t* L_67 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_beretta_60();
		intptr_t L_68 = (intptr_t)WeaponManager_AddBeretta_m3812811887_RuntimeMethod_var;
		Action_t1264377477 * L_69 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_69, __this, L_68, /*hidden argument*/NULL);
		NullCheck(L_66);
		Dictionary_2_Add_m1226049488(L_66, L_67, L_69, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_70 = __this->get__purchaseActinos_19();
		String_t* L_71 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_mace_61();
		intptr_t L_72 = (intptr_t)WeaponManager_AddMace_m2968260438_RuntimeMethod_var;
		Action_t1264377477 * L_73 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_73, __this, L_72, /*hidden argument*/NULL);
		NullCheck(L_70);
		Dictionary_2_Add_m1226049488(L_70, L_71, L_73, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_74 = __this->get__purchaseActinos_19();
		String_t* L_75 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_crossbow_63();
		intptr_t L_76 = (intptr_t)WeaponManager_AddCrossbow_m4173362676_RuntimeMethod_var;
		Action_t1264377477 * L_77 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_77, __this, L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		Dictionary_2_Add_m1226049488(L_74, L_75, L_77, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		Dictionary_2_t1049633776 * L_78 = __this->get__purchaseActinos_19();
		String_t* L_79 = ((StoreKitEventListener_t3151468363_StaticFields*)il2cpp_codegen_static_fields_for(StoreKitEventListener_t3151468363_il2cpp_TypeInfo_var))->get_minigun_62();
		intptr_t L_80 = (intptr_t)WeaponManager_AddMinigun_m443211274_RuntimeMethod_var;
		Action_t1264377477 * L_81 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_81, __this, L_80, /*hidden argument*/NULL);
		NullCheck(L_78);
		Dictionary_2_Add_m1226049488(L_78, L_79, L_81, /*hidden argument*/Dictionary_2_Add_m1226049488_RuntimeMethod_var);
		GameObject_t1113636619 * L_82 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		bool L_83 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_83)
		{
			goto IL_0272;
		}
	}
	{
		intptr_t L_84 = (intptr_t)WeaponManager_AddWeapon_m3739412190_RuntimeMethod_var;
		Action_1_t2353251714 * L_85 = (Action_1_t2353251714 *)il2cpp_codegen_object_new(Action_1_t2353251714_il2cpp_TypeInfo_var);
		Action_1__ctor_m2637699291(L_85, __this, L_84, /*hidden argument*/Action_1__ctor_m2637699291_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleIABManager_t3625898194_il2cpp_TypeInfo_var);
		GoogleIABManager_add_purchaseSucceededEvent_m2797593167(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
	}

IL_0272:
	{
		ObjectU5BU5D_t1417781964* L_86 = WeaponManager_GetWeaponPrefabs_m971570581(__this, /*hidden argument*/NULL);
		__this->set__weaponsInGame_14(L_86);
		WeaponManager_Reset_m1150209106(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_02b0;
	}

IL_028b:
	{
		int32_t L_87 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
		ObjectU5BU5D_t1417781964* L_88 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		int32_t L_89 = V_0;
		int32_t L_90 = V_1;
		int32_t L_91 = L_90;
		RuntimeObject * L_92 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_91);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_93 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3373989363, L_92, /*hidden argument*/NULL);
		Object_t631007953 * L_94 = Resources_Load_m3880010804(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_94);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Object_t631007953 *)L_94);
		int32_t L_95 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_02b0:
	{
		int32_t L_96 = V_0;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)30))))
		{
			goto IL_028b;
		}
	}
	{
		ObjectU5BU5D_t1417781964* L_97 = WeaponManager_get_weaponsInGame_m3462245750(__this, /*hidden argument*/NULL);
		Object_t631007953 * L_98 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3984397021, /*hidden argument*/NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_98);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Object_t631007953 *)L_98);
		return;
	}
}
// System.Void WeaponManager::AddStaff()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddStaff_m949763208 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddStaff_m949763208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveStaffPrefs_m2461362389(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetStaffPrefab_m3154531876(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddLaser()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddLaser_m549971975 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddLaser_m549971975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveLaserRiflePrefs_m265629767(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetLaserRiflePrefab_m1890122545(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddGoldenAxe()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddGoldenAxe_m3289765478 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddGoldenAxe_m3289765478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveMGoldenAxeInPrefs_m368842993(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetAxePrefab_m1640247276(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddLightSword()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddLightSword_m1051082219 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddLightSword_m1051082219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveLightSwordInPrefs_m868619313(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetLightSwordPrefab_m3332159941(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddMace()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMace_m2968260438 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddMace_m2968260438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveMaceInPrefs_m3447060552(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetMacePrefab_m2206130233(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddCrossbow()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddCrossbow_m4173362676 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddCrossbow_m4173362676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveCrossbowInPrefs_m1189851882(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetCrossbowPrefab_m2110084666(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddMinigun()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMinigun_m443211274 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddMinigun_m443211274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveMinigunInPrefs_m2135716533(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetMinigunPrefab_m2283339191(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddBeretta()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddBeretta_m3812811887 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddBeretta_m3812811887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveBerettaInPrefs_m1940320266(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetBerettaPrefab_m4277481885(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddSPAS()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddSPAS_m204641602 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddSPAS_m204641602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveSPASInPrefs_m937429908(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetSPASPrefab_m536042736(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddChainsaw()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddChainsaw_m774115026 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddChainsaw_m774115026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveChainsawInPrefs_m3742142703(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetChainsawPrefab_m738668970(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddGlock()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddGlock_m413525425 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddGlock_m413525425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveGlockInPrefs_m426799757(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetGlockPrefab_m1509057101(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddFAMAS()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddFAMAS_m3976141324 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddFAMAS_m3976141324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveFAMASPrefs_m3082056497(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetFAMASPrefab_m769449454(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddScythe()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddScythe_m990556609 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddScythe_m990556609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveScytheInPrefs_m447281372(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetScythePrefab_m4069152087(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddShovel()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddShovel_m3092487190 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddShovel_m3092487190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveShovelPrefs_m917652690(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetShovelPrefab_m2835031729(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddSword_2()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddSword_2_m3702998587 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddSword_2_m3702998587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveSword_2_InPrefs_m3525120328(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetSword_2_Prefab_m3587141929(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddHammer()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddHammer_m1065716975 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddHammer_m1065716975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveHammerPrefs_m2123039118(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetHammerPrefab_m2557199588(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddMinerWeaponToInventoryAndSaveInApp()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMinerWeaponToInventoryAndSaveInApp_m2343157213 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddMinerWeaponToInventoryAndSaveInApp_m2343157213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveMinerWeaponInPrefabs_m1768795613(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetPickPrefab_m1591361075(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddSwordToInventoryAndSaveInApp()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddSwordToInventoryAndSaveInApp_m2737097039 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddSwordToInventoryAndSaveInApp_m2737097039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveSwordInPrefs_m3395515906(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetSwordPrefab_m1472854058(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddCombatRifle()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddCombatRifle_m3322214953 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddCombatRifle_m3322214953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveCombatRifleInPrefs_m249698024(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetCombatRiflePrefab_m2496607767(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddGoldenEagle()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddGoldenEagle_m2174282641 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddGoldenEagle_m2174282641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveGoldenEagleInPrefs_m3050790056(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetGoldenEaglePrefab_m2095640434(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddMagicBow()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMagicBow_m2544710047 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddMagicBow_m2544710047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Player_move_c_t367674069_il2cpp_TypeInfo_var);
		Player_move_c_SaveMagicBowInPrefs_m1372128475(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = WeaponManager_GetMagicBowPrefab_m250447049(__this, /*hidden argument*/NULL);
		WeaponManager_AddWeapon_m4003918992(__this, L_0, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::AddMinerWeapon(System.String)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddMinerWeapon_m2167009370 (WeaponManager_t1762453775 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_AddMinerWeapon_m2167009370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3454449607, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,WeaponManager_AddMinerWeapon_m2167009370_RuntimeMethod_var);
	}

IL_0011:
	{
		Dictionary_2_t1049633776 * L_2 = __this->get__purchaseActinos_19();
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_ContainsKey_m789394797(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m789394797_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t1049633776 * L_5 = __this->get__purchaseActinos_19();
		String_t* L_6 = ___id0;
		NullCheck(L_5);
		Action_t1264377477 * L_7 = Dictionary_2_get_Item_m3836654965(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3836654965_RuntimeMethod_var);
		NullCheck(L_7);
		Action_Invoke_m937035532(L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WeaponManager::AddWeapon(GooglePurchase)
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_AddWeapon_m3739412190 (WeaponManager_t1762453775 * __this, GooglePurchase_t2180784119 * ___p0, const RuntimeMethod* method)
{
	{
		GooglePurchase_t2180784119 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = GooglePurchase_get_productId_m3495448764(L_0, /*hidden argument*/NULL);
		WeaponManager_AddMinerWeapon_m2167009370(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_OnDestroy_m3720636030 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_OnDestroy_m3720636030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)WeaponManager_AddWeapon_m3739412190_RuntimeMethod_var;
		Action_1_t2353251714 * L_1 = (Action_1_t2353251714 *)il2cpp_codegen_object_new(Action_1_t2353251714_il2cpp_TypeInfo_var);
		Action_1__ctor_m2637699291(L_1, __this, L_0, /*hidden argument*/Action_1__ctor_m2637699291_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleIABManager_t3625898194_il2cpp_TypeInfo_var);
		GoogleIABManager_remove_purchaseSucceededEvent_m978184015(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponManager::Reload()
extern "C" IL2CPP_METHOD_ATTR void WeaponManager_Reload_m3434657586 (WeaponManager_t1762453775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponManager_Reload_m3434657586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		WeaponSounds_t105296586 * L_0 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = L_0->get_animationObject_14();
		NullCheck(L_1);
		Animation_t3648466861 * L_2 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_1, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_3 = WeaponManager_myCAnim_m3806326573(__this, _stringLiteral3159092532, /*hidden argument*/NULL);
		NullCheck(L_2);
		Animation_Stop_m126566212(L_2, L_3, /*hidden argument*/NULL);
		WeaponSounds_t105296586 * L_4 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = L_4->get_animationObject_14();
		NullCheck(L_5);
		Animation_t3648466861 * L_6 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_5, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_7 = WeaponManager_myCAnim_m3806326573(__this, _stringLiteral1198113798, /*hidden argument*/NULL);
		NullCheck(L_6);
		Animation_CrossFade_m2177301990(L_6, L_7, /*hidden argument*/NULL);
		WeaponSounds_t105296586 * L_8 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = L_8->get_animationObject_14();
		NullCheck(L_9);
		Animation_t3648466861 * L_10 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_9, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_11 = WeaponManager_myCAnim_m3806326573(__this, _stringLiteral1579837185, /*hidden argument*/NULL);
		NullCheck(L_10);
		Animation_Play_m27531216(L_10, L_11, /*hidden argument*/NULL);
		WeaponSounds_t105296586 * L_12 = WeaponManager_get_currentWeaponSounds_m4289826546(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ammoInClip_8();
		ArrayList_t2718874744 * L_14 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_14);
		RuntimeObject * L_16 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_16, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		int32_t L_17 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_16, Weapon_t4063826929_il2cpp_TypeInfo_var))->get_currentAmmoInClip_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_17));
		ArrayList_t2718874744 * L_18 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_18);
		RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_20, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		int32_t L_21 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_20, Weapon_t4063826929_il2cpp_TypeInfo_var))->get_currentAmmoInBackpack_1();
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_00f5;
		}
	}
	{
		ArrayList_t2718874744 * L_23 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_24 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_23);
		RuntimeObject * L_25 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_23, L_24);
		Weapon_t4063826929 * L_26 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_25, Weapon_t4063826929_il2cpp_TypeInfo_var));
		NullCheck(L_26);
		int32_t L_27 = L_26->get_currentAmmoInClip_2();
		int32_t L_28 = V_0;
		NullCheck(L_26);
		L_26->set_currentAmmoInClip_2(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)));
		ArrayList_t2718874744 * L_29 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_29);
		RuntimeObject * L_31 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_29, L_30);
		Weapon_t4063826929 * L_32 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_31, Weapon_t4063826929_il2cpp_TypeInfo_var));
		NullCheck(L_32);
		int32_t L_33 = L_32->get_currentAmmoInBackpack_1();
		int32_t L_34 = V_0;
		NullCheck(L_32);
		L_32->set_currentAmmoInBackpack_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34)));
		goto IL_014e;
	}

IL_00f5:
	{
		ArrayList_t2718874744 * L_35 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_36 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_35);
		RuntimeObject * L_37 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_35, L_36);
		Weapon_t4063826929 * L_38 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_37, Weapon_t4063826929_il2cpp_TypeInfo_var));
		NullCheck(L_38);
		int32_t L_39 = L_38->get_currentAmmoInClip_2();
		ArrayList_t2718874744 * L_40 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_41 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_40);
		RuntimeObject * L_42 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_40, L_41);
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_42, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		int32_t L_43 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_42, Weapon_t4063826929_il2cpp_TypeInfo_var))->get_currentAmmoInBackpack_1();
		NullCheck(L_38);
		L_38->set_currentAmmoInClip_2(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_43)));
		ArrayList_t2718874744 * L_44 = WeaponManager_get_playerWeapons_m669423090(__this, /*hidden argument*/NULL);
		int32_t L_45 = __this->get_CurrentWeaponIndex_16();
		NullCheck(L_44);
		RuntimeObject * L_46 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_44, L_45);
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_46, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_46, Weapon_t4063826929_il2cpp_TypeInfo_var))->set_currentAmmoInBackpack_1(0);
	}

IL_014e:
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
// Conversion methods for marshalling of: WeaponManager/infoClient
extern "C" void infoClient_t1397305942_marshal_pinvoke(const infoClient_t1397305942& unmarshaled, infoClient_t1397305942_marshaled_pinvoke& marshaled)
{
	marshaled.___ipAddress_0 = il2cpp_codegen_marshal_string(unmarshaled.get_ipAddress_0());
	marshaled.___name_1 = il2cpp_codegen_marshal_string(unmarshaled.get_name_1());
	marshaled.___coments_2 = il2cpp_codegen_marshal_string(unmarshaled.get_coments_2());
}
extern "C" void infoClient_t1397305942_marshal_pinvoke_back(const infoClient_t1397305942_marshaled_pinvoke& marshaled, infoClient_t1397305942& unmarshaled)
{
	unmarshaled.set_ipAddress_0(il2cpp_codegen_marshal_string_result(marshaled.___ipAddress_0));
	unmarshaled.set_name_1(il2cpp_codegen_marshal_string_result(marshaled.___name_1));
	unmarshaled.set_coments_2(il2cpp_codegen_marshal_string_result(marshaled.___coments_2));
}
// Conversion method for clean up from marshalling of: WeaponManager/infoClient
extern "C" void infoClient_t1397305942_marshal_pinvoke_cleanup(infoClient_t1397305942_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ipAddress_0);
	marshaled.___ipAddress_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___name_1);
	marshaled.___name_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___coments_2);
	marshaled.___coments_2 = NULL;
}
// Conversion methods for marshalling of: WeaponManager/infoClient
extern "C" void infoClient_t1397305942_marshal_com(const infoClient_t1397305942& unmarshaled, infoClient_t1397305942_marshaled_com& marshaled)
{
	marshaled.___ipAddress_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ipAddress_0());
	marshaled.___name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_1());
	marshaled.___coments_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_coments_2());
}
extern "C" void infoClient_t1397305942_marshal_com_back(const infoClient_t1397305942_marshaled_com& marshaled, infoClient_t1397305942& unmarshaled)
{
	unmarshaled.set_ipAddress_0(il2cpp_codegen_marshal_bstring_result(marshaled.___ipAddress_0));
	unmarshaled.set_name_1(il2cpp_codegen_marshal_bstring_result(marshaled.___name_1));
	unmarshaled.set_coments_2(il2cpp_codegen_marshal_bstring_result(marshaled.___coments_2));
}
// Conversion method for clean up from marshalling of: WeaponManager/infoClient
extern "C" void infoClient_t1397305942_marshal_com_cleanup(infoClient_t1397305942_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ipAddress_0);
	marshaled.___ipAddress_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_1);
	marshaled.___name_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___coments_2);
	marshaled.___coments_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponsComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponsComparer__ctor_m958703356 (WeaponsComparer_t4255210887 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WeaponsComparer::Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t WeaponsComparer_Compare_m3053565803 (WeaponsComparer_t4255210887 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponsComparer_Compare_m3053565803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject * L_0 = ___x0;
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_0, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		GameObject_t1113636619 * L_1 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_0, Weapon_t4063826929_il2cpp_TypeInfo_var))->get_weaponPrefab_0();
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject * L_3 = ___y1;
		NullCheck(((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_3, Weapon_t4063826929_il2cpp_TypeInfo_var)));
		GameObject_t1113636619 * L_4 = ((Weapon_t4063826929 *)CastclassClass((RuntimeObject*)L_3, Weapon_t4063826929_il2cpp_TypeInfo_var))->get_weaponPrefab_0();
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral1550659595, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_7 = ((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->get_multiplayerWeaponsOrd_1();
		String_t* L_8 = V_1;
		int32_t L_9 = Array_IndexOf_TisString_t_m3727315756(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/Array_IndexOf_TisString_t_m3727315756_RuntimeMethod_var);
		V_2 = L_9;
		StringU5BU5D_t1281789340* L_10 = ((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->get_multiplayerWeaponsOrd_1();
		String_t* L_11 = V_0;
		int32_t L_12 = Array_IndexOf_TisString_t_m3727315756(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/Array_IndexOf_TisString_t_m3727315756_RuntimeMethod_var);
		int32_t L_13 = Int32_CompareTo_m4284770383((&V_2), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0052:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var);
		int32_t L_15 = ((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->get_baseLngth_0();
		NullCheck(L_14);
		String_t* L_16 = String_Substring_m2848979100(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_1;
		int32_t L_18 = ((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->get_baseLngth_0();
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2848979100(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		String_t* L_20 = V_0;
		int32_t L_21 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		String_t* L_22 = V_1;
		int32_t L_23 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
	}
}
// System.Void WeaponsComparer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponsComparer__cctor_m2579786819 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponsComparer__cctor_m2579786819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck(_stringLiteral3059002535);
		int32_t L_0 = String_get_Length_m3847582255(_stringLiteral3059002535, /*hidden argument*/NULL);
		((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->set_baseLngth_0(L_0);
		StringU5BU5D_t1281789340* L_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3913598698);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3913598698);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1184715343);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1184715343);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2750799284);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2750799284);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4269829058);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4269829058);
		StringU5BU5D_t1281789340* L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(WeaponManager_t1762453775_il2cpp_TypeInfo_var);
		String_t* L_6 = WeaponManager_get_GoldenEagleWeaponName_m1120865988(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = L_5;
		String_t* L_8 = WeaponManager_get_BerettaWN_m872803409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_8);
		StringU5BU5D_t1281789340* L_9 = L_7;
		String_t* L_10 = WeaponManager_get_GlockWN_m326926806(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_10);
		StringU5BU5D_t1281789340* L_11 = L_9;
		String_t* L_12 = WeaponManager_get_CombatRifleWeaponName_m1295803920(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		StringU5BU5D_t1281789340* L_13 = L_11;
		String_t* L_14 = WeaponManager_get_MinigunWN_m3839728566(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		String_t* L_16 = WeaponManager_get_SpasWeaponName_m2154833812(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_16);
		StringU5BU5D_t1281789340* L_17 = L_15;
		String_t* L_18 = WeaponManager_get_FAMASWN_m419502995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_18);
		StringU5BU5D_t1281789340* L_19 = L_17;
		String_t* L_20 = WeaponManager_get_MagicBowWeaponName_m3487257396(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_20);
		StringU5BU5D_t1281789340* L_21 = L_19;
		String_t* L_22 = WeaponManager_get_LaserRifleWN_m92723408(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_22);
		StringU5BU5D_t1281789340* L_23 = L_21;
		String_t* L_24 = WeaponManager_get_LightSwordWN_m405515106(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_24);
		StringU5BU5D_t1281789340* L_25 = L_23;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3510314171);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3510314171);
		StringU5BU5D_t1281789340* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral781430816);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral781430816);
		StringU5BU5D_t1281789340* L_27 = L_26;
		String_t* L_28 = WeaponManager_get_GoldenAxeWeaponnName_m3989543615(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)L_28);
		StringU5BU5D_t1281789340* L_29 = L_27;
		String_t* L_30 = WeaponManager_get_ChainsawWN_m2959097056(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_29;
		String_t* L_32 = WeaponManager_get_ScytheWN_m2686880199(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_32);
		StringU5BU5D_t1281789340* L_33 = L_31;
		String_t* L_34 = WeaponManager_get_MaceWN_m1604268619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_34);
		StringU5BU5D_t1281789340* L_35 = L_33;
		String_t* L_36 = WeaponManager_get_ShovelWN_m4277715065(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)L_36);
		StringU5BU5D_t1281789340* L_37 = L_35;
		String_t* L_38 = WeaponManager_get_CrossbowWN_m1140501696(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_38);
		StringU5BU5D_t1281789340* L_39 = L_37;
		String_t* L_40 = WeaponManager_get_Sword_2_WN_m3042372647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)L_40);
		StringU5BU5D_t1281789340* L_41 = L_39;
		String_t* L_42 = WeaponManager_get_HammerWN_m1436230627(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_42);
		StringU5BU5D_t1281789340* L_43 = L_41;
		String_t* L_44 = WeaponManager_get_StaffWN_m1075261091(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)L_44);
		((WeaponsComparer_t4255210887_StaticFields*)il2cpp_codegen_static_fields_for(WeaponsComparer_t4255210887_il2cpp_TypeInfo_var))->set_multiplayerWeaponsOrd_1(L_43);
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
// System.Void WeaponSounds::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeaponSounds__ctor_m2694092377 (WeaponSounds_t105296586 * __this, const RuntimeMethod* method)
{
	{
		__this->set_InitialAmmo_7(((int32_t)24));
		__this->set_ammoInClip_8(((int32_t)12));
		__this->set_maxAmmo_9(((int32_t)84));
		__this->set_range_11((3.0f));
		__this->set_damage_12(((int32_t)50));
		__this->set_speedModifier_13((1.0f));
		__this->set_Probability_15(1);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (-15.0f), (15.0f), /*hidden argument*/NULL);
		__this->set_damageRange_16(L_0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.35f), (-0.25f), (0.6f), /*hidden argument*/NULL);
		__this->set_gunPosition_17(L_1);
		__this->set_inAppExtensionModifier_19(((int32_t)10));
		__this->set_meleeAngle_20((45.0f));
		__this->set_multiplayerDamage_21((1.0f));
		__this->set_meleeAttackTimeModifier_22((0.57f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WeaponSounds::get_MaxAmmoWithRespectToInApp()
extern "C" IL2CPP_METHOD_ATTR int32_t WeaponSounds_get_MaxAmmoWithRespectToInApp_m2386138981 (WeaponSounds_t105296586 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxAmmo_9();
		return L_0;
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
// System.Void WebViewStarter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebViewStarter__ctor_m176727277 (WebViewStarter_t2221011868 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// WebViewObject WebViewStarter::StartBrowser(System.String)
extern "C" IL2CPP_METHOD_ATTR WebViewObject_t110525398 * WebViewStarter_StartBrowser_m3740443725 (RuntimeObject * __this /* static, unused */, String_t* ___Url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewStarter_StartBrowser_m3740443725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebViewObject_t110525398 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral3400668300, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebViewObject_t110525398 * L_1 = GameObject_AddComponent_TisWebViewObject_t110525398_m2285099848(L_0, /*hidden argument*/GameObject_AddComponent_TisWebViewObject_t110525398_m2285099848_RuntimeMethod_var);
		V_0 = L_1;
		Action_1_t2019918284 * L_2 = ((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->get__003C_003Ef__am_0024cache0_0();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		Action_1_t2019918284 * L_3 = ((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		intptr_t L_4 = (intptr_t)WebViewStarter__003CStartBrowser_003Em__25_m809913710_RuntimeMethod_var;
		Action_1_t2019918284 * L_5 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4099869023(L_5, NULL, L_4, /*hidden argument*/Action_1__ctor_m4099869023_RuntimeMethod_var);
		((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_5);
	}

IL_0032:
	{
		Action_1_t2019918284 * L_6 = ((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->set__003C_003Ef__am_0024cache0_0(L_6);
	}

IL_003c:
	{
		WebViewObject_t110525398 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = ((WebViewStarter_t2221011868_StaticFields*)il2cpp_codegen_static_fields_for(WebViewStarter_t2221011868_il2cpp_TypeInfo_var))->get__003C_003Ef__am_0024cache0_0();
		NullCheck(L_7);
		WebViewObject_Init_m4278364764(L_7, L_8, /*hidden argument*/NULL);
		WebViewObject_t110525398 * L_9 = V_0;
		String_t* L_10 = ___Url0;
		NullCheck(L_9);
		WebViewObject_LoadURL_m84799980(L_9, L_10, /*hidden argument*/NULL);
		WebViewObject_t110525398 * L_11 = V_0;
		NullCheck(L_11);
		WebViewObject_SetVisibility_m207219664(L_11, (bool)1, /*hidden argument*/NULL);
		int32_t L_12 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_007a;
		}
	}

IL_006f:
	{
		WebViewObject_t110525398 * L_16 = V_0;
		NullCheck(L_16);
		WebViewObject_EvaluateJS_m615691215(L_16, _stringLiteral1838291095, /*hidden argument*/NULL);
	}

IL_007a:
	{
		WebViewObject_t110525398 * L_17 = V_0;
		NullCheck(L_17);
		WebViewObject_EvaluateJS_m615691215(L_17, _stringLiteral465198619, /*hidden argument*/NULL);
		WebViewObject_t110525398 * L_18 = V_0;
		return L_18;
	}
}
// System.Void WebViewStarter::_003CStartBrowser_003Em__25(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebViewStarter__003CStartBrowser_003Em__25_m809913710 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewStarter__003CStartBrowser_003Em__25_m809913710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1470094735, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void ZeichenKraftwerk.Rotator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rotator__ctor_m2542428127 (Rotator_t2834280094 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_eulersPerSecond_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZeichenKraftwerk.Rotator::Start()
extern "C" IL2CPP_METHOD_ATTR void Rotator_Start_m1244798271 (Rotator_t2834280094 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_myTransform_3(L_0);
		return;
	}
}
// System.Void ZeichenKraftwerk.Rotator::Update()
extern "C" IL2CPP_METHOD_ATTR void Rotator_Update_m4243822121 (Rotator_t2834280094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_Update_m4243822121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_myTransform_3();
		Vector3_t3722313464  L_1 = __this->get_eulersPerSecond_2();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_3, /*hidden argument*/NULL);
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
// System.Void ZombieCreator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator__ctor_m2802616556 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator__ctor_m2802616556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m463784026(L_0, /*hidden argument*/List_1__ctor_m463784026_RuntimeMethod_var);
		__this->set_zombiePrefabs_4(L_0);
		__this->set_curInterval_9((10.0f));
		List_1_t2753864082 * L_1 = (List_1_t2753864082 *)il2cpp_codegen_object_new(List_1_t2753864082_il2cpp_TypeInfo_var);
		List_1__ctor_m909264078(L_1, /*hidden argument*/List_1__ctor_m909264078_RuntimeMethod_var);
		__this->set__enemies_11(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ZombieCreator::get_NumOfLiveZombies()
extern "C" IL2CPP_METHOD_ATTR int32_t ZombieCreator_get_NumOfLiveZombies_m951669513 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__numOfLiveZombies_6();
		return L_0;
	}
}
// System.Void ZombieCreator::set_NumOfLiveZombies(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_set_NumOfLiveZombies_m587366575 (ZombieCreator_t3776728246 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__numOfLiveZombies_6(L_0);
		return;
	}
}
// System.Int32 ZombieCreator::get_NumOfDeadZombies()
extern "C" IL2CPP_METHOD_ATTR int32_t ZombieCreator_get_NumOfDeadZombies_m3641787925 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__numOfDeadZombies_7();
		return L_0;
	}
}
// System.Void ZombieCreator::set_NumOfDeadZombies(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_set_NumOfDeadZombies_m2592177585 (ZombieCreator_t3776728246 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator_set_NumOfDeadZombies_m2592177585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObjectU5BU5D_t3328599146* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObjectU5BU5D_t3328599146* V_5 = NULL;
	GameObject_t1113636619 * V_6 = NULL;
	GameObjectU5BU5D_t3328599146* V_7 = NULL;
	int32_t V_8 = 0;
	{
		bool L_0 = __this->get_bossShowm_3();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_bossShowm_3((bool)0);
		GameObjectU5BU5D_t3328599146* L_1 = __this->get__teleports_2();
		V_0 = L_1;
		GameObjectU5BU5D_t3328599146* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0031;
	}

IL_0022:
	{
		GameObjectU5BU5D_t3328599146* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t1113636619 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		GameObject_t1113636619 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_3;
		GameObjectU5BU5D_t3328599146* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_003b:
	{
		int32_t L_11 = ___value0;
		int32_t L_12 = __this->get__numOfDeadZombies_7();
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
		int32_t L_13 = ___value0;
		__this->set__numOfDeadZombies_7(L_13);
		int32_t L_14 = ZombieCreator_get_NumOfLiveZombies_m951669513(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_4;
		ZombieCreator_set_NumOfLiveZombies_m587366575(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		int32_t L_16 = __this->get__numOfDeadZombsSinceLastFast_8();
		int32_t L_17 = V_4;
		__this->set__numOfDeadZombsSinceLastFast_8(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)));
		int32_t L_18 = __this->get__numOfDeadZombsSinceLastFast_8();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_19 = __this->get_curInterval_9();
		if ((!(((float)L_19) > ((float)(5.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		float L_20 = __this->get_curInterval_9();
		__this->set_curInterval_9(((float)il2cpp_codegen_subtract((float)L_20, (float)(5.0f))));
	}

IL_0099:
	{
		__this->set__numOfDeadZombsSinceLastFast_8(0);
	}

IL_00a0:
	{
		int32_t L_21 = __this->get__numOfDeadZombies_7();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_22 = GlobalGameController_get_EnemiesToKill_m946529693(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_23 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_24 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Item_m1363558904(L_24, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_00ff;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_26 = __this->get__teleports_2();
		V_5 = L_26;
		GameObjectU5BU5D_t3328599146* L_27 = V_5;
		V_7 = L_27;
		V_8 = 0;
		goto IL_00ef;
	}

IL_00da:
	{
		GameObjectU5BU5D_t3328599146* L_28 = V_7;
		int32_t L_29 = V_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		GameObject_t1113636619 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_6 = L_31;
		GameObject_t1113636619 * L_32 = V_6;
		NullCheck(L_32);
		GameObject_SetActive_m796801857(L_32, (bool)1, /*hidden argument*/NULL);
		int32_t L_33 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ef:
	{
		int32_t L_34 = V_8;
		GameObjectU5BU5D_t3328599146* L_35 = V_7;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0105;
	}

IL_00ff:
	{
		ZombieCreator__createBoss_m3329339339(__this, /*hidden argument*/NULL);
	}

IL_0105:
	{
		return;
	}
}
// System.Void ZombieCreator::Awake()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_Awake_m2687851732 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator_Awake_m2687851732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t1113636619 * V_5 = NULL;
	StringU5BU5D_t1281789340* G_B4_0 = NULL;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1550659595, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0318;
		}
	}
	{
		List_1_t2753864082 * L_1 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_2 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3452614543);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3452614543);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3451500431);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451500431);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3451434895);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451434895);
		StringU5BU5D_t1281789340* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3451369359);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3451369359);
		NullCheck(L_1);
		List_1_Add_m3968569714(L_1, L_7, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_8 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_9 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3452614543);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3452614542);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3452614541);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3451565967);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451565967);
		StringU5BU5D_t1281789340* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3451303823);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451303823);
		NullCheck(L_8);
		List_1_Add_m3968569714(L_8, L_13, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_14 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_15 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)8));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3452614543);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3452614542);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3452614541);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614551);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3451565967);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451565967);
		StringU5BU5D_t1281789340* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3451434895);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3451434895);
		StringU5BU5D_t1281789340* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral3451303823);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3451303823);
		StringU5BU5D_t1281789340* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3451238287);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3451238287);
		NullCheck(L_14);
		List_1_Add_m3968569714(L_14, L_22, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_23 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_24 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3452614543);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3452614542);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral3452614540);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3451500431);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451500431);
		StringU5BU5D_t1281789340* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral3452614551);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral3451172751);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3451172751);
		NullCheck(L_23);
		List_1_Add_m3968569714(L_23, L_29, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_30 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_31 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3452614543);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral3452614542);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral3452614540);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral3452614551);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3451500431);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451500431);
		StringU5BU5D_t1281789340* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral3451565967);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3451565967);
		StringU5BU5D_t1281789340* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral3451434895);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3451434895);
		NullCheck(L_30);
		List_1_Add_m3968569714(L_30, L_37, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_38 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_39 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral3452614543);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral3452614542);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral3452614541);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3452614551);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral3451107215);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451107215);
		NullCheck(L_38);
		List_1_Add_m3968569714(L_38, L_43, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_44 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_45 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral3452614538);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral3452614537);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral3452614537);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614537);
		NullCheck(L_44);
		List_1_Add_m3968569714(L_44, L_47, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_48 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_49 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral3452614543);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral3452614542);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral3452614552);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3451565967);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451565967);
		StringU5BU5D_t1281789340* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral3451500431);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451500431);
		StringU5BU5D_t1281789340* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral3451434895);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3451434895);
		NullCheck(L_48);
		List_1_Add_m3968569714(L_48, L_54, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_55 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_56 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral3452090255);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452090255);
		StringU5BU5D_t1281789340* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral3452024719);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452024719);
		StringU5BU5D_t1281789340* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral3451565966);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3451565966);
		NullCheck(L_55);
		List_1_Add_m3968569714(L_55, L_58, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_59 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_60 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteral3451500430);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3451500430);
		StringU5BU5D_t1281789340* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral3451434894);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3451434894);
		StringU5BU5D_t1281789340* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteral3451369358);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3451369358);
		StringU5BU5D_t1281789340* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral3451303822);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451303822);
		StringU5BU5D_t1281789340* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral3451238286);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451238286);
		NullCheck(L_59);
		List_1_Add_m3968569714(L_59, L_64, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		List_1_t2753864082 * L_65 = __this->get__enemies_11();
		StringU5BU5D_t1281789340* L_66 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral3452090255);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452090255);
		StringU5BU5D_t1281789340* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral3452024719);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452024719);
		StringU5BU5D_t1281789340* L_68 = L_67;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral3451565966);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3451565966);
		NullCheck(L_65);
		List_1_Add_m3968569714(L_65, L_68, /*hidden argument*/List_1_Add_m3968569714_RuntimeMethod_var);
		V_0 = (StringU5BU5D_t1281789340*)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_69 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_70 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_70);
		int32_t L_71 = List_1_get_Item_m1363558904(L_70, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		if ((((int32_t)L_69) == ((int32_t)L_71)))
		{
			goto IL_02bf;
		}
	}
	{
		List_1_t2753864082 * L_72 = __this->get__enemies_11();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_73 = GlobalGameController_get_previousLevel_m1363325466(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_72);
		StringU5BU5D_t1281789340* L_74 = List_1_get_Item_m3286979944(L_72, L_73, /*hidden argument*/List_1_get_Item_m3286979944_RuntimeMethod_var);
		G_B4_0 = L_74;
		goto IL_02cd;
	}

IL_02bf:
	{
		StringU5BU5D_t1281789340* L_75 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral3452614543);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		G_B4_0 = L_75;
	}

IL_02cd:
	{
		V_0 = G_B4_0;
		StringU5BU5D_t1281789340* L_76 = V_0;
		V_1 = L_76;
		StringU5BU5D_t1281789340* L_77 = V_1;
		V_3 = L_77;
		V_4 = 0;
		goto IL_030e;
	}

IL_02da:
	{
		StringU5BU5D_t1281789340* L_78 = V_3;
		int32_t L_79 = V_4;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		String_t* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_2 = L_81;
		String_t* L_82 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_83 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2091790128, L_82, _stringLiteral2506032608, /*hidden argument*/NULL);
		Object_t631007953 * L_84 = Resources_Load_m3880010804(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		V_5 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_84, GameObject_t1113636619_il2cpp_TypeInfo_var));
		List_1_t2585711361 * L_85 = __this->get_zombiePrefabs_4();
		GameObject_t1113636619 * L_86 = V_5;
		NullCheck(L_85);
		List_1_Add_m4119991052(L_85, L_86, /*hidden argument*/List_1_Add_m4119991052_RuntimeMethod_var);
		int32_t L_87 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_030e:
	{
		int32_t L_88 = V_4;
		StringU5BU5D_t1281789340* L_89 = V_3;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_89)->max_length)))))))
		{
			goto IL_02da;
		}
	}

IL_0318:
	{
		return;
	}
}
// System.Void ZombieCreator::Start()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_Start_m2270072244 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator_Start_m2270072244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObjectU5BU5D_t3328599146* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1550659595, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}
	{
		__this->set__isMultiplayer_5((bool)1);
		goto IL_0023;
	}

IL_001c:
	{
		__this->set__isMultiplayer_5((bool)0);
	}

IL_0023:
	{
		GameObjectU5BU5D_t3328599146* L_1 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral19716277, /*hidden argument*/NULL);
		__this->set__teleports_2(L_1);
		GameObjectU5BU5D_t3328599146* L_2 = __this->get__teleports_2();
		V_0 = L_2;
		GameObjectU5BU5D_t3328599146* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0072;
	}

IL_0043:
	{
		GameObjectU5BU5D_t3328599146* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t1113636619 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_8 = GlobalGameController_get_AllLevelsCompleted_m723468905(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_9 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_10 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Item_m1363558904(L_10, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_006e;
		}
	}

IL_0067:
	{
		GameObject_t1113636619 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_006e:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_14 = V_3;
		GameObjectU5BU5D_t3328599146* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_16 = __this->get__isMultiplayer_5();
		if (L_16)
		{
			goto IL_00b9;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_17 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral1887046119, /*hidden argument*/NULL);
		__this->set__enemyCreationZones_10(L_17);
		float L_18 = __this->get_curInterval_9();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_19 = GlobalGameController_get_AllLevelsCompleted_m723468905(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Max_m3146388979(NULL /*static, unused*/, (1.0f), ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_19))))))), /*hidden argument*/NULL);
		__this->set_curInterval_9(L_20);
	}

IL_00b9:
	{
		return;
	}
}
// System.Void ZombieCreator::BeganCreateEnemies()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_BeganCreateEnemies_m1018381714 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ZombieCreator_AddZombies_m2537486331(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombieCreator::Update()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator_Update_m921045416 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator ZombieCreator::AddZombies()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombieCreator_AddZombies_m2537486331 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator_AddZombies_m2537486331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddZombiesU3Ec__Iterator0_t813183650 * V_0 = NULL;
	{
		U3CAddZombiesU3Ec__Iterator0_t813183650 * L_0 = (U3CAddZombiesU3Ec__Iterator0_t813183650 *)il2cpp_codegen_object_new(U3CAddZombiesU3Ec__Iterator0_t813183650_il2cpp_TypeInfo_var);
		U3CAddZombiesU3Ec__Iterator0__ctor_m5804719(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddZombiesU3Ec__Iterator0_t813183650 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_4(__this);
		U3CAddZombiesU3Ec__Iterator0_t813183650 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 ZombieCreator::_createPos(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ZombieCreator__createPos_m1145009354 (ZombieCreator_t3776728246 * __this, GameObject_t1113636619 * ___spawnZone0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator__createPos_m1145009354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider_t1640800422 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Rect_t2360479859  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	List_1_t128053199 * G_B2_0 = NULL;
	float G_B2_1 = 0.0f;
	Vector3_t3722313464 * G_B2_2 = NULL;
	List_1_t128053199 * G_B1_0 = NULL;
	float G_B1_1 = 0.0f;
	Vector3_t3722313464 * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	List_1_t128053199 * G_B3_1 = NULL;
	float G_B3_2 = 0.0f;
	Vector3_t3722313464 * G_B3_3 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t3722313464 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector3_t3722313464 * G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector3_t3722313464 * G_B6_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___spawnZone0;
		NullCheck(L_0);
		BoxCollider_t1640800422 * L_1 = GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221(L_0, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221_RuntimeMethod_var);
		V_0 = L_1;
		BoxCollider_t1640800422 * L_2 = V_0;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = BoxCollider_get_size_m1798011124(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_1();
		GameObject_t1113636619 * L_5 = ___spawnZone0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_localScale_m129152068(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_x_1();
		BoxCollider_t1640800422 * L_9 = V_0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = BoxCollider_get_size_m1798011124(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_z_3();
		GameObject_t1113636619 * L_12 = ___spawnZone0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_localScale_m129152068(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_z_3();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_15)), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = ___spawnZone0;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		float L_19 = (&V_7)->get_x_1();
		float L_20 = (&V_1)->get_x_0();
		GameObject_t1113636619 * L_21 = ___spawnZone0;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		float L_24 = (&V_8)->get_z_3();
		float L_25 = (&V_1)->get_y_1();
		float L_26 = (&V_1)->get_x_0();
		float L_27 = (&V_1)->get_y_1();
		Rect__ctor_m2614021312((&V_6), ((float)il2cpp_codegen_subtract((float)L_19, (float)((float)((float)L_20/(float)(2.0f))))), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_25/(float)(2.0f))))), L_26, L_27, /*hidden argument*/NULL);
		float L_28 = Rect_get_x_m3839990490((&V_6), /*hidden argument*/NULL);
		float L_29 = Rect_get_width_m3421484486((&V_6), /*hidden argument*/NULL);
		float L_30 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
		List_1_t128053199 * L_31 = ((Defs_t3298467154_StaticFields*)il2cpp_codegen_static_fields_for(Defs_t3298467154_il2cpp_TypeInfo_var))->get_levelsWithVarY_2();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_32 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_33 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Item_m1363558904(L_33, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		G_B1_0 = L_31;
		G_B1_1 = ((float)il2cpp_codegen_add((float)L_28, (float)L_30));
		G_B1_2 = (&V_9);
		if ((((int32_t)L_32) == ((int32_t)L_34)))
		{
			G_B2_0 = L_31;
			G_B2_1 = ((float)il2cpp_codegen_add((float)L_28, (float)L_30));
			G_B2_2 = (&V_9);
			goto IL_00ee;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_35 = GlobalGameController_get_previousLevel_m1363325466(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_00ef:
	{
		NullCheck(G_B3_1);
		bool L_36 = List_1_Contains_m2263725670(G_B3_1, G_B3_0, /*hidden argument*/List_1_Contains_m2263725670_RuntimeMethod_var);
		G_B4_0 = G_B3_2;
		G_B4_1 = G_B3_3;
		if (L_36)
		{
			G_B5_0 = G_B3_2;
			G_B5_1 = G_B3_3;
			goto IL_0103;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0117;
	}

IL_0103:
	{
		GameObject_t1113636619 * L_37 = ___spawnZone0;
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t3722313464  L_39 = Transform_get_position_m36019626(L_38, /*hidden argument*/NULL);
		V_10 = L_39;
		float L_40 = (&V_10)->get_y_2();
		G_B6_0 = L_40;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0117:
	{
		float L_41 = Rect_get_y_m1501338330((&V_6), /*hidden argument*/NULL);
		float L_42 = Rect_get_height_m1358425599((&V_6), /*hidden argument*/NULL);
		float L_43 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), L_42, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577(G_B6_2, G_B6_1, G_B6_0, ((float)il2cpp_codegen_add((float)L_41, (float)L_43)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_44 = V_9;
		return L_44;
	}
}
// System.Void ZombieCreator::_createBoss()
extern "C" IL2CPP_METHOD_ATTR void ZombieCreator__createBoss_m3329339339 (ZombieCreator_t3776728246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieCreator__createBoss_m3329339339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	float V_1 = 0.0f;
	GameObject_t1113636619 * V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	GameObject_t1113636619 * V_4 = NULL;
	GameObjectU5BU5D_t3328599146* V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	String_t* V_12 = NULL;
	GameObject_t1113636619 * V_13 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	String_t* G_B14_1 = NULL;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		V_1 = (std::numeric_limits<float>::infinity());
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		V_2 = L_0;
		GameObject_t1113636619 * L_1 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		GameObjectU5BU5D_t3328599146* L_3 = __this->get__enemyCreationZones_10();
		V_3 = L_3;
		GameObjectU5BU5D_t3328599146* L_4 = V_3;
		V_5 = L_4;
		V_6 = 0;
		goto IL_00b3;
	}

IL_0031:
	{
		GameObjectU5BU5D_t3328599146* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t1113636619 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		GameObject_t1113636619 * L_9 = V_2;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_4;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_15 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		GameObject_t1113636619 * L_16 = V_2;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = (&V_9)->get_y_2();
		GameObject_t1113636619 * L_20 = V_4;
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_10 = L_22;
		float L_23 = (&V_10)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_24 = fabsf(((float)il2cpp_codegen_subtract((float)L_19, (float)L_23)));
		V_8 = L_24;
		float L_25 = V_7;
		if ((!(((float)L_25) > ((float)(15.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		float L_26 = V_7;
		float L_27 = V_1;
		if ((!(((float)L_26) < ((float)L_27))))
		{
			goto IL_00ad;
		}
	}
	{
		float L_28 = V_8;
		if ((!(((float)L_28) < ((float)(2.5f)))))
		{
			goto IL_00ad;
		}
	}
	{
		float L_29 = V_7;
		V_1 = L_29;
		GameObject_t1113636619 * L_30 = V_4;
		V_0 = L_30;
	}

IL_00ad:
	{
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_32 = V_6;
		GameObjectU5BU5D_t3328599146* L_33 = V_5;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		GameObject_t1113636619 * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00d2;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_36 = __this->get__enemyCreationZones_10();
		NullCheck(L_36);
		int32_t L_37 = 0;
		GameObject_t1113636619 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = L_38;
	}

IL_00d2:
	{
		GameObject_t1113636619 * L_39 = V_0;
		Vector3_t3722313464  L_40 = ZombieCreator__createPos_m1145009354(__this, L_39, /*hidden argument*/NULL);
		V_11 = L_40;
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_41 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_42 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_42);
		int32_t L_43 = List_1_get_Item_m1363558904(L_42, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		G_B12_0 = _stringLiteral1984859785;
		if ((((int32_t)L_41) == ((int32_t)L_43)))
		{
			G_B13_0 = _stringLiteral1984859785;
			goto IL_0101;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_44 = GlobalGameController_get_previousLevel_m1363325466(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		G_B14_1 = G_B12_0;
		goto IL_0102;
	}

IL_0101:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_0102:
	{
		int32_t L_45 = G_B14_0;
		RuntimeObject * L_46 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_45);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m904156431(NULL /*static, unused*/, G_B14_1, L_46, /*hidden argument*/NULL);
		V_12 = L_47;
		String_t* L_48 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_49 = Path_Combine_m3389272516(NULL /*static, unused*/, _stringLiteral791825090, L_48, /*hidden argument*/NULL);
		Object_t631007953 * L_50 = Resources_Load_m3880010804(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		V_13 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_50, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_51 = V_13;
		Vector3_t3722313464  L_52 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_53 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		__this->set_bossShowm_3((bool)1);
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
// System.Void ZombieCreator/<AddZombies>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAddZombiesU3Ec__Iterator0__ctor_m5804719 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZombieCreator/<AddZombies>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CAddZombiesU3Ec__Iterator0_MoveNext_m899883553 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAddZombiesU3Ec__Iterator0_MoveNext_m899883553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	U3CAddZombiesU3Ec__Iterator0_t813183650 * G_B5_0 = NULL;
	U3CAddZombiesU3Ec__Iterator0_t813183650 * G_B4_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	U3CAddZombiesU3Ec__Iterator0_t813183650 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0178;
			}
		}
	}
	{
		goto IL_01a0;
	}

IL_0021:
	{
		__this->set_U3ChalfLLengthU3E__0_0((17.0f));
		__this->set_U3CradiusU3E__0_1((2.5f));
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_2 = GlobalGameController_get_ZombiesInWave_m1550326451(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CnumOfZombsToAdd3U3E__1_2(L_2);
		int32_t L_3 = __this->get_U3CnumOfZombsToAdd3U3E__1_2();
		int32_t L_4 = GlobalGameController_get_SimultaneousEnemiesOnLevelConstraint_m719220001(NULL /*static, unused*/, /*hidden argument*/NULL);
		ZombieCreator_t3776728246 * L_5 = __this->get_U24this_4();
		NullCheck(L_5);
		int32_t L_6 = ZombieCreator_get_NumOfLiveZombies_m951669513(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_7 = Mathf_Min_m18103608(NULL /*static, unused*/, L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_6)), /*hidden argument*/NULL);
		__this->set_U3CnumOfZombsToAdd3U3E__1_2(L_7);
		int32_t L_8 = __this->get_U3CnumOfZombsToAdd3U3E__1_2();
		int32_t L_9 = GlobalGameController_get_EnemiesToKill_m946529693(NULL /*static, unused*/, /*hidden argument*/NULL);
		ZombieCreator_t3776728246 * L_10 = __this->get_U24this_4();
		NullCheck(L_10);
		int32_t L_11 = ZombieCreator_get_NumOfDeadZombies_m3641787925(L_10, /*hidden argument*/NULL);
		ZombieCreator_t3776728246 * L_12 = __this->get_U24this_4();
		NullCheck(L_12);
		int32_t L_13 = ZombieCreator_get_NumOfLiveZombies_m951669513(L_12, /*hidden argument*/NULL);
		int32_t L_14 = Mathf_Min_m18103608(NULL /*static, unused*/, L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_13)))), /*hidden argument*/NULL);
		__this->set_U3CnumOfZombsToAdd3U3E__1_2(L_14);
		__this->set_U3Cenemies_2U3E__1_3((StringU5BU5D_t1281789340*)NULL);
		int32_t L_15 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_16 = ((GlobalGameController_t4187904607_StaticFields*)il2cpp_codegen_static_fields_for(GlobalGameController_t4187904607_il2cpp_TypeInfo_var))->get_levelMapping_12();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Item_m1363558904(L_16, 0, /*hidden argument*/List_1_get_Item_m1363558904_RuntimeMethod_var);
		G_B4_0 = __this;
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			G_B5_0 = __this;
			goto IL_00c9;
		}
	}
	{
		ZombieCreator_t3776728246 * L_18 = __this->get_U24this_4();
		NullCheck(L_18);
		List_1_t2753864082 * L_19 = L_18->get__enemies_11();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_20 = GlobalGameController_get_previousLevel_m1363325466(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringU5BU5D_t1281789340* L_21 = List_1_get_Item_m3286979944(L_19, L_20, /*hidden argument*/List_1_get_Item_m3286979944_RuntimeMethod_var);
		G_B6_0 = L_21;
		G_B6_1 = G_B4_0;
		goto IL_00d7;
	}

IL_00c9:
	{
		StringU5BU5D_t1281789340* L_22 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3452614543);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		G_B6_0 = L_22;
		G_B6_1 = G_B5_0;
	}

IL_00d7:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3Cenemies_2U3E__1_3(G_B6_0);
		V_1 = 0;
		goto IL_0142;
	}

IL_00e3:
	{
		StringU5BU5D_t1281789340* L_23 = __this->get_U3Cenemies_2U3E__1_3();
		NullCheck(L_23);
		int32_t L_24 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))), /*hidden argument*/NULL);
		V_2 = L_24;
		ZombieCreator_t3776728246 * L_25 = __this->get_U24this_4();
		NullCheck(L_25);
		GameObjectU5BU5D_t3328599146* L_26 = L_25->get__enemyCreationZones_10();
		ZombieCreator_t3776728246 * L_27 = __this->get_U24this_4();
		NullCheck(L_27);
		GameObjectU5BU5D_t3328599146* L_28 = L_27->get__enemyCreationZones_10();
		NullCheck(L_28);
		int32_t L_29 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_30 = L_29;
		GameObject_t1113636619 * L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = L_31;
		ZombieCreator_t3776728246 * L_32 = __this->get_U24this_4();
		GameObject_t1113636619 * L_33 = V_3;
		NullCheck(L_32);
		Vector3_t3722313464  L_34 = ZombieCreator__createPos_m1145009354(L_32, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		ZombieCreator_t3776728246 * L_35 = __this->get_U24this_4();
		NullCheck(L_35);
		List_1_t2585711361 * L_36 = L_35->get_zombiePrefabs_4();
		int32_t L_37 = V_2;
		NullCheck(L_36);
		GameObject_t1113636619 * L_38 = List_1_get_Item_m910824056(L_36, L_37, /*hidden argument*/List_1_get_Item_m910824056_RuntimeMethod_var);
		Vector3_t3722313464  L_39 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_40 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0142:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = __this->get_U3CnumOfZombsToAdd3U3E__1_2();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00e3;
		}
	}
	{
		ZombieCreator_t3776728246 * L_44 = __this->get_U24this_4();
		NullCheck(L_44);
		float L_45 = L_44->get_curInterval_9();
		WaitForSeconds_t1699091251 * L_46 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_46, L_45, /*hidden argument*/NULL);
		__this->set_U24current_5(L_46);
		bool L_47 = __this->get_U24disposing_6();
		if (L_47)
		{
			goto IL_0173;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_0173:
	{
		goto IL_01a2;
	}

IL_0178:
	{
		ZombieCreator_t3776728246 * L_48 = __this->get_U24this_4();
		NullCheck(L_48);
		int32_t L_49 = ZombieCreator_get_NumOfDeadZombies_m3641787925(L_48, /*hidden argument*/NULL);
		ZombieCreator_t3776728246 * L_50 = __this->get_U24this_4();
		NullCheck(L_50);
		int32_t L_51 = ZombieCreator_get_NumOfLiveZombies_m951669513(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_52 = GlobalGameController_get_EnemiesToKill_m946529693(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_51))) < ((int32_t)L_52)))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_01a0:
	{
		return (bool)0;
	}

IL_01a2:
	{
		return (bool)1;
	}
}
// System.Object ZombieCreator/<AddZombies>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAddZombiesU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1170140123 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object ZombieCreator/<AddZombies>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAddZombiesU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2410739731 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void ZombieCreator/<AddZombies>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CAddZombiesU3Ec__Iterator0_Dispose_m506128450 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void ZombieCreator/<AddZombies>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CAddZombiesU3Ec__Iterator0_Reset_m425453902 (U3CAddZombiesU3Ec__Iterator0_t813183650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAddZombiesU3Ec__Iterator0_Reset_m425453902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CAddZombiesU3Ec__Iterator0_Reset_m425453902_RuntimeMethod_var);
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
// System.Void ZombiManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager__ctor_m1715391505 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager__ctor_m1715391505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m463784026(L_0, /*hidden argument*/List_1__ctor_m463784026_RuntimeMethod_var);
		__this->set_zombiePrefabs_5(L_0);
		List_1_t2753864082 * L_1 = (List_1_t2753864082 *)il2cpp_codegen_object_new(List_1_t2753864082_il2cpp_TypeInfo_var);
		List_1__ctor_m909264078(L_1, /*hidden argument*/List_1__ctor_m909264078_RuntimeMethod_var);
		__this->set__enemies_6(L_1);
		__this->set_maxTimeGame_9((300.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_Awake_m3204033274 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_Awake_m3204033274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t1113636619 * V_5 = NULL;
	{
		V_0 = (StringU5BU5D_t1281789340*)NULL;
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3452614543);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3451238287);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3451238287);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3451303823);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3451303823);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3452614541);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3452614551);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3451500431);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3451500431);
		StringU5BU5D_t1281789340* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3451434895);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3451434895);
		StringU5BU5D_t1281789340* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3451565967);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3451565967);
		StringU5BU5D_t1281789340* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3451172751);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3451172751);
		V_0 = L_9;
		StringU5BU5D_t1281789340* L_10 = V_0;
		V_1 = L_10;
		StringU5BU5D_t1281789340* L_11 = V_1;
		V_3 = L_11;
		V_4 = 0;
		goto IL_009b;
	}

IL_0067:
	{
		StringU5BU5D_t1281789340* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		String_t* L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2091790128, L_16, _stringLiteral2506032608, /*hidden argument*/NULL);
		Object_t631007953 * L_18 = Resources_Load_m3880010804(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_5 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_18, GameObject_t1113636619_il2cpp_TypeInfo_var));
		List_1_t2585711361 * L_19 = __this->get_zombiePrefabs_5();
		GameObject_t1113636619 * L_20 = V_5;
		NullCheck(L_19);
		List_1_Add_m4119991052(L_19, L_20, /*hidden argument*/List_1_Add_m4119991052_RuntimeMethod_var);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_22 = V_4;
		StringU5BU5D_t1281789340* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Void ZombiManager::Start()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_Start_m3995147773 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_Start_m3995147773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_nextAddZombi_4((5.0f));
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral1887046119, /*hidden argument*/NULL);
		__this->set__enemyCreationZones_7(L_0);
		PhotonView_t2207721820 * L_1 = PhotonView_Get_m1953794030(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_photonView_10(L_1);
		return;
	}
}
// System.Void ZombiManager::synchTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_synchTime_m1702601032 (ZombiManager_t1666808103 * __this, float ____time0, const RuntimeMethod* method)
{
	{
		float L_0 = ____time0;
		__this->set_timeGame_2(L_0);
		return;
	}
}
// System.Void ZombiManager::Update()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_Update_m3169221655 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_Update_m3169221655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotonView_t2207721820 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		bool L_0 = __this->get_startGame_8();
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_1 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__this->set_startGame_8((bool)1);
		__this->set_timeGame_2((0.0f));
		__this->set_nextTimeSynch_3((0.0f));
		__this->set_nextAddZombi_4((0.0f));
	}

IL_0045:
	{
		bool L_2 = __this->get_startGame_8();
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_3 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		__this->set_startGame_8((bool)0);
		__this->set_timeGame_2((0.0f));
		__this->set_nextTimeSynch_3((0.0f));
		__this->set_nextAddZombi_4((0.0f));
	}

IL_0089:
	{
		bool L_4 = __this->get_startGame_8();
		if (L_4)
		{
			goto IL_0095;
		}
	}
	{
		return;
	}

IL_0095:
	{
		bool L_5 = __this->get_startGame_8();
		if (!L_5)
		{
			goto IL_00b2;
		}
	}
	{
		float L_6 = __this->get_timeGame_2();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeGame_2(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
	}

IL_00b2:
	{
		PhotonView_t2207721820 * L_8 = PhotonView_Get_m1953794030(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_8;
		PhotonView_t2207721820 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = PhotonView_get_isMine_m4153946987(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0107;
		}
	}
	{
		float L_11 = __this->get_timeGame_2();
		float L_12 = __this->get_nextTimeSynch_3();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0107;
		}
	}
	{
		PhotonView_t2207721820 * L_13 = V_0;
		ObjectU5BU5D_t2843939325* L_14 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		float L_15 = __this->get_timeGame_2();
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		NullCheck(L_13);
		PhotonView_RPC_m4037858114(L_13, _stringLiteral3828741091, 1, L_14, /*hidden argument*/NULL);
		float L_18 = __this->get_timeGame_2();
		__this->set_nextTimeSynch_3(((float)il2cpp_codegen_add((float)L_18, (float)(3.0f))));
	}

IL_0107:
	{
		PhotonView_t2207721820 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = PhotonView_get_isMine_m4153946987(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_01ac;
		}
	}
	{
		float L_21 = __this->get_timeGame_2();
		float L_22 = __this->get_maxTimeGame_9();
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_01ac;
		}
	}
	{
		__this->set_startGame_8((bool)0);
		__this->set_timeGame_2((0.0f));
		GameObjectU5BU5D_t3328599146* L_23 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3345659787, /*hidden argument*/NULL);
		V_1 = L_23;
		V_2 = (-100.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_3 = L_24;
		V_4 = 0;
		goto IL_018c;
	}

IL_0154:
	{
		GameObjectU5BU5D_t3328599146* L_25 = V_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t1113636619 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		NetworkStartTable_t3389559616 * L_29 = GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459(L_28, /*hidden argument*/GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30 = L_29->get_score_56();
		float L_31 = V_2;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0186;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_32 = V_1;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t1113636619 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		NetworkStartTable_t3389559616 * L_36 = GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459(L_35, /*hidden argument*/GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459_RuntimeMethod_var);
		NullCheck(L_36);
		float L_37 = L_36->get_score_56();
		V_2 = L_37;
		GameObjectU5BU5D_t3328599146* L_38 = V_1;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		GameObject_t1113636619 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		NetworkStartTable_t3389559616 * L_42 = GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459(L_41, /*hidden argument*/GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459_RuntimeMethod_var);
		NullCheck(L_42);
		String_t* L_43 = L_42->get_NamePlayer_49();
		V_3 = L_43;
	}

IL_0186:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_018c:
	{
		int32_t L_45 = V_4;
		GameObjectU5BU5D_t3328599146* L_46 = V_1;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_0154;
		}
	}
	{
		PhotonView_t2207721820 * L_47 = V_0;
		ObjectU5BU5D_t2843939325* L_48 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_49 = V_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_49);
		NullCheck(L_47);
		PhotonView_RPC_m4037858114(L_47, _stringLiteral4073034013, 0, L_48, /*hidden argument*/NULL);
	}

IL_01ac:
	{
		float L_50 = __this->get_timeGame_2();
		float L_51 = __this->get_nextAddZombi_4();
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_0233;
		}
	}
	{
		PhotonView_t2207721820 * L_52 = V_0;
		NullCheck(L_52);
		bool L_53 = PhotonView_get_isMine_m4153946987(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0233;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_54 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral760905195, /*hidden argument*/NULL);
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length))))) >= ((int32_t)((int32_t)15))))
		{
			goto IL_0233;
		}
	}
	{
		V_5 = (4.0f);
		float L_55 = __this->get_timeGame_2();
		float L_56 = __this->get_maxTimeGame_9();
		if ((!(((float)L_55) > ((float)((float)il2cpp_codegen_multiply((float)L_56, (float)(0.4f)))))))
		{
			goto IL_0200;
		}
	}
	{
		V_5 = (3.0f);
	}

IL_0200:
	{
		float L_57 = __this->get_timeGame_2();
		float L_58 = __this->get_maxTimeGame_9();
		if ((!(((float)L_57) > ((float)((float)il2cpp_codegen_multiply((float)L_58, (float)(0.8f)))))))
		{
			goto IL_021e;
		}
	}
	{
		V_5 = (2.0f);
	}

IL_021e:
	{
		float L_59 = __this->get_nextAddZombi_4();
		float L_60 = V_5;
		__this->set_nextAddZombi_4(((float)il2cpp_codegen_add((float)L_59, (float)L_60)));
		ZombiManager_addZombi_m2696549348(__this, /*hidden argument*/NULL);
	}

IL_0233:
	{
		return;
	}
}
// System.Void ZombiManager::win(System.String)
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_win_m1129851346 (ZombiManager_t1666808103 * __this, String_t* ____winer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_win_m1129851346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral757629381, /*hidden argument*/NULL);
		NullCheck(L_0);
		WeaponManager_t1762453775 * L_1 = GameObject_GetComponent_TisWeaponManager_t1762453775_m1321501039(L_0, /*hidden argument*/GameObject_GetComponent_TisWeaponManager_t1762453775_m1321501039_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = L_1->get_myTable_13();
		NullCheck(L_2);
		NetworkStartTable_t3389559616 * L_3 = GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkStartTable_t3389559616_m3139063459_RuntimeMethod_var);
		String_t* L_4 = ____winer0;
		NullCheck(L_3);
		NetworkStartTable_win_m405134720(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiManager::addZombi()
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_addZombi_m2696549348 (ZombiManager_t1666808103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_addZombi_m2696549348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	BoxCollider_t1640800422 * V_1 = NULL;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	float G_B2_0 = 0.0f;
	Vector3_t3722313464 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_t3722313464 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Vector3_t3722313464 * G_B3_2 = NULL;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__enemyCreationZones_7();
		GameObjectU5BU5D_t3328599146* L_1 = __this->get__enemyCreationZones_7();
		NullCheck(L_1);
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		BoxCollider_t1640800422 * L_6 = GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221(L_5, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221_RuntimeMethod_var);
		V_1 = L_6;
		BoxCollider_t1640800422 * L_7 = V_1;
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = BoxCollider_get_size_m1798011124(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_x_1();
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = (&V_4)->get_x_1();
		BoxCollider_t1640800422 * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = BoxCollider_get_size_m1798011124(L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		float L_16 = (&V_5)->get_z_3();
		GameObject_t1113636619 * L_17 = V_0;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_localScale_m129152068(L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		float L_20 = (&V_6)->get_z_3();
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_13)), ((float)il2cpp_codegen_multiply((float)L_16, (float)L_20)), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = V_0;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		float L_24 = (&V_8)->get_x_1();
		float L_25 = (&V_2)->get_x_0();
		GameObject_t1113636619 * L_26 = V_0;
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		V_9 = L_28;
		float L_29 = (&V_9)->get_z_3();
		float L_30 = (&V_2)->get_y_1();
		float L_31 = (&V_2)->get_x_0();
		float L_32 = (&V_2)->get_y_1();
		Rect__ctor_m2614021312((&V_7), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_25/(float)(2.0f))))), ((float)il2cpp_codegen_subtract((float)L_29, (float)((float)((float)L_30/(float)(2.0f))))), L_31, L_32, /*hidden argument*/NULL);
		float L_33 = Rect_get_x_m3839990490((&V_7), /*hidden argument*/NULL);
		float L_34 = Rect_get_width_m3421484486((&V_7), /*hidden argument*/NULL);
		float L_35 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
		List_1_t128053199 * L_36 = ((Defs_t3298467154_StaticFields*)il2cpp_codegen_static_fields_for(Defs_t3298467154_il2cpp_TypeInfo_var))->get_levelsWithVarY_2();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_37 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_38 = List_1_Contains_m2263725670(L_36, L_37, /*hidden argument*/List_1_Contains_m2263725670_RuntimeMethod_var);
		G_B1_0 = ((float)il2cpp_codegen_add((float)L_33, (float)L_35));
		G_B1_1 = (&V_10);
		if (L_38)
		{
			G_B2_0 = ((float)il2cpp_codegen_add((float)L_33, (float)L_35));
			G_B2_1 = (&V_10);
			goto IL_00fd;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0111;
	}

IL_00fd:
	{
		GameObject_t1113636619 * L_39 = V_0;
		NullCheck(L_39);
		Transform_t3600365921 * L_40 = GameObject_get_transform_m1369836730(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		V_11 = L_41;
		float L_42 = (&V_11)->get_y_2();
		G_B3_0 = L_42;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0111:
	{
		float L_43 = Rect_get_y_m1501338330((&V_7), /*hidden argument*/NULL);
		float L_44 = Rect_get_height_m1358425599((&V_7), /*hidden argument*/NULL);
		float L_45 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), L_44, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577(G_B3_2, G_B3_1, G_B3_0, ((float)il2cpp_codegen_add((float)L_43, (float)L_45)), /*hidden argument*/NULL);
		V_12 = 0;
		float L_46 = __this->get_timeGame_2();
		float L_47 = __this->get_maxTimeGame_9();
		V_13 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_46/(float)L_47)), (float)(100.0f)));
		float L_48 = V_13;
		if ((!(((float)L_48) < ((float)(15.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_49 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		V_12 = L_49;
	}

IL_015c:
	{
		float L_50 = V_13;
		if ((!(((float)L_50) >= ((float)(15.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		float L_51 = V_13;
		if ((!(((float)L_51) < ((float)(30.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_52 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 5, /*hidden argument*/NULL);
		V_12 = L_52;
	}

IL_017d:
	{
		float L_53 = V_13;
		if ((!(((float)L_53) >= ((float)(30.0f)))))
		{
			goto IL_019e;
		}
	}
	{
		float L_54 = V_13;
		if ((!(((float)L_54) < ((float)(45.0f)))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_55 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 6, /*hidden argument*/NULL);
		V_12 = L_55;
	}

IL_019e:
	{
		float L_56 = V_13;
		if ((!(((float)L_56) >= ((float)(45.0f)))))
		{
			goto IL_01bf;
		}
	}
	{
		float L_57 = V_13;
		if ((!(((float)L_57) < ((float)(60.0f)))))
		{
			goto IL_01bf;
		}
	}
	{
		int32_t L_58 = Random_Range_m4054026115(NULL /*static, unused*/, 3, 8, /*hidden argument*/NULL);
		V_12 = L_58;
	}

IL_01bf:
	{
		float L_59 = V_13;
		if ((!(((float)L_59) >= ((float)(60.0f)))))
		{
			goto IL_01e1;
		}
	}
	{
		float L_60 = V_13;
		if ((!(((float)L_60) < ((float)(75.0f)))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_61 = Random_Range_m4054026115(NULL /*static, unused*/, 5, ((int32_t)9), /*hidden argument*/NULL);
		V_12 = L_61;
	}

IL_01e1:
	{
		float L_62 = V_13;
		if ((!(((float)L_62) >= ((float)(75.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		int32_t L_63 = Random_Range_m4054026115(NULL /*static, unused*/, 5, ((int32_t)10), /*hidden argument*/NULL);
		V_12 = L_63;
	}

IL_01f7:
	{
		PhotonView_t2207721820 * L_64 = __this->get_photonView_10();
		ObjectU5BU5D_t2843939325* L_65 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		int32_t L_66 = V_12;
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_68);
		ObjectU5BU5D_t2843939325* L_69 = L_65;
		Vector3_t3722313464  L_70 = V_10;
		Vector3_t3722313464  L_71 = L_70;
		RuntimeObject * L_72 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_72);
		ObjectU5BU5D_t2843939325* L_73 = L_69;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_74 = PhotonNetwork_AllocateViewID_m2823368424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_76);
		NullCheck(L_64);
		PhotonView_RPC_m4037858114(L_64, _stringLiteral1408226020, 0, L_73, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiManager::addZombiRPC(System.Int32,UnityEngine.Vector3,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombiManager_addZombiRPC_m1428755676 (ZombiManager_t1666808103 * __this, int32_t ___typeOfZomb0, Vector3_t3722313464  ___pos1, int32_t ____id2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManager_addZombiRPC_m1428755676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	PhotonView_t2207721820 * V_1 = NULL;
	{
		List_1_t2585711361 * L_0 = __this->get_zombiePrefabs_5();
		int32_t L_1 = ___typeOfZomb0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_2 = List_1_get_Item_m910824056(L_0, L_1, /*hidden argument*/List_1_get_Item_m910824056_RuntimeMethod_var);
		Vector3_t3722313464  L_3 = ___pos1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		ZombiUpravlenie_t207883660 * L_7 = GameObject_GetComponent_TisZombiUpravlenie_t207883660_m132784980(L_6, /*hidden argument*/GameObject_GetComponent_TisZombiUpravlenie_t207883660_m132784980_RuntimeMethod_var);
		int32_t L_8 = ___typeOfZomb0;
		NullCheck(L_7);
		L_7->set_typeZombInMas_28(L_8);
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		PhotonView_t2207721820 * L_10 = GameObject_GetComponent_TisPhotonView_t2207721820_m3241823210(L_9, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t2207721820_m3241823210_RuntimeMethod_var);
		V_1 = L_10;
		PhotonView_t2207721820 * L_11 = V_1;
		int32_t L_12 = ____id2;
		NullCheck(L_11);
		PhotonView_set_viewID_m2597632237(L_11, L_12, /*hidden argument*/NULL);
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
// System.Void ZombiManagerSynch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZombiManagerSynch__ctor_m3226073958 (ZombiManagerSynch_t926835508 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManagerSynch__ctor_m3226073958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerRot_5(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiManagerSynch::Awake()
extern "C" IL2CPP_METHOD_ATTR void ZombiManagerSynch_Awake_m51563590 (ZombiManagerSynch_t926835508 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManagerSynch_Awake_m51563590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1550659595, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral3947038993, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Equals_m2270643605(L_1, _stringLiteral3126235553, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void ZombiManagerSynch::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" IL2CPP_METHOD_ATTR void ZombiManagerSynch_OnPhotonSerializeView_m2105050500 (ZombiManagerSynch_t926835508 * __this, PhotonStream_t1003850889 * ___stream0, PhotonMessageInfo_t3855471533 * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiManagerSynch_OnPhotonSerializeView_m2105050500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonStream_t1003850889 * L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m2805645485(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		PhotonStream_t1003850889 * L_2 = ___stream0;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = L_4;
		RuntimeObject * L_6 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_m3094139315(L_2, L_6, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_0026:
	{
		PhotonStream_t1003850889 * L_7 = ___stream0;
		NullCheck(L_7);
		RuntimeObject * L_8 = PhotonStream_ReceiveNext_m3398442404(L_7, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_4(((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_8, Vector3_t3722313464_il2cpp_TypeInfo_var)))));
	}

IL_0037:
	{
		return;
	}
}
// System.Void ZombiManagerSynch::Update()
extern "C" IL2CPP_METHOD_ATTR void ZombiManagerSynch_Update_m3327489389 (ZombiManagerSynch_t926835508 * __this, const RuntimeMethod* method)
{
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
// System.Void ZombiSynchPhoton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZombiSynchPhoton__ctor_m3051977115 (ZombiSynchPhoton_t1457927756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiSynchPhoton__ctor_m3051977115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_5(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerRot_6(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiSynchPhoton::Awake()
extern "C" IL2CPP_METHOD_ATTR void ZombiSynchPhoton_Awake_m3689040130 (ZombiSynchPhoton_t1457927756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiSynchPhoton_Awake_m3689040130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1550659595, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral3947038993, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Equals_m2270643605(L_1, _stringLiteral3126235553, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void ZombiSynchPhoton::Start()
extern "C" IL2CPP_METHOD_ATTR void ZombiSynchPhoton_Start_m2210144175 (ZombiSynchPhoton_t1457927756 * __this, const RuntimeMethod* method)
{
	{
		PhotonView_t2207721820 * L_0 = PhotonView_Get_m1953794030(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_photonView_4(L_0);
		return;
	}
}
// System.Void ZombiSynchPhoton::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" IL2CPP_METHOD_ATTR void ZombiSynchPhoton_OnPhotonSerializeView_m1333215130 (ZombiSynchPhoton_t1457927756 * __this, PhotonStream_t1003850889 * ___stream0, PhotonMessageInfo_t3855471533 * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiSynchPhoton_OnPhotonSerializeView_m1333215130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonStream_t1003850889 * L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m2805645485(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		PhotonStream_t1003850889 * L_2 = ___stream0;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = L_4;
		RuntimeObject * L_6 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_m3094139315(L_2, L_6, /*hidden argument*/NULL);
		PhotonStream_t1003850889 * L_7 = ___stream0;
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = L_9;
		RuntimeObject * L_11 = Box(Quaternion_t2301928331_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		PhotonStream_SendNext_m3094139315(L_7, L_11, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_003c:
	{
		PhotonStream_t1003850889 * L_12 = ___stream0;
		NullCheck(L_12);
		RuntimeObject * L_13 = PhotonStream_ReceiveNext_m3398442404(L_12, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_5(((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_13, Vector3_t3722313464_il2cpp_TypeInfo_var)))));
		PhotonStream_t1003850889 * L_14 = ___stream0;
		NullCheck(L_14);
		RuntimeObject * L_15 = PhotonStream_ReceiveNext_m3398442404(L_14, /*hidden argument*/NULL);
		__this->set_correctPlayerRot_6(((*(Quaternion_t2301928331 *)((Quaternion_t2301928331 *)UnBox(L_15, Quaternion_t2301928331_il2cpp_TypeInfo_var)))));
	}

IL_005e:
	{
		return;
	}
}
// System.Void ZombiSynchPhoton::Update()
extern "C" IL2CPP_METHOD_ATTR void ZombiSynchPhoton_Update_m3178393213 (ZombiSynchPhoton_t1457927756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiSynchPhoton_Update_m3178393213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonView_t2207721820 * L_0 = __this->get_photonView_4();
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m4153946987(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_correctPlayerPos_5();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t2301928331  L_10 = Transform_get_rotation_m3502953881(L_9, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_11 = __this->get_correctPlayerRot_6();
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m3524318132(L_8, L_13, /*hidden argument*/NULL);
	}

IL_0068:
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
// System.Void ZombiUpravlenie::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie__ctor_m1271466282 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie__ctor_m1271466282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_idleAnim_6(_stringLiteral1628612613);
		__this->set_normWalkAnim_7(_stringLiteral1516857528);
		__this->set_zombieWalkAnim_8(_stringLiteral1724668041);
		__this->set_offAnim_9(_stringLiteral2044377756);
		__this->set_deathAnim_10(_stringLiteral1550377962);
		__this->set_onAnim_11(_stringLiteral2037693092);
		__this->set_attackAnim_12(_stringLiteral4008264625);
		__this->set_timeToUpdateTarget_29((5.0f));
		__this->set_tekAnim_31((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ZombiUpravlenie::myCAnim(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ZombiUpravlenie_myCAnim_m2122570633 (ZombiUpravlenie_t207883660 * __this, String_t* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_myCAnim_m2122570633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__modelChild_14();
		String_t* L_1 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Defs_t3298467154_il2cpp_TypeInfo_var);
		String_t* L_2 = Defs_CAnim_m3082801395(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void ZombiUpravlenie::Awake()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Awake_m2377052954 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Awake_m2377052954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_GetChild_m1092972975(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		__this->set__modelChild_14(L_2);
		GameObject_t1113636619 * L_3 = __this->get__modelChild_14();
		NullCheck(L_3);
		Sounds_t3004079410 * L_4 = GameObject_GetComponent_TisSounds_t3004079410_m1008272002(L_3, /*hidden argument*/GameObject_GetComponent_TisSounds_t3004079410_m1008272002_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->get_health_8();
		__this->set_health_22(L_5);
		int32_t L_6 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral3492311660, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void ZombiUpravlenie::setHealthRPC(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_setHealthRPC_m2280520451 (ZombiUpravlenie_t207883660 * __this, float ____health0, const RuntimeMethod* method)
{
	{
		float L_0 = ____health0;
		__this->set_health_22(L_0);
		return;
	}
}
// System.Void ZombiUpravlenie::flashRPC()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_flashRPC_m1672155815 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ZombiUpravlenie::setHealth(System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_setHealth_m2509392904 (ZombiUpravlenie_t207883660 * __this, float ____health0, bool ___isFlash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_setHealth_m2509392904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonView_t2207721820 * L_0 = __this->get_photonView_23();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		float L_2 = ____health0;
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		PhotonView_RPC_m4037858114(L_0, _stringLiteral1222348739, 0, L_1, /*hidden argument*/NULL);
		float L_5 = ____health0;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral36649133, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		bool L_9 = ___isFlash1;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		bool L_10 = __this->get__flashing_27();
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_11 = ZombiUpravlenie_Flash_m741033771(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
		PhotonView_t2207721820 * L_12 = __this->get_photonView_23();
		NullCheck(L_12);
		PhotonView_RPC_m4037858114(L_12, _stringLiteral2113259803, 1, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// UnityEngine.Texture ZombiUpravlenie::SetSkinForObj(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * ZombiUpravlenie_SetSkinForObj_m3191347847 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_SetSkinForObj_m3191347847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		SkinsManagerPixlGun_t2582742119 * L_0 = ((ZombiUpravlenie_t207883660_StaticFields*)il2cpp_codegen_static_fields_for(ZombiUpravlenie_t207883660_il2cpp_TypeInfo_var))->get__skinsManager_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral3919516058, /*hidden argument*/NULL);
		NullCheck(L_2);
		SkinsManagerPixlGun_t2582742119 * L_3 = GameObject_GetComponent_TisSkinsManagerPixlGun_t2582742119_m152784281(L_2, /*hidden argument*/GameObject_GetComponent_TisSkinsManagerPixlGun_t2582742119_m152784281_RuntimeMethod_var);
		((ZombiUpravlenie_t207883660_StaticFields*)il2cpp_codegen_static_fields_for(ZombiUpravlenie_t207883660_il2cpp_TypeInfo_var))->set__skinsManager_26(L_3);
	}

IL_0023:
	{
		V_0 = (Texture_t3661962703 *)NULL;
		GameObject_t1113636619 * L_4 = ___go0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ZombiUpravlenie_SkinNameForObj_m635002016(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		SkinsManagerPixlGun_t2582742119 * L_7 = ((ZombiUpravlenie_t207883660_StaticFields*)il2cpp_codegen_static_fields_for(ZombiUpravlenie_t207883660_il2cpp_TypeInfo_var))->get__skinsManager_26();
		NullCheck(L_7);
		Hashtable_t1853889766 * L_8 = L_7->get_skins_2();
		String_t* L_9 = V_1;
		NullCheck(L_8);
		RuntimeObject * L_10 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_9);
		Texture_t3661962703 * L_11 = ((Texture_t3661962703 *)IsInstClass((RuntimeObject*)L_10, Texture_t3661962703_il2cpp_TypeInfo_var));
		V_0 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1890043936, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0062:
	{
		GameObject_t1113636619 * L_15 = ___go0;
		Texture_t3661962703 * L_16 = V_0;
		ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Texture_t3661962703 * L_17 = V_0;
		return L_17;
	}
}
// System.String ZombiUpravlenie::SkinNameForObj(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ZombiUpravlenie_SkinNameForObj_m635002016 (RuntimeObject * __this /* static, unused */, String_t* ___objName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___objName0;
		return L_0;
	}
}
// System.Void ZombiUpravlenie::SetTextureRecursivelyFrom(UnityEngine.GameObject,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, Texture_t3661962703 * ___txt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MaterialU5BU5D_t561872642* V_2 = NULL;
	Material_t340375123 * V_3 = NULL;
	MaterialU5BU5D_t561872642* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = ___obj0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = Transform_GetEnumerator_m2717073726(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011e;
		}

IL_0011:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_4, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_5 = V_0;
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Renderer_t2627027031 * L_7 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_6, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0112;
			}
		}

IL_0032:
		{
			Transform_t3600365921 * L_9 = V_0;
			NullCheck(L_9);
			GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			Renderer_t2627027031 * L_11 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_10, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
			NullCheck(L_11);
			Material_t340375123 * L_12 = Renderer_get_material_m4171603682(L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0112;
			}
		}

IL_004c:
		{
			Transform_t3600365921 * L_14 = V_0;
			NullCheck(L_14);
			GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Renderer_t2627027031 * L_16 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_15, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
			NullCheck(L_16);
			MaterialU5BU5D_t561872642* L_17 = Renderer_get_materials_m2188790026(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))) <= ((int32_t)1)))
			{
				goto IL_00fc;
			}
		}

IL_0064:
		{
			Transform_t3600365921 * L_18 = V_0;
			NullCheck(L_18);
			GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20 = Object_get_name_m4211327027(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			bool L_21 = String_Equals_m2270643605(L_20, _stringLiteral3141998910, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00fc;
			}
		}

IL_007e:
		{
			Transform_t3600365921 * L_22 = V_0;
			NullCheck(L_22);
			GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			Renderer_t2627027031 * L_24 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_23, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
			NullCheck(L_24);
			MaterialU5BU5D_t561872642* L_25 = Renderer_get_materials_m2188790026(L_24, /*hidden argument*/NULL);
			V_2 = L_25;
			MaterialU5BU5D_t561872642* L_26 = V_2;
			V_4 = L_26;
			V_5 = 0;
			goto IL_00ec;
		}

IL_009a:
		{
			MaterialU5BU5D_t561872642* L_27 = V_4;
			int32_t L_28 = V_5;
			NullCheck(L_27);
			int32_t L_29 = L_28;
			Material_t340375123 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
			V_3 = L_30;
			Material_t340375123 * L_31 = V_3;
			NullCheck(L_31);
			String_t* L_32 = Object_get_name_m4211327027(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			bool L_33 = String_Equals_m2270643605(L_32, _stringLiteral876025908, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_00df;
			}
		}

IL_00b5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
			int32_t L_34 = GlobalGameController_get_currentLevel_m1105921388(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_34) == ((uint32_t)6))))
			{
				goto IL_00da;
			}
		}

IL_00c0:
		{
			Material_t340375123 * L_35 = V_3;
			Color_t2555686324  L_36;
			memset(&L_36, 0, sizeof(L_36));
			Color__ctor_m286683560((&L_36), (0.321568638f), (0.0f), (0.5176471f), /*hidden argument*/NULL);
			NullCheck(L_35);
			Material_set_color_m1794818007(L_35, L_36, /*hidden argument*/NULL);
		}

IL_00da:
		{
			goto IL_00e6;
		}

IL_00df:
		{
			Material_t340375123 * L_37 = V_3;
			Texture_t3661962703 * L_38 = ___txt1;
			NullCheck(L_37);
			Material_set_mainTexture_m544811714(L_37, L_38, /*hidden argument*/NULL);
		}

IL_00e6:
		{
			int32_t L_39 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		}

IL_00ec:
		{
			int32_t L_40 = V_5;
			MaterialU5BU5D_t561872642* L_41 = V_4;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
			{
				goto IL_009a;
			}
		}

IL_00f7:
		{
			goto IL_0112;
		}

IL_00fc:
		{
			Transform_t3600365921 * L_42 = V_0;
			NullCheck(L_42);
			GameObject_t1113636619 * L_43 = Component_get_gameObject_m442555142(L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			Renderer_t2627027031 * L_44 = GameObject_GetComponent_TisRenderer_t2627027031_m3158346851(L_43, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3158346851_RuntimeMethod_var);
			NullCheck(L_44);
			Material_t340375123 * L_45 = Renderer_get_material_m4171603682(L_44, /*hidden argument*/NULL);
			Texture_t3661962703 * L_46 = ___txt1;
			NullCheck(L_45);
			Material_set_mainTexture_m544811714(L_45, L_46, /*hidden argument*/NULL);
		}

IL_0112:
		{
			Transform_t3600365921 * L_47 = V_0;
			NullCheck(L_47);
			GameObject_t1113636619 * L_48 = Component_get_gameObject_m442555142(L_47, /*hidden argument*/NULL);
			Texture_t3661962703 * L_49 = ___txt1;
			ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		}

IL_011e:
		{
			RuntimeObject* L_50 = V_1;
			NullCheck(L_50);
			bool L_51 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_0011;
			}
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_52 = V_1;
			RuntimeObject* L_53 = ((RuntimeObject*)IsInst((RuntimeObject*)L_52, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_6 = L_53;
			if (!L_53)
			{
				goto IL_0143;
			}
		}

IL_013c:
		{
			RuntimeObject* L_54 = V_6;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_54);
		}

IL_0143:
		{
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0144:
	{
		return;
	}
}
// System.Collections.IEnumerator ZombiUpravlenie::Flash()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombiUpravlenie_Flash_m741033771 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Flash_m741033771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlashU3Ec__Iterator0_t2431851929 * V_0 = NULL;
	{
		U3CFlashU3Ec__Iterator0_t2431851929 * L_0 = (U3CFlashU3Ec__Iterator0_t2431851929 *)il2cpp_codegen_object_new(U3CFlashU3Ec__Iterator0_t2431851929_il2cpp_TypeInfo_var);
		U3CFlashU3Ec__Iterator0__ctor_m1681520674(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFlashU3Ec__Iterator0_t2431851929 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CFlashU3Ec__Iterator0_t2431851929 * L_2 = V_0;
		return L_2;
	}
}
// System.Void ZombiUpravlenie::Start()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Start_m3702314092 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Start_m3702314092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__modelChild_14();
		Texture_t3661962703 * L_1 = ZombiUpravlenie_SetSkinForObj_m3191347847(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set__skin_25(L_1);
		NavMeshAgent_t1276799816 * L_2 = Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var);
		__this->set__nma_17(L_2);
		GameObject_t1113636619 * L_3 = __this->get__modelChild_14();
		NullCheck(L_3);
		BoxCollider_t1640800422 * L_4 = GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221(L_3, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221_RuntimeMethod_var);
		__this->set__modelChildCollider_18(L_4);
		String_t* L_5 = __this->get_offAnim_9();
		__this->set_shootAnim_13(L_5);
		GameObject_t1113636619 * L_6 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		__this->set_player_4(L_6);
		GameObject_t1113636619 * L_7 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral1977428022, /*hidden argument*/NULL);
		NullCheck(L_7);
		ZombiManager_t1666808103 * L_8 = GameObject_GetComponent_TisZombiManager_t1666808103_m2321611112(L_7, /*hidden argument*/GameObject_GetComponent_TisZombiManager_t1666808103_m2321611112_RuntimeMethod_var);
		__this->set__gameController_19(L_8);
		GameObject_t1113636619 * L_9 = __this->get__modelChild_14();
		NullCheck(L_9);
		Sounds_t3004079410 * L_10 = GameObject_GetComponent_TisSounds_t3004079410_m1008272002(L_9, /*hidden argument*/GameObject_GetComponent_TisSounds_t3004079410_m1008272002_RuntimeMethod_var);
		__this->set__soundClips_15(L_10);
		Sounds_t3004079410 * L_11 = __this->get__soundClips_15();
		NullCheck(L_11);
		float L_12 = L_11->get_timeToHit_10();
		__this->set_CurLifeTime_5(L_12);
		__this->set_target_21((Transform_t3600365921 *)NULL);
		GameObject_t1113636619 * L_13 = __this->get__modelChild_14();
		NullCheck(L_13);
		Animation_t3648466861 * L_14 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_13, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		NullCheck(L_14);
		Animation_Stop_m195768787(L_14, /*hidden argument*/NULL);
		ZombiUpravlenie_Walk_m587632063(__this, /*hidden argument*/NULL);
		Sounds_t3004079410 * L_15 = __this->get__soundClips_15();
		Sounds_t3004079410 * L_16 = L_15;
		NullCheck(L_16);
		float L_17 = L_16->get_attackingSpeed_7();
		Sounds_t3004079410 * L_18 = __this->get__soundClips_15();
		NullCheck(L_18);
		SingleU5BU5D_t1444911251* L_19 = L_18->get_attackingSpeedRandomRange_14();
		NullCheck(L_19);
		int32_t L_20 = 0;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Sounds_t3004079410 * L_22 = __this->get__soundClips_15();
		NullCheck(L_22);
		SingleU5BU5D_t1444911251* L_23 = L_22->get_attackingSpeedRandomRange_14();
		NullCheck(L_23);
		int32_t L_24 = 1;
		float L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = Random_Range_m2202990745(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)(0.0f), (float)L_21)), L_25, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_attackingSpeed_7(((float)il2cpp_codegen_add((float)L_17, (float)L_26)));
		PhotonView_t2207721820 * L_27 = PhotonView_Get_m1953794030(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_photonView_23(L_27);
		GameObject_t1113636619 * L_28 = __this->get__modelChild_14();
		Texture_t3661962703 * L_29 = ZombiUpravlenie_SetSkinForObj_m3191347847(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		__this->set__skin_25(L_29);
		PhotonView_t2207721820 * L_30 = __this->get_photonView_23();
		NullCheck(L_30);
		bool L_31 = PhotonView_get_isMine_m4153946987(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_012c;
		}
	}
	{
		PhotonView_t2207721820 * L_32 = __this->get_photonView_23();
		ObjectU5BU5D_t2843939325* L_33 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Sounds_t3004079410 * L_34 = __this->get__soundClips_15();
		NullCheck(L_34);
		float L_35 = L_34->get_health_8();
		float L_36 = L_35;
		RuntimeObject * L_37 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		NullCheck(L_32);
		PhotonView_RPC_m4037858114(L_32, _stringLiteral1222348739, 0, L_33, /*hidden argument*/NULL);
	}

IL_012c:
	{
		return;
	}
}
// System.Void ZombiUpravlenie::setId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_setId_m1049574680 (ZombiUpravlenie_t207883660 * __this, int32_t ____id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_setId_m1049574680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonView_t2207721820 * L_0 = __this->get_photonView_23();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_2 = ____id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		PhotonView_RPC_m4037858114(L_0, _stringLiteral2684322539, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiUpravlenie::setIdRPC(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_setIdRPC_m2598132096 (ZombiUpravlenie_t207883660 * __this, int32_t ____id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_setIdRPC_m2598132096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonView_t2207721820 * L_0 = Component_GetComponent_TisPhotonView_t2207721820_m3929953755(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t2207721820_m3929953755_RuntimeMethod_var);
		int32_t L_1 = ____id0;
		NullCheck(L_0);
		PhotonView_set_viewID_m2597632237(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiUpravlenie::Update()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Update_m3480705553 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Update_m3480705553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	GameObjectU5BU5D_t3328599146* V_5 = NULL;
	float V_6 = 0.0f;
	GameObjectU5BU5D_t3328599146* V_7 = NULL;
	GameObject_t1113636619 * V_8 = NULL;
	GameObjectU5BU5D_t3328599146* V_9 = NULL;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3722313464  V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		PhotonView_t2207721820 * L_0 = __this->get_photonView_23();
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m4153946987(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_2 = __this->get_deaded_20();
		if (L_2)
		{
			goto IL_02e5;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_target_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_01ef;
		}
	}
	{
		float L_5 = __this->get_timeToUpdateTarget_29();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_01ef;
		}
	}
	{
		float L_6 = __this->get_timeToUpdateTarget_29();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeToUpdateTarget_29(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		Transform_t3600365921 * L_8 = __this->get_target_21();
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_12 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Transform_t3600365921 * L_13 = __this->get_target_21();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_2)->get_x_1();
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_y_2();
		Transform_t3600365921 * L_19 = __this->get_target_21();
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = (&V_4)->get_z_3();
		Vector3__ctor_m3353183577((&V_1), L_15, L_18, L_21, /*hidden argument*/NULL);
		float L_22 = V_0;
		Sounds_t3004079410 * L_23 = __this->get__soundClips_15();
		NullCheck(L_23);
		float L_24 = L_23->get_attackDistance_9();
		if ((!(((float)L_22) >= ((float)L_24))))
		{
			goto IL_013a;
		}
	}
	{
		float L_25 = __this->get_timeToUpdateNavMesh_30();
		float L_26 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeToUpdateNavMesh_30(((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)));
		float L_27 = __this->get_timeToUpdateNavMesh_30();
		if ((!(((float)L_27) < ((float)(0.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_28 = __this->get__nma_17();
		Vector3_t3722313464  L_29 = V_1;
		NullCheck(L_28);
		NavMeshAgent_SetDestination_m2826390109(L_28, L_29, /*hidden argument*/NULL);
		NavMeshAgent_t1276799816 * L_30 = __this->get__nma_17();
		Sounds_t3004079410 * L_31 = __this->get__soundClips_15();
		NullCheck(L_31);
		float L_32 = L_31->get_attackingSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(GlobalGameController_t4187904607_il2cpp_TypeInfo_var);
		int32_t L_33 = GlobalGameController_get_AllLevelsCompleted_m723468905(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_34 = powf((1.05f), (((float)((float)L_33))));
		NullCheck(L_30);
		NavMeshAgent_set_speed_m359410752(L_30, ((float)il2cpp_codegen_multiply((float)L_32, (float)L_34)), /*hidden argument*/NULL);
		__this->set_timeToUpdateNavMesh_30((0.5f));
	}

IL_011e:
	{
		Sounds_t3004079410 * L_35 = __this->get__soundClips_15();
		NullCheck(L_35);
		float L_36 = L_35->get_timeToHit_10();
		__this->set_CurLifeTime_5(L_36);
		ZombiUpravlenie_PlayZombieRun_m24001830(__this, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_013a:
	{
		NavMeshAgent_t1276799816 * L_37 = __this->get__nma_17();
		NullCheck(L_37);
		NavMeshPath_t2698325962 * L_38 = NavMeshAgent_get_path_m3133857361(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_39 = __this->get__nma_17();
		NullCheck(L_39);
		NavMeshAgent_ResetPath_m2491688543(L_39, /*hidden argument*/NULL);
	}

IL_0155:
	{
		float L_40 = __this->get_CurLifeTime_5();
		float L_41 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_CurLifeTime_5(((float)il2cpp_codegen_subtract((float)L_40, (float)L_41)));
		Transform_t3600365921 * L_42 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = V_1;
		NullCheck(L_42);
		Transform_LookAt_m3649447396(L_42, L_43, /*hidden argument*/NULL);
		float L_44 = __this->get_CurLifeTime_5();
		if ((!(((float)L_44) <= ((float)(0.0f)))))
		{
			goto IL_01e4;
		}
	}
	{
		Sounds_t3004079410 * L_45 = __this->get__soundClips_15();
		NullCheck(L_45);
		float L_46 = L_45->get_timeToHit_10();
		__this->set_CurLifeTime_5(L_46);
		String_t* L_47 = PlayerPrefsX_get_SndSetting_m3466715375(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_48 = PlayerPrefsX_GetBool_m2206470107(NULL /*static, unused*/, L_47, (bool)1, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01ba;
		}
	}
	{
		AudioSource_t3935305588 * L_49 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		Sounds_t3004079410 * L_50 = __this->get__soundClips_15();
		NullCheck(L_50);
		AudioClip_t3680889665 * L_51 = L_50->get_bite_4();
		NullCheck(L_49);
		AudioSource_PlayOneShot_m1688286683(L_49, L_51, /*hidden argument*/NULL);
	}

IL_01ba:
	{
		Transform_t3600365921 * L_52 = __this->get_target_21();
		NullCheck(L_52);
		Transform_t3600365921 * L_53 = Component_get_transform_m3162698980(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_t3600365921 * L_54 = Transform_Find_m1729760951(L_53, _stringLiteral1151346551, /*hidden argument*/NULL);
		NullCheck(L_54);
		Player_move_c_t367674069 * L_55 = Component_GetComponent_TisPlayer_move_c_t367674069_m2300611317(L_54, /*hidden argument*/Component_GetComponent_TisPlayer_move_c_t367674069_m2300611317_RuntimeMethod_var);
		Sounds_t3004079410 * L_56 = __this->get__soundClips_15();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_damagePerHit_12();
		NullCheck(L_55);
		Player_move_c_minusLiveFromZombi_m1236425043(L_55, L_57, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		ZombiUpravlenie_PlayZombieAttack_m2946499684(__this, /*hidden argument*/NULL);
	}

IL_01ea:
	{
		goto IL_02b9;
	}

IL_01ef:
	{
		GameObjectU5BU5D_t3328599146* L_58 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		V_5 = L_58;
		GameObjectU5BU5D_t3328599146* L_59 = V_5;
		NullCheck(L_59);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_02b9;
		}
	}
	{
		__this->set_timeToUpdateTarget_29((5.0f));
		Transform_t3600365921 * L_60 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t3722313464  L_61 = Transform_get_position_m36019626(L_60, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63 = 0;
		GameObject_t1113636619 * L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Transform_t3600365921 * L_65 = GameObject_get_transform_m1369836730(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t3722313464  L_66 = Transform_get_position_m36019626(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_67 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_61, L_66, /*hidden argument*/NULL);
		V_6 = L_67;
		GameObjectU5BU5D_t3328599146* L_68 = V_5;
		NullCheck(L_68);
		int32_t L_69 = 0;
		GameObject_t1113636619 * L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		Transform_t3600365921 * L_71 = GameObject_get_transform_m1369836730(L_70, /*hidden argument*/NULL);
		__this->set_target_21(L_71);
		GameObjectU5BU5D_t3328599146* L_72 = V_5;
		V_7 = L_72;
		GameObjectU5BU5D_t3328599146* L_73 = V_7;
		V_9 = L_73;
		V_10 = 0;
		goto IL_02ae;
	}

IL_024f:
	{
		GameObjectU5BU5D_t3328599146* L_74 = V_9;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		GameObject_t1113636619 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_8 = L_77;
		Transform_t3600365921 * L_78 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_78);
		Vector3_t3722313464  L_79 = Transform_get_position_m36019626(L_78, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_80 = V_8;
		NullCheck(L_80);
		Transform_t3600365921 * L_81 = GameObject_get_transform_m1369836730(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t3722313464  L_82 = Transform_get_position_m36019626(L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_83 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_79, L_82, /*hidden argument*/NULL);
		V_11 = L_83;
		float L_84 = V_11;
		float L_85 = V_6;
		if ((!(((float)L_84) < ((float)L_85))))
		{
			goto IL_02a8;
		}
	}
	{
		Transform_t3600365921 * L_86 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_t3722313464  L_87 = Transform_get_position_m36019626(L_86, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_88 = V_8;
		NullCheck(L_88);
		Transform_t3600365921 * L_89 = GameObject_get_transform_m1369836730(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t3722313464  L_90 = Transform_get_position_m36019626(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_91 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_87, L_90, /*hidden argument*/NULL);
		V_6 = L_91;
		GameObject_t1113636619 * L_92 = V_8;
		NullCheck(L_92);
		Transform_t3600365921 * L_93 = GameObject_get_transform_m1369836730(L_92, /*hidden argument*/NULL);
		__this->set_target_21(L_93);
	}

IL_02a8:
	{
		int32_t L_94 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_02ae:
	{
		int32_t L_95 = V_10;
		GameObjectU5BU5D_t3328599146* L_96 = V_9;
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_96)->max_length)))))))
		{
			goto IL_024f;
		}
	}

IL_02b9:
	{
		float L_97 = __this->get_health_22();
		if ((!(((float)L_97) <= ((float)(0.0f)))))
		{
			goto IL_02e0;
		}
	}
	{
		PhotonView_t2207721820 * L_98 = __this->get_photonView_23();
		NullCheck(L_98);
		PhotonView_RPC_m4037858114(L_98, _stringLiteral2288167791, 0, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_02e0:
	{
		goto IL_034c;
	}

IL_02e5:
	{
		bool L_99 = __this->get_falling_16();
		if (!L_99)
		{
			goto IL_034c;
		}
	}
	{
		V_12 = (7.0f);
		Transform_t3600365921 * L_100 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_101 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_101);
		Vector3_t3722313464  L_102 = Transform_get_position_m36019626(L_101, /*hidden argument*/NULL);
		V_13 = L_102;
		float L_103 = (&V_13)->get_x_1();
		Transform_t3600365921 * L_104 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_104);
		Vector3_t3722313464  L_105 = Transform_get_position_m36019626(L_104, /*hidden argument*/NULL);
		V_14 = L_105;
		float L_106 = (&V_14)->get_y_2();
		float L_107 = V_12;
		float L_108 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_109 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_109);
		Vector3_t3722313464  L_110 = Transform_get_position_m36019626(L_109, /*hidden argument*/NULL);
		V_15 = L_110;
		float L_111 = (&V_15)->get_z_3();
		Vector3_t3722313464  L_112;
		memset(&L_112, 0, sizeof(L_112));
		Vector3__ctor_m3353183577((&L_112), L_103, ((float)il2cpp_codegen_subtract((float)L_106, (float)((float)il2cpp_codegen_multiply((float)L_107, (float)L_108)))), L_111, /*hidden argument*/NULL);
		NullCheck(L_100);
		Transform_set_position_m3387557959(L_100, L_112, /*hidden argument*/NULL);
	}

IL_034c:
	{
		return;
	}
}
// System.Void ZombiUpravlenie::Death()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Death_m4125197009 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Death_m4125197009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	SpawnMonster_t4219141508 * V_1 = NULL;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral3492311660, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0174;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_1 = __this->get__nma_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_3 = __this->get__nma_17();
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		V_0 = (0.1f);
		String_t* L_4 = PlayerPrefsX_get_SndSetting_m3466715375(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_5 = PlayerPrefsX_GetBool_m2206470107(NULL /*static, unused*/, L_4, (bool)1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		Sounds_t3004079410 * L_6 = __this->get__soundClips_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		AudioSource_t3935305588 * L_8 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		Sounds_t3004079410 * L_9 = __this->get__soundClips_15();
		NullCheck(L_9);
		AudioClip_t3680889665 * L_10 = L_9->get_death_5();
		NullCheck(L_8);
		AudioSource_PlayOneShot_m1688286683(L_8, L_10, /*hidden argument*/NULL);
		Sounds_t3004079410 * L_11 = __this->get__soundClips_15();
		NullCheck(L_11);
		AudioClip_t3680889665 * L_12 = L_11->get_death_5();
		NullCheck(L_12);
		float L_13 = AudioClip_get_length_m4269890037(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_007c:
	{
		GameObject_t1113636619 * L_14 = __this->get__modelChild_14();
		NullCheck(L_14);
		Animation_t3648466861 * L_15 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_14, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		NullCheck(L_15);
		Animation_Stop_m195768787(L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get__modelChild_14();
		NullCheck(L_16);
		Animation_t3648466861 * L_17 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_16, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_18 = __this->get_deathAnim_10();
		String_t* L_19 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		AnimationState_t1108360407 * L_20 = Animation_get_Item_m2435218778(L_17, L_19, /*hidden argument*/NULL);
		bool L_21 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_t1113636619 * L_22 = __this->get__modelChild_14();
		NullCheck(L_22);
		Animation_t3648466861 * L_23 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_22, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_24 = __this->get_deathAnim_10();
		String_t* L_25 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Animation_Play_m27531216(L_23, L_25, /*hidden argument*/NULL);
		float L_26 = V_0;
		GameObject_t1113636619 * L_27 = __this->get__modelChild_14();
		NullCheck(L_27);
		Animation_t3648466861 * L_28 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_27, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_29 = __this->get_deathAnim_10();
		String_t* L_30 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		AnimationState_t1108360407 * L_31 = Animation_get_Item_m2435218778(L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		float L_32 = AnimationState_get_length_m2177740858(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_33 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_26, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		GameObject_t1113636619 * L_34 = __this->get__modelChild_14();
		NullCheck(L_34);
		Animation_t3648466861 * L_35 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_34, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_36 = __this->get_deathAnim_10();
		String_t* L_37 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		AnimationState_t1108360407 * L_38 = Animation_get_Item_m2435218778(L_35, L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		float L_39 = AnimationState_get_length_m2177740858(L_38, /*hidden argument*/NULL);
		intptr_t L_40 = (intptr_t)ZombiUpravlenie_StartFall_m472706208_RuntimeMethod_var;
		DelayedCallback_t4289022917 * L_41 = (DelayedCallback_t4289022917 *)il2cpp_codegen_object_new(DelayedCallback_t4289022917_il2cpp_TypeInfo_var);
		DelayedCallback__ctor_m3110140634(L_41, __this, L_40, /*hidden argument*/NULL);
		ZombiUpravlenie_CodeAfterDelay_m2582877979(__this, ((float)il2cpp_codegen_multiply((float)L_39, (float)(1.25f))), L_41, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0135:
	{
		ZombiUpravlenie_StartFall_m472706208(__this, /*hidden argument*/NULL);
	}

IL_013b:
	{
		float L_42 = V_0;
		intptr_t L_43 = (intptr_t)ZombiUpravlenie_DestroySelf_m3573195349_RuntimeMethod_var;
		DelayedCallback_t4289022917 * L_44 = (DelayedCallback_t4289022917 *)il2cpp_codegen_object_new(DelayedCallback_t4289022917_il2cpp_TypeInfo_var);
		DelayedCallback__ctor_m3110140634(L_44, __this, L_43, /*hidden argument*/NULL);
		ZombiUpravlenie_CodeAfterDelay_m2582877979(__this, L_42, L_44, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_45 = __this->get__modelChild_14();
		NullCheck(L_45);
		BoxCollider_t1640800422 * L_46 = GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221(L_45, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t1640800422_m3684288221_RuntimeMethod_var);
		NullCheck(L_46);
		Collider_set_enabled_m1517463283(L_46, (bool)0, /*hidden argument*/NULL);
		__this->set_deaded_20((bool)1);
		SpawnMonster_t4219141508 * L_47 = Component_GetComponent_TisSpawnMonster_t4219141508_m4183193302(__this, /*hidden argument*/Component_GetComponent_TisSpawnMonster_t4219141508_m4183193302_RuntimeMethod_var);
		V_1 = L_47;
		SpawnMonster_t4219141508 * L_48 = V_1;
		NullCheck(L_48);
		SpawnMonster_set_ShouldMove_m151235478(L_48, (bool)0, /*hidden argument*/NULL);
	}

IL_0174:
	{
		return;
	}
}
// System.Void ZombiUpravlenie::DestroySelf()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_DestroySelf_m3573195349 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_DestroySelf_m3573195349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombiUpravlenie::StartFall()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_StartFall_m472706208 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	{
		__this->set_falling_16((bool)1);
		return;
	}
}
// System.Void ZombiUpravlenie::Walk()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_Walk_m587632063 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_Walk_m587632063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__modelChild_14();
		NullCheck(L_0);
		Animation_t3648466861 * L_1 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		NullCheck(L_1);
		Animation_Stop_m195768787(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get__modelChild_14();
		NullCheck(L_2);
		Animation_t3648466861 * L_3 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_4 = __this->get_normWalkAnim_7();
		String_t* L_5 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_t1108360407 * L_6 = Animation_get_Item_m2435218778(L_3, L_5, /*hidden argument*/NULL);
		bool L_7 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get__modelChild_14();
		NullCheck(L_8);
		Animation_t3648466861 * L_9 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_10 = __this->get_normWalkAnim_7();
		String_t* L_11 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Animation_CrossFade_m2177301990(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0057:
	{
		GameObject_t1113636619 * L_12 = __this->get__modelChild_14();
		NullCheck(L_12);
		Animation_t3648466861 * L_13 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_12, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_14 = __this->get_zombieWalkAnim_8();
		String_t* L_15 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Animation_CrossFade_m2177301990(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void ZombiUpravlenie::PlayZombieRun()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieRun_m24001830 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_PlayZombieRun_m24001830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_tekAnim_31();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_1 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral3492311660, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get__modelChild_14();
		NullCheck(L_2);
		Animation_t3648466861 * L_3 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_4 = __this->get_zombieWalkAnim_8();
		String_t* L_5 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_t1108360407 * L_6 = Animation_get_Item_m2435218778(L_3, L_5, /*hidden argument*/NULL);
		bool L_7 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get__modelChild_14();
		NullCheck(L_8);
		Animation_t3648466861 * L_9 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_10 = __this->get_zombieWalkAnim_8();
		String_t* L_11 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Animation_CrossFade_m2177301990(L_9, L_11, /*hidden argument*/NULL);
	}

IL_005f:
	{
		PhotonView_t2207721820 * L_12 = __this->get_photonView_23();
		NullCheck(L_12);
		PhotonView_RPC_m4037858114(L_12, _stringLiteral3041927763, 1, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_0076:
	{
		__this->set_tekAnim_31(1);
		return;
	}
}
// System.Void ZombiUpravlenie::PlayZombieAttack()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieAttack_m2946499684 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_PlayZombieAttack_m2946499684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_tekAnim_31();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_1 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral3492311660, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00bd;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get__modelChild_14();
		NullCheck(L_2);
		Animation_t3648466861 * L_3 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_4 = __this->get_attackAnim_12();
		String_t* L_5 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_t1108360407 * L_6 = Animation_get_Item_m2435218778(L_3, L_5, /*hidden argument*/NULL);
		bool L_7 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get__modelChild_14();
		NullCheck(L_8);
		Animation_t3648466861 * L_9 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_10 = __this->get_attackAnim_12();
		String_t* L_11 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Animation_CrossFade_m2177301990(L_9, L_11, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_0064:
	{
		GameObject_t1113636619 * L_12 = __this->get__modelChild_14();
		NullCheck(L_12);
		Animation_t3648466861 * L_13 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_12, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_14 = __this->get_shootAnim_13();
		String_t* L_15 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		AnimationState_t1108360407 * L_16 = Animation_get_Item_m2435218778(L_13, L_15, /*hidden argument*/NULL);
		bool L_17 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a6;
		}
	}
	{
		GameObject_t1113636619 * L_18 = __this->get__modelChild_14();
		NullCheck(L_18);
		Animation_t3648466861 * L_19 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_18, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_20 = __this->get_shootAnim_13();
		String_t* L_21 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Animation_CrossFade_m2177301990(L_19, L_21, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		PhotonView_t2207721820 * L_22 = __this->get_photonView_23();
		NullCheck(L_22);
		PhotonView_RPC_m4037858114(L_22, _stringLiteral2629937081, 1, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		__this->set_tekAnim_31(2);
		return;
	}
}
// System.Void ZombiUpravlenie::PlayZombieRunRPC()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieRunRPC_m1293458684 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_PlayZombieRunRPC_m1293458684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__modelChild_14();
		NullCheck(L_0);
		Animation_t3648466861 * L_1 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_2 = __this->get_zombieWalkAnim_8();
		String_t* L_3 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_t1108360407 * L_4 = Animation_get_Item_m2435218778(L_1, L_3, /*hidden argument*/NULL);
		bool L_5 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get__modelChild_14();
		NullCheck(L_6);
		Animation_t3648466861 * L_7 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_6, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_8 = __this->get_zombieWalkAnim_8();
		String_t* L_9 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animation_CrossFade_m2177301990(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		__this->set_tekAnim_31(1);
		return;
	}
}
// System.Void ZombiUpravlenie::PlayZombieAttackRPC()
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_PlayZombieAttackRPC_m1347243381 (ZombiUpravlenie_t207883660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie_PlayZombieAttackRPC_m1347243381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__modelChild_14();
		NullCheck(L_0);
		Animation_t3648466861 * L_1 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_2 = __this->get_attackAnim_12();
		String_t* L_3 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_t1108360407 * L_4 = Animation_get_Item_m2435218778(L_1, L_3, /*hidden argument*/NULL);
		bool L_5 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get__modelChild_14();
		NullCheck(L_6);
		Animation_t3648466861 * L_7 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_6, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_8 = __this->get_attackAnim_12();
		String_t* L_9 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animation_CrossFade_m2177301990(L_7, L_9, /*hidden argument*/NULL);
		goto IL_0089;
	}

IL_0047:
	{
		GameObject_t1113636619 * L_10 = __this->get__modelChild_14();
		NullCheck(L_10);
		Animation_t3648466861 * L_11 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_10, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_12 = __this->get_shootAnim_13();
		String_t* L_13 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		AnimationState_t1108360407 * L_14 = Animation_get_Item_m2435218778(L_11, L_13, /*hidden argument*/NULL);
		bool L_15 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		GameObject_t1113636619 * L_16 = __this->get__modelChild_14();
		NullCheck(L_16);
		Animation_t3648466861 * L_17 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_16, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		String_t* L_18 = __this->get_shootAnim_13();
		String_t* L_19 = ZombiUpravlenie_myCAnim_m2122570633(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Animation_CrossFade_m2177301990(L_17, L_19, /*hidden argument*/NULL);
	}

IL_0089:
	{
		__this->set_tekAnim_31(2);
		return;
	}
}
// System.Void ZombiUpravlenie::CodeAfterDelay(System.Single,ZombiUpravlenie/DelayedCallback)
extern "C" IL2CPP_METHOD_ATTR void ZombiUpravlenie_CodeAfterDelay_m2582877979 (ZombiUpravlenie_t207883660 * __this, float ___delay0, DelayedCallback_t4289022917 * ___callback1, const RuntimeMethod* method)
{
	{
		float L_0 = ___delay0;
		DelayedCallback_t4289022917 * L_1 = ___callback1;
		RuntimeObject* L_2 = ZombiUpravlenie____DelayedCallback_m2093632133(__this, L_0, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ZombiUpravlenie::___DelayedCallback(System.Single,ZombiUpravlenie/DelayedCallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ZombiUpravlenie____DelayedCallback_m2093632133 (ZombiUpravlenie_t207883660 * __this, float ___time0, DelayedCallback_t4289022917 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombiUpravlenie____DelayedCallback_m2093632133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * V_0 = NULL;
	{
		U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * L_0 = (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 *)il2cpp_codegen_object_new(U3C___DelayedCallbackU3Ec__Iterator1_t766208805_il2cpp_TypeInfo_var);
		U3C___DelayedCallbackU3Ec__Iterator1__ctor_m59277986(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * L_1 = V_0;
		float L_2 = ___time0;
		NullCheck(L_1);
		L_1->set_time_0(L_2);
		U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * L_3 = V_0;
		DelayedCallback_t4289022917 * L_4 = ___callback1;
		NullCheck(L_3);
		L_3->set_callback_1(L_4);
		U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * L_5 = V_0;
		return L_5;
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
// System.Void ZombiUpravlenie/<___DelayedCallback>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C___DelayedCallbackU3Ec__Iterator1__ctor_m59277986 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZombiUpravlenie/<___DelayedCallback>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C___DelayedCallbackU3Ec__Iterator1_MoveNext_m2566753824 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C___DelayedCallbackU3Ec__Iterator1_MoveNext_m2566753824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005a;
	}

IL_0046:
	{
		DelayedCallback_t4289022917 * L_5 = __this->get_callback_1();
		NullCheck(L_5);
		DelayedCallback_Invoke_m249063468(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Object ZombiUpravlenie/<___DelayedCallback>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C___DelayedCallbackU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2149114275 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object ZombiUpravlenie/<___DelayedCallback>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C___DelayedCallbackU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1458096344 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void ZombiUpravlenie/<___DelayedCallback>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C___DelayedCallbackU3Ec__Iterator1_Dispose_m3835019723 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void ZombiUpravlenie/<___DelayedCallback>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C___DelayedCallbackU3Ec__Iterator1_Reset_m2249508115 (U3C___DelayedCallbackU3Ec__Iterator1_t766208805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C___DelayedCallbackU3Ec__Iterator1_Reset_m2249508115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3C___DelayedCallbackU3Ec__Iterator1_Reset_m2249508115_RuntimeMethod_var);
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
// System.Void ZombiUpravlenie/<Flash>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFlashU3Ec__Iterator0__ctor_m1681520674 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZombiUpravlenie/<Flash>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFlashU3Ec__Iterator0_MoveNext_m818249336 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFlashU3Ec__Iterator0_MoveNext_m818249336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_009a;
	}

IL_0021:
	{
		ZombiUpravlenie_t207883660 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set__flashing_27((bool)1);
		ZombiUpravlenie_t207883660 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = L_3->get__modelChild_14();
		ZombiUpravlenie_t207883660 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		Texture_t3661962703 * L_6 = L_5->get_hitTexture_24();
		ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (0.125f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		bool L_8 = __this->get_U24disposing_2();
		if (L_8)
		{
			goto IL_0067;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0067:
	{
		goto IL_009c;
	}

IL_006c:
	{
		ZombiUpravlenie_t207883660 * L_9 = __this->get_U24this_0();
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = L_9->get__modelChild_14();
		ZombiUpravlenie_t207883660 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		Texture_t3661962703 * L_12 = L_11->get__skin_25();
		ZombiUpravlenie_SetTextureRecursivelyFrom_m2649970740(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		ZombiUpravlenie_t207883660 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		L_13->set__flashing_27((bool)0);
		__this->set_U24PC_3((-1));
	}

IL_009a:
	{
		return (bool)0;
	}

IL_009c:
	{
		return (bool)1;
	}
}
// System.Object ZombiUpravlenie/<Flash>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1687140831 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ZombiUpravlenie/<Flash>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2004635113 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ZombiUpravlenie/<Flash>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFlashU3Ec__Iterator0_Dispose_m1846165273 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void ZombiUpravlenie/<Flash>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFlashU3Ec__Iterator0_Reset_m3271548494 (U3CFlashU3Ec__Iterator0_t2431851929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFlashU3Ec__Iterator0_Reset_m3271548494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFlashU3Ec__Iterator0_Reset_m3271548494_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_DelayedCallback_t4289022917 (DelayedCallback_t4289022917 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ZombiUpravlenie/DelayedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelayedCallback__ctor_m3110140634 (DelayedCallback_t4289022917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZombiUpravlenie/DelayedCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void DelayedCallback_Invoke_m249063468 (DelayedCallback_t4289022917 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DelayedCallback_Invoke_m249063468((DelayedCallback_t4289022917 *)__this->get_prev_9(), method);
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
// System.IAsyncResult ZombiUpravlenie/DelayedCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelayedCallback_BeginInvoke_m897352912 (DelayedCallback_t4289022917 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void ZombiUpravlenie/DelayedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelayedCallback_EndInvoke_m3590603795 (DelayedCallback_t4289022917 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void ZoomCamera::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZoomCamera__ctor_m774305721 (ZoomCamera_t1350885688 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_zoomMin_4((-5.0f));
		__this->set_zoomMax_5((5.0f));
		__this->set_seekTime_6((1.0f));
		return;
	}
}
// System.Void ZoomCamera::Start()
extern "C" IL2CPP_METHOD_ATTR void ZoomCamera_Start_m3545355959 (ZoomCamera_t1350885688 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_thisTransform_9(L_0);
		Transform_t3600365921 * L_1 = __this->get_thisTransform_9();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localPosition_m4234289348(L_1, /*hidden argument*/NULL);
		__this->set_defaultLocalPosition_8(L_2);
		float L_3 = __this->get_zoom_3();
		__this->set_currentZoom_10(L_3);
		return;
	}
}
// System.Void ZoomCamera::Update()
extern "C" IL2CPP_METHOD_ATTR void ZoomCamera_Update_m3942772807 (ZoomCamera_t1350885688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZoomCamera_Update_m3942772807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHit_t1056001966  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastHit_t1056001966  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		float L_0 = __this->get_zoom_3();
		float L_1 = __this->get_zoomMin_4();
		float L_2 = __this->get_zoomMax_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_zoom_3(L_3);
		V_0 = ((int32_t)-261);
		il2cpp_codegen_initobj((&V_2), sizeof(RaycastHit_t1056001966 ));
		RaycastHit_t1056001966  L_4 = V_2;
		V_1 = L_4;
		Transform_t3600365921 * L_5 = __this->get_origin_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		Vector3_t3722313464  L_7 = __this->get_defaultLocalPosition_8();
		Transform_t3600365921 * L_8 = __this->get_thisTransform_9();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Transform_get_parent_m835071599(L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = __this->get_thisTransform_9();
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_forward_m747522392(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_zoom_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_14 = Transform_InverseTransformDirection_m3843238577(L_9, L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Transform_t3600365921 * L_16 = __this->get_thisTransform_9();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Transform_get_parent_m835071599(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_4;
		NullCheck(L_17);
		Vector3_t3722313464  L_19 = Transform_TransformPoint_m226827784(L_17, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		Vector3_t3722313464  L_20 = V_3;
		Vector3_t3722313464  L_21 = V_5;
		int32_t L_22 = V_0;
		bool L_23 = Physics_Linecast_m2155187179(NULL /*static, unused*/, L_20, L_21, (&V_1), L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		Vector3_t3722313464  L_24 = RaycastHit_get_point_m2236647085((&V_1), /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = __this->get_thisTransform_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_27 = Transform_TransformDirection_m3784028109(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		Vector3_t3722313464  L_29 = V_6;
		Transform_t3600365921 * L_30 = __this->get_thisTransform_9();
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Transform_get_parent_m835071599(L_30, /*hidden argument*/NULL);
		Vector3_t3722313464  L_32 = __this->get_defaultLocalPosition_8();
		NullCheck(L_31);
		Vector3_t3722313464  L_33 = Transform_TransformPoint_m226827784(L_31, L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
		V_7 = L_34;
		float L_35 = Vector3_get_magnitude_m27958459((&V_7), /*hidden argument*/NULL);
		__this->set_targetZoom_11(L_35);
		goto IL_00eb;
	}

IL_00df:
	{
		float L_36 = __this->get_zoom_3();
		__this->set_targetZoom_11(L_36);
	}

IL_00eb:
	{
		float L_37 = __this->get_targetZoom_11();
		float L_38 = __this->get_zoomMin_4();
		float L_39 = __this->get_zoomMax_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_40 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		__this->set_targetZoom_11(L_40);
		bool L_41 = __this->get_smoothZoomIn_7();
		if (L_41)
		{
			goto IL_013b;
		}
	}
	{
		float L_42 = __this->get_targetZoom_11();
		float L_43 = __this->get_currentZoom_10();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_42, (float)L_43))) <= ((float)(0.0f))))
		{
			goto IL_013b;
		}
	}
	{
		float L_44 = __this->get_targetZoom_11();
		__this->set_currentZoom_10(L_44);
		goto IL_015e;
	}

IL_013b:
	{
		float L_45 = __this->get_currentZoom_10();
		float L_46 = __this->get_targetZoom_11();
		float* L_47 = __this->get_address_of_zoomVelocity_12();
		float L_48 = __this->get_seekTime_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_49 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		__this->set_currentZoom_10(L_49);
	}

IL_015e:
	{
		Vector3_t3722313464  L_50 = __this->get_defaultLocalPosition_8();
		Transform_t3600365921 * L_51 = __this->get_thisTransform_9();
		NullCheck(L_51);
		Transform_t3600365921 * L_52 = Transform_get_parent_m835071599(L_51, /*hidden argument*/NULL);
		Transform_t3600365921 * L_53 = __this->get_thisTransform_9();
		NullCheck(L_53);
		Vector3_t3722313464  L_54 = Transform_get_forward_m747522392(L_53, /*hidden argument*/NULL);
		float L_55 = __this->get_currentZoom_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_56 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t3722313464  L_57 = Transform_InverseTransformDirection_m3843238577(L_52, L_56, /*hidden argument*/NULL);
		Vector3_t3722313464  L_58 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_50, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		Transform_t3600365921 * L_59 = __this->get_thisTransform_9();
		Vector3_t3722313464  L_60 = V_4;
		NullCheck(L_59);
		Transform_set_localPosition_m4128471975(L_59, L_60, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Main()
extern "C" IL2CPP_METHOD_ATTR void ZoomCamera_Main_m2969817671 (ZoomCamera_t1350885688 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
