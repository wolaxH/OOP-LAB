#ifndef PINKY_HPP
#define PINKY_HPP

#include "Character.hpp"
#include <string.h>
class Pinky : public Character{
private:
    Direction dir = Direction::NorthEast;
public:
    
    Pinky(std::string id, int x, int y);

    void DoBehavior() override;
    void Changedir();
};

#endif