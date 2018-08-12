/*Find maximum difference between 2 array elements such that
  larger element appears at right of smaller element*/
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int max_diff = 0;
  int min_element = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  max_diff = a[1] - a[0];
  min_element = a[0];
  for (i = 1; i < n; i++)
  {
    if ((a[i] - min_element) > max_diff)
      max_diff = a[i] - min_element;
    if (min_element > a[i])
      min_element = a[i];
  }
  printf("Max difference between 2 elements(with required condition) is : %d\n",max_diff);
  return 0;
}
