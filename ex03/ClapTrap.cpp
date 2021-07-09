/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:26:59 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/09 13:56:16 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
:
name(name),
hitPoints((unsigned int)10),
energyPoints((unsigned int)10),
attackDamage((unsigned int)0)
{	std::cout << "Building ClapTrap " << getName() << std::endl; }

ClapTrap::~ClapTrap()
{	std::cout << "Destroying ClapTrap " << getName() << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	name = copy.getName();
	hitPoints = copy.getHitPoint();
	energyPoints = copy.getEnergyPoints();
	attackDamage = copy.getAttackDamage();
}

void ClapTrap::operator = (const ClapTrap &op)
{
	if (this == &op)
		return ;
	name = op.getName();
	hitPoints = op.getHitPoint();
	energyPoints = op.getEnergyPoints();
	attackDamage = op.getAttackDamage();
}

std::string	ClapTrap::getName() const
{	return(this->name); }

unsigned int ClapTrap::getHitPoint() const
{	return (hitPoints); }

unsigned int ClapTrap::getEnergyPoints() const
{	return (energyPoints); }

unsigned int ClapTrap::getAttackDamage() const
{	return(attackDamage); }

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{	this->hitPoints = hitPoints; }

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{	this->energyPoints = energyPoints; }

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{	this->attackDamage = attackDamage; }

void	ClapTrap::attack(std::string const & target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " attack " << target 
	<< " with " << this->getAttackDamage() << " points damage!" << std::endl;   
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	hitPoints = hitPoints >= amount ? hitPoints - amount : 0; 
	std::cout << "ClapTrap " << this->getName() << " received " << amount
	<< " of damage!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " repaired " << amount
	<< " points!" << std::endl; 
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}


