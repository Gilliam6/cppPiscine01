#include "Sed.hpp"

void writeFile(std::string copy, char *path)
{
	std::string new_file = path;

	new_file += ".replace";
	std::ofstream s_output(new_file);
	s_output << copy;
	s_output.close();
}