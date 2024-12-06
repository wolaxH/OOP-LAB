#ifndef PACMAN_HPP
#define PACMAN_HPP

#include "Character.hpp"
#include <iostream>

class Pacman : public Character{
private:
public:
    Pacman(int x, int y);

    void DoBehavior() override;
};

#endif