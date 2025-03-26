#pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:

	std::string	_name;

public:

	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &toCopy);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap &rhs);

	using	ScavTrap::attack;
	void	whoAmI(void);

};