#include "../../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("GenericDiamondTrap"), FragTrap("GenericDiamondTrap"), ClapTrap("GenericDiamondTrap") 
{
	std::cout	<< "DiamondTrap default constructor called" << std::endl;
	this->_name = "GenericDiamondTrap";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = "GenericDiamondTrap_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(const std::string name) : ScavTrap(name), FragTrap(name), ClapTrap(name) 
{
	std::cout	<< "DiamondTrap param constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = name + "_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy._name)
{
	std::cout	<< "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
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

void	DiamondTrap::whoAmI()
{
	if (!this->checkHitEnergy())
		return ;
	std::cout	<< this->_name << std::endl;
	std::cout	<< this->ClapTrap::_name << std::endl;
}