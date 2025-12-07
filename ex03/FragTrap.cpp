/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:04:49 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 17:41:45 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("default") // basis class
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap a new champion spawned " << this->name << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other)
{
	std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " eliminated" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator is called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if(this->hitPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and cant attack anymore." << std::endl;
		return;
	}
	if(this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->name
				<< " cannot attack because he have not energy points left!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << "!" << std::endl;
	energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " high five guys, good job!!!" << std::endl;
}
