
#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
	: name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap a new champion is born " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	:	name(other.name),
		hitPoints(other.hitPoints),
		energyPoints(other.energyPoints),
		attackDamage(other.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " died peacefully" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energyPoints == 0)
	{
		std::cout << "ClapTrap" << this->name
				<< " cannot attack because he have not energy points left!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << "!" << std::endl;
	energyPoints--;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage" << std::endl;
	hitPoints = hitPoints - amount;
	if(hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repaiered itself " << amount << " points" << std::endl;
	energyPoints--;
}
