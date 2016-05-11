#include "math/convolution/convolution.h"
#include "math/matrix/mat.h"

// calculates the convolution between two matricies
Mat convolution(Mat A, Mat B)
{
  Mat result(A.numberOfRows(), A.numberOfColumns()); // Result of the convolution
  int rowsRadius = (B.numberOfRows() - 1) / 2;
	int columnsRadius = (B.numberOfColumns() - 1) / 2;

  float convolutionSum = 0;
  float convolutedValue = 0;
  // computing the convolution
  for (int r = 0; r < A.numberOfRows(); r++)
  {
    for (int c = 0; c < A.numberOfColumns(); c++)
    {
      // applying the kernel matrix
      convolutionSum = 0;
      for(int br = 0; br < B.numberOfRows(); br++)
      {
        for(int bc = 0; bc < B.numberOfColumns(); bc++)
        {
          int relpointR = r-rowsRadius+br;
					int relpointC = c-columnsRadius+bc;
          if(relpointR < 0 || relpointC < 0 || relpointR > A.numberOfRows() || relpointC > A.numberOfColumns())
          {
            convolutedValue = 0;
          }
          else
          {
            convolutedValue = A(r-rowsRadius+br, c=columnsRadius+bc);
          }

          convolutionSum += (convolutedValue*B(br,bc));
        }
      }

      result(r,c) = convolutionSum;
    }
  }
  return result;
}
