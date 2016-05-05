#ifndef WAVE_H
#define WAVE_H
#include "engine/world/mesh.h"

// represents equation of 2D wave equation
struct Wave2D
{
  float dt; // time step (should this be in meshworld??)
  float speed; // wave speed
  float decay; // decay factor
  Mesh2D previous; // The mesh from the pervious time step

  // constructor
  Wave2D(float dt, float speed, float decay);
  // integerates the solution (The current mesh will be the passed in one)
  Mesh2D integrate(Mesh2D mesh);
};


// TODO implment 1D wave equation

#endif
