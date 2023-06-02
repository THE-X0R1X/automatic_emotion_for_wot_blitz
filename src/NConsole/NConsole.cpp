////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: NConsole.cpp                                                                                      /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NConsole.hpp"

//--------------------------------------------------------------------------------------------------
VOID NConsole::set_name_cmd(LPCSTR name) 
{
    SetConsoleTitleA(name);
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID NConsole::set_color_cmd(WORD color) 
{
    const HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hconsole, color);
}
//--------------------------------------------------------------------------------------------------