/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:27:05 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/09 13:28:20 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap primo("Primo");

	primo.attack("target_1");
	primo.takeDamage(10);
	primo.attack("target_2");	
	primo.beRepaired(10);
	primo.attack("target_3");
	std::cout << "******************************************************" << std::endl;

	ScavTrap secondo("Secondo");

	secondo.attack("target_4");	
	secondo.guardGate();
	std::cout << secondo.getName() << " Hit Points " << secondo.getHitPoint() << std::endl;
	secondo.takeDamage(25);
	std::cout << secondo.getName() << " Hit Points " << secondo.getHitPoint() << std::endl;
	secondo.beRepaired(5);
	std::cout << secondo.getName() << " Hit Points " << secondo.getHitPoint() << std::endl;
	std::cout << "******************************************************" << std::endl;
	
	return (0);
}
