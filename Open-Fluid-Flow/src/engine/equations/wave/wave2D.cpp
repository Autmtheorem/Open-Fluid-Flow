#include "engine/equations/wave/wave.h"
#include "engine/world/mesh.h"
#include "math/convolution/convolution.h"
// constructor
Wave2D::Wave2D(float dt, float speed, float decay, Mesh2D current)
{
  this->dt = dt;
  this->speed = speed;
  this->decay = decay;
  this->previous = new Mesh2D(500, 500, 1.0f);
}

// integeration function (finite difference method, how to handle others??)
Mesh2D Wave2D::integrate(Mesh2D mesh, Mat kernel)
{
  // pre-compute constants
  float calc_1 = (2-(this->decay*this->dt)); // constant for first term
  float calc_2 = (-1 + (this->decay*this->dt)); // constant for second term
  float calc_3 = ((this->speed*this->speed)*(this->dt*this->dt))/(mesh.dx); // constant for third term

  Mesh2D future = (calc_1)*(*(mesh.grid))+(calc_2)*(*(this->previous))+convolution((*(mesh.grid)), kernel);
  
  this->previous = &mesh;

  return future;
}
