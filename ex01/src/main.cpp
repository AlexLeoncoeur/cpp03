#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap pipo("pipo");
	ScavTrap evilAfm("EvilAFM");

	pipo.attack("EvilAFM");
	evilAfm.takeDamage('\0');
	evilAfm.beRepaired(1);
	evilAfm.beRepaired(9);
	evilAfm.attack("pipo");
	pipo.takeDamage(100);
	pipo.beRepaired(10);
}