/*File used to test the lib*/

#include "math/matrix/mat.h"
#include "engine/world/mesh.h"
#include <iostream>

int main()
{
  // mesh test
  int x = 200;
  int y = 200;
  Mesh2D mesh(x,y,1.0f); // non pointer mesh
  Mesh2D* mesh2 = &mesh; // pointer mesh
  std::cout << "Mesh result" << std::endl;
  std::cout << (*(mesh.grid))(0,1) << std::endl; // non pointer mesh dereferencing grid
  std::cout << mesh.grid << std::endl; // mesh is not a pointer but grid is
  std::cout << mesh2 << std::endl; // mesh2 pointer
  std::cout << (*(mesh2->grid)).numberOfRows() << std::endl; // mesh2 is of pointer type and grid is also of a pointer type
  std::cout << mesh2->dx << std::endl; // point to primiative
  std::cout << mesh2->grid->numberOfRows() << std::endl;
}
