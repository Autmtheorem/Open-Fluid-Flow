// Dense Matrix eventually make this generic
#ifndef MAT_H
#define MAT_H
#include <string.h>
struct Mat
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

  // Operators
  float& operator() (const int row, const int column);
  Mat& operator* (const float scalar);
  Mat& operator+ (const Mat& matrix);
};

#endif
