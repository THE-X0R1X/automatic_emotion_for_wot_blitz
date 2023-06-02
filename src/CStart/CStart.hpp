////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: CStart.hpp                                                                                        /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "main.hpp"

//--------------------------------------------------------------------------------------------------
class CStart
{
public:
	VOID checking_current_monitor_resolution();
	VOID get_handle_window();
	void file_not_found();

	CStart();
	~CStart();
};
//--------------------------------------------------------------------------------------------------