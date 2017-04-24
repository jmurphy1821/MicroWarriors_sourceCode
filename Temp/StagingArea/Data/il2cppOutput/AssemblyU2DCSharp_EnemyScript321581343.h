#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerControler
struct PlayerControler_t1830793433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// LevelControl
struct LevelControl_t1927737663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t321581343  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EnemyScript::health
	int32_t ___health_2;
	// System.Int32 EnemyScript::maxHealth
	int32_t ___maxHealth_3;
	// System.Single EnemyScript::enemySpeed
	float ___enemySpeed_4;
	// System.Boolean EnemyScript::enemyFacingRight
	bool ___enemyFacingRight_5;
	// PlayerControler EnemyScript::playerControler
	PlayerControler_t1830793433 * ___playerControler_6;
	// UnityEngine.GameObject EnemyScript::player
	GameObject_t1756533147 * ___player_7;
	// UnityEngine.Rigidbody2D EnemyScript::enemyRigidbody2D
	Rigidbody2D_t502193897 * ___enemyRigidbody2D_8;
	// UnityEngine.GameObject EnemyScript::bloodEffect
	GameObject_t1756533147 * ___bloodEffect_9;
	// LevelControl EnemyScript::levelControl
	LevelControl_t1927737663 * ___levelControl_10;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_maxHealth_3() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___maxHealth_3)); }
	inline int32_t get_maxHealth_3() const { return ___maxHealth_3; }
	inline int32_t* get_address_of_maxHealth_3() { return &___maxHealth_3; }
	inline void set_maxHealth_3(int32_t value)
	{
		___maxHealth_3 = value;
	}

	inline static int32_t get_offset_of_enemySpeed_4() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemySpeed_4)); }
	inline float get_enemySpeed_4() const { return ___enemySpeed_4; }
	inline float* get_address_of_enemySpeed_4() { return &___enemySpeed_4; }
	inline void set_enemySpeed_4(float value)
	{
		___enemySpeed_4 = value;
	}

	inline static int32_t get_offset_of_enemyFacingRight_5() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyFacingRight_5)); }
	inline bool get_enemyFacingRight_5() const { return ___enemyFacingRight_5; }
	inline bool* get_address_of_enemyFacingRight_5() { return &___enemyFacingRight_5; }
	inline void set_enemyFacingRight_5(bool value)
	{
		___enemyFacingRight_5 = value;
	}

	inline static int32_t get_offset_of_playerControler_6() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___playerControler_6)); }
	inline PlayerControler_t1830793433 * get_playerControler_6() const { return ___playerControler_6; }
	inline PlayerControler_t1830793433 ** get_address_of_playerControler_6() { return &___playerControler_6; }
	inline void set_playerControler_6(PlayerControler_t1830793433 * value)
	{
		___playerControler_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerControler_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___player_7)); }
	inline GameObject_t1756533147 * get_player_7() const { return ___player_7; }
	inline GameObject_t1756533147 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t1756533147 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_enemyRigidbody2D_8() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyRigidbody2D_8)); }
	inline Rigidbody2D_t502193897 * get_enemyRigidbody2D_8() const { return ___enemyRigidbody2D_8; }
	inline Rigidbody2D_t502193897 ** get_address_of_enemyRigidbody2D_8() { return &___enemyRigidbody2D_8; }
	inline void set_enemyRigidbody2D_8(Rigidbody2D_t502193897 * value)
	{
		___enemyRigidbody2D_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyRigidbody2D_8, value);
	}

	inline static int32_t get_offset_of_bloodEffect_9() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___bloodEffect_9)); }
	inline GameObject_t1756533147 * get_bloodEffect_9() const { return ___bloodEffect_9; }
	inline GameObject_t1756533147 ** get_address_of_bloodEffect_9() { return &___bloodEffect_9; }
	inline void set_bloodEffect_9(GameObject_t1756533147 * value)
	{
		___bloodEffect_9 = value;
		Il2CppCodeGenWriteBarrier(&___bloodEffect_9, value);
	}

	inline static int32_t get_offset_of_levelControl_10() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___levelControl_10)); }
	inline LevelControl_t1927737663 * get_levelControl_10() const { return ___levelControl_10; }
	inline LevelControl_t1927737663 ** get_address_of_levelControl_10() { return &___levelControl_10; }
	inline void set_levelControl_10(LevelControl_t1927737663 * value)
	{
		___levelControl_10 = value;
		Il2CppCodeGenWriteBarrier(&___levelControl_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
