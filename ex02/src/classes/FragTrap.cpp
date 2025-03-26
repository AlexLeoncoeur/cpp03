#include "../../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("GenericFragTrap") 
{
	std::cout	<< "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) 
{
	std::cout	<< "FragTrap param constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy._name)
{
	std::cout	<< "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
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

void	FragTrap::highFivesGuys()
{
	if (!this->checkHitEnergy())
		return ;
	std::cout	<< "Give me those fives! "
				<< std::endl;
}