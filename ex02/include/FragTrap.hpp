#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:



public:

	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &rhs);

	void	highFivesGuys(void);

};