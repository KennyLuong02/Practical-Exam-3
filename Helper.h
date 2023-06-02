#ifndef HELPER_H
#define HELPER_H
#include <tuple>
#include <random>
#include <cmath>
#include "GridUnit.h"

using namespace std;

class Helper {
    public:
        static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight);
        static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2);
    
    protected:
        // GridUnit object;
        // std::tuple<int, int> coordinates;
};

std::tuple<int, int> Helper::generateRandomCoordinates(int gridWidth, int gridHeight) {
    std::tuple<int, int> coordinates;
    std::get<0>(coordinates) = rand() % gridHeight;
    std::get<1>(coordinates) = rand() % gridWidth;
    return coordinates;

}

double Helper::calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2) {
    double x = std::get<0>(coords1) - std::get<0>(coords2);
    double y = std::get<1>(coords1) - std::get<1>(coords2);
    double distance = sqrt(pow(x,2) + pow(y,2));
    return (double)distance;
}

#endif