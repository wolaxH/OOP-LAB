#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

struct Point{
    int x = 0;
    int y = 0;
    Point(int x,int y): x(x),y(y) {}
};

enum class Direction{
    East,
    South,
    West,
    North,
    NorthWest,
    SouthWest,
    SouthEast,
    NorthEast 
};

class Character{
private:
    Point point;
    std::string id;
public:
    Character(std::string id, int x, int y);
    virtual void DoBehavior() = 0;
    Point Getpoint();
    void Setpoint(int x, int y);
    std::string Getid();
};

#endif