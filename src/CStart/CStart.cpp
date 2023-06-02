////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: CStart.cpp                                                                                        /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CStart.hpp"

//--------------------------------------------------------------------------------------------------
VOID CStart::checking_current_monitor_resolution()
{
    const HMONITOR monitor = MonitorFromWindow(GetDesktopWindow(), MONITOR_DEFAULTTOPRIMARY);

    MONITORINFOEX monitor_info;
    monitor_info.cbSize = sizeof(MONITORINFOEX);
    GetMonitorInfoA(monitor, &monitor_info);

    const int32_t monitor_width = monitor_info.rcMonitor.right - monitor_info.rcMonitor.left;

    if (monitor_width != 1920)
    {
        NConsole::set_name_cmd("AE for WoT Blitz by x0r1x v1.0");

        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 10";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 9";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 8";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 7";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 6";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 5";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 4";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 3";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 2";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Your monitor size is greater or less than 1920x1080. \nTo fix this error, change your screen resolution.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 1";
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::exit(int(0x1));
    }
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID CStart::get_handle_window()
{
    HWND hwnd = FindWindowA(nullptr, "WoT Blitz");
    if (hwnd == nullptr)
    {
        NConsole::set_name_cmd("AE for WoT Blitz by x0r1x v1.0");

        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 10";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 9";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 8";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 7";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 6";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 5";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 4";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 3";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 2";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        NConsole::set_color_cmd(colors::red);
        std::cout << "Game window not found.\n" << std::endl;
        NConsole::set_color_cmd(colors::green);
        std::cout << "The program will be exited via => 1";
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::exit(int(0x1));
    }
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void CStart::file_not_found()
{
    NConsole::set_name_cmd("AE for WoT Blitz by x0r1x v1.0");

    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 10";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 9";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 8";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 7";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 6";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 5";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 4";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 3";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 2";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "The file is protected from renaming :)\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 1";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::exit(int(0x0));
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
CStart::CStart()
{
    this->checking_current_monitor_resolution();
    this->get_handle_window();

    if (std::filesystem::exists(".\AE for WoT Blitz by x0r1x v1.0.exe"))
        std::make_unique<ÑMouse>();
    else 
        this->file_not_found();
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
CStart::~CStart()
{
    std::exit(int(0x0));
}
//--------------------------------------------------------------------------------------------------