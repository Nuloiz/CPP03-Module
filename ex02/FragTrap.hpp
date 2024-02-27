#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:

    FragTrap();
    FragTrap(std::string param);
    FragTrap(FragTrap const &other);

    FragTrap &operator=(const FragTrap &src);

    ~FragTrap();
};