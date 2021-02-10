#include "Furniture.h"

Furniture::Furniture(string name, int x, int y, int z) {
    this->name = name;
    this->coordinates[0] = x;
    this->coordinates[1] = y;
    this->coordinates[2] = z;
}

Furniture::~Furniture() {}

int Furniture::getX() {
    return coordinates[0];
}

int Furniture::getY() {
    return coordinates[1];
}

int Furniture::getZ() {
    return coordinates[2];
}

string Furniture::getName() {
    return name;
}

void Furniture::setX(int x) {
    this->coordinates[0] = x;
}

void Furniture::setY(int y) {
    this->coordinates[1] = y;
}

void Furniture::setZ(int z) {
    this->coordinates[2] = z;
}

void Furniture::printCoordinates() {
    cout << "Coordinates of current furniture: " << endl;
    cout << "x = " << coordinates[0] << endl;
    cout << "y = " << coordinates[1] << endl;
    cout << "z = " << coordinates[2] << endl;
}
