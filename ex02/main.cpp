/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:05:03 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 17:36:34 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	ClapTrap clap("Bob");
	ScavTrap scav("Jonny");
	FragTrap frag("Spiderman");

	clap.attack("Hulk");
	scav.takeDamage(5);
	std::cout << std::endl;

	scav.attack("Thor");
	clap.takeDamage(20);
	clap.beRepaired(5);
	scav.beRepaired(5);
	std::cout << std::endl;

	frag.attack("Jonny");
	scav.takeDamage(10);
	scav.guardGate();

	std::cout << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
