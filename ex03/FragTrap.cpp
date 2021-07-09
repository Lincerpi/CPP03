#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name)
:
ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "Building FragTrap " << getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destroying FragTrap " << getName() << std::endl;
}

void	FragTrap::operator= (const FragTrap&)
{}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " raise his hand for a positive high fives!" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	if (getHitPoint() == 0 || getEnergyPoints() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " can't attack!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->getName() << " super-mega-attack " << target 
	<< " with " << this->getAttackDamage() << " points damage!" << std::endl;
}
