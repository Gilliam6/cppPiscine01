#include "Harl.hpp"

int main()
{
	Harl say;

	say.complain("WARNING");
	say.complain("DEBUG");
	say.complain("ERROR");
	say.complain("INFO");
	say.complain("meh");
	return (0);
}