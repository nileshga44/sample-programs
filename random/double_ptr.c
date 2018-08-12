#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  int i = 0, j =0;
  int **matrix;
  int m = 2, n = 3;
  matrix = (int **)malloc(sizeof(int) * m * n);
  for (i = 0; i < m ; i++)
  {
    for (j = 0; i < n ; j++)
    {
      matrix[m][n] = 1;
    }
  }
  return 0;
}
