#include "../include/DiamondTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	DiamondTrap	pipo("Pipo");
	ScavTrap	scav("Scav");
	FragTrap	frag("Frag");

	pipo.attack("joselito");
	scav.attack("joselito");
	frag.attack("joselito");
	
	pipo.whoAmI();

	pipo.beRepaired(10);
	scav.beRepaired(10);
	frag.beRepaired(10);

	pipo.takeDamage(1000);
	pipo.whoAmI();
	return (0);
}