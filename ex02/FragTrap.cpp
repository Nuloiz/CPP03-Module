#include "FragTrap.hpp"

FragTrap::FragTrap() :
    ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string param) :
    ClapTrap(param, 100, 100, 30)
{
    std::cout << "FragTrap param constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) :
    ClapTrap(other.name, other.hit_points, other.energy_points, other.attack_dmg)
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

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}