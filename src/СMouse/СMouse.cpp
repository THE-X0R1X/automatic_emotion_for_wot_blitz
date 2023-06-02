////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project: Automatic Emotion for WoT Blitz(https://github.com/THE-X0R1X/automatic_emotion_for_wot_blitz). /
// Version: 1.0.                                                                                           /
// Developer: x0r1x(https://github.com/THE-X0R1X).                                                         /
//                                                                                                         /
// File: ÑMouse.cpp                                                                                        /
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ÑMouse.hpp"

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::set_cur_pos(std::int32_t x, std::int32_t y)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(280));
    SetCursorPos(x, y);
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::lbutton_click()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(30));
    mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);
    std::this_thread::sleep_for(std::chrono::milliseconds(30));
    mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::like_ally()
{
    CCord* cord = new CCord();

    this->set_cur_pos(cord->cord_for_ally[0], cord->cord_for_ally[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[2], cord->cord_for_ally[3]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[4], cord->cord_for_ally[5]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[6], cord->cord_for_ally[7]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[8], cord->cord_for_ally[9]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[10], cord->cord_for_ally[11]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[12], cord->cord_for_ally[13]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::dislike_ally()
{
    CCord* cord = new CCord();

    this->set_cur_pos(cord->cord_for_ally[0], cord->cord_for_ally[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[2], cord->cord_for_ally[3]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[4], cord->cord_for_ally[5]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[6], cord->cord_for_ally[7]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[8], cord->cord_for_ally[9]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[10], cord->cord_for_ally[11]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_ally[12], cord->cord_for_ally[13]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::like_enemy()
{
    CCord* cord = new CCord();

    this->set_cur_pos(cord->cord_for_enemy[0], cord->cord_for_enemy[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[2], cord->cord_for_enemy[3]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[4], cord->cord_for_enemy[5]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[6], cord->cord_for_enemy[7]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[8], cord->cord_for_enemy[9]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[10], cord->cord_for_enemy[11]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[12], cord->cord_for_enemy[13]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_like[0], cord->cord_for_emotion_like[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
VOID ÑMouse::dislike_enemy()
{
    CCord* cord = new CCord();

    this->set_cur_pos(cord->cord_for_enemy[0], cord->cord_for_enemy[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[2], cord->cord_for_enemy[3]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[4], cord->cord_for_enemy[5]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[6], cord->cord_for_enemy[7]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[8], cord->cord_for_enemy[9]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[10], cord->cord_for_enemy[11]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();

    this->set_cur_pos(cord->cord_for_enemy[12], cord->cord_for_enemy[13]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_emotion_dislike[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
    this->set_cur_pos(cord->cord_for_skip_emotion_menu[0], cord->cord_for_emotion_dislike[1]);
    this->lbutton_click();
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void ÑMouse::incorect_choise()
{
    system("cls");

    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 10";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 9";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 8";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 7";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 6";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 5";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 4";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 3";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 2";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");
    NConsole::set_color_cmd(colors::red);
    std::cout << "Not the right choice\n" << std::endl;
    NConsole::set_color_cmd(colors::green);
    std::cout << "The program will be exited via => 1";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::exit(int(0x0));
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
ÑMouse::ÑMouse()
{
    NConsole::set_name_cmd("AE for WoT Blitz by x0r1x v1.0");

    NConsole::set_color_cmd(colors::green);
    std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

    NConsole::set_color_cmd(colors::yellow);

    std::cout << "Menu:" << std::endl;

    NConsole::set_color_cmd(colors::green);
    std::cout << "    1. Like all allies" << std::endl;
    std::cout << "    2. Dislike all allies\n" << std::endl;

    NConsole::set_color_cmd(colors::red);
    std::cout << "    3. Like all enemy" << std::endl;
    std::cout << "    4. Dislike all enemy\n" << std::endl;

    NConsole::set_color_cmd(colors::green);
    std::cout << "    5. Like everyone" << std::endl;
    NConsole::set_color_cmd(colors::red);
    std::cout << "    6. Dislike everyone\n" << std::endl;

    NConsole::set_color_cmd(colors::blue);
    std::cout << "    1337. Developer social networks\n" << std::endl;

    NConsole::set_color_cmd(colors::red);
    std::cout << "Make your choice. After your choice, you will have 3 seconds to open the game window in full screen mode" << std::endl;

    NConsole::set_color_cmd(colors::green);
    std::cout << "choise@choise => ";

    int choise;
    std::cin >> choise;
    switch (choise)
    {
        case 1:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->like_ally();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 2:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->dislike_ally();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 3:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->like_enemy();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 4:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->dislike_enemy();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 5:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->like_ally();
            this->like_enemy();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 6:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(3));

            this->dislike_ally();
            this->dislike_enemy();

            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        case 1337:
        {
            system("cls");

            NConsole::set_color_cmd(colors::green);
            std::cout << "Automatic Emotion for WoT Blitz by x0r1x v1.0\n" << std::endl;

            NConsole::set_color_cmd(colors::yellow);

            std::cout << "My social networks:" << std::endl;
            NConsole::set_color_cmd(colors::red);
            std::cout << "    YouTube => https://www.youtube.com/channel/UCAw7DmEUFTCZE66j9rYg7MA" << std::endl;
            NConsole::set_color_cmd(colors::blue);
            std::cout << "    Telegram => https://t.me/x0r1x\n" << std::endl;


            NConsole::set_color_cmd(colors::green);
            std::cout << "To exit the program, press any key";

            _getch();

            break;
        }
        default:
            this->incorect_choise();
    }
}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
ÑMouse::~ÑMouse()
{
    std::exit(int(0x0));
}
//--------------------------------------------------------------------------------------------------