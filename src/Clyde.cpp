#include "../include/Clyde.hpp"

Clyde::Clyde(std::string id, int x, int y, Point Pacman) : Character(id,x, y), Pacman_Point(Pacman.x, Pacman.y), origin(x, y){
}

void Clyde::DoBehavior(){
    Pacman_Point = Getpoint();
    Setpoint(origin.x, origin.y);
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
    if (current.x > 15) current.x = 15;
    else if (current.x < 0) current.x = 0;
    if (current.y > 15) current.y = 15;
    else if (current.y < 0) current.y = 0;

    
    origin.x = current.x, origin.y = current.y;


    Setpoint(current.x, current.y);
}