#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{

public:

	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

private:
	std::string _name;
};

Zombie	*newZombie(std::string s);
void randomChump(std::string s);
#endif
