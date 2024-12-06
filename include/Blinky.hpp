#ifndef BLINKY_HPP
#define BLINKY_HPP

#include "Character.hpp"


class Blinky : public Character{
private:
    Direction dir = Direction::East;
public:
    Blinky(std::string id, int x, int y);
    
    void Changedir();
    void DoBehavior() override;
};

#endif