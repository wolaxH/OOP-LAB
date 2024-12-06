#ifndef INKY_HPP
#define INKY_HPP

#include "Character.hpp"
#include <string.h>
/*
enum class Direction{
    southeast, 
    northwest
};
*/

class Inky : public Character{
private:
    Direction dir = Direction::NorthWest;
public:
    Inky(std::string id, int x, int y);
    void DoBehavior() override;
};

#endif