#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
		DiamondTrap();

	public:
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap&);
		void operator = (const DiamondTrap&);
		void	whoAmI();
		void	attack(std::string const & target);
};

#endif