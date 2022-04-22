#include "Sed.hpp"

int readFile(char *path, std::string *copy)
{
	std::ifstream	ifs;
	char			c;

	ifs.open(path);
	if (ifs == 0 || !ifs.is_open())
		return (1);
	while (ifs.get(c))
		*copy += c;
	ifs.close();
	return ((*copy).empty());
}