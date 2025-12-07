
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap clap("Bob");
	ScavTrap scav("Jonny");

	clap.attack("Hulk");
	scav.takeDamage(5);
	std::cout << std::endl;
	scav.attack("Thor");
	clap.takeDamage(20);
	clap.beRepaired(5);
	scav.beRepaired(5);
	std::cout << std::endl;
	scav.guardGate();
	return (0);
}
