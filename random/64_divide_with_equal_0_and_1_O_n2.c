#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL;
  int sum = 0, start_idx = -1, size = -1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    sum = (a[i] == 0)?-1:1;
    for (j = i + 1; j < n; j++)
    {
      sum += (a[j] == 0)?-1:1;
      if ((0 == sum) && (size < j - 1))
      {
        start_idx = i;
        size = j - i;
      }
    }
  }

  if (size == -1)
    printf("None\n");
  else
    printf("start idx [%d], end idx [%d]\n",start_idx, size);
  return 0;
}
