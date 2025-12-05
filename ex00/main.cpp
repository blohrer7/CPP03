
#include "ClapTrap.hpp"

int main()
{
	ClapTrap jonny("Jonny");
	ClapTrap bob("Bob");

	jonny.attack("Bob");
	bob.takeDamage(10);

	bob.attack("Jonny");
	jonny.takeDamage(5);
	jonny.beRepaired(5);
	jonny.attack("Bob");
	bob.takeDamage(6);
	jonny.attack("Bob");

	return 0;
}
