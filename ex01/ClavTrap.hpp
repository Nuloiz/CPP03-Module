#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:

    ScavTrap(std::string param);
    ScavTrap(const ScavTrap &other);

    ScavTrap &operator=(const ScavTrap &src);

    void attack(const std::string& target);
    void guardGate();

    ~ScavTrap();
};