/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:26:59 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/08 18:15:35 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
:
_name(name),
_hitPoints((unsigned int)10),
_energyPoints((unsigned int)10),
_attackDamage((unsigned int)0)
{	std::cout << "Building ClapTrap " << getName() << std::endl; }

ClapTrap::~ClapTrap()
{	std::cout << "Destroying ClapTrap " << getName() << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoint();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
}

void ClapTrap::operator = (const ClapTrap &op)
{
	if (this == &op)
		return ;
	_name = op.getName();
	_hitPoints = op.getHitPoint();
	_energyPoints = op.getEnergyPoints();
	_attackDamage = op.getAttackDamage();
}

std::string	ClapTrap::getName() const
{	return(_name); }

unsigned int ClapTrap::getHitPoint() const
{	return (_hitPoints); }

unsigned int ClapTrap::getEnergyPoints() const
{	return (_energyPoints); }

unsigned int ClapTrap::getAttackDamage() const
{	return(_attackDamage); }

void	ClapTrap::attack(std::string const & target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " attack " << target 
	<< " with " << this->getAttackDamage() << " points damage!" << std::endl;   
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	_hitPoints = _hitPoints >= amount ? _hitPoints - amount : 0; 
	std::cout << "ClapTrap " << this->getName() << " received " << amount
	<< " of damage!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	_hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " repaired " << amount
	<< " points!" << std::endl; 
}




