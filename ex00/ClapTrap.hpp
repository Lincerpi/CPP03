/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:27:02 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/08 15:58:46 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap;

class ClapTrap 
{
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		ClapTrap();
		
	public:
		//TODO : operator costruction & copy 
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		std::string getName();
		unsigned int getHitPoint();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif