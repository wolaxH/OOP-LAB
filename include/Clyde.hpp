#ifndef Clyde_HPP
#define Clyde_HPP

#include "Character.hpp"
#include <string.h>

class Clyde : public Character{
private:
    Point Pacman_Point;
    Point origin;
public:
    Clyde(std::string id, int x, int y, Point Pacman);

    void DoBehavior() override;

};

#endif