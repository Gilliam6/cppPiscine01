#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
# include <iostream>
class HumanA{

private:
	std::string	_name;
	Weapon		&_arm;
public:
	HumanA(std::string name, Weapon &arm);
	~HumanA();

	void attack();
};
#endif