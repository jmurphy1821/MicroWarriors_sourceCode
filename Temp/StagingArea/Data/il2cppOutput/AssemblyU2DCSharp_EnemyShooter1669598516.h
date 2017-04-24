#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// EnemyScript
struct EnemyScript_t321581343;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyShooter
struct  EnemyShooter_t1669598516  : public MonoBehaviour_t1158329972
{
public:
	// EnemyScript EnemyShooter::eScript
	EnemyScript_t321581343 * ___eScript_2;
	// UnityEngine.GameObject EnemyShooter::eBullet
	GameObject_t1756533147 * ___eBullet_3;
	// UnityEngine.GameObject EnemyShooter::bulletSpawn
	GameObject_t1756533147 * ___bulletSpawn_4;
	// System.Single EnemyShooter::reloadTimmer
	float ___reloadTimmer_5;
	// System.Single EnemyShooter::reloadTime
	float ___reloadTime_6;
	// UnityEngine.AudioSource EnemyShooter::audioS
	AudioSource_t1135106623 * ___audioS_7;

public:
	inline static int32_t get_offset_of_eScript_2() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___eScript_2)); }
	inline EnemyScript_t321581343 * get_eScript_2() const { return ___eScript_2; }
	inline EnemyScript_t321581343 ** get_address_of_eScript_2() { return &___eScript_2; }
	inline void set_eScript_2(EnemyScript_t321581343 * value)
	{
		___eScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___eScript_2, value);
	}

	inline static int32_t get_offset_of_eBullet_3() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___eBullet_3)); }
	inline GameObject_t1756533147 * get_eBullet_3() const { return ___eBullet_3; }
	inline GameObject_t1756533147 ** get_address_of_eBullet_3() { return &___eBullet_3; }
	inline void set_eBullet_3(GameObject_t1756533147 * value)
	{
		___eBullet_3 = value;
		Il2CppCodeGenWriteBarrier(&___eBullet_3, value);
	}

	inline static int32_t get_offset_of_bulletSpawn_4() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___bulletSpawn_4)); }
	inline GameObject_t1756533147 * get_bulletSpawn_4() const { return ___bulletSpawn_4; }
	inline GameObject_t1756533147 ** get_address_of_bulletSpawn_4() { return &___bulletSpawn_4; }
	inline void set_bulletSpawn_4(GameObject_t1756533147 * value)
	{
		___bulletSpawn_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSpawn_4, value);
	}

	inline static int32_t get_offset_of_reloadTimmer_5() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___reloadTimmer_5)); }
	inline float get_reloadTimmer_5() const { return ___reloadTimmer_5; }
	inline float* get_address_of_reloadTimmer_5() { return &___reloadTimmer_5; }
	inline void set_reloadTimmer_5(float value)
	{
		___reloadTimmer_5 = value;
	}

	inline static int32_t get_offset_of_reloadTime_6() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___reloadTime_6)); }
	inline float get_reloadTime_6() const { return ___reloadTime_6; }
	inline float* get_address_of_reloadTime_6() { return &___reloadTime_6; }
	inline void set_reloadTime_6(float value)
	{
		___reloadTime_6 = value;
	}

	inline static int32_t get_offset_of_audioS_7() { return static_cast<int32_t>(offsetof(EnemyShooter_t1669598516, ___audioS_7)); }
	inline AudioSource_t1135106623 * get_audioS_7() const { return ___audioS_7; }
	inline AudioSource_t1135106623 ** get_address_of_audioS_7() { return &___audioS_7; }
	inline void set_audioS_7(AudioSource_t1135106623 * value)
	{
		___audioS_7 = value;
		Il2CppCodeGenWriteBarrier(&___audioS_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
