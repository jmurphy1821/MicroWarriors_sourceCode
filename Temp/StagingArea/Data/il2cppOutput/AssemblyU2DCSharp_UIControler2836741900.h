#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// PlayerControler
struct PlayerControler_t1830793433;
// LevelControl
struct LevelControl_t1927737663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIControler
struct  UIControler_t2836741900  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text UIControler::playerStats
	Text_t356221433 * ___playerStats_2;
	// UnityEngine.UI.Text UIControler::WaveNumText
	Text_t356221433 * ___WaveNumText_3;
	// UnityEngine.UI.Text UIControler::helpfulText
	Text_t356221433 * ___helpfulText_4;
	// PlayerControler UIControler::player
	PlayerControler_t1830793433 * ___player_5;
	// LevelControl UIControler::levelControl
	LevelControl_t1927737663 * ___levelControl_6;
	// System.Boolean UIControler::waveTriggered
	bool ___waveTriggered_7;
	// System.Single UIControler::waveTimmer
	float ___waveTimmer_8;
	// System.Single UIControler::waveTime
	float ___waveTime_9;

public:
	inline static int32_t get_offset_of_playerStats_2() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___playerStats_2)); }
	inline Text_t356221433 * get_playerStats_2() const { return ___playerStats_2; }
	inline Text_t356221433 ** get_address_of_playerStats_2() { return &___playerStats_2; }
	inline void set_playerStats_2(Text_t356221433 * value)
	{
		___playerStats_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerStats_2, value);
	}

	inline static int32_t get_offset_of_WaveNumText_3() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___WaveNumText_3)); }
	inline Text_t356221433 * get_WaveNumText_3() const { return ___WaveNumText_3; }
	inline Text_t356221433 ** get_address_of_WaveNumText_3() { return &___WaveNumText_3; }
	inline void set_WaveNumText_3(Text_t356221433 * value)
	{
		___WaveNumText_3 = value;
		Il2CppCodeGenWriteBarrier(&___WaveNumText_3, value);
	}

	inline static int32_t get_offset_of_helpfulText_4() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___helpfulText_4)); }
	inline Text_t356221433 * get_helpfulText_4() const { return ___helpfulText_4; }
	inline Text_t356221433 ** get_address_of_helpfulText_4() { return &___helpfulText_4; }
	inline void set_helpfulText_4(Text_t356221433 * value)
	{
		___helpfulText_4 = value;
		Il2CppCodeGenWriteBarrier(&___helpfulText_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___player_5)); }
	inline PlayerControler_t1830793433 * get_player_5() const { return ___player_5; }
	inline PlayerControler_t1830793433 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerControler_t1830793433 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_levelControl_6() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___levelControl_6)); }
	inline LevelControl_t1927737663 * get_levelControl_6() const { return ___levelControl_6; }
	inline LevelControl_t1927737663 ** get_address_of_levelControl_6() { return &___levelControl_6; }
	inline void set_levelControl_6(LevelControl_t1927737663 * value)
	{
		___levelControl_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelControl_6, value);
	}

	inline static int32_t get_offset_of_waveTriggered_7() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___waveTriggered_7)); }
	inline bool get_waveTriggered_7() const { return ___waveTriggered_7; }
	inline bool* get_address_of_waveTriggered_7() { return &___waveTriggered_7; }
	inline void set_waveTriggered_7(bool value)
	{
		___waveTriggered_7 = value;
	}

	inline static int32_t get_offset_of_waveTimmer_8() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___waveTimmer_8)); }
	inline float get_waveTimmer_8() const { return ___waveTimmer_8; }
	inline float* get_address_of_waveTimmer_8() { return &___waveTimmer_8; }
	inline void set_waveTimmer_8(float value)
	{
		___waveTimmer_8 = value;
	}

	inline static int32_t get_offset_of_waveTime_9() { return static_cast<int32_t>(offsetof(UIControler_t2836741900, ___waveTime_9)); }
	inline float get_waveTime_9() const { return ___waveTime_9; }
	inline float* get_address_of_waveTime_9() { return &___waveTime_9; }
	inline void set_waveTime_9(float value)
	{
		___waveTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
