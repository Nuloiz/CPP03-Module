#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap	b("Morgan");
    ClapTrap	c("Hugues");

    b.takeDamage(3);
    b.takeDamage(20);
    b.beRepaired(3);
    b.attack("Eric");
    b.attack("Eric");
    b.attack("Eric");
    b.beRepaired(6);
    b.attack("Eric");
    return 0;
}