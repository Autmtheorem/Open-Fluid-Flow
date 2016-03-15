#include "math/mat.h"
Mat::Mat(int numRows, int numCols)
{
  if (numRows <= 0 && numCols <= 0)
  {
    throw "Invalid form";
  }

  this->rows = numRows;
  this->columns = numCols;

  values = new float[numRows*numCols];
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

// insert value into the matrix
void Mat::insert(int row, int column, float value)
{
  if (row < 0 || column < 0 || row > this->rows || column > this->columns)
  {
    throw "invalid index";
  }

  this->values[(row*this->columns)+column] = value;
}

// destructor
Mat::~Mat()
{
  delete [] values;
}

// used to access value in matrix
float& Mat::operator()(const int row, const int column)
{
  if (row < 0 || column < 0 || row > this->rows || column > this->columns)
  {
    throw "invalid index";
  }

  return values[(row*this->columns)+column];
}


Mat& Mat::operator+ (Mat& matrix)
{
  // matrices must be exactly equal for addition
  if (this->rows != matrix.numberOfRows() || this->columns != matrix.numberOfColumns())
  {
    throw "Matrix mismatch";
  }

  Mat result(this->rows, this->columns);
  float addedResult;
  // add the two matrices
  for(int row = 0; row < this->rows; row++)
  {
    for(int column = 0; column < this->columns; column++)
    {
      // is this even legal???
      addedResult = this->values[(row*this->columns)+column] + matrix(row,column);
      result.insert(row,column,addedResult);
    }
  }

  return result;
}
