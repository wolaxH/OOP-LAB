#include "../include/Pinky.hpp"

Pinky::Pinky(std::string id, int x, int y) : Character(id, x, y){}

void Pinky::DoBehavior(){
    Changedir();
    Point current = Getpoint();

    switch (dir)
    {
    case Direction::NorthEast:
        current.x += 3, current.y -= 3;
        break;
    case Direction:: SouthWest:
        current.x -= 3, current.y += 3;
        break;
    }

    Setpoint(current.x, current.y);
    
}

void Pinky::Changedir(){
    Point current = Getpoint();

    if (dir == Direction::NorthEast && (current.x == 15 || current.y == 0)){
        dir = Direction::SouthWest;
    }
    else if (dir == Direction::SouthWest && (current.x == 0 || current.y == 15)){
        dir = Direction::NorthEast;
    }
    
}
