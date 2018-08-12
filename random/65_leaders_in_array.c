#include "stdio.h"
#include "stdlib.h"
//Leaders in array are elements which are greater than all elements at it's right
int main()
{
  int i = 0;
  int n = 0, max = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  max = a[n - 1];
  printf("%d ",max);
  for (i = n - 2; i >= 0; i--)
  {
    if (a[i] > max)
    {
      printf("%d ",a[i]);
      max = a[i];
    }
  }
  printf("\n");
  return 0;
}
