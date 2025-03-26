#include "../../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("GenericScavTrap") 
{
	std::cout	<< "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) 
{
	std::cout	<< "ScavTrap param constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy._name)
{
	std::cout	<< "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

void	ScavTrap::attack(const std::string &target)
{
	if (!this->checkHitEnergy())
		return ;
	this->_energyPoints--;
	std::cout	<< "Scavtrap " 
				<< this->_name
				<< " attacks "
				<< target
				<< ", causing "
				<< this->_attackDamage
				<< " points of damage!"
				<< std::endl;
}

void	ScavTrap::guardGate()
{
	if (!this->checkHitEnergy())
		return ;
	std::cout	<< "Scavtrap " 
					<< this->_name
					<< " is in gatekeeper mode"
					<< std::endl;
}