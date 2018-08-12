#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int max_ending_here = 1,
      min_ending_here = 1,
      max_so_far = 1,
      tmp = 1;;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (0 < a[i])
    {
      max_ending_here *= a[i];
      min_ending_here = (min_ending_here * a[i] > 0) ? 1 : (min_ending_here * a[i]);
    }
    else if (0 == a[i])
    {
      max_ending_here = 1;
      min_ending_here = 1;
    }
    else
    {
      tmp = max_ending_here;
      max_ending_here = (min_ending_here * a[i] > 0) ? (min_ending_here * a[i]) : 1;
      min_ending_here = tmp * a[i];
    }
    if (max_so_far < max_ending_here)
      max_so_far = max_ending_here;
  }
  printf("Max prod of subarray is : %d\n",max_so_far);
  return 0;
}
