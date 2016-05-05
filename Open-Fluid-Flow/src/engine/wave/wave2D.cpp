#include "engine/wave/wave.h"
#include "engine/world/mesh.h"
// constructor
Wave2D::Wave2D(float dt, float speed, float decay)
{
  this->dt = dt;
  this->speed = speed;
  this->decay = decay;
}

// integeration function (finite difference method)
Mesh2D Wave2D::integrate(Mesh2D mesh)
{
  // pre-compute values
  /*float q = 2-(this->dt * this->decay);
  float r = -1 + (this->decay * this->dt);
  float b = ((c*c)*(this->dt * this->dt))/(mesh->dx * mesh->dx);*/
}

// calculates the convolution between two matricies
Mat Wave2D::convolution(Mat A, Mat B)
{

}
