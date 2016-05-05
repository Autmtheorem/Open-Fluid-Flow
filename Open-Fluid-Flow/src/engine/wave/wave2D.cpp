#include "engine/wave/wave.h"
#include "engine/world/mesh.h"
// constructor
Wave2D::Wave2D(float dt, float speed, float decay)
{
  this->dt = dt;
  this->speed = speed;
  this->decay = decay;

  // todo initalize previous matrix to zeros

}

// integeration function (finite difference method)
Mesh2D Wave2D::integrate(Mesh2D mesh)
{
  
}
