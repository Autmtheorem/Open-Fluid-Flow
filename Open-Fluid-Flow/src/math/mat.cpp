#include "math/mat.h"
Mat::Mat(int numRows, int numCols)
{
  if (numRows <= 0 && numCols <= 0)
  {
    throw "Invalid form";
  }

  this->rows = numRows;
  this->columns = numCols;
}

// copy constructor
Mat::Mat(const Mat& matrix)
{
  this->rows = matrix.rows;
  this->columns = matrix.columns;

  this->values = new float[(this->rows)*(this->columns)];
  memcpy(this->values, matrix.values, this->rows*this->columns*sizeof(float));
}

int Mat::numberOfRows()
{
  return this->rows;
}

int Mat::numberOfColumns()
{
  return this->columns;
}

// destructor
Mat::~Mat()
{
  delete [] values;
}

// used to access value at array
float& Mat::operator()(const int row, const int column)
{
  if (row < 0 || column < 0 || row > this->rows || column > this->columns)
  {
    throw "invalid index";
  }

  return values[(row*this->columns)+column];
}
