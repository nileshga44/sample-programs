#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, k = 0;
  int *a = NULL;
  int start_idx, prod = 1, tmp_prod = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  printf("Enter subarray size (k) : ");
  scanf("%d",&k);
  for (i = 0; i < k; i++)
  {
    prod = prod*a[i];
  }
  start_idx = 0;
  tmp_prod = prod;
  for (i = k; i < n; i++)
  {
    tmp_prod = tmp_prod*a[i]/a[i - k];
    if (prod < tmp_prod)
    {
      prod = tmp_prod;
      start_idx = i - k + 1;
    }
  }
  printf("Max product is : %d\n",prod);
  printf("Elements are : ");
  for (i = start_idx; i < start_idx + k; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
