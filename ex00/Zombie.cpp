#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << ": is born\n";
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << ": is dead\n";
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

