#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arm): _name(name), _arm(arm)
{ return; }

HumanA::~HumanA()
{ return; }

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _arm.getType() <<
	std::endl;
}

