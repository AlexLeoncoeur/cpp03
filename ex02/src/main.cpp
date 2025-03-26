#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ScavTrap	pipo("pipo");
	ScavTrap	evilAfm("EvilAFM");
	FragTrap	tonacho("Tonacho");

	tonacho.highFivesGuys();
	pipo.attack("EvilAFM");
	evilAfm.takeDamage('\0');
	evilAfm.beRepaired(1);
	evilAfm.beRepaired(9);
	evilAfm.attack("pipo");
	pipo.takeDamage(100);
	pipo.beRepaired(10);
	evilAfm.attack("Tonchoo");
	tonacho.takeDamage(100);
	tonacho.highFivesGuys();
}