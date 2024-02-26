#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string param)
    Claptrap(name, 100, 50, 20, 15);
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    Claptrap(name, 100, 50, 20, 15);
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_dmg = other.attack_dmg;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (hit_points > 0){
        if (energy_points > 0){
            std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attack_dmg << " points of damage!" << std::endl;
            energy_points -= 1;
        }
        else
            std::cout << "ScavTrap " << name << " is out of energy and cannot attack!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " is dead and cannot attack!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode!" << std::endl;
}
