#include <iostream>
#include "Fire.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fire engine = Fire();
    engine.N = 160;

    engine.buildA();


    return 0;
}