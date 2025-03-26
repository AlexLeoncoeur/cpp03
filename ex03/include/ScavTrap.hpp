#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:



public:

	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &toCopy);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &rhs);

	void	attack(const std::string &target);
	void	guardGate(void);

};