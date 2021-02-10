//
// Created by Teodor on 06.11.2020.
//

#ifndef LAB5_ROOM_H
#define LAB5_ROOM_H

#include "Furniture.h"

class Room {
private:
    Furniture *furniture;
    unsigned length = 1;
    unsigned idx = 0;

public:
    Room();

    ~Room();

    void setFurniture(int i, Furniture f);

    void addFurniture(Furniture f);

    void rearrangement(int i, int x, int y, int z);

    void rearrangement(string n, int x, int y, int z);

    Furniture getFurniture(int i);

    void removeFurniture(int i);

    void removeFurniture(string n);

    int getLength();

    int getSize();

private:
    void change_size(int new_len);
};


#endif //LAB5_ROOM_H
