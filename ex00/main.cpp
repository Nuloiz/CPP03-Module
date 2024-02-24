#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Helge");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3 = claptrap;

    claptrap.attack("Simon");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    claptrap2.attack("Andreas");
    claptrap2.takeDamage(3);
    claptrap2.beRepaired(5);
    claptrap3.attack("Johannes");
    claptrap3.takeDamage(11);
    claptrap3.beRepaired(12);
    return 0;
}