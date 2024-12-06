#include "../include/Pacman.hpp"

Pacman::Pacman(int x, int y) : Character(x, y){
}

void Pacman::DoBehavior(){
    char operate;
    Point current = Getpoint();
    bool flag;

    std::cout << "Enter operate";
    std::cin >> operate;

    do{
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
    }while(flag);
    
    Setpoint(current.x, current.y);
}