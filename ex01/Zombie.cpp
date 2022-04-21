#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->_name << ": is born\n";
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << ": is dead\n";
	return;
}

void Zombie::initName(std::string name)
{
	_name = name;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

