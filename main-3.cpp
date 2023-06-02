#include <iostream>
#include <random>
#include <time.h>
#include "GameSession.h"

using namespace std;

int main() {
    srand(time(NULL));
    GameSession game;
    
    game.initGameSession(3, 3, 5, 5);
    game.gameCycle(2, 1);

    return 0;
}