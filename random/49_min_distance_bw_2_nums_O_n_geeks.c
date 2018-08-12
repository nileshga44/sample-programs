#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int first = 0, second = 0, prev_idx = 0;
  int min_dist = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ",i);
    scanf("%d",&a[i]);
  }
  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);
  min_dist = n - 1;
  for (i = 0; i < n; i++)
  {
    if ((a[i] == first) || (a[i] == second))
    {
      prev_idx = i;
      break;
    }
  }
  for (; i < n; i++)
  {
    if ((a[i] == first) || (a[i] == second))
    {
      if ((a[i] != a[prev_idx]) && (min_dist > (i - prev_idx)))
      {
        min_dist = i - prev_idx;
      }
      else
      {
        prev_idx = i;
      }
    }
  }
  printf("Minimum distance between %d and %d is : %d\n",first, second, min_dist);
  return 0;
}
