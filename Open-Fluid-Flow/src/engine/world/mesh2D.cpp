// implementation of the 2D mesh
#include "engine/world/mesh.h"
#include "math/mat.h"

// The mesh constructor
Mesh2D::Mesh2D(int x, int y, float dx)
{
  // initalize the mesh
  this->mesh = new Mat(x,y); // should this be dynamic??
  this->dx = dx;
}
