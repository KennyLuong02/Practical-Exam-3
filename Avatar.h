#ifndef AVATAR_H
#define AVATAR_H
#include <iostream>
#include <tuple>
#include "GridUnit.h"

class Avatar: public GridUnit {
    public:
        Avatar();
        Avatar(int x, int y);
        void shift(int dx, int dy);

    protected:
        // std::tuple<int, int> coor;
        GridUnit grid;

};

Avatar::Avatar(): GridUnit(0, 0, 'A') {
}
Avatar::Avatar(int x, int y): GridUnit(x, y, 'A') {
}

void Avatar::shift(int dx, int dy) {
    // cout << "Me" << endl;
    // int x = std::get<0>(grid.getCoordinates()) + dx;
    // int y = std::get<1>(grid.getCoordinates()) + dy;
    // grid.setCoordinates(x, y);
    // std::get<0>(coor) = x;
    // std::get<1>(coor) = y;
    std::tuple<int, int> coor;
    std::get<0>(coor) = std::get<0>(coor) + dx;
    std::get<1>(coor) = std::get<1>(coor) + dy;
}

#endif