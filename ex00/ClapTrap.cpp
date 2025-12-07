/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 09:03:02 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 09:03:03 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
	if(this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and cant attack anymore." << std::endl;
	}
	else if(this->energyPoints == 0)
	{
		std::cout << "ClapTrap" << this->name
				<< " cannot attack because he have not energy points left!" << std::endl;
		return;
	}
	else
		std::cout << "ClapTrap " << this->name << " attacks " << target << "!" << std::endl;
	energyPoints--;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage" << std::endl;
	if(amount >= hitPoints)
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return;
	}
	else
		hitPoints -= amount;
	// std::cout << "ClapTrap " << this->name << " has " << hitPoints << " hitpoints " << "left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and cant be repaired!" << std::endl;
		return;
	}
	// std::cout << "ClapTrap " << this->name << " have " << hitPoints << " hitpoints" << std::endl;
	std::cout << "ClapTrap " << this->name << " repaired itself " << amount << " points" << std::endl;
	// std::cout << "ClapTrap " << this->name << " have " << energyPoints << " energypoints "  <<std::endl;

	energyPoints--;
	// std::cout << "ClapTrap " << this->name << " have now " << energyPoints << " energypoints "  <<std::endl;
	hitPoints += amount;
	// std::cout << "ClapTrap " << this->name << " have now " << hitPoints << " hitpoints" <<std::endl;
}
