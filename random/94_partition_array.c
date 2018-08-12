/*
 * Date: 1-Nov-2017
 *
 * Description: Program to divide an array in such a way that all left side
 * elements are smaller than any right side element .i.e.
 * max of left subarray < min of right subarray.
 * Output should be the count of number of elements in right subarray.
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int left_max = -1;
  int last_max = -1;
  int right_subarray_count = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }

  left_max = a[0];
  last_max = a[0];
  for (i = 1; i < n; i++)
  {
    if (left_max < a[i])
    {
      right_subarray_count++;
      last_max = a[i];
    }
    else
    {
      right_subarray_count = 0;
      left_max = last_max;
    }
  }
  printf("Number of elements in right subarray is: %d\n",right_subarray_count);
  return 0;
}
