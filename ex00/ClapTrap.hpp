#pragma once

#include <iostream>
#include <string>
#include <cmath>

class ClapTrap{
public:

    ClapTrap(std::string param);
    ClapTrap(const ClapTrap &other);

    ClapTrap &operator=(const ClapTrap &src);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ~ClapTrap();

private:
    std::string name;
    int         hit_points = 10;
    int         enery_points = 10;
    int         attack_dmg = 0;
};
