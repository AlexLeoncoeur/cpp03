#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap pipo("pipo");
	ClapTrap evilAfm("EvilAFM");

	pipo.attack("EvilAFM");
	evilAfm.takeDamage('\0');
	evilAfm.beRepaired(-1);
	evilAfm.beRepaired(9);
	evilAfm.attack("pipo");
	pipo.takeDamage(10);
	pipo.beRepaired(10);
}