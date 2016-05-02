// Dense Matrix eventually make this generic
#ifndef MESH_H
#define MESH_H
#include <string.h>
#include <iostream>
struct Mesh
{
private:
  int rows, columns;
  float* values;

public:
  Mat(int numRows, int numCols);
  Mat(const Mat& matrix);
  ~Mat();
  int numberOfRows();
  int numberOfColumns();
  void insert(int row, int column, float value);
  
  // Operators
  float& operator() (const int row, const int column);
  Mat& operator* (const float scalar);
  Mat  operator+ (Mat& matrix);
};

#endif
