#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap	a;
    FragTrap	b("Morgan");
    ClapTrap	c("Hugues");
    ScavTrap	d("Ben");

    b.takeDamage(3);
    b.takeDamage(20);
    b.beRepaired(3);
    b.attack("Eric");
    b.attack("Eric");
    b.attack("Eric");
    b.beRepaired(100);
    b.attack("Eric");
    b.highFivesGuys();
}