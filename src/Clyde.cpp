#include "../include/Clyde.hpp"

Clyde::Clyde(std::string id, int x, int y, Point Pacman) : Character(x, y), Pacman_Point(Pacman.x, Pacman.y){
    this->id = id;
}

void Clyde::DoBehavior(){
    Point current = Getpoint();

    if (Pacman_Point.x != current.x && Pacman_Point.y != current.y){    //move 2 axis
        if (Pacman_Point.x > current.x) current.x += 3;
        else current.x -= 3;
        if (Pacman_Point.y > current.y) current.y += 3;
        else current.y -= 3;
    }
    else if (Pacman_Point.x == current.x){  //move y-axis
        if (Pacman_Point.y > current.y) current.y += 2;
        else current.y -= 2;
    }
    else if (Pacman_Point.y == current.y){  //move x-axis
        if (Pacman_Point.x > current.x) current.x += 2;
        else current.x -= 2;
    }

    Setpoint(current.x, current.y);
}