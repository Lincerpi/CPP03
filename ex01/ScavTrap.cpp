#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// ScavTrap::ScavTrap()
// {}

ScavTrap::ScavTrap(std::string name)
:
ClapTrap(name),
boolGuardGate(false)
{	
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "Building ScavTrap " << getName() << std::endl; 	
}

// ScavTrap::ScavTrap(const ScavTrap&)
// {}

ScavTrap::~ScavTrap()
{	std::cout << "Destroying ScavTrap " << getName() << std::endl; }

void	ScavTrap::guardGate()
{
	boolGuardGate = true;
	std::cout << getName() << " entered in Gate keeper mode!" << std::endl;
}