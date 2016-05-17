// implementation of the 2D mesh
#include "engine/world/mesh.h"
#include "math/matrix/mat.h"

// The mesh constructor
Mesh2D::Mesh2D(int x, int y, float dx)
{
  // initalize the mesh
  this->grid = new Mat(x,y);
  this->dx = dx;
}

// Mesh copy constructor
Mesh2D::Mesh2D(const Mesh2D& mesh)
{
  // members
  this->dx = mesh.dx;
  this->grid = mesh.grid;
}
