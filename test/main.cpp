#include "Util.hpp"


int main(){
    Point Pacman_Point(10,10);
    //Draw(point,point1,point2,point3,point4);

    std::vector<std::shared_ptr<Character>> Characters;
    Characters.push_back(std::make_shared<Blinky>("Blinky", 0, 0));
    Characters.push_back(std::make_shared<Inky>("Inkey", 15, 15));
    Characters.push_back(std::make_shared<Pinky>("Pinky", 0, 15));
    Characters.push_back(std::make_shared<Clyde>("Clyde", 7, 7, Pacman_Point));
    Characters.push_back(std::make_shared<Pacman>("Pacman", 10, 10));
//    Characters.push_back(std::make_shared<Pacman>("Pacman", 7, 10));  //win mode

    
    Draw(Characters[0]->Getpoint(), Characters[1]->Getpoint(), Characters[2]->Getpoint()
            , Characters[3]->Getpoint(), Characters[4]->Getpoint());

    for (int step = 0; step < 50; step++){
        for (int i = 0; i < Characters.size(); i++){    //do behavior
            if (Characters[i]->Getid() == "Clyde"){ //update Pacman
                Pacman_Point = Characters[4]->Getpoint();
                Characters[i]->Setpoint(Pacman_Point.x, Pacman_Point.y);
            }
            Characters[i]->DoBehavior();
        }
        
        if (IsEnd(Characters)){
            std::cout << "Loser\n";
            return 0;
        }
        Draw(Characters[0]->Getpoint(), Characters[1]->Getpoint(), Characters[2]->Getpoint()
            , Characters[3]->Getpoint(), Characters[4]->Getpoint());
    }
    std::cout << "I win";
    return 0;
}