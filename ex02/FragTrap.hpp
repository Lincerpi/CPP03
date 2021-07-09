#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
		FragTrap();

	public:
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap&);
		void operator = (const FragTrap&);
		void	highFivesGuys(void);
		void	attack(std::string const & target);
};

#endif