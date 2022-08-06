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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t915317458;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t956758543;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t955042874;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2986313634;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;

extern RuntimeClass* OakleyGroups_t1704371988_il2cpp_TypeInfo_var;
extern RuntimeClass* BigInteger_t956758543_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId;
extern RuntimeClass* SHA256Managed_t955042874_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* RijndaelManaged_t3586970409_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId;
extern RuntimeClass* ICryptoTransform_t2733259762_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId;
extern RuntimeClass* DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D1_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D2_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D3_3_FieldInfo_var;
extern const uint32_t OakleyGroups__cctor_m3563987568_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


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
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_0)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
#ifndef BIGINTEGER_T956758543_H
#define BIGINTEGER_T956758543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Numeric.BigInteger
struct  BigInteger_t956758543  : public RuntimeObject
{
public:
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_2;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_3;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___data_2)); }
	inline UInt32U5BU5D_t2770800703* get_data_2() const { return ___data_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(UInt32U5BU5D_t2770800703* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___dataLength_3)); }
	inline int32_t get_dataLength_3() const { return ___dataLength_3; }
	inline int32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(int32_t value)
	{
		___dataLength_3 = value;
	}
};

struct BigInteger_t956758543_StaticFields
{
public:
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t385246372* ___primesBelow2000_1;

public:
	inline static int32_t get_offset_of_primesBelow2000_1() { return static_cast<int32_t>(offsetof(BigInteger_t956758543_StaticFields, ___primesBelow2000_1)); }
	inline Int32U5BU5D_t385246372* get_primesBelow2000_1() const { return ___primesBelow2000_1; }
	inline Int32U5BU5D_t385246372** get_address_of_primesBelow2000_1() { return &___primesBelow2000_1; }
	inline void set_primesBelow2000_1(Int32U5BU5D_t385246372* value)
	{
		___primesBelow2000_1 = value;
		Il2CppCodeGenWriteBarrier((&___primesBelow2000_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T956758543_H
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
#ifndef OAKLEYGROUPS_T1704371988_H
#define OAKLEYGROUPS_T1704371988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.OakleyGroups
struct  OakleyGroups_t1704371988  : public RuntimeObject
{
public:

public:
};

struct OakleyGroups_t1704371988_StaticFields
{
public:
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_t4116647657* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_t4116647657* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_t4116647657* ___OakleyPrime1536_3;

public:
	inline static int32_t get_offset_of_Generator_0() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___Generator_0)); }
	inline int32_t get_Generator_0() const { return ___Generator_0; }
	inline int32_t* get_address_of_Generator_0() { return &___Generator_0; }
	inline void set_Generator_0(int32_t value)
	{
		___Generator_0 = value;
	}

	inline static int32_t get_offset_of_OakleyPrime768_1() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime768_1)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime768_1() const { return ___OakleyPrime768_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime768_1() { return &___OakleyPrime768_1; }
	inline void set_OakleyPrime768_1(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime768_1 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime768_1), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1024_2() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1024_2)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1024_2() const { return ___OakleyPrime1024_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1024_2() { return &___OakleyPrime1024_2; }
	inline void set_OakleyPrime1024_2(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1024_2 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1024_2), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1536_3() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1536_3)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1536_3() const { return ___OakleyPrime1536_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1536_3() { return &___OakleyPrime1536_3; }
	inline void set_OakleyPrime1536_3(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1536_3 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1536_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OAKLEYGROUPS_T1704371988_H
#ifndef DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#define DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t915317458  : public RuntimeObject
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t956758543 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t956758543 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t956758543 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t2986313634 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t4116647657* ___sharedKey_5;

public:
	inline static int32_t get_offset_of_prime_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___prime_1)); }
	inline BigInteger_t956758543 * get_prime_1() const { return ___prime_1; }
	inline BigInteger_t956758543 ** get_address_of_prime_1() { return &___prime_1; }
	inline void set_prime_1(BigInteger_t956758543 * value)
	{
		___prime_1 = value;
		Il2CppCodeGenWriteBarrier((&___prime_1), value);
	}

	inline static int32_t get_offset_of_secret_2() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___secret_2)); }
	inline BigInteger_t956758543 * get_secret_2() const { return ___secret_2; }
	inline BigInteger_t956758543 ** get_address_of_secret_2() { return &___secret_2; }
	inline void set_secret_2(BigInteger_t956758543 * value)
	{
		___secret_2 = value;
		Il2CppCodeGenWriteBarrier((&___secret_2), value);
	}

	inline static int32_t get_offset_of_publicKey_3() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___publicKey_3)); }
	inline BigInteger_t956758543 * get_publicKey_3() const { return ___publicKey_3; }
	inline BigInteger_t956758543 ** get_address_of_publicKey_3() { return &___publicKey_3; }
	inline void set_publicKey_3(BigInteger_t956758543 * value)
	{
		___publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_3), value);
	}

	inline static int32_t get_offset_of_crypto_4() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___crypto_4)); }
	inline Rijndael_t2986313634 * get_crypto_4() const { return ___crypto_4; }
	inline Rijndael_t2986313634 ** get_address_of_crypto_4() { return &___crypto_4; }
	inline void set_crypto_4(Rijndael_t2986313634 * value)
	{
		___crypto_4 = value;
		Il2CppCodeGenWriteBarrier((&___crypto_4), value);
	}

	inline static int32_t get_offset_of_sharedKey_5() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___sharedKey_5)); }
	inline ByteU5BU5D_t4116647657* get_sharedKey_5() const { return ___sharedKey_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_sharedKey_5() { return &___sharedKey_5; }
	inline void set_sharedKey_5(ByteU5BU5D_t4116647657* value)
	{
		___sharedKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___sharedKey_5), value);
	}
};

struct DiffieHellmanCryptoProvider_t915317458_StaticFields
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t956758543 * ___primeRoot_0;

public:
	inline static int32_t get_offset_of_primeRoot_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458_StaticFields, ___primeRoot_0)); }
	inline BigInteger_t956758543 * get_primeRoot_0() const { return ___primeRoot_0; }
	inline BigInteger_t956758543 ** get_address_of_primeRoot_0() { return &___primeRoot_0; }
	inline void set_primeRoot_0(BigInteger_t956758543 * value)
	{
		___primeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___primeRoot_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D128_T4257552243_H
#define __STATICARRAYINITTYPESIZEU3D128_T4257552243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t4257552243 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t4257552243__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T4257552243_H
#ifndef __STATICARRAYINITTYPESIZEU3D96_T1494554479_H
#define __STATICARRAYINITTYPESIZEU3D96_T1494554479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_t1494554479 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_t1494554479__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D96_T1494554479_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D1212_T4240789079_H
#define __STATICARRAYINITTYPESIZEU3D1212_T4240789079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=1212
struct  __StaticArrayInitTypeSizeU3D1212_t4240789079 
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
		uint8_t __StaticArrayInitTypeSizeU3D1212_t4240789079__padding[1212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1212_T4240789079_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D192_T4256896888_H
#define __STATICARRAYINITTYPESIZEU3D192_T4256896888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_t4256896888 
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
		uint8_t __StaticArrayInitTypeSizeU3D192_t4256896888__padding[192];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D192_T4256896888_H
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
#ifndef SHA256_T3672283617_H
#define SHA256_T3672283617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3672283617  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3672283617_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D9_T815921564_H
#define __STATICARRAYINITTYPESIZEU3D9_T815921564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t815921564 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_t815921564__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T815921564_H
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
#ifndef SHA256MANAGED_T955042874_H
#define SHA256MANAGED_T955042874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t955042874  : public SHA256_t3672283617
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t2770800703* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t2770800703* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____H_4)); }
	inline UInt32U5BU5D_t2770800703* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t2770800703* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___buff_8)); }
	inline UInt32U5BU5D_t2770800703* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t2770800703** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t2770800703* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T955042874_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_T3381563106_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_T3381563106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}
struct  U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields
{
public:
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x600026d-1
	__StaticArrayInitTypeSizeU3D1212_t4240789079  ___U24U24method0x600026dU2D1_0;
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x6000280-1
	__StaticArrayInitTypeSizeU3D96_t1494554479  ___U24U24method0x6000280U2D1_1;
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x6000280-2
	__StaticArrayInitTypeSizeU3D128_t4257552243  ___U24U24method0x6000280U2D2_2;
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x6000280-3
	__StaticArrayInitTypeSizeU3D192_t4256896888  ___U24U24method0x6000280U2D3_3;
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x600028a-1
	__StaticArrayInitTypeSizeU3D9_t815921564  ___U24U24method0x600028aU2D1_4;
	// <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>{A4ECA9C5-4B5D-47F6-A217-E691EA6E094E}::$$method0x6000291-1
	__StaticArrayInitTypeSizeU3D9_t815921564  ___U24U24method0x6000291U2D1_5;

public:
	inline static int32_t get_offset_of_U24U24method0x600026dU2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x600026dU2D1_0)); }
	inline __StaticArrayInitTypeSizeU3D1212_t4240789079  get_U24U24method0x600026dU2D1_0() const { return ___U24U24method0x600026dU2D1_0; }
	inline __StaticArrayInitTypeSizeU3D1212_t4240789079 * get_address_of_U24U24method0x600026dU2D1_0() { return &___U24U24method0x600026dU2D1_0; }
	inline void set_U24U24method0x600026dU2D1_0(__StaticArrayInitTypeSizeU3D1212_t4240789079  value)
	{
		___U24U24method0x600026dU2D1_0 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000280U2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x6000280U2D1_1)); }
	inline __StaticArrayInitTypeSizeU3D96_t1494554479  get_U24U24method0x6000280U2D1_1() const { return ___U24U24method0x6000280U2D1_1; }
	inline __StaticArrayInitTypeSizeU3D96_t1494554479 * get_address_of_U24U24method0x6000280U2D1_1() { return &___U24U24method0x6000280U2D1_1; }
	inline void set_U24U24method0x6000280U2D1_1(__StaticArrayInitTypeSizeU3D96_t1494554479  value)
	{
		___U24U24method0x6000280U2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000280U2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x6000280U2D2_2)); }
	inline __StaticArrayInitTypeSizeU3D128_t4257552243  get_U24U24method0x6000280U2D2_2() const { return ___U24U24method0x6000280U2D2_2; }
	inline __StaticArrayInitTypeSizeU3D128_t4257552243 * get_address_of_U24U24method0x6000280U2D2_2() { return &___U24U24method0x6000280U2D2_2; }
	inline void set_U24U24method0x6000280U2D2_2(__StaticArrayInitTypeSizeU3D128_t4257552243  value)
	{
		___U24U24method0x6000280U2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000280U2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x6000280U2D3_3)); }
	inline __StaticArrayInitTypeSizeU3D192_t4256896888  get_U24U24method0x6000280U2D3_3() const { return ___U24U24method0x6000280U2D3_3; }
	inline __StaticArrayInitTypeSizeU3D192_t4256896888 * get_address_of_U24U24method0x6000280U2D3_3() { return &___U24U24method0x6000280U2D3_3; }
	inline void set_U24U24method0x6000280U2D3_3(__StaticArrayInitTypeSizeU3D192_t4256896888  value)
	{
		___U24U24method0x6000280U2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x600028aU2D1_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x600028aU2D1_4)); }
	inline __StaticArrayInitTypeSizeU3D9_t815921564  get_U24U24method0x600028aU2D1_4() const { return ___U24U24method0x600028aU2D1_4; }
	inline __StaticArrayInitTypeSizeU3D9_t815921564 * get_address_of_U24U24method0x600028aU2D1_4() { return &___U24U24method0x600028aU2D1_4; }
	inline void set_U24U24method0x600028aU2D1_4(__StaticArrayInitTypeSizeU3D9_t815921564  value)
	{
		___U24U24method0x600028aU2D1_4 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000291U2D1_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106_StaticFields, ___U24U24method0x6000291U2D1_5)); }
	inline __StaticArrayInitTypeSizeU3D9_t815921564  get_U24U24method0x6000291U2D1_5() const { return ___U24U24method0x6000291U2D1_5; }
	inline __StaticArrayInitTypeSizeU3D9_t815921564 * get_address_of_U24U24method0x6000291U2D1_5() { return &___U24U24method0x6000291U2D1_5; }
	inline void set_U24U24method0x6000291U2D1_5(__StaticArrayInitTypeSizeU3D9_t815921564  value)
	{
		___U24U24method0x6000291U2D1_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_T3381563106_H
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
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef RIJNDAEL_T2986313634_H
#define RIJNDAEL_T2986313634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2986313634  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2986313634_H
#ifndef RIJNDAELMANAGED_T3586970409_H
#define RIJNDAELMANAGED_T3586970409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3586970409  : public Rijndael_t2986313634
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3586970409_H
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



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m3579054046 (BigInteger_t956758543 * __this, ByteU5BU5D_t4116647657* ___inData0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method);
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BigInteger_GetBytes_m2793402501 (BigInteger_t956758543 * __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SHA256Managed__ctor_m2170017447 (SHA256Managed_t955042874 * __this, const RuntimeMethod* method);
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_get_SharedKey_m3244215345 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_m1562735454 (RijndaelManaged_t3586970409 * __this, const RuntimeMethod* method);
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Encrypt_m3205762831 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_ModPow_m1818331774 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___exp0, BigInteger_t956758543 * ___n1, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_GenerateRandom_m3242160242 (RuntimeObject * __this /* static, unused */, int32_t ___bits0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Implicit_m1456924192 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Subtraction_m1996860654 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m1973220735 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m4107706715 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m1240160733 (BigInteger_t956758543 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m3020782632 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_OakleyPrime768_1();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		__this->set_prime_1(L_1);
		BigInteger_t956758543 * L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682(__this, ((int32_t)160), /*hidden argument*/NULL);
		__this->set_secret_2(L_2);
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876(__this, /*hidden argument*/NULL);
		__this->set_publicKey_3(L_3);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_get_PublicKey_m1675649082 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = __this->get_publicKey_3();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = BigInteger_GetBytes_m2793402501(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_get_SharedKey_m3244215345 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_sharedKey_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	SHA256_t3672283617 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BigInteger_t956758543 * L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = BigInteger_GetBytes_m2793402501(L_4, /*hidden argument*/NULL);
		__this->set_sharedKey_5(L_5);
		SHA256Managed_t955042874 * L_6 = (SHA256Managed_t955042874 *)il2cpp_codegen_object_new(SHA256Managed_t955042874_il2cpp_TypeInfo_var);
		SHA256Managed__ctor_m2170017447(L_6, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SHA256_t3672283617 * L_7 = V_3;
		ByteU5BU5D_t4116647657* L_8 = DiffieHellmanCryptoProvider_get_SharedKey_m3244215345(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_9 = HashAlgorithm_ComputeHash_m2825542963(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		IL2CPP_LEAVE(0x45, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			SHA256_t3672283617 * L_10 = V_3;
			V_4 = (bool)((((RuntimeObject*)(SHA256_t3672283617 *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_11 = V_4;
			if (L_11)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			SHA256_t3672283617 * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		RijndaelManaged_t3586970409 * L_13 = (RijndaelManaged_t3586970409 *)il2cpp_codegen_object_new(RijndaelManaged_t3586970409_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_m1562735454(L_13, /*hidden argument*/NULL);
		__this->set_crypto_4(L_13);
		Rijndael_t2986313634 * L_14 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_15 = V_2;
		NullCheck(L_14);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_14, L_15);
		Rijndael_t2986313634 * L_16 = __this->get_crypto_4();
		NullCheck(L_16);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_16, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16))));
		Rijndael_t2986313634 * L_17 = __this->get_crypto_4();
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_17, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Encrypt_m3139291265 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = DiffieHellmanCryptoProvider_Encrypt_m3205762831(__this, L_0, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Encrypt_m3205762831 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x2A, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_8 = V_2;
			if (L_8)
			{
				goto IL_0029;
			}
		}

IL_0022:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		ByteU5BU5D_t4116647657* L_10 = V_1;
		return L_10;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Decrypt_m2209477771 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x2A, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_8 = V_2;
			if (L_8)
			{
				goto IL_0029;
			}
		}

IL_0022:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		ByteU5BU5D_t4116647657* L_10 = V_1;
		return L_10;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1904765254 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	{
		DiffieHellmanCryptoProvider_Dispose_m1853825749(__this, (bool)1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_0009;
	}

IL_0009:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_0 = ((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->get_primeRoot_0();
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	BigInteger_t956758543 * V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_1 = BigInteger_GenerateRandom_m3242160242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = __this->get_prime_1();
		BigInteger_t956758543 * L_4 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_5 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = BigInteger_op_GreaterThanOrEqual_m1973220735(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_t956758543 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_8 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_9 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_2 = (bool)G_B4_0;
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_t956758543 * L_11 = V_0;
		V_1 = L_11;
		goto IL_003b;
	}

IL_003b:
	{
		BigInteger_t956758543 * L_12 = V_1;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_m2518077788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_Generator_0();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->set_primeRoot_0(L_1);
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
extern "C" IL2CPP_METHOD_ATTR void OakleyGroups__cctor_m3563987568 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OakleyGroups__cctor_m3563987568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_Generator_0(((int32_t)22));
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime768_1(L_0);
		ByteU5BU5D_t4116647657* L_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1024_2(L_2);
		ByteU5BU5D_t4116647657* L_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7BA4ECA9C5U2D4B5DU2D47F6U2DA217U2DE691EA6E094EU7D_t3381563106____U24U24method0x6000280U2D3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1536_3(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
