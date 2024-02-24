#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string param) {
    std::cout << "Default constructor called" << std::endl;
    name = param;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void attack(const std::string& target){
    std::cout << "ClapTrap " << this.name << " attacks " << *target << " , causing " << this.attack_dmg << " points of damage!" << std::endl;
    target->takeDamage(this.attack_dmg);
}

void takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this.name << " lost " << amount << " Hit Points and is now on " << this.hit_points << " Hit Points!" << std::endl;
    this.Hit_points -= amount;
}
void beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this.name << " repaired himself " << amount << " Hit Points and is now on " << this.hit_points << " Hit Points!" << std::endl;
    this.Hit_points += amount;
}