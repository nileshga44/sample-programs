#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, k = 0, max = 0;
  int *a = NULL, *tmp = NULL;
  printf("Enter k : ");
  scanf("%d",&k); //Range of elements in array will be 0 to k-1
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  tmp = (int *)malloc(sizeof(int)*k);
  memset (tmp, 0x00, k*sizeof(int));
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    tmp[a[i]]++;
  }
  for (i = 0; i < k; i++)
  {
    if (max < tmp[i])
      max = i;
  }
  printf("Max occurred element is : %d\n",max);
  return 0;
}
