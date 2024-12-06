#ifndef PACMAN_HPP
#define PACMAN_HPP

#include "Character.hpp"
#include <iostream>

class Pacman : public Character{
private:
public:
    Pacman(std::string id,int x, int y);

    void DoBehavior() override;
};

#endif