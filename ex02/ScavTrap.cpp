/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:05:13 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 10:39:38 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("default") // Basisklasse initialisieren
{
	std::cout << "ScavTrap default constructor is called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap a new champion created " << this->name << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator is called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead and cant attack anymore." << std::endl;
		return;
	}
	if(this->energyPoints == 0)
	{
		std::cout << "ScavTrap" << this->name
				<< " cannot attack because he have not energy points left!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << "!" << std::endl;
	energyPoints--;

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}
