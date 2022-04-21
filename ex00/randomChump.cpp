#include "Zombie.hpp"

void randomChump(std::string s)
{
	Zombie rand = Zombie(s);

	rand.announce();
	return;
}

