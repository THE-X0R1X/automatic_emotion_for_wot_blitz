////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: CMouse.hpp                                                                                        /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "main.hpp"

//--------------------------------------------------------------------------------------------------
class CMouse
{
	VOID set_cur_pos(std::int32_t x, std::int32_t y);
	VOID lbutton_click();

	VOID like_ally();
	VOID dislike_ally();

	VOID like_enemy();
	VOID dislike_enemy();

	void incorect_choise();

public:
	CMouse();
	~CMouse();
};
//--------------------------------------------------------------------------------------------------