#include "engine/equations/wave/wave.h"
#include "engine/world/mesh.h"
#include "math/convolution/convolution.h"

// Two dimensional wave equation solver constructor
Wave2D::Wave2D(Mesh2D* current, float dt, float speed, float decay)
{
  // initalize all the values
  this->dt = dt;
  this->speed = speed;
  this->decay = decay;
  this->previous = new Mesh2D(current->grid->numberOfRows(), current->grid->numberOfColumns(), current->dx);
}

// integeration function (finite difference method, how to handle others??) (maybe make it void??)
Mesh2D Wave2D::integrate(Mesh2D mesh, Mat kernel)
{
  // pre-compute constants
  float calc_1 = (2-(this->decay*this->dt)); // constant for first term
  float calc_2 = (-1 + (this->decay*this->dt)); // constant for second term
  float calc_3 = ((this->speed*this->speed)*(this->dt*this->dt))/(mesh.dx); // constant for third term

  // FDM with convolution
  /**(mesh.grid) = ((*(mesh.grid))*calc_1);
  *(mesh.grid) = ((*(this->previous->grid))*calc_2)+(*(mesh.grid));
  *(mesh.grid) = (convolution(*(mesh.grid), kernel)*calc_3) + (*(mesh.grid));*/

  // future and previous
  Mesh2D future = mesh;
  this->previous = &mesh;
  return future;
}
