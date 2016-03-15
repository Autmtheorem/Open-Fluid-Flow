/*File used to test the lib*/

#include "math/mat.h"
#include <iostream>

int main()
{
  Mat* matrix = new Mat(8,3);
  std::cout <<  matrix->numberOfRows() << std::endl;
}
