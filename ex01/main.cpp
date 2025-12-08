/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:01:38 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 10:01:39 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap clap("Bob");
	ScavTrap scav("Jonny");

	clap.attack("Bob");
	scav.takeDamage(5);
	std::cout << std::endl;
	scav.attack("Jonny");
	clap.takeDamage(20);
	clap.beRepaired(5);
	scav.beRepaired(5);
	std::cout << std::endl;
	scav.guardGate();
	return (0);
}
