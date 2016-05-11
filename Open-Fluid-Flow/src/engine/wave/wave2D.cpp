#include "engine/wave/wave.h"
#include "engine/world/mesh.h"
// constructor
Wave2D::Wave2D(float dt, float speed, float decay)
{
  this->dt = dt;
  this->speed = speed;
  this->decay = decay;
}

// integeration function (finite difference method, how to handle others??)
Mesh2D Wave2D::integrate(Mesh2D mesh)
{
  // pre-compute constants
  float calc_1 = (2-(this->decay*this->dt)); // constant for first term
  float calc_2 = (-1 + (this->decay*this->dt)); // constant for second term
  float calc_3 = ((this->speed*this->speed)*(this->dt*this->dt))/(mesh.dx); // constant for third term


}

// calculates the convolution between two matricies (move to math lib??)
Mat Wave2D::convolution(Mat A, Mat B)
{

}
