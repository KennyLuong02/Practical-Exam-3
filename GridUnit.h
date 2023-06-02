#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>

class GridUnit {
    public:
        GridUnit();
        GridUnit(int x, int y, char entity);
        std::tuple<int, int> getCoordinates();
        char getEntity();  
        void setCoordinates(int x, int y);
        void setEntity(char entity);

    protected:
        std::tuple<int, int> coordinates;
        char entity; //type

};

GridUnit::GridUnit() {
    std::get<0>(coordinates) = 0;
    std::get<1>(coordinates) = 0;
    entity = 'O';
}

GridUnit::GridUnit(int x, int y, char entity) {
    std::get<0>(coordinates) = x;
    std::get<1>(coordinates) = y;
    this->entity = entity;
}

std::tuple<int, int> GridUnit::getCoordinates(){
    return coordinates;
}

char GridUnit::getEntity(){
    return entity;
}

void GridUnit::setCoordinates(int x, int y){
    std::get<0>(coordinates) = x;
    std::get<1>(coordinates) = y;
}

void GridUnit::setEntity(char entity){
    this->entity = entity;
}

#endif