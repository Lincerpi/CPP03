#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap: public ClapTrap 
{
		bool boolGuardGate;
		// ScavTrap();

	public:
		//TODO : operator costruction & copy 
		ScavTrap(std::string name);
		// ScavTrap(const ScavTrap&);
		~ScavTrap();
		void	guardGate();
};

#endif