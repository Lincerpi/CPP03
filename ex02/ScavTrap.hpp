#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class ScavTrap: public ClapTrap 
{
		bool boolGuardGate;
		ScavTrap();

	public: 
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap&);
		void operator = (const ScavTrap &);
		void	guardGate();
		void	attack(std::string const & target);
};

#endif