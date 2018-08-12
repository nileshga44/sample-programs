#include "stdio.h"
#include "string.h"
int main()
{
  int i = 0, temp = 1;
  int input[10] = {9,8,7,6,5,4,3,2,1,0};
  int prod[10];
  int n = 10;
  for (i = 0; i < n; i++)
  {
    prod[i] = temp;
    temp *= input[i];
  }
  temp = 1;
  for (i = n - 1; i >= 0; i--)
  {
    prod[i] *= temp;
    temp *= input[i];
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ",prod[i]);
  }
  return 0;
}
