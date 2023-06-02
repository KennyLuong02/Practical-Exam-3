#include <iostream>
#include <random>
#include <time.h>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"

using namespace std;

int main() {
    GridUnit grid = GridUnit();
    cout << std::get<0>(grid.getCoordinates()) << endl;

    return 0;
}