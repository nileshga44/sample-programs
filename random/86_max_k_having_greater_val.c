//Find the max value of k such that k elements are greater than or equal to k
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int res = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  res = n;
  for (i = 0; i < n; i++)
  {
    if (res > a[i])
      res--;
  }
  printf("Max value of k such that, k elements are greater than or equal to k: %d\n",res);
  return 0;
}
