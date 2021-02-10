#include "room.h"

Room::Room() {
    furniture = new Furniture[length];
}

Room::~Room() {}

void Room::change_size(int new_len) {

    Furniture * tmp = new Furniture[length];
    for (int i = 0; i < length; i++)
        tmp[i] = furniture[i];
    delete [] furniture;

    furniture = new Furniture[new_len];
    for (int i = 0; i < length; i++)
        furniture[i] = tmp[i];
    delete [] tmp;
    length = new_len;
}

void Room::setFurniture(int i, Furniture furnitureObj) {
    if (i >= length) {
        change_size(length + 1);
        setFurniture(i, furnitureObj);
    } else {
        furniture[i] = furnitureObj;
    }
}

void Room::addFurniture(Furniture f) {
    setFurniture(idx, f);
    idx++;
}

void Room::rearrangement(int i, int x, int y, int z) {
    furniture[i].setX(x);
    furniture[i].setY(y);
    furniture[i].setZ(z);
}

void Room::rearrangement(string n, int x, int y, int z) {
    for (int i = 0; i < getSize(); i++) {
        if (furniture[i].getName() == n) {
            furniture[i].setX(x);
            furniture[i].setY(y);
            furniture[i].setZ(z);
            break;
        }
    }
}

Furniture Room::getFurniture(int i) {
    return furniture[i];
}

void Room::removeFurniture(int i) {
    idx--;
    Furniture *tmp = new Furniture[length];
    int k;
    for (k = 0; k < i; k++)
        tmp[k] = furniture[k];
    for (int j = i + 1; j < length; k++, j++)
        tmp[k] = furniture[j];
    delete[] furniture;
    furniture = tmp;
}

void Room::removeFurniture(string n) {
    for (int i = 0; i < getSize(); i++) {
        if (furniture[i].getName() == n) {
            removeFurniture(i);
            break;
        }
    }
}

int Room::getLength() {
    return length;
}

int Room::getSize() {
    return idx;
}