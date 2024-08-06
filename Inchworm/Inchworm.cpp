#include <iostream>
#include "inchworm.hpp"

using namespace std;

int main() {
    Inchworm inchworm;
    cout << inchworm.lunchtime(11, 2, 4) << endl;  // Output: 3
    cout << inchworm.lunchtime(12, 6, 4) << endl;  // Output: 2
    cout << inchworm.lunchtime(20, 3, 7) << endl;  // Output: 1
    cout << inchworm.lunchtime(21, 7, 3) << endl;  // Output: 2
    cout << inchworm.lunchtime(15, 16, 5) << endl;  // Output: 1
    cout << inchworm.lunchtime(1000, 3, 7) << endl;  // Output: 48
    cout << inchworm.lunchtime(1000, 7, 3) << endl;  // Output: 48
    return 0;
}