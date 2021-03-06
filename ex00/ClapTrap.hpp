/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:27:02 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/08 18:14:59 by lincerpi         ###   ########.fr       */
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
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		void operator = (const ClapTrap &op);
		std::string getName() const;
		unsigned int getHitPoint() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif