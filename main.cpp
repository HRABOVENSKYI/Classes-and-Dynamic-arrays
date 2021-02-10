#include "room.h"

int main() {
    Room myRoom = Room();
    myRoom.addFurniture(Furniture("Bed", 11, 12, 13));
    myRoom.addFurniture(Furniture("Table", 21, 22, 23));
    myRoom.addFurniture(Furniture("Carpet", 31, 32, 33));
    myRoom.addFurniture(Furniture("Carpet2", 31, 32, 33));
    myRoom.addFurniture(Furniture("Wardrobe", 41, 42, 43));
    myRoom.addFurniture(Furniture("Sofa", 100, 50, 17));
    myRoom.addFurniture(Furniture("Lamp", 1111, 1111, 1111));

    myRoom.rearrangement("Bed", 90, 90, 90);

    myRoom.removeFurniture("Carpet2");

    for (int i = 0; i < myRoom.getSize(); i++) {
        Furniture f = myRoom.getFurniture(i);
        cout << "\n" << f.getName() << endl;
        f.printCoordinates();
    }


    return 0;
}
