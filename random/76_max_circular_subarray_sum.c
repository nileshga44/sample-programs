//Find max circular subarray sum, val = max (kadane o/p, total_sum - kadane o/p)
#include "stdio.h"
#include "stdlib.h"
int kadane (int a[], int n)
{
  int i = 0, max = 0, max_so_far = 0;
  for (i = 0; i < n; i++)
  {
    max_so_far += a[i];
    if (0 > max_so_far)
      max_so_far = 0;
    if (max < max_so_far)
      max = max_so_far;
  }
  return max;
}
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int total_sum = 0, max_circular_sum = 0;
  int max1 = 0, max2 = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  max1 = kadane(a, n);
  for (i = 0; i < n; i++)
  {
    total_sum += a[i];
    a[i] = -a[i];
  }
  max2 = kadane(a, n);
  max_circular_sum = (max1 > (max2 + total_sum)) ? max1 : (max2 + total_sum);
  printf("Max circular sum : %d\n",max_circular_sum);
  return 0;
}
