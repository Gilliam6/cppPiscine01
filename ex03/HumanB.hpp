#ifndef  HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanB{

private:
	std::string	_name;
	Weapon		*_arm;

public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &arm);
};
#endif
