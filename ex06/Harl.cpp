#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*funPtr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string strings[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (level == strings[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*funPtr[0])();
        case 1:
            (this->*funPtr[1])();
        case 2:
            (this->*funPtr[2])();
        case 3:
            (this->*funPtr[3])();
    }
}

Harl::Harl()
{
}

Harl::~Harl()
{
    std::cout << "Harl is destroyed!!\n";
}