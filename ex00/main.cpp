/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:27:05 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/08 13:38:43 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap primo("Primo");

	primo.attack("target_1");
	primo.takeDamage(10);
	primo.attack("target_2");	
	primo.beRepaired(10);
	primo.attack("target_3");
	
	return (0);
}
