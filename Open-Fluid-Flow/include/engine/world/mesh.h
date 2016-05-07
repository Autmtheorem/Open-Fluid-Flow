// Dense Matrix eventually make this generic
#ifndef MESH_H
#define MESH_H
#include "math/mat.h"


// represents a single dimensional mesh (2D solution)(ignore for now)
struct Mesh1D
{
private:
  float* values;
  float dx;

public:
  Mesh1D(int size, float dx);
};


// represents a two dimensional mesh (3D solution)(core to work on)
struct Mesh2D
{
  Mat* mesh; // represents the mesh
  float dx; // spatial step (making both steps equal)
  
  // constructor
  Mesh2D(int x, int y,float dx);
};

#endif
