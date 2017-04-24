#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlashBox
struct  SlashBox_t2056466298  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SlashBox::dammage
	int32_t ___dammage_2;
	// System.Single SlashBox::SlashTimmer
	float ___SlashTimmer_3;
	// System.Single SlashBox::SlashTime
	float ___SlashTime_4;
	// UnityEngine.SpriteRenderer SlashBox::spriteR
	SpriteRenderer_t1209076198 * ___spriteR_5;
	// UnityEngine.Sprite SlashBox::slashSprite
	Sprite_t309593783 * ___slashSprite_6;
	// UnityEngine.AudioSource SlashBox::audioS
	AudioSource_t1135106623 * ___audioS_7;

public:
	inline static int32_t get_offset_of_dammage_2() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___dammage_2)); }
	inline int32_t get_dammage_2() const { return ___dammage_2; }
	inline int32_t* get_address_of_dammage_2() { return &___dammage_2; }
	inline void set_dammage_2(int32_t value)
	{
		___dammage_2 = value;
	}

	inline static int32_t get_offset_of_SlashTimmer_3() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___SlashTimmer_3)); }
	inline float get_SlashTimmer_3() const { return ___SlashTimmer_3; }
	inline float* get_address_of_SlashTimmer_3() { return &___SlashTimmer_3; }
	inline void set_SlashTimmer_3(float value)
	{
		___SlashTimmer_3 = value;
	}

	inline static int32_t get_offset_of_SlashTime_4() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___SlashTime_4)); }
	inline float get_SlashTime_4() const { return ___SlashTime_4; }
	inline float* get_address_of_SlashTime_4() { return &___SlashTime_4; }
	inline void set_SlashTime_4(float value)
	{
		___SlashTime_4 = value;
	}

	inline static int32_t get_offset_of_spriteR_5() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___spriteR_5)); }
	inline SpriteRenderer_t1209076198 * get_spriteR_5() const { return ___spriteR_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteR_5() { return &___spriteR_5; }
	inline void set_spriteR_5(SpriteRenderer_t1209076198 * value)
	{
		___spriteR_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteR_5, value);
	}

	inline static int32_t get_offset_of_slashSprite_6() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___slashSprite_6)); }
	inline Sprite_t309593783 * get_slashSprite_6() const { return ___slashSprite_6; }
	inline Sprite_t309593783 ** get_address_of_slashSprite_6() { return &___slashSprite_6; }
	inline void set_slashSprite_6(Sprite_t309593783 * value)
	{
		___slashSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___slashSprite_6, value);
	}

	inline static int32_t get_offset_of_audioS_7() { return static_cast<int32_t>(offsetof(SlashBox_t2056466298, ___audioS_7)); }
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
