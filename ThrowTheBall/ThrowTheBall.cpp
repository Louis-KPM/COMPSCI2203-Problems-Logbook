#include <vector>
#include <iostream>
#include "ThrowTheBall.hpp"

int main() {
    ThrowTheBall game;
    std::cout << "Test Case 1: " << game.timesThrown(5, 3, 2) << std::endl; // Returns 10
    std::cout << "Test Case 2: " << game.timesThrown(4, 1, 3) << std::endl; // Returns 0
    std::cout << "Test Case 3: " << game.timesThrown(10, 3, 5) << std::endl; // Returns 4
    std::cout << "Test Case 4: " << game.timesThrown(15, 4, 9) << std::endl; // Returns 15
    return 0;
}