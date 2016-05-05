// Dense Matrix eventually make this generic
#ifndef MESH_H
#define MESH_H
#include "math/mat.h"


// represents a single dimensional mesh (2D solution)
struct Mesh1D
{
private:
  float* values;
  float dx;

public:
  Mesh1D(size, dx);
};

// represents a two dimensional mesh (3D solution)
struct Mesh2D
{
  Mat* mesh;
  
};

// represents a three dimensional mesh (this would give a 4D solution)
struct Mesh3D
{

};

#endif
