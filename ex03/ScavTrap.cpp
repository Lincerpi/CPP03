#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
:
ClapTrap(name),
boolGuardGate(false)
{	
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "Building ScavTrap " << getName() << std::endl; 	
}

ScavTrap::~ScavTrap()
{	std::cout << "Destroying ScavTrap " << getName() << std::endl; }

void ScavTrap::operator = (const ScavTrap &)
{}

void	ScavTrap::guardGate()
{
	boolGuardGate = true;
	std::cout << getName() << " entered in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->getHitPoint() == 0 || this->getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " can't attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " super-attack " << target 
	<< " with " << this->getAttackDamage() << " points damage!" << std::endl;
}
