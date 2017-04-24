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
// LevelControl
struct LevelControl_t1927737663;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControler
struct  PlayerControler_t1830793433  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PlayerControler::playerDirrectionRight
	bool ___playerDirrectionRight_2;
	// UnityEngine.GameObject PlayerControler::bullet
	GameObject_t1756533147 * ___bullet_3;
	// UnityEngine.GameObject PlayerControler::bulletSpawnPoint
	GameObject_t1756533147 * ___bulletSpawnPoint_4;
	// LevelControl PlayerControler::levelControl
	LevelControl_t1927737663 * ___levelControl_5;
	// System.Int32 PlayerControler::playerMaxHealth
	int32_t ___playerMaxHealth_6;
	// System.Int32 PlayerControler::playerHealth
	int32_t ___playerHealth_7;
	// System.Int32 PlayerControler::playerMaxAmmo
	int32_t ___playerMaxAmmo_8;
	// System.Int32 PlayerControler::playerAmmo
	int32_t ___playerAmmo_9;
	// UnityEngine.Animator PlayerControler::anmi
	Animator_t69676727 * ___anmi_10;
	// UnityEngine.AudioSource PlayerControler::audioS
	AudioSource_t1135106623 * ___audioS_11;
	// UnityEngine.GameObject PlayerControler::bloodEffect
	GameObject_t1756533147 * ___bloodEffect_12;
	// System.Boolean PlayerControler::isInvincable
	bool ___isInvincable_13;

public:
	inline static int32_t get_offset_of_playerDirrectionRight_2() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___playerDirrectionRight_2)); }
	inline bool get_playerDirrectionRight_2() const { return ___playerDirrectionRight_2; }
	inline bool* get_address_of_playerDirrectionRight_2() { return &___playerDirrectionRight_2; }
	inline void set_playerDirrectionRight_2(bool value)
	{
		___playerDirrectionRight_2 = value;
	}

	inline static int32_t get_offset_of_bullet_3() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___bullet_3)); }
	inline GameObject_t1756533147 * get_bullet_3() const { return ___bullet_3; }
	inline GameObject_t1756533147 ** get_address_of_bullet_3() { return &___bullet_3; }
	inline void set_bullet_3(GameObject_t1756533147 * value)
	{
		___bullet_3 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_3, value);
	}

	inline static int32_t get_offset_of_bulletSpawnPoint_4() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___bulletSpawnPoint_4)); }
	inline GameObject_t1756533147 * get_bulletSpawnPoint_4() const { return ___bulletSpawnPoint_4; }
	inline GameObject_t1756533147 ** get_address_of_bulletSpawnPoint_4() { return &___bulletSpawnPoint_4; }
	inline void set_bulletSpawnPoint_4(GameObject_t1756533147 * value)
	{
		___bulletSpawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSpawnPoint_4, value);
	}

	inline static int32_t get_offset_of_levelControl_5() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___levelControl_5)); }
	inline LevelControl_t1927737663 * get_levelControl_5() const { return ___levelControl_5; }
	inline LevelControl_t1927737663 ** get_address_of_levelControl_5() { return &___levelControl_5; }
	inline void set_levelControl_5(LevelControl_t1927737663 * value)
	{
		___levelControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___levelControl_5, value);
	}

	inline static int32_t get_offset_of_playerMaxHealth_6() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___playerMaxHealth_6)); }
	inline int32_t get_playerMaxHealth_6() const { return ___playerMaxHealth_6; }
	inline int32_t* get_address_of_playerMaxHealth_6() { return &___playerMaxHealth_6; }
	inline void set_playerMaxHealth_6(int32_t value)
	{
		___playerMaxHealth_6 = value;
	}

	inline static int32_t get_offset_of_playerHealth_7() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___playerHealth_7)); }
	inline int32_t get_playerHealth_7() const { return ___playerHealth_7; }
	inline int32_t* get_address_of_playerHealth_7() { return &___playerHealth_7; }
	inline void set_playerHealth_7(int32_t value)
	{
		___playerHealth_7 = value;
	}

	inline static int32_t get_offset_of_playerMaxAmmo_8() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___playerMaxAmmo_8)); }
	inline int32_t get_playerMaxAmmo_8() const { return ___playerMaxAmmo_8; }
	inline int32_t* get_address_of_playerMaxAmmo_8() { return &___playerMaxAmmo_8; }
	inline void set_playerMaxAmmo_8(int32_t value)
	{
		___playerMaxAmmo_8 = value;
	}

	inline static int32_t get_offset_of_playerAmmo_9() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___playerAmmo_9)); }
	inline int32_t get_playerAmmo_9() const { return ___playerAmmo_9; }
	inline int32_t* get_address_of_playerAmmo_9() { return &___playerAmmo_9; }
	inline void set_playerAmmo_9(int32_t value)
	{
		___playerAmmo_9 = value;
	}

	inline static int32_t get_offset_of_anmi_10() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___anmi_10)); }
	inline Animator_t69676727 * get_anmi_10() const { return ___anmi_10; }
	inline Animator_t69676727 ** get_address_of_anmi_10() { return &___anmi_10; }
	inline void set_anmi_10(Animator_t69676727 * value)
	{
		___anmi_10 = value;
		Il2CppCodeGenWriteBarrier(&___anmi_10, value);
	}

	inline static int32_t get_offset_of_audioS_11() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___audioS_11)); }
	inline AudioSource_t1135106623 * get_audioS_11() const { return ___audioS_11; }
	inline AudioSource_t1135106623 ** get_address_of_audioS_11() { return &___audioS_11; }
	inline void set_audioS_11(AudioSource_t1135106623 * value)
	{
		___audioS_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioS_11, value);
	}

	inline static int32_t get_offset_of_bloodEffect_12() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___bloodEffect_12)); }
	inline GameObject_t1756533147 * get_bloodEffect_12() const { return ___bloodEffect_12; }
	inline GameObject_t1756533147 ** get_address_of_bloodEffect_12() { return &___bloodEffect_12; }
	inline void set_bloodEffect_12(GameObject_t1756533147 * value)
	{
		___bloodEffect_12 = value;
		Il2CppCodeGenWriteBarrier(&___bloodEffect_12, value);
	}

	inline static int32_t get_offset_of_isInvincable_13() { return static_cast<int32_t>(offsetof(PlayerControler_t1830793433, ___isInvincable_13)); }
	inline bool get_isInvincable_13() const { return ___isInvincable_13; }
	inline bool* get_address_of_isInvincable_13() { return &___isInvincable_13; }
	inline void set_isInvincable_13(bool value)
	{
		___isInvincable_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
