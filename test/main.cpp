#include "Util.hpp"


int main(){
    Point Pacman(10,10);
    //Draw(point,point1,point2,point3,point4);

    std::vector<std::shared_ptr<Character>> Characters;
    Characters.push_back(std::make_shared<Pinky>("Blinky", 0, 0));
    Characters.push_back(std::make_shared<Inky>("Inkey", 15, 15));
    Characters.push_back(std::make_shared<Pinky>("Pinky", 0, 15));
    Characters.push_back(std::make_shared<Clyde>("Clyde", 7, 7, Pacman));
    Characters.push_back(std::make_shared<Pacman>(, 10, 10));


    

    for (int step = 0; step < 50; step++){

    }

}