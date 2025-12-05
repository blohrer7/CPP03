
#include "ClapTrap.hpp"

int main()
{
	ClapTrap jonny("Jonny");
	ClapTrap bob("Bob");

	jonny.attack("Bob");
	bob.takeDamage(6);
	bob.takeDamage(7);
	bob.attack("Jonny");
	jonny.takeDamage(5);
	jonny.attack("Bob");
	bob.takeDamage(6);
	jonny.attack("Bob");
	jonny.beRepaired(5);
	
	return 0;
}
