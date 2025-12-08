/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:05:03 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 19:12:15 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main(void)
{
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap d("Bob");

    std::cout << std::endl << "=== Testing whoAmI ===" << std::endl;
    d.whoAmI();

    std::cout << std::endl << "=== Testing attack (ScavTrap) ===" << std::endl;
    d.attack("TargetDummy");

    std::cout << std::endl << "=== Testing taking damage ===" << std::endl;
    d.takeDamage(30);
    d.takeDamage(50);
    d.takeDamage(30);  // should die here
    d.takeDamage(5);   // should NOT take damage anymore

    std::cout << std::endl << "=== Testing repair ===" << std::endl;
    d.beRepaired(20);  // should NOT heal because it's dead

    std::cout << std::endl << "=== Testing whoAmI (after death) ===" << std::endl;
    d.whoAmI();        // still shows names

    std::cout << std::endl << "=== End of program ===" << std::endl;

    return 0;
}