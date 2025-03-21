#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	this->_name = name;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	*this = toCopy;
	return ;
}

ClapTrap::~ClapTrap()
{
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout	<< "Claptrap " 
					<< this->_name
					<< " has "
					<< this->_energyPoints
					<< " energy points and cannot attack!"
					<< std::endl;
	}
		return ;
	this->_energyPoints--;
	std::cout	<< "Claptrap " 
				<< this->_name
				<< " attacks "
				<< target
				<< ", causing "
				<< this->_attackDamage
				<< " points of damage!"
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints--;
	std::cout	<< "Claptrap " 
				<< this->_name
				<< " received "
				<< amount
				<< " points of damage!"
				<< std::endl;
}