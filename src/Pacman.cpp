#include "../include/Pacman.hpp"

Pacman::Pacman(std::string id ,int x, int y) : Character(id , x, y){
}

void Pacman::DoBehavior(){
    char operate;
    Point current = Getpoint();
    bool flag;

    std::cout << "Enter operate : ";

    do{
        std::cin >> operate;
        flag = false;
        switch (operate)
        {
        case 'w':
            current.y -= 3;
            break;
        case 'a':
            current.x -= 3;
            break;
        case 's':
            current.y += 3;
            break;
        case 'd':
            current.y += 3;
            break;    
        default:
            std::cout << "Error input!";
            flag = true;
            break;
        }
        if(current.x>15){
            current.x=15;
        }
        if(current.y>15){
            current.y=15;
        }
        if(current.x<0){
            current.x=0;
        }
        if(current.y<0){
            current.y=0;
        }
    }while(flag);
    Setpoint(current.x, current.y);
}