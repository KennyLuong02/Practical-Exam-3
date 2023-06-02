#ifndef GAMESESSION_H
#define GAMESESSION_H
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Avatar.h"
#include "Obstacle.h"

using namespace std;

class GameSession {
    public:
        vector<GridUnit*> initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight);
        void gameCycle(int maxCycles, double obstacleActivationDistance);
    
    private:
        vector<GridUnit*> units;
        GridUnit grid;

};

vector<GridUnit*> GameSession::initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
    Helper he;
    std::tuple<int, int> tempCoor;

    for (int AvatarIn = 0; AvatarIn < numAvatars; AvatarIn++) {
        GridUnit* tempGrid = new Avatar(0, 0);
        int x = std::get<0>(he.generateRandomCoordinates(gridWidth, gridHeight));
        int y = std::get<1>(he.generateRandomCoordinates(gridWidth, gridHeight));
        tempGrid->setCoordinates(x, y);
        units.push_back(tempGrid);
    }

    for (int ObsIn = 0; ObsIn < numObstacles; ObsIn++) {
        GridUnit* tempGrid = new Obstacle(0, 0);
        int x = std::get<0>(he.generateRandomCoordinates(gridWidth, gridHeight));
        int y = std::get<1>(he.generateRandomCoordinates(gridWidth, gridHeight));
        tempGrid->setCoordinates(x, y);
        units.push_back(tempGrid);
    }

    return units;
}

void GameSession::gameCycle(int maxCycles, double obstacleActivationDistance) {
    for (int i = 0; i < maxCycles; i++) {
        int numAvatarsLeft = 0;
        
    }
}

#endif