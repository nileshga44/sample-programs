#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int max_fwd = 1, max_bkwd = 1, max_so_far = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  //Traversal in forward direction
  for (i = 0; i < n; i++)
  {
    max_so_far = max_so_far*a[i];
    if (0 == max_so_far)
    {
      max_so_far = 1;
    }
    if (max_so_far > max_fwd)
    {
      max_fwd = max_so_far;
    }
  }
  printf("max_fwd : %d\n",max_fwd);
  //Traversal in reverse direction
  max_so_far = 1;
  for (i = n - 1; i >=0; i--)
  {
    max_so_far = max_so_far*a[i];
    if (0 == max_so_far)
    {
      max_so_far = 1;
    }
    if (max_so_far > max_bkwd)
    {
      max_bkwd = max_so_far;
    }

  }
  printf("max_bkwd : %d\n",max_bkwd);
  printf("maximum product of subarray is : %d\n",((max_fwd > max_bkwd) ? max_fwd : max_bkwd));
  return 0;
}
