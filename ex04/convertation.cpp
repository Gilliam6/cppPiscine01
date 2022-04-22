#include "Sed.hpp"

std::string convertation(std::string copy, char **argv)
{
	std::string	final;
	int			pos;

	while ((pos = copy.find(argv[0])) >= 0)
	{
		final += copy.substr(0, pos);
		final += argv[1];
		copy = copy.substr(pos + 1);
	}
	final += copy;
	return (final);
}

