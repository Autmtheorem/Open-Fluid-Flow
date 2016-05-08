// implementation of the 2D mesh
#include "engine/world/mesh.h"
#include "math/mat.h"

// The mesh constructor
Mesh2D::Mesh2D(int x, int y, float dx)
{
  // initalize the mesh
  this->grid = new Mat(x,y);
  this->dx = dx;
}
