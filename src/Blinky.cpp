#include "../include/Blinky.hpp"

Blinky::Blinky(std::string id, int x, int y) : Character(id,x, y){
}

void Blinky::DoBehavior(){

    Point p = Getpoint();
    Changedir();

    switch (dir)
    {
    case Direction::East:
        Setpoint(p.x + 3, p.y);
        break;
    case Direction::South:
        Setpoint(p.x, p.y + 3);
        break;
    case Direction::West:
        Setpoint(p.x - 3, p.y);
        break;
    case Direction::North:
        Setpoint(p.x, p.y - 3);
        break;
    default:
        Setpoint(0, 0);
    }

}

void Blinky::Changedir(){

    Point p = Getpoint();

    if (dir == Direction::East && p.x == 15){
        dir = Direction::South;
    }
    else if (dir == Direction::South && p.y == 15){
        dir = Direction::West;
    }
    else if (dir == Direction::West && p.x == 0){
        dir = Direction::North;
    }
    else if (dir == Direction::North && p.y == 0){
        dir = Direction::East;
    }
}