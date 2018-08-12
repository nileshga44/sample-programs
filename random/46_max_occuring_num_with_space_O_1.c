#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, k = 0, max = 0, res = 0;
  int *a = NULL;
  printf("Enter k : ");
  scanf("%d",&k); //Range of elements in array will be 0 to k-1
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    a[a[i]%k] += k;
  }
  for (i = 0; i < n; i++)
  {
    if (max < a[i])
    {
      max = a[i];
      res = i;
    }
  }
  printf("Max occurred element is : %d\n",res);
  printf("Original array is : ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]%k);
  }
  printf("\n");
  return 0;
}
