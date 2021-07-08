/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:26:59 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/08 15:56:36 by lincerpi         ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap&)
{}

ClapTrap::~ClapTrap()
{	std::cout << "Destroying ClapTrap " << getName() << std::endl; }

std::string	ClapTrap::getName()
{	return(name); }

unsigned int ClapTrap::getHitPoint()
{	return (hitPoints); }

unsigned int ClapTrap::getEnergyPoints()
{	return (energyPoints); }

unsigned int ClapTrap::getAttackDamage()
{	return(attackDamage); }

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{	this->hitPoints = hitPoints; }

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{	this->energyPoints = energyPoints; }

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{	this->attackDamage = attackDamage; }

void	ClapTrap::attack(std::string const & target)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " attack " << target 
	<< " with " << this->getAttackDamage() << " points damage!" << std::endl;   
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	this->hitPoints = this->hitPoints >= amount ? this->hitPoints - amount : 0; 
	std::cout << "ClapTrap " << this->getName() << " received " << amount
	<< " of damage!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " repaired " << amount
	<< " points!" << std::endl; 
}




