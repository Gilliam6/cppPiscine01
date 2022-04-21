#include "Zombie.hpp"

int main()
{
	Zombie *horde;

	horde = zombieHorde(5, "Carl");
	delete [] horde;
	return (0);
}
