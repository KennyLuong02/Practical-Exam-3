#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <tuple>
#include "GridUnit.h"
#include "Modifier.h"

class Obstacle: public GridUnit, Modifier {
    public:
        Obstacle();
        Obstacle(int x, int y);
        void apply(GridUnit& unit);
        bool isActive();
        void setActive(bool t);


    protected:
        bool active;
        std::tuple<int, int> coor;

};

Obstacle::Obstacle(): GridUnit(0, 0, 'O') {
    active = true;
}
Obstacle::Obstacle(int x, int y): GridUnit(x, y, 'O') {
    active = true;
}

void Obstacle::apply(GridUnit& unit) {
    // if (isActive() == true) {
        active = false;
        unit.setEntity('O');
    // }
}

bool Obstacle::isActive() {
    if (active == true) {
        return true;
    } else {
        return false;
    }
}

void Obstacle::setActive(bool t) {
    active = t;
}

#endif