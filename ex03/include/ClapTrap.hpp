#pragma once

# include<string>
# include<iostream>

class ClapTrap
{

protected:

	std::string	_name;
	int			_hitPoints = 10;
	int			_energyPoints = 10;
	int			_attackDamage = 0;

public:

	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &toCopy);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &rhs);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	bool	checkHitEnergy(void) const;

};