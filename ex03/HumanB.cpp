#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	_arm = 0;
}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &arm){
	_arm = &arm;
}

void HumanB::attack()
{
	if (!_arm)
		std::cout << "Give me Weapon!\n";
	else
	{
		std::cout << _name << " attacks with their " << _arm->getType() <<
				  std::endl;
	}
}