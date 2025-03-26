#include "../../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout	<< "ClapTrap default constructor called" << std::endl;
	this->_name = "GenericClapTrap";
	return ;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout	<< "ClapTrap param constructor called" << std::endl;
	this->_name = name;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	std::cout	<< "ClapTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap destructor called" << std::endl;
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
	if (!this->checkHitEnergy())
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->checkHitEnergy())
		return ;
	this->_energyPoints--;
	std::cout	<< "Claptrap " 
		<< this->_name
		<< " repairs "
		<< amount
		<< " hit points!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{

	if (this->_hitPoints - amount < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout	<< "Claptrap "
				<< this->_name
				<< " received "
				<< amount
				<< " points of damage!"
				<< std::endl;
}

bool	ClapTrap::checkHitEnergy(void)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout	<< "Claptrap " 
					<< this->_name
					<< " doesnt have enough energy or hit points"
					<< std::endl;
		return (false);
	}
	return (true);
}
