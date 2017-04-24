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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BulletScript1317259639.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "AssemblyU2DCSharp_EnemyScript321581343.h"
#include "AssemblyU2DCSharp_PlayerControler1830793433.h"
#include "AssemblyU2DCSharp_LevelControl1927737663.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_EnemyShooter1669598516.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_HealthBar1323021899.h"
#include "AssemblyU2DCSharp_KillMe2541003986.h"
#include "AssemblyU2DCSharp_UIControler2836741900.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576.h"
#include "AssemblyU2DCSharp_MainMenuButton3610878670.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "AssemblyU2DCSharp_SlashBox2056466298.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"

// BulletScript
struct BulletScript_t1317259639;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// EnemyScript
struct EnemyScript_t321581343;
// PlayerControler
struct PlayerControler_t1830793433;
// LevelControl
struct LevelControl_t1927737663;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// System.String
struct String_t;
// EnemyShooter
struct EnemyShooter_t1669598516;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// HealthBar
struct HealthBar_t1323021899;
// KillMe
struct KillMe_t2541003986;
// UIControler
struct UIControler_t2836741900;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// MainMenuButton
struct MainMenuButton_t3610878670;
// UnityEngine.Animator
struct Animator_t69676727;
// SlashBox
struct SlashBox_t2056466298;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t BulletScript_Update_m3394306943_MetadataUsageId;
extern const uint32_t BulletScript_DestroySelf_m1667832390_MetadataUsageId;
extern const MethodInfo* Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202_MethodInfo_var;
extern const uint32_t EnemyScript_Start_m1414770214_MetadataUsageId;
extern const uint32_t EnemyScript_Update_m2857428607_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t EnemyScript_EnemyMovemnet_m2720415835_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t EnemyScript_DestroyEnemy_m3005032158_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisBulletScript_t1317259639_m2160214652_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3318194134;
extern const uint32_t EnemyScript_OnTriggerEnter2D_m1429176862_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisEnemyScript_t321581343_m1256360208_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t EnemyShooter_Start_m3703904789_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986_MethodInfo_var;
extern const uint32_t EnemyShooter_Update_m172862430_MetadataUsageId;
extern const MethodInfo* Component_GetComponentInParent_TisEnemyScript_t321581343_m92915593_MethodInfo_var;
extern const uint32_t HealthBar_Start_m736750566_MetadataUsageId;
extern const uint32_t KillMe_Update_m987184976_MetadataUsageId;
extern const MethodInfo* Object_FindObjectOfType_TisUIControler_t2836741900_m3281509345_MethodInfo_var;
extern const uint32_t LevelControl_Start_m484815146_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2073341055;
extern Il2CppCodeGenString* _stringLiteral1947425379;
extern Il2CppCodeGenString* _stringLiteral723512715;
extern Il2CppCodeGenString* _stringLiteral2622035893;
extern const uint32_t LevelControl_Update_m1581095431_MetadataUsageId;
extern const uint32_t LevelControl_SpawnWave_m3970661352_MetadataUsageId;
extern const uint32_t MainMenuButton_AdvanceToGame_m396396920_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var;
extern const uint32_t PlayerControler_Start_m1964702560_MetadataUsageId;
extern const uint32_t PlayerControler_playerShooting_m4275274386_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1938184819;
extern const uint32_t PlayerControler_Movement_m3647959031_MetadataUsageId;
extern const uint32_t PlayerControler_PlayerDead_m2290345551_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2662464627;
extern const uint32_t PlayerControler_OnTriggerEnter2D_m1401660952_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern const uint32_t SlashBox_Start_m3576059419_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisPlayerControler_t1830793433_m4091297450_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern const uint32_t SlashBox_OnTriggerStay2D_m2958689262_MetadataUsageId;
extern const uint32_t UIControler_Start_m3229029735_MetadataUsageId;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral584367081;
extern Il2CppCodeGenString* _stringLiteral372029315;
extern Il2CppCodeGenString* _stringLiteral916249565;
extern Il2CppCodeGenString* _stringLiteral2874782295;
extern Il2CppCodeGenString* _stringLiteral3566073180;
extern const uint32_t UIControler_Update_m1736175278_MetadataUsageId;

// System.Int32[]
struct Int32U5BU5D_t3030399641  : public Il2CppArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Transform_t3275118058 * m_Items[1];

public:
	inline Transform_t3275118058 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3275118058 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3275118058 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3275118058 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3275118058 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3275118058 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponentInParent_TisIl2CppObject_m2509612665_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<PlayerControler>()
#define Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740(__this /* static, unused */, method) ((  PlayerControler_t1830793433 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(__this, method) ((  Rigidbody2D_t502193897 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<LevelControl>()
#define Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202(__this /* static, unused */, method) ((  LevelControl_t1927737663 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3196903881 (Quaternion_t4030073918 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3411284563 (Transform_t3275118058 * __this, Quaternion_t4030073918  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::EnemyMovemnet()
extern "C"  void EnemyScript_EnemyMovemnet_m2720415835 (EnemyScript_t321581343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::EnemyDirection()
extern "C"  void EnemyScript_EnemyDirection_m3603927173 (EnemyScript_t321581343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::DestroyEnemy()
extern "C"  void EnemyScript_DestroyEnemy_m3005032158 (EnemyScript_t321581343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m2325460848 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t4030073918  Transform_get_rotation_m1033555130 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<BulletScript>()
#define Component_GetComponent_TisBulletScript_t1317259639_m2160214652(__this, method) ((  BulletScript_t1317259639 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void BulletScript::DestroySelf()
extern "C"  void BulletScript_DestroySelf_m1667832390 (BulletScript_t1317259639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<EnemyScript>()
#define Component_GetComponent_TisEnemyScript_t321581343_m1256360208(__this, method) ((  EnemyScript_t321581343 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<BulletScript>()
#define GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986(__this, method) ((  BulletScript_t1317259639 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInParent<EnemyScript>()
#define Component_GetComponentInParent_TisEnemyScript_t321581343_m92915593(__this, method) ((  EnemyScript_t321581343 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponentInParent_TisIl2CppObject_m2509612665_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t2243707580  Transform_get_localScale_m3074381503 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t2243707580  Transform_get_localPosition_m2533925116 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m1026930133 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<UIControler>()
#define Object_FindObjectOfType_TisUIControler_t2836741900_m3281509345(__this /* static, unused */, method) ((  UIControler_t2836741900 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m1909920690 (Color_t2020392075 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIControler::SetHelpfulTips(System.String)
extern "C"  void UIControler_SetHelpfulTips_m1163446315 (UIControler_t2836741900 * __this, String_t* ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelControl::SpawnWave(UnityEngine.GameObject[],UnityEngine.Transform[],System.Single,System.Int32,System.Int32)
extern "C"  void LevelControl_SpawnWave_m3970661352 (LevelControl_t1927737663 * __this, GameObjectU5BU5D_t3057952154* ___enemyType0, TransformU5BU5D_t3764228911* ___EnemySpawns11, float ___spawnDelay2, int32_t ___enemyType03, int32_t ___enemyType14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIControler::TriggerWave()
extern "C"  void UIControler_TriggerWave_m106318474 (UIControler_t2836741900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void PlayerControler::Movement()
extern "C"  void PlayerControler_Movement_m3647959031 (PlayerControler_t1830793433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControler::playerArtControl()
extern "C"  void PlayerControler_playerArtControl_m3023608443 (PlayerControler_t1830793433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControler::playerShooting()
extern "C"  void PlayerControler_playerShooting_m4275274386 (PlayerControler_t1830793433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControler::PlayerDead()
extern "C"  void PlayerControler_PlayerDead_m2290345551 (PlayerControler_t1830793433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m1008512962 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m2305662531 (Animator_t69676727 * __this, String_t* p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m617298623 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<PlayerControler>()
#define Component_GetComponent_TisPlayerControler_t1830793433_m4091297450(__this, method) ((  PlayerControler_t1830793433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3881798623 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m2000667605 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, Il2CppObject * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BulletScript::.ctor()
extern "C"  void BulletScript__ctor_m621337510 (BulletScript_t1317259639 * __this, const MethodInfo* method)
{
	{
		__this->set_isGoingRight_2((bool)1);
		__this->set_damage_3(2);
		__this->set_selfDestructTimer_4((5.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BulletScript::Start()
extern "C"  void BulletScript_Start_m2137121506 (BulletScript_t1317259639 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BulletScript::Update()
extern "C"  void BulletScript_Update_m3394306943 (BulletScript_t1317259639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletScript_Update_m3394306943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_selfDestructTimer_4();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_selfDestructTimer_4(((float)((float)L_0-(float)L_1)));
		float L_2 = __this->get_selfDestructTimer_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		bool L_4 = __this->get_isGoingRight_2();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		Rigidbody2D_t502193897 * L_5 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		float L_6 = __this->get_speed_5();
		Vector2_t2243707579  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3067419446(&L_7, L_6, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_5, L_7, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0058:
	{
		Rigidbody2D_t502193897 * L_8 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		float L_9 = __this->get_speed_5();
		Vector2_t2243707579  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3067419446(&L_10, ((-L_9)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void BulletScript::DestroySelf()
extern "C"  void BulletScript_DestroySelf_m1667832390 (BulletScript_t1317259639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletScript_DestroySelf_m1667832390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyScript::.ctor()
extern "C"  void EnemyScript__ctor_m1473639978 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	{
		__this->set_health_2(((int32_t)10));
		__this->set_maxHealth_3(((int32_t)10));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyScript::Start()
extern "C"  void EnemyScript_Start_m1414770214 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyScript_Start_m1414770214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		PlayerControler_t1830793433 * L_0 = Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740_MethodInfo_var);
		__this->set_playerControler_6(L_0);
		PlayerControler_t1830793433 * L_1 = __this->get_playerControler_6();
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(L_1, /*hidden argument*/NULL);
		__this->set_player_7(L_2);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_4 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		__this->set_enemyRigidbody2D_8(L_4);
		LevelControl_t1927737663 * L_5 = Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202_MethodInfo_var);
		__this->set_levelControl_10(L_5);
		return;
	}
}
// System.Void EnemyScript::Update()
extern "C"  void EnemyScript_Update_m2857428607 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyScript_Update_m2857428607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Quaternion__ctor_m3196903881(&L_2, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m3411284563(L_1, L_2, /*hidden argument*/NULL);
		EnemyScript_EnemyMovemnet_m2720415835(__this, /*hidden argument*/NULL);
		EnemyScript_EnemyDirection_m3603927173(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = __this->get_player_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_3, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_enemyFacingRight_5((bool)1);
	}

IL_004d:
	{
		int32_t L_5 = __this->get_health_2();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		EnemyScript_DestroyEnemy_m3005032158(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return;
	}
}
// System.Void EnemyScript::EnemyMovemnet()
extern "C"  void EnemyScript_EnemyMovemnet_m2720415835 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyScript_EnemyMovemnet_m2720415835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t2243707580  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t2243707580  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t2243707580  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t2243707580  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t2243707580  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t2243707580  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t2243707580  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t2243707580  V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		GameObject_t1756533147 * L_0 = __this->get_player_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_01de;
		}
	}
	{
		GameObject_t1756533147 * L_2 = __this->get_player_7();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = GameObject_get_transform_m909382139(L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_10 = fabsf(((float)((float)L_5-(float)L_9)));
		V_0 = L_10;
		GameObject_t1756533147 * L_11 = __this->get_player_7();
		Transform_t3275118058 * L_12 = GameObject_get_transform_m909382139(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14 = (&V_4)->get_y_2();
		GameObject_t1756533147 * L_15 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_16 = GameObject_get_transform_m909382139(L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Transform_get_position_m1104419803(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		float L_18 = (&V_5)->get_y_2();
		float L_19 = fabsf(((float)((float)L_14-(float)L_18)));
		V_3 = L_19;
		V_6 = (0.0f);
		V_7 = (0.0f);
		GameObject_t1756533147 * L_20 = __this->get_player_7();
		Transform_t3275118058 * L_21 = GameObject_get_transform_m909382139(L_20, /*hidden argument*/NULL);
		Vector3_t2243707580  L_22 = Transform_get_position_m1104419803(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		float L_23 = (&V_8)->get_x_1();
		GameObject_t1756533147 * L_24 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_25 = GameObject_get_transform_m909382139(L_24, /*hidden argument*/NULL);
		Vector3_t2243707580  L_26 = Transform_get_position_m1104419803(L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		float L_27 = (&V_9)->get_x_1();
		if ((!(((float)L_23) < ((float)((float)((float)L_27-(float)(0.02f)))))))
		{
			goto IL_00dc;
		}
	}
	{
		float L_28 = __this->get_enemySpeed_4();
		V_6 = ((-L_28));
		__this->set_enemyFacingRight_5((bool)0);
	}

IL_00dc:
	{
		GameObject_t1756533147 * L_29 = __this->get_player_7();
		Transform_t3275118058 * L_30 = GameObject_get_transform_m909382139(L_29, /*hidden argument*/NULL);
		Vector3_t2243707580  L_31 = Transform_get_position_m1104419803(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		float L_32 = (&V_10)->get_x_1();
		GameObject_t1756533147 * L_33 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_34 = GameObject_get_transform_m909382139(L_33, /*hidden argument*/NULL);
		Vector3_t2243707580  L_35 = Transform_get_position_m1104419803(L_34, /*hidden argument*/NULL);
		V_11 = L_35;
		float L_36 = (&V_11)->get_x_1();
		if ((!(((float)L_32) > ((float)((float)((float)L_36+(float)(0.02f)))))))
		{
			goto IL_0128;
		}
	}
	{
		float L_37 = __this->get_enemySpeed_4();
		V_6 = L_37;
		__this->set_enemyFacingRight_5((bool)1);
	}

IL_0128:
	{
		float L_38 = V_3;
		float L_39 = V_0;
		if ((!(((float)L_38) > ((float)((float)((float)L_39-(float)(0.5f)))))))
		{
			goto IL_01c5;
		}
	}
	{
		GameObject_t1756533147 * L_40 = __this->get_player_7();
		Transform_t3275118058 * L_41 = GameObject_get_transform_m909382139(L_40, /*hidden argument*/NULL);
		Vector3_t2243707580  L_42 = Transform_get_position_m1104419803(L_41, /*hidden argument*/NULL);
		V_12 = L_42;
		float L_43 = (&V_12)->get_y_2();
		GameObject_t1756533147 * L_44 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_45 = GameObject_get_transform_m909382139(L_44, /*hidden argument*/NULL);
		Vector3_t2243707580  L_46 = Transform_get_position_m1104419803(L_45, /*hidden argument*/NULL);
		V_13 = L_46;
		float L_47 = (&V_13)->get_y_2();
		if ((!(((float)L_43) > ((float)((float)((float)L_47+(float)(0.02f)))))))
		{
			goto IL_017f;
		}
	}
	{
		float L_48 = __this->get_enemySpeed_4();
		V_7 = L_48;
		goto IL_01c5;
	}

IL_017f:
	{
		GameObject_t1756533147 * L_49 = __this->get_player_7();
		Transform_t3275118058 * L_50 = GameObject_get_transform_m909382139(L_49, /*hidden argument*/NULL);
		Vector3_t2243707580  L_51 = Transform_get_position_m1104419803(L_50, /*hidden argument*/NULL);
		V_14 = L_51;
		float L_52 = (&V_14)->get_y_2();
		GameObject_t1756533147 * L_53 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_54 = GameObject_get_transform_m909382139(L_53, /*hidden argument*/NULL);
		Vector3_t2243707580  L_55 = Transform_get_position_m1104419803(L_54, /*hidden argument*/NULL);
		V_15 = L_55;
		float L_56 = (&V_15)->get_y_2();
		if ((!(((float)L_52) < ((float)((float)((float)L_56-(float)(0.02f)))))))
		{
			goto IL_01c5;
		}
	}
	{
		float L_57 = __this->get_enemySpeed_4();
		V_7 = ((-L_57));
	}

IL_01c5:
	{
		Rigidbody2D_t502193897 * L_58 = __this->get_enemyRigidbody2D_8();
		float L_59 = V_6;
		float L_60 = V_7;
		Vector2_t2243707579  L_61;
		memset(&L_61, 0, sizeof(L_61));
		Vector2__ctor_m3067419446(&L_61, L_59, L_60, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_58, L_61, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_01de:
	{
		__this->set_enemyFacingRight_5((bool)0);
		Rigidbody2D_t502193897 * L_62 = __this->get_enemyRigidbody2D_8();
		float L_63 = __this->get_enemySpeed_4();
		Vector2_t2243707579  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector2__ctor_m3067419446(&L_64, ((-L_63)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_62, L_64, /*hidden argument*/NULL);
	}

IL_0201:
	{
		return;
	}
}
// System.Void EnemyScript::EnemyDirection()
extern "C"  void EnemyScript_EnemyDirection_m3603927173 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_enemyFacingRight_5();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2638739322(&L_2, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_1, L_2, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_002f:
	{
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2638739322(&L_4, (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_3, L_4, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void EnemyScript::DestroyEnemy()
extern "C"  void EnemyScript_DestroyEnemy_m3005032158 (EnemyScript_t321581343 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyScript_DestroyEnemy_m3005032158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelControl_t1927737663 * L_0 = __this->get_levelControl_10();
		LevelControl_t1927737663 * L_1 = L_0;
		int32_t L_2 = L_1->get_totalActiveEnemies_12();
		L_1->set_totalActiveEnemies_12(((int32_t)((int32_t)L_2-(int32_t)1)));
		GameObject_t1756533147 * L_3 = __this->get_bloodEffect_9();
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = GameObject_get_transform_m909382139(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_9 = Transform_get_rotation_m1033555130(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_3, L_6, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		GameObject_t1756533147 * L_10 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void EnemyScript_OnTriggerEnter2D_m1429176862 (EnemyScript_t321581343 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyScript_OnTriggerEnter2D_m1429176862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m357168014(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral3318194134, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_3 = __this->get_health_2();
		Collider2D_t646061738 * L_4 = ___other0;
		BulletScript_t1317259639 * L_5 = Component_GetComponent_TisBulletScript_t1317259639_m2160214652(L_4, /*hidden argument*/Component_GetComponent_TisBulletScript_t1317259639_m2160214652_MethodInfo_var);
		int32_t L_6 = L_5->get_damage_3();
		__this->set_health_2(((int32_t)((int32_t)L_3-(int32_t)L_6)));
		Collider2D_t646061738 * L_7 = ___other0;
		BulletScript_t1317259639 * L_8 = Component_GetComponent_TisBulletScript_t1317259639_m2160214652(L_7, /*hidden argument*/Component_GetComponent_TisBulletScript_t1317259639_m2160214652_MethodInfo_var);
		BulletScript_DestroySelf_m1667832390(L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void EnemyShooter::.ctor()
extern "C"  void EnemyShooter__ctor_m1893986293 (EnemyShooter_t1669598516 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyShooter::Start()
extern "C"  void EnemyShooter_Start_m3703904789 (EnemyShooter_t1669598516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyShooter_Start_m3703904789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemyScript_t321581343 * L_0 = Component_GetComponent_TisEnemyScript_t321581343_m1256360208(__this, /*hidden argument*/Component_GetComponent_TisEnemyScript_t321581343_m1256360208_MethodInfo_var);
		__this->set_eScript_2(L_0);
		AudioSource_t1135106623 * L_1 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audioS_7(L_1);
		return;
	}
}
// System.Void EnemyShooter::Update()
extern "C"  void EnemyShooter_Update_m172862430 (EnemyShooter_t1669598516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyShooter_Update_m172862430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = __this->get_reloadTimmer_5();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_reloadTimmer_5();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_reloadTimmer_5(((float)((float)L_1-(float)L_2)));
	}

IL_0022:
	{
		EnemyScript_t321581343 * L_3 = __this->get_eScript_2();
		GameObject_t1756533147 * L_4 = L_3->get_player_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_4, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0174;
		}
	}
	{
		EnemyScript_t321581343 * L_6 = __this->get_eScript_2();
		GameObject_t1756533147 * L_7 = L_6->get_player_7();
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_y_2();
		GameObject_t1756533147 * L_11 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_12 = GameObject_get_transform_m909382139(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = (&V_1)->get_y_2();
		if ((!(((double)(((double)((double)L_10)))) > ((double)((double)((double)(((double)((double)L_14)))-(double)(0.5)))))))
		{
			goto IL_0174;
		}
	}
	{
		EnemyScript_t321581343 * L_15 = __this->get_eScript_2();
		GameObject_t1756533147 * L_16 = L_15->get_player_7();
		Transform_t3275118058 * L_17 = GameObject_get_transform_m909382139(L_16, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Transform_get_position_m1104419803(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		float L_19 = (&V_2)->get_y_2();
		GameObject_t1756533147 * L_20 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_21 = GameObject_get_transform_m909382139(L_20, /*hidden argument*/NULL);
		Vector3_t2243707580  L_22 = Transform_get_position_m1104419803(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (&V_3)->get_y_2();
		if ((!(((float)L_19) < ((float)((float)((float)L_23+(float)(0.5f)))))))
		{
			goto IL_0174;
		}
	}
	{
		float L_24 = __this->get_reloadTimmer_5();
		if ((!(((float)L_24) <= ((float)(0.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		EnemyScript_t321581343 * L_25 = __this->get_eScript_2();
		bool L_26 = L_25->get_enemyFacingRight_5();
		if (!L_26)
		{
			goto IL_0120;
		}
	}
	{
		GameObject_t1756533147 * L_27 = __this->get_eBullet_3();
		BulletScript_t1317259639 * L_28 = GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986(L_27, /*hidden argument*/GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986_MethodInfo_var);
		L_28->set_isGoingRight_2((bool)1);
		GameObject_t1756533147 * L_29 = __this->get_eBullet_3();
		GameObject_t1756533147 * L_30 = __this->get_bulletSpawn_4();
		Transform_t3275118058 * L_31 = GameObject_get_transform_m909382139(L_30, /*hidden argument*/NULL);
		Vector3_t2243707580  L_32 = Transform_get_position_m1104419803(L_31, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_33 = __this->get_bulletSpawn_4();
		Transform_t3275118058 * L_34 = GameObject_get_transform_m909382139(L_33, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_35 = Transform_get_rotation_m1033555130(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_29, L_32, L_35, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		goto IL_015d;
	}

IL_0120:
	{
		GameObject_t1756533147 * L_36 = __this->get_eBullet_3();
		BulletScript_t1317259639 * L_37 = GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986(L_36, /*hidden argument*/GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986_MethodInfo_var);
		L_37->set_isGoingRight_2((bool)0);
		GameObject_t1756533147 * L_38 = __this->get_eBullet_3();
		GameObject_t1756533147 * L_39 = __this->get_bulletSpawn_4();
		Transform_t3275118058 * L_40 = GameObject_get_transform_m909382139(L_39, /*hidden argument*/NULL);
		Vector3_t2243707580  L_41 = Transform_get_position_m1104419803(L_40, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_42 = __this->get_bulletSpawn_4();
		Transform_t3275118058 * L_43 = GameObject_get_transform_m909382139(L_42, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_44 = Transform_get_rotation_m1033555130(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_38, L_41, L_44, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
	}

IL_015d:
	{
		float L_45 = __this->get_reloadTime_6();
		__this->set_reloadTimmer_5(L_45);
		AudioSource_t1135106623 * L_46 = __this->get_audioS_7();
		AudioSource_Play_m353744792(L_46, /*hidden argument*/NULL);
	}

IL_0174:
	{
		return;
	}
}
// System.Void HealthBar::.ctor()
extern "C"  void HealthBar__ctor_m1465823242 (HealthBar_t1323021899 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthBar::Start()
extern "C"  void HealthBar_Start_m736750566 (HealthBar_t1323021899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBar_Start_m736750566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemyScript_t321581343 * L_0 = Component_GetComponentInParent_TisEnemyScript_t321581343_m92915593(__this, /*hidden argument*/Component_GetComponentInParent_TisEnemyScript_t321581343_m92915593_MethodInfo_var);
		__this->set_baseEnemy_4(L_0);
		return;
	}
}
// System.Void HealthBar::Update()
extern "C"  void HealthBar_Update_m2981667631 (HealthBar_t1323021899 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		GameObject_t1756533147 * L_0 = __this->get_topHBar_2();
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_bottomHBar_3();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_localScale_m3074381503(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		EnemyScript_t321581343 * L_6 = __this->get_baseEnemy_4();
		int32_t L_7 = L_6->get_health_2();
		EnemyScript_t321581343 * L_8 = __this->get_baseEnemy_4();
		int32_t L_9 = L_8->get_maxHealth_3();
		GameObject_t1756533147 * L_10 = __this->get_topHBar_2();
		Transform_t3275118058 * L_11 = GameObject_get_transform_m909382139(L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Transform_get_localScale_m3074381503(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_y_2();
		GameObject_t1756533147 * L_14 = __this->get_topHBar_2();
		Transform_t3275118058 * L_15 = GameObject_get_transform_m909382139(L_14, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Transform_get_localScale_m3074381503(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_z_3();
		Vector3_t2243707580  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m2638739322(&L_18, ((float)((float)(((float)((float)L_5)))*(float)((float)((float)(((float)((float)L_7)))/(float)(((float)((float)L_9))))))), L_13, L_17, /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_1, L_18, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_19 = __this->get_topHBar_2();
		Transform_t3275118058 * L_20 = GameObject_get_transform_m909382139(L_19, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_21 = __this->get_topHBar_2();
		Transform_t3275118058 * L_22 = GameObject_get_transform_m909382139(L_21, /*hidden argument*/NULL);
		Vector3_t2243707580  L_23 = Transform_get_localScale_m3074381503(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = (&V_3)->get_x_1();
		GameObject_t1756533147 * L_25 = __this->get_bottomHBar_3();
		Transform_t3275118058 * L_26 = GameObject_get_transform_m909382139(L_25, /*hidden argument*/NULL);
		Vector3_t2243707580  L_27 = Transform_get_localScale_m3074381503(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		float L_28 = (&V_4)->get_x_1();
		GameObject_t1756533147 * L_29 = __this->get_bottomHBar_3();
		Transform_t3275118058 * L_30 = GameObject_get_transform_m909382139(L_29, /*hidden argument*/NULL);
		Vector3_t2243707580  L_31 = Transform_get_localPosition_m2533925116(L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		float L_32 = (&V_5)->get_y_2();
		GameObject_t1756533147 * L_33 = __this->get_topHBar_2();
		Transform_t3275118058 * L_34 = GameObject_get_transform_m909382139(L_33, /*hidden argument*/NULL);
		Vector3_t2243707580  L_35 = Transform_get_localScale_m3074381503(L_34, /*hidden argument*/NULL);
		V_6 = L_35;
		float L_36 = (&V_6)->get_z_3();
		Vector3_t2243707580  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m2638739322(&L_37, ((float)((float)((float)((float)((float)((float)L_24/(float)(2.0f)))-(float)((float)((float)L_28/(float)(2.0f)))))/(float)(12.0f))), L_32, L_36, /*hidden argument*/NULL);
		Transform_set_localPosition_m1026930133(L_20, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillMe::.ctor()
extern "C"  void KillMe__ctor_m2425221697 (KillMe_t2541003986 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillMe::Start()
extern "C"  void KillMe_Start_m1701930897 (KillMe_t2541003986 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void KillMe::Update()
extern "C"  void KillMe_Update_m987184976 (KillMe_t2541003986 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KillMe_Update_m987184976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_deathTimmer_2();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_deathTimmer_2(((float)((float)L_0-(float)L_1)));
		float L_2 = __this->get_deathTimmer_2();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void LevelControl::.ctor()
extern "C"  void LevelControl__ctor_m367459582 (LevelControl_t1927737663 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelControl::Start()
extern "C"  void LevelControl_Start_m484815146 (LevelControl_t1927737663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelControl_Start_m484815146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentSpawnTime_5((0.0f));
		AudioSource_t1135106623 * L_0 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audioS_10(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		UIControler_t2836741900 * L_1 = Object_FindObjectOfType_TisUIControler_t2836741900_m3281509345(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisUIControler_t2836741900_m3281509345_MethodInfo_var);
		__this->set_uiControl_11(L_1);
		return;
	}
}
// System.Void LevelControl::Update()
extern "C"  void LevelControl_Update_m1581095431 (LevelControl_t1927737663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelControl_Update_m1581095431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_spawnDelay_4();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_currentSpawnTime_5();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentSpawnTime_5(((float)((float)L_1-(float)L_2)));
	}

IL_0022:
	{
		int32_t L_3 = __this->get_waveNum_3();
		if ((((int32_t)L_3) < ((int32_t)5)))
		{
			goto IL_00cf;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_4 = __this->get_EnemiesToSpawnT0_6();
		int32_t L_5 = __this->get_waveNum_3();
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t3030399641* L_8 = __this->get_EnemiesToSpawnT1_7();
		int32_t L_9 = __this->get_waveNum_3();
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)((int32_t)((int32_t)L_7+(int32_t)L_11))) > ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_12 = __this->get_totalActiveEnemies_12();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		UIControler_t2836741900 * L_13 = __this->get_uiControl_11();
		Text_t356221433 * L_14 = L_13->get_WaveNumText_3();
		Color_t2020392075  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Color__ctor_m1909920690(&L_15, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		UIControler_t2836741900 * L_16 = __this->get_uiControl_11();
		Text_t356221433 * L_17 = L_16->get_WaveNumText_3();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteral2073341055);
		UIControler_t2836741900 * L_18 = __this->get_uiControl_11();
		UIControler_SetHelpfulTips_m1163446315(L_18, _stringLiteral1947425379, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00cf;
		}
	}
	{
		UIControler_t2836741900 * L_20 = __this->get_uiControl_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		UIControler_SetHelpfulTips_m1163446315(L_20, L_21, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral723512715, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		Int32U5BU5D_t3030399641* L_22 = __this->get_EnemiesToSpawnT0_6();
		int32_t L_23 = __this->get_waveNum_3();
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t3030399641* L_26 = __this->get_EnemiesToSpawnT1_7();
		int32_t L_27 = __this->get_waveNum_3();
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)((int32_t)((int32_t)L_25+(int32_t)L_29))) > ((int32_t)0)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_30 = __this->get_totalActiveEnemies_12();
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}

IL_00fc:
	{
		GameObjectU5BU5D_t3057952154* L_31 = __this->get_enemyTypes_8();
		TransformU5BU5D_t3764228911* L_32 = __this->get_EnemySpawns1_2();
		float L_33 = __this->get_spawnDelay_4();
		Int32U5BU5D_t3030399641* L_34 = __this->get_EnemiesToSpawnT0_6();
		int32_t L_35 = __this->get_waveNum_3();
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t3030399641* L_38 = __this->get_EnemiesToSpawnT1_7();
		int32_t L_39 = __this->get_waveNum_3();
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		LevelControl_SpawnWave_m3970661352(__this, L_31, L_32, L_33, L_37, L_41, /*hidden argument*/NULL);
		goto IL_01a3;
	}

IL_0133:
	{
		int32_t L_42 = __this->get_waveNum_3();
		if ((((int32_t)L_42) < ((int32_t)5)))
		{
			goto IL_0144;
		}
	}
	{
		goto IL_01a3;
	}

IL_0144:
	{
		UIControler_t2836741900 * L_43 = __this->get_uiControl_11();
		UIControler_SetHelpfulTips_m1163446315(L_43, _stringLiteral2622035893, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_44 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)271), /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_016f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_45 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01a3;
		}
	}

IL_016f:
	{
		int32_t L_46 = __this->get_waveNum_3();
		__this->set_waveNum_3(((int32_t)((int32_t)L_46+(int32_t)1)));
		AudioSource_t1135106623 * L_47 = __this->get_audioS_10();
		AudioSource_Play_m353744792(L_47, /*hidden argument*/NULL);
		UIControler_t2836741900 * L_48 = __this->get_uiControl_11();
		UIControler_TriggerWave_m106318474(L_48, /*hidden argument*/NULL);
		UIControler_t2836741900 * L_49 = __this->get_uiControl_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		UIControler_SetHelpfulTips_m1163446315(L_49, L_50, /*hidden argument*/NULL);
	}

IL_01a3:
	{
		bool L_51 = __this->get_playerDead_9();
		if (!L_51)
		{
			goto IL_01e4;
		}
	}
	{
		UIControler_t2836741900 * L_52 = __this->get_uiControl_11();
		UIControler_SetHelpfulTips_m1163446315(L_52, _stringLiteral1947425379, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_53 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01e4;
		}
	}
	{
		UIControler_t2836741900 * L_54 = __this->get_uiControl_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		UIControler_SetHelpfulTips_m1163446315(L_54, L_55, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral723512715, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		return;
	}
}
// System.Void LevelControl::SpawnWave(UnityEngine.GameObject[],UnityEngine.Transform[],System.Single,System.Int32,System.Int32)
extern "C"  void LevelControl_SpawnWave_m3970661352 (LevelControl_t1927737663 * __this, GameObjectU5BU5D_t3057952154* ___enemyType0, TransformU5BU5D_t3764228911* ___EnemySpawns11, float ___spawnDelay2, int32_t ___enemyType03, int32_t ___enemyType14, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelControl_SpawnWave_m3970661352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___enemyType03;
		int32_t L_1 = ___enemyType14;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		float L_2 = __this->get_currentSpawnTime_5();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_4 = ___enemyType03;
		int32_t L_5 = V_0;
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)(((float)((float)L_5)))));
		float L_6 = V_1;
		float L_7 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_8 = __this->get_EnemiesToSpawnT0_6();
		int32_t L_9 = __this->get_waveNum_3();
		int32_t* L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)));
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))-(int32_t)1));
		GameObjectU5BU5D_t3057952154* L_11 = ___enemyType0;
		int32_t L_12 = 0;
		GameObject_t1756533147 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		TransformU5BU5D_t3764228911* L_14 = ___EnemySpawns11;
		int32_t L_15 = Random_Range_m694320887(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		Transform_t3275118058 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t2243707580  L_18 = Transform_get_position_m1104419803(L_17, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_19 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_20 = GameObject_get_transform_m909382139(L_19, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_21 = Transform_get_rotation_m1033555130(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_13, L_18, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		goto IL_00b2;
	}

IL_007b:
	{
		Int32U5BU5D_t3030399641* L_22 = __this->get_EnemiesToSpawnT1_7();
		int32_t L_23 = __this->get_waveNum_3();
		int32_t* L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)));
		*((int32_t*)(L_24)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_24))-(int32_t)1));
		GameObjectU5BU5D_t3057952154* L_25 = ___enemyType0;
		int32_t L_26 = 1;
		GameObject_t1756533147 * L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		TransformU5BU5D_t3764228911* L_28 = ___EnemySpawns11;
		int32_t L_29 = 1;
		Transform_t3275118058 * L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t2243707580  L_31 = Transform_get_position_m1104419803(L_30, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_32 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_33 = GameObject_get_transform_m909382139(L_32, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_34 = Transform_get_rotation_m1033555130(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_27, L_31, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
	}

IL_00b2:
	{
		int32_t L_35 = __this->get_totalActiveEnemies_12();
		__this->set_totalActiveEnemies_12(((int32_t)((int32_t)L_35+(int32_t)1)));
		float L_36 = ___spawnDelay2;
		__this->set_currentSpawnTime_5(L_36);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void MainMenuButton::.ctor()
extern "C"  void MainMenuButton__ctor_m3343448389 (MainMenuButton_t3610878670 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuButton::Start()
extern "C"  void MainMenuButton_Start_m171096973 (MainMenuButton_t3610878670 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MainMenuButton::Update()
extern "C"  void MainMenuButton_Update_m2043640044 (MainMenuButton_t3610878670 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MainMenuButton::AdvanceToGame()
extern "C"  void MainMenuButton_AdvanceToGame_m396396920 (MainMenuButton_t3610878670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenuButton_AdvanceToGame_m396396920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral723512715, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerControler::.ctor()
extern "C"  void PlayerControler__ctor_m7459024 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	{
		__this->set_playerDirrectionRight_2((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerControler::Start()
extern "C"  void PlayerControler_Start_m1964702560 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControler_Start_m1964702560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t69676727 * L_0 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var);
		__this->set_anmi_10(L_0);
		AudioSource_t1135106623 * L_1 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audioS_11(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelControl_t1927737663 * L_2 = Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202_MethodInfo_var);
		__this->set_levelControl_5(L_2);
		return;
	}
}
// System.Void PlayerControler::Update()
extern "C"  void PlayerControler_Update_m2338011677 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Quaternion__ctor_m3196903881(&L_2, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m3411284563(L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = __this->get_isInvincable_13();
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = __this->get_playerMaxHealth_6();
		__this->set_playerHealth_7(L_4);
	}

IL_0040:
	{
		PlayerControler_Movement_m3647959031(__this, /*hidden argument*/NULL);
		PlayerControler_playerArtControl_m3023608443(__this, /*hidden argument*/NULL);
		PlayerControler_playerShooting_m4275274386(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_playerHealth_7();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		PlayerControler_PlayerDead_m2290345551(__this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void PlayerControler::playerShooting()
extern "C"  void PlayerControler_playerShooting_m4275274386 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControler_playerShooting_m4275274386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		bool L_1 = __this->get_playerDirrectionRight_2();
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t1756533147 * L_2 = __this->get_bullet_3();
		BulletScript_t1317259639 * L_3 = GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986(L_2, /*hidden argument*/GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986_MethodInfo_var);
		L_3->set_isGoingRight_2((bool)1);
		goto IL_003e;
	}

IL_002d:
	{
		GameObject_t1756533147 * L_4 = __this->get_bullet_3();
		BulletScript_t1317259639 * L_5 = GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986(L_4, /*hidden argument*/GameObject_GetComponent_TisBulletScript_t1317259639_m3689612986_MethodInfo_var);
		L_5->set_isGoingRight_2((bool)0);
	}

IL_003e:
	{
		GameObject_t1756533147 * L_6 = __this->get_bullet_3();
		GameObject_t1756533147 * L_7 = __this->get_bulletSpawnPoint_4();
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_10 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = GameObject_get_transform_m909382139(L_10, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_12 = Transform_get_rotation_m1033555130(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_6, L_9, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		AudioSource_t1135106623 * L_13 = __this->get_audioS_11();
		AudioSource_Play_m353744792(L_13, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void PlayerControler::playerArtControl()
extern "C"  void PlayerControler_playerArtControl_m3023608443 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_playerDirrectionRight_2();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2638739322(&L_2, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_1, L_2, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_002f:
	{
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2638739322(&L_4, (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_3, L_4, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void PlayerControler::Movement()
extern "C"  void PlayerControler_Movement_m3647959031 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControler_Movement_m3647959031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = (1.0f);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (-1.0f);
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m1008512962(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (0.0f);
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		V_0 = (-1.0f);
		__this->set_playerDirrectionRight_2((bool)0);
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = (1.0f);
		__this->set_playerDirrectionRight_2((bool)1);
	}

IL_0080:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyUp_m1008512962(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		V_0 = (0.0f);
	}

IL_009e:
	{
		float L_8 = V_0;
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_9 = V_1;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		Animator_t69676727 * L_10 = __this->get_anmi_10();
		Animator_SetBool_m2305662531(L_10, _stringLiteral1938184819, (bool)0, /*hidden argument*/NULL);
		goto IL_00db;
	}

IL_00ca:
	{
		Animator_t69676727 * L_11 = __this->get_anmi_10();
		Animator_SetBool_m2305662531(L_11, _stringLiteral1938184819, (bool)1, /*hidden argument*/NULL);
	}

IL_00db:
	{
		Rigidbody2D_t502193897 * L_12 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		float L_13 = V_0;
		float L_14 = V_1;
		Vector2_t2243707579  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3067419446(&L_15, L_13, L_14, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_12, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerControler::PlayerDead()
extern "C"  void PlayerControler_PlayerDead_m2290345551 (PlayerControler_t1830793433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControler_PlayerDead_m2290345551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_bloodEffect_12();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = GameObject_get_transform_m909382139(L_4, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_6 = Transform_get_rotation_m1033555130(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		LevelControl_t1927737663 * L_7 = __this->get_levelControl_5();
		L_7->set_playerDead_9((bool)1);
		GameObject_t1756533147 * L_8 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerControler::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerControler_OnTriggerEnter2D_m1401660952 (PlayerControler_t1830793433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControler_OnTriggerEnter2D_m1401660952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m357168014(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral2662464627, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_3 = __this->get_playerHealth_7();
		Collider2D_t646061738 * L_4 = ___other0;
		BulletScript_t1317259639 * L_5 = Component_GetComponent_TisBulletScript_t1317259639_m2160214652(L_4, /*hidden argument*/Component_GetComponent_TisBulletScript_t1317259639_m2160214652_MethodInfo_var);
		int32_t L_6 = L_5->get_damage_3();
		__this->set_playerHealth_7(((int32_t)((int32_t)L_3-(int32_t)L_6)));
		Collider2D_t646061738 * L_7 = ___other0;
		BulletScript_t1317259639 * L_8 = Component_GetComponent_TisBulletScript_t1317259639_m2160214652(L_7, /*hidden argument*/Component_GetComponent_TisBulletScript_t1317259639_m2160214652_MethodInfo_var);
		BulletScript_DestroySelf_m1667832390(L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void SlashBox::.ctor()
extern "C"  void SlashBox__ctor_m2742833511 (SlashBox_t2056466298 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlashBox::Start()
extern "C"  void SlashBox_Start_m3576059419 (SlashBox_t2056466298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlashBox_Start_m3576059419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t1209076198 * L_0 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		__this->set_spriteR_5(L_0);
		SpriteRenderer_t1209076198 * L_1 = __this->get_spriteR_5();
		SpriteRenderer_set_sprite_m617298623(L_1, (Sprite_t309593783 *)NULL, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_2 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audioS_7(L_2);
		return;
	}
}
// System.Void SlashBox::Update()
extern "C"  void SlashBox_Update_m1684803912 (SlashBox_t2056466298 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_SlashTimmer_3();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_SlashTimmer_3();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_SlashTimmer_3(((float)((float)L_1-(float)L_2)));
	}

IL_0022:
	{
		float L_3 = __this->get_SlashTimmer_3();
		float L_4 = __this->get_SlashTime_4();
		if ((!(((float)L_3) < ((float)((float)((float)L_4*(float)(0.75f)))))))
		{
			goto IL_0045;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_5 = __this->get_spriteR_5();
		SpriteRenderer_set_sprite_m617298623(L_5, (Sprite_t309593783 *)NULL, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void SlashBox::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C"  void SlashBox_OnTriggerStay2D_m2958689262 (SlashBox_t2056466298 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlashBox_OnTriggerStay2D_m2958689262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m357168014(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		float L_3 = __this->get_SlashTimmer_3();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0065;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_4 = __this->get_spriteR_5();
		Sprite_t309593783 * L_5 = __this->get_slashSprite_6();
		SpriteRenderer_set_sprite_m617298623(L_4, L_5, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_6 = ___other0;
		PlayerControler_t1830793433 * L_7 = Component_GetComponent_TisPlayerControler_t1830793433_m4091297450(L_6, /*hidden argument*/Component_GetComponent_TisPlayerControler_t1830793433_m4091297450_MethodInfo_var);
		PlayerControler_t1830793433 * L_8 = L_7;
		int32_t L_9 = L_8->get_playerHealth_7();
		int32_t L_10 = __this->get_dammage_2();
		L_8->set_playerHealth_7(((int32_t)((int32_t)L_9-(int32_t)L_10)));
		float L_11 = __this->get_SlashTime_4();
		__this->set_SlashTimmer_3(L_11);
		AudioSource_t1135106623 * L_12 = __this->get_audioS_7();
		AudioSource_Play_m353744792(L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UIControler::.ctor()
extern "C"  void UIControler__ctor_m2436775563 (UIControler_t2836741900 * __this, const MethodInfo* method)
{
	{
		__this->set_waveTriggered_7((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIControler::Start()
extern "C"  void UIControler_Start_m3229029735 (UIControler_t2836741900 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIControler_Start_m3229029735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		PlayerControler_t1830793433 * L_0 = Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerControler_t1830793433_m1436291740_MethodInfo_var);
		__this->set_player_5(L_0);
		LevelControl_t1927737663 * L_1 = Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelControl_t1927737663_m865254202_MethodInfo_var);
		__this->set_levelControl_6(L_1);
		return;
	}
}
// System.Void UIControler::Update()
extern "C"  void UIControler_Update_m1736175278 (UIControler_t2836741900 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIControler_Update_m1736175278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_playerStats_2();
		ObjectU5BU5D_t3614634134* L_1 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)8));
		ArrayElementTypeCheck (L_1, _stringLiteral584367081);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral584367081);
		ObjectU5BU5D_t3614634134* L_2 = L_1;
		PlayerControler_t1830793433 * L_3 = __this->get_player_5();
		int32_t L_4 = L_3->get_playerHealth_7();
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_6);
		ObjectU5BU5D_t3614634134* L_7 = L_2;
		ArrayElementTypeCheck (L_7, _stringLiteral372029315);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral372029315);
		ObjectU5BU5D_t3614634134* L_8 = L_7;
		PlayerControler_t1830793433 * L_9 = __this->get_player_5();
		int32_t L_10 = L_9->get_playerMaxHealth_6();
		int32_t L_11 = L_10;
		Il2CppObject * L_12 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_12);
		ObjectU5BU5D_t3614634134* L_13 = L_8;
		ArrayElementTypeCheck (L_13, _stringLiteral916249565);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral916249565);
		ObjectU5BU5D_t3614634134* L_14 = L_13;
		PlayerControler_t1830793433 * L_15 = __this->get_player_5();
		int32_t L_16 = L_15->get_playerAmmo_9();
		int32_t L_17 = L_16;
		Il2CppObject * L_18 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_17);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_18);
		ObjectU5BU5D_t3614634134* L_19 = L_14;
		ArrayElementTypeCheck (L_19, _stringLiteral372029315);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral372029315);
		ObjectU5BU5D_t3614634134* L_20 = L_19;
		PlayerControler_t1830793433 * L_21 = __this->get_player_5();
		int32_t L_22 = L_21->get_playerMaxAmmo_8();
		int32_t L_23 = L_22;
		Il2CppObject * L_24 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m3881798623(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_25);
		bool L_26 = __this->get_waveTriggered_7();
		if (!L_26)
		{
			goto IL_00f8;
		}
	}
	{
		Text_t356221433 * L_27 = __this->get_WaveNumText_3();
		LevelControl_t1927737663 * L_28 = __this->get_levelControl_6();
		int32_t L_29 = L_28->get_waveNum_3();
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)((int32_t)13)));
		Il2CppObject * L_31 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2874782295, L_31, _stringLiteral3566073180, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_32);
		float L_33 = __this->get_waveTime_9();
		float L_34 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_waveTime_9(((float)((float)L_33-(float)L_34)));
		Text_t356221433 * L_35 = __this->get_WaveNumText_3();
		float L_36 = __this->get_waveTime_9();
		float L_37 = __this->get_waveTimmer_8();
		Color_t2020392075  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Color__ctor_m1909920690(&L_38, (0.0f), (0.0f), (0.0f), ((float)((float)L_36/(float)L_37)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_38);
	}

IL_00f8:
	{
		return;
	}
}
// System.Void UIControler::TriggerWave()
extern "C"  void UIControler_TriggerWave_m106318474 (UIControler_t2836741900 * __this, const MethodInfo* method)
{
	{
		__this->set_waveTriggered_7((bool)1);
		float L_0 = __this->get_waveTimmer_8();
		__this->set_waveTime_9(L_0);
		PlayerControler_t1830793433 * L_1 = __this->get_player_5();
		PlayerControler_t1830793433 * L_2 = __this->get_player_5();
		int32_t L_3 = L_2->get_playerMaxHealth_6();
		L_1->set_playerHealth_7(L_3);
		return;
	}
}
// System.Void UIControler::SetHelpfulTips(System.String)
extern "C"  void UIControler_SetHelpfulTips_m1163446315 (UIControler_t2836741900 * __this, String_t* ___info0, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_helpfulText_4();
		String_t* L_1 = ___info0;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
