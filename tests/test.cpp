/*File used to test the lib*/

#include "math/mat.h"
#include <iostream>

int main()
{
  Mat matrix(3,3);
  Mat matrix2(3,3);
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      matrix.insert(i,j,4.0);
    }
  }

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      matrix2.insert(i,j,4.0);
    }
  }



  Mat matrix3 = matrix + matrix2;
  std::cout << matrix(2,2) << std::endl;
  std::cout << matrix3(2,2) << std::endl;
}
