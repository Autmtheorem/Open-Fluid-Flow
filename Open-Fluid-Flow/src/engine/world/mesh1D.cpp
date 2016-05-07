#include "engine/world/mesh.h"

// The mesh constructor
Mesh1D::Mesh1D(int size, float dx)
{
  if (size < 0)
  {
    throw "invalid size";
  }

  this->dx = dx;
  values = new float[size];

  // initalize all the values to zero
  for(int node = 0; node < size; node++)
  {
    values[node] = 0;
  }
}
