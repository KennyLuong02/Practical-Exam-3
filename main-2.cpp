#include <iostream>
#include <random>
#include <time.h>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"
#include "Avatar.h"
#include "Obstacle.h"

using namespace std;

int main() {
    Avatar me = Avatar();
    cout << std::get<0>(me.getCoordinates()) << endl;
    me.shift(2,3);
    cout << std::get<0>(me.getCoordinates()) << endl;

    return 0;
}