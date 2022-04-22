#include "Sed.hpp"

int main(int argc, char **argv)
{
	std::string copy;

	if (argc != 4)
	{
		std::cerr << "Wrong number of parameters\n";
		return (1);
	}
	if (readFile(argv[1], &copy))
	{
		std::cerr << "Can't read " << argv[1] << "\n";
		return (1);
	}
	copy = convertation(copy, argv + 2);
	writeFile(copy, argv[1]);
	return (0);
}