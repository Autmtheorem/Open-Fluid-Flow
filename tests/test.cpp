/*File used to test the lib*/

#include "math/mat.h"
#include "engine/world/mesh.h"
#include <iostream>

int main()
{
  // Matrix tests (ignore this)
  /*Mat matrix(3,3);
  Mat matrix2(3,3);
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      matrix.insert(i,j,4.2);
    }
  }

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      matrix2.insert(i,j,4.5);
    }
  }

  // Additon test
  Mat matrix3 = matrix + matrix2;
  Mat* matrix4 = &matrix3;
  Mat matrix5 = *matrix4;
  std::cout << "Result" << std::endl;
  std::cout << (*matrix4)(0,1) << std::endl;*/

  // mesh test
  int x = 200;
  int y = 200;
  Mesh2D mesh(x,y,1.0f);
  std::cout << "Mesh result" << std::endl;
  std::cout << (*(mesh.grid))(0,1) << std::endl;
}
