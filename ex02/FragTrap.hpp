#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "ScavTrap.hpp"

class FragTrap : public ScavTrap{
public:

    FragTrap();
    FragTrap(std::string param);
    FragTrap(FragTrap const &other);

    FragTrap &operator=(const FragTrap &src):

    ~FragTrap();
};