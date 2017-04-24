#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// EnemyScript
struct EnemyScript_t321581343;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthBar
struct  HealthBar_t1323021899  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HealthBar::topHBar
	GameObject_t1756533147 * ___topHBar_2;
	// UnityEngine.GameObject HealthBar::bottomHBar
	GameObject_t1756533147 * ___bottomHBar_3;
	// EnemyScript HealthBar::baseEnemy
	EnemyScript_t321581343 * ___baseEnemy_4;

public:
	inline static int32_t get_offset_of_topHBar_2() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___topHBar_2)); }
	inline GameObject_t1756533147 * get_topHBar_2() const { return ___topHBar_2; }
	inline GameObject_t1756533147 ** get_address_of_topHBar_2() { return &___topHBar_2; }
	inline void set_topHBar_2(GameObject_t1756533147 * value)
	{
		___topHBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___topHBar_2, value);
	}

	inline static int32_t get_offset_of_bottomHBar_3() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___bottomHBar_3)); }
	inline GameObject_t1756533147 * get_bottomHBar_3() const { return ___bottomHBar_3; }
	inline GameObject_t1756533147 ** get_address_of_bottomHBar_3() { return &___bottomHBar_3; }
	inline void set_bottomHBar_3(GameObject_t1756533147 * value)
	{
		___bottomHBar_3 = value;
		Il2CppCodeGenWriteBarrier(&___bottomHBar_3, value);
	}

	inline static int32_t get_offset_of_baseEnemy_4() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___baseEnemy_4)); }
	inline EnemyScript_t321581343 * get_baseEnemy_4() const { return ___baseEnemy_4; }
	inline EnemyScript_t321581343 ** get_address_of_baseEnemy_4() { return &___baseEnemy_4; }
	inline void set_baseEnemy_4(EnemyScript_t321581343 * value)
	{
		___baseEnemy_4 = value;
		Il2CppCodeGenWriteBarrier(&___baseEnemy_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
