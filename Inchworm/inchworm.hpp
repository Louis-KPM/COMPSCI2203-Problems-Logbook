#ifndef INCHWORM_HPP
#define INCHWORM_HPP

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;  //result
    for (int i = 0; i <= branch; i += rest)
    {
      if (i % leaf == 0)  //check if the current position is a leaf
      {
        res++;  // increment result if it is a leaf
      }
    }
    return res;  //return number of leafs landed on
  }
};

#endif