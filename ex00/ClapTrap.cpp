#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string param) : name(param), hit_points(10), energy_points(10), attack_dmg(0){
    std::cout << "Default constructor called" << std::endl;
    name = param;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_dmg = other.attack_dmg;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attack_dmg << " points of damage!" << std::endl;
    energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name << " lost " << amount << " Hit Points and is now on " << hit_points << " Hit Points!" << std::endl;
    hit_points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << name << " repaired himself " << amount << " Hit Points and is now on " << hit_points << " Hit Points!" << std::endl;
    hit_points += amount;
    energy_points -= 1;
}