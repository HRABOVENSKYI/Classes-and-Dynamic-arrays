//
// Created by Teodor on 07.11.2020.
//

#ifndef LAB5_FURNITURE_H
#define LAB5_FURNITURE_H

#include <iostream>

using namespace std;

class Furniture {

private:
    string name;
    int coordinates[3];

public:
    Furniture(string name = "", int x = 0, int y = 0, int z = 0);

    ~Furniture();

    int getX();

    int getY();

    int getZ();

    string getName();

    void setX(int aX);

    void setY(int aY);

    void setZ(int aZ);

    void printCoordinates();

};
#endif //LAB5_FURNITURE_H
