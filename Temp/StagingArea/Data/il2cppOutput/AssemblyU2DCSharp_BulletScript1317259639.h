#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t1317259639  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BulletScript::isGoingRight
	bool ___isGoingRight_2;
	// System.Int32 BulletScript::damage
	int32_t ___damage_3;
	// System.Single BulletScript::selfDestructTimer
	float ___selfDestructTimer_4;
	// System.Single BulletScript::speed
	float ___speed_5;

public:
	inline static int32_t get_offset_of_isGoingRight_2() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___isGoingRight_2)); }
	inline bool get_isGoingRight_2() const { return ___isGoingRight_2; }
	inline bool* get_address_of_isGoingRight_2() { return &___isGoingRight_2; }
	inline void set_isGoingRight_2(bool value)
	{
		___isGoingRight_2 = value;
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___damage_3)); }
	inline int32_t get_damage_3() const { return ___damage_3; }
	inline int32_t* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(int32_t value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_selfDestructTimer_4() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___selfDestructTimer_4)); }
	inline float get_selfDestructTimer_4() const { return ___selfDestructTimer_4; }
	inline float* get_address_of_selfDestructTimer_4() { return &___selfDestructTimer_4; }
	inline void set_selfDestructTimer_4(float value)
	{
		___selfDestructTimer_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
