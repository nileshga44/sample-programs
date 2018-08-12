#include "stdio.h"
#include "stdlib.h"
void minSubArrayHavingSum(int a[], int n, int x)
{
  int start = 0, end = 0;
  int min_len = n + 1, sum = 0;
  while (end < n)
  {
    while ((sum <= x) && (end < n))
      sum += a[end++];

    while ((sum > x) && (start < n))
    {
      if (min_len > (end - start))
        min_len = end - start;

      sum -= a[start++];
    }
  }
  printf("Min length of subarray having sum greater than %d is %d\n",x, min_len);
}
int main()
{
  int i = 0;
  int n = 0, x = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  printf("Enter required sum: ");
  scanf("%d",&x);
  minSubArrayHavingSum(a, n, x);
  return 0;
}
