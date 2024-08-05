#include <iostream>

using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;  // initialize your result
    for (int i = 0; i <= branch; i += rest)  // loop through the branch
    {
      if (i % leaf == 0)  // check if the current position is a leaf
      {
        res++;  // increment your result
      }
    }
    return res;  // return your result
  }
};

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