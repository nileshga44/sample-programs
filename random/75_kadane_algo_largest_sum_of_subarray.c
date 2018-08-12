//Kadane's algorithm - Subarray having maximum sum
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int max_sum = 0, sum_so_far = 0;
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
    sum_so_far += a[i];
    if (0 > sum_so_far)
      sum_so_far = 0;
    if (max_sum < sum_so_far)
      max_sum = sum_so_far;
  }
  printf("Max sum of subarray is : %d\n",max_sum);
  return 0;
}
