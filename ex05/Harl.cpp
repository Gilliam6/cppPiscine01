#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string complaintLevels[] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR",
	};
	void (Harl::*bunch[])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	for (int i = 0; i < 4; i++)
		if (complaintLevels[i] == level)
			(this->*bunch[i])();
}