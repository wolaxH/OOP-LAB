#include "../include/Util.hpp"
#include <iostream>
#include <string>

void Draw(Point BlinkyPoint,Point InkyPoint,Point PinkyPoint,Point ClydePoint,Point PacmanPoint){
    for(int j = 0; j < 16; j++){
        for(int i=0;i<16;i++){
            std::string name = ".....";
            if(BlinkyPoint.x == i && BlinkyPoint.y == j){
                name = "..B..";
            }
            if(InkyPoint.x == i && InkyPoint.y == j){
                name = "..I..";
            }
            if(PinkyPoint.x == i && PinkyPoint.y == j){
                name = "..P..";
            }
            if(ClydePoint.x == i && ClydePoint.y == j){
                name = "..C..";
            }
            if(PacmanPoint.x == i && PacmanPoint.y == j){
                name = "..O..";
            }
            std::cout<<"|"<<name;
            if(i == 15) std::cout<<"|\n";
        }
    }



}

bool IsEnd(std::vector<std::shared_ptr<Character>> Characters){
    Point Pacman = Characters[4]->Getpoint();
    Point enemy(0, 0);
    for (int i = 0; i < 4; i++){
        enemy = Characters[i]->Getpoint();
        if (enemy.x == Pacman.x && enemy.y == Pacman.y){
            return true;
        }
        
    }
    return false;
}