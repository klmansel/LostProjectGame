

#ifndef INPUTVAL_HPP
#define INPUTVAL_HPP
#include <cstdlib>


class InputVal {
  public:
    int validInt();
    int validIntMinMax(const int LO, const int HI);
};
#endif
