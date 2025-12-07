/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 09:03:10 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/07 09:03:11 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
