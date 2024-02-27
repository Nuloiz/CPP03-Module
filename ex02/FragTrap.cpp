#include "FragTrap.hpp"

ScavTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

ScavTrap::FragTrap(std::string param)
{
    std::cout << "Fragrap param constructor called" << std::endl;
}

ScavTrap::FragTrap(FragTrap const &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap & FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_dmg = other.attack_dmg;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}