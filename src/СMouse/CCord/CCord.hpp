////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: CCord.hpp                                                                                         /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "main.hpp"

//--------------------------------------------------------------------------------------------------
class CCord
{
public:
	const std::vector<std::int32_t> cord_for_ally
	{ 
		921, 355,
		919, 406,
		920, 468,
		921, 525,
		919, 580,
		920, 635,
		921, 692
	};

	const std::vector<std::int32_t> cord_for_enemy
	{
		997, 357,
		996, 408,
		999, 469,
		997, 520,
		997, 578,
		998, 637,
		998, 688
	};

	const std::vector<std::int32_t> cord_for_emotion_like
	{
		1162, 1000
	};

	const std::vector<std::int32_t> cord_for_emotion_dislike
	{
		763, 989
	};

	const std::vector<std::int32_t> cord_for_skip_emotion_menu
	{
		152, 461
	};
};
//--------------------------------------------------------------------------------------------------