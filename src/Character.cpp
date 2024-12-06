#include "../include/Character.hpp"

Character::Character(std::string id, int x, int y) : point(x, y){}

Point Character::Getpoint(){ return point;}

void Character::Setpoint(int x, int y){
    point.x = x;
    point.y = y;
}

std::string Character::Getid(){
    return id;
}
