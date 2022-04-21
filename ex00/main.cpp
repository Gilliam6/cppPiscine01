#include "Zombie.hpp"

int main()
{
	Zombie *newOne;

	randomChump("Bob");
	newOne = newZombie("Carl");
	newOne->announce();
	delete newOne;
	return (0);
}
