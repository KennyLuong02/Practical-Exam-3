#ifndef AVATAR_H
#define AVATAR_H
#include <tuple>
#include "GridUnit.h"

class Avatar: public GridUnit {
    public:
        Avatar();
        Avatar(int x, int y);
        void shift(int dx, int dy);

    protected:

};

Avatar::Avatar(): GridUnit(0, 0, 'A') {
}
Avatar::Avatar(int x, int y): GridUnit(x, y, 'A') {
}

void Avatar::shift(int dx, int dy) {
    std::tuple<int, int> coor;
    std::get<0>(coor) = std::get<0>(coor) + dx;
    std::get<1>(coor) = std::get<1>(coor) + dx;
}

#endif