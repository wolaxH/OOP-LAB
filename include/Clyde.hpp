#ifndef Clyde_HPP
#define Clyde_HPP

#include "Character.hpp"
#include <string.h>

class Clyde : public Character{
private:
    Point Pacman_Point;
public:
    Clyde(std::string id, int x, int y, Point Pacman);

    Point GetPacmanPoint();
    void DoBehavior() override;

};

#endif