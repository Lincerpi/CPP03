#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
:
ClapTrap(name),
ScavTrap(name),
FragTrap(name)
{
	setHitPoints(FragTrap::getHitPoint());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Building DiamondTrap " << getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destroying DiamondTrap " << DiamondTrap::getName() << std::endl;
}

void	DiamondTrap::operator= (const DiamondTrap&)
{}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << DiamondTrap::getName() << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::getName() << "_clap_name" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
