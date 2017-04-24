#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UIControler
struct UIControler_t2836741900;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelControl
struct  LevelControl_t1927737663  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] LevelControl::EnemySpawns1
	TransformU5BU5D_t3764228911* ___EnemySpawns1_2;
	// System.Int32 LevelControl::waveNum
	int32_t ___waveNum_3;
	// System.Single LevelControl::spawnDelay
	float ___spawnDelay_4;
	// System.Single LevelControl::currentSpawnTime
	float ___currentSpawnTime_5;
	// System.Int32[] LevelControl::EnemiesToSpawnT0
	Int32U5BU5D_t3030399641* ___EnemiesToSpawnT0_6;
	// System.Int32[] LevelControl::EnemiesToSpawnT1
	Int32U5BU5D_t3030399641* ___EnemiesToSpawnT1_7;
	// UnityEngine.GameObject[] LevelControl::enemyTypes
	GameObjectU5BU5D_t3057952154* ___enemyTypes_8;
	// System.Boolean LevelControl::playerDead
	bool ___playerDead_9;
	// UnityEngine.AudioSource LevelControl::audioS
	AudioSource_t1135106623 * ___audioS_10;
	// UIControler LevelControl::uiControl
	UIControler_t2836741900 * ___uiControl_11;
	// System.Int32 LevelControl::totalActiveEnemies
	int32_t ___totalActiveEnemies_12;

public:
	inline static int32_t get_offset_of_EnemySpawns1_2() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___EnemySpawns1_2)); }
	inline TransformU5BU5D_t3764228911* get_EnemySpawns1_2() const { return ___EnemySpawns1_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_EnemySpawns1_2() { return &___EnemySpawns1_2; }
	inline void set_EnemySpawns1_2(TransformU5BU5D_t3764228911* value)
	{
		___EnemySpawns1_2 = value;
		Il2CppCodeGenWriteBarrier(&___EnemySpawns1_2, value);
	}

	inline static int32_t get_offset_of_waveNum_3() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___waveNum_3)); }
	inline int32_t get_waveNum_3() const { return ___waveNum_3; }
	inline int32_t* get_address_of_waveNum_3() { return &___waveNum_3; }
	inline void set_waveNum_3(int32_t value)
	{
		___waveNum_3 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_4() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___spawnDelay_4)); }
	inline float get_spawnDelay_4() const { return ___spawnDelay_4; }
	inline float* get_address_of_spawnDelay_4() { return &___spawnDelay_4; }
	inline void set_spawnDelay_4(float value)
	{
		___spawnDelay_4 = value;
	}

	inline static int32_t get_offset_of_currentSpawnTime_5() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___currentSpawnTime_5)); }
	inline float get_currentSpawnTime_5() const { return ___currentSpawnTime_5; }
	inline float* get_address_of_currentSpawnTime_5() { return &___currentSpawnTime_5; }
	inline void set_currentSpawnTime_5(float value)
	{
		___currentSpawnTime_5 = value;
	}

	inline static int32_t get_offset_of_EnemiesToSpawnT0_6() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___EnemiesToSpawnT0_6)); }
	inline Int32U5BU5D_t3030399641* get_EnemiesToSpawnT0_6() const { return ___EnemiesToSpawnT0_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_EnemiesToSpawnT0_6() { return &___EnemiesToSpawnT0_6; }
	inline void set_EnemiesToSpawnT0_6(Int32U5BU5D_t3030399641* value)
	{
		___EnemiesToSpawnT0_6 = value;
		Il2CppCodeGenWriteBarrier(&___EnemiesToSpawnT0_6, value);
	}

	inline static int32_t get_offset_of_EnemiesToSpawnT1_7() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___EnemiesToSpawnT1_7)); }
	inline Int32U5BU5D_t3030399641* get_EnemiesToSpawnT1_7() const { return ___EnemiesToSpawnT1_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_EnemiesToSpawnT1_7() { return &___EnemiesToSpawnT1_7; }
	inline void set_EnemiesToSpawnT1_7(Int32U5BU5D_t3030399641* value)
	{
		___EnemiesToSpawnT1_7 = value;
		Il2CppCodeGenWriteBarrier(&___EnemiesToSpawnT1_7, value);
	}

	inline static int32_t get_offset_of_enemyTypes_8() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___enemyTypes_8)); }
	inline GameObjectU5BU5D_t3057952154* get_enemyTypes_8() const { return ___enemyTypes_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemyTypes_8() { return &___enemyTypes_8; }
	inline void set_enemyTypes_8(GameObjectU5BU5D_t3057952154* value)
	{
		___enemyTypes_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTypes_8, value);
	}

	inline static int32_t get_offset_of_playerDead_9() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___playerDead_9)); }
	inline bool get_playerDead_9() const { return ___playerDead_9; }
	inline bool* get_address_of_playerDead_9() { return &___playerDead_9; }
	inline void set_playerDead_9(bool value)
	{
		___playerDead_9 = value;
	}

	inline static int32_t get_offset_of_audioS_10() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___audioS_10)); }
	inline AudioSource_t1135106623 * get_audioS_10() const { return ___audioS_10; }
	inline AudioSource_t1135106623 ** get_address_of_audioS_10() { return &___audioS_10; }
	inline void set_audioS_10(AudioSource_t1135106623 * value)
	{
		___audioS_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioS_10, value);
	}

	inline static int32_t get_offset_of_uiControl_11() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___uiControl_11)); }
	inline UIControler_t2836741900 * get_uiControl_11() const { return ___uiControl_11; }
	inline UIControler_t2836741900 ** get_address_of_uiControl_11() { return &___uiControl_11; }
	inline void set_uiControl_11(UIControler_t2836741900 * value)
	{
		___uiControl_11 = value;
		Il2CppCodeGenWriteBarrier(&___uiControl_11, value);
	}

	inline static int32_t get_offset_of_totalActiveEnemies_12() { return static_cast<int32_t>(offsetof(LevelControl_t1927737663, ___totalActiveEnemies_12)); }
	inline int32_t get_totalActiveEnemies_12() const { return ___totalActiveEnemies_12; }
	inline int32_t* get_address_of_totalActiveEnemies_12() { return &___totalActiveEnemies_12; }
	inline void set_totalActiveEnemies_12(int32_t value)
	{
		___totalActiveEnemies_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
