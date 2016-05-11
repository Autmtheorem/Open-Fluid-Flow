/*File used to test the lib*/

#include "math/mat.h"
#include "engine/world/mesh.h"
#include <iostream>

int main()
{
  // mesh test
  int x = 200;
  int y = 200;
  Mesh2D mesh(x,y,1.0f);
  std::cout << "Mesh result" << std::endl;
  std::cout << (*(mesh.grid))(0,1) << std::endl;
}
