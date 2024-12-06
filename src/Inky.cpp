#include "../include/Inky.hpp"

Inky::Inky(std::string id, int x, int y) : Character(id,x, y){
}

void Inky::DoBehavior(){
    Point current = Getpoint();
    
    if (current.x == 15 && dir == Direction::SouthEast){
        dir = Direction::NorthWest;
    }
    else if (current.x == 0 && dir == Direction::NorthWest){
        dir = Direction::SouthEast;
    }

    if (dir == Direction::SouthEast){
        current.x += 3, current.y += 3;
    }
    else if (dir == Direction::NorthWest){
        current.x -=3, current.y -= 3;
    }
    Setpoint(current.x, current.y);
}
