#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int sum = 0, count = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    sum = a[i];
    if (!(sum & 1))
    {
      count++;
    }
    for (j = i + 1; j < n; j++)
    {
      sum += a[j];
      if (!(sum & 1))
      {
        count++;
      }
    }
    sum = 0;
  }
  printf("Number of sub-arrays having even sum : %d\n",count);
  return 0;
}
