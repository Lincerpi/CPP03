/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:27:02 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/09 10:54:34 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	
		ClapTrap();
		
	public: 
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		void operator = (const ClapTrap &op);
		std::string getName() const;
		void	setHitPoints(unsigned int hitPoints);
		void	setEnergyPoints(unsigned int energyPoints);
		void	setAttackDamage(unsigned int attackDamage);
		unsigned int getHitPoint() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
		virtual void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif