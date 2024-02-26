#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hit_points(10), energy_points(10), attack_dmg(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string param) : name(param), hit_points(10), energy_points(10), attack_dmg(0){
    std::cout << "Param constructor called" << std::endl;
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
    if (hit_points > 0){
        if (energy_points > 0){
            std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attack_dmg << " points of damage!" << std::endl;
            energy_points -= 1;
        }
        else
            std::cout << "ClapTrap " << name << " is out of energy and cannot attack!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " is dead and cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if ((hit_points - (int)amount) < 0){
        std::cout << "ClapTrap " << name << " lost " << hit_points << " Hit Points and is now dead!" << std::endl;
        hit_points = 0;
    } else {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " lost " << amount << " Hit Points and is now on " << hit_points << " Hit Points!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if (hit_points == 0){
        std::cout << "ClapTrap " << name << " is dead and cannot be repaired!" << std::endl;
        return;
    }
    else if (energy_points == 0)
        std::cout << "ClapTrap " << name << " is out of energy and cannot be repaired!" << std::endl;
    else{
        hit_points += amount;
        std::cout << "ClapTrap " << name << " repaired himself " << amount << " Hit Points and is now on " << hit_points << " Hit Points!" << std::endl;
        energy_points -= 1;
    }
}