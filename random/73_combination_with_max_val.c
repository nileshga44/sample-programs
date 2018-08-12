//Maximize value of (a[i] - i)- (a[j] - j) in an array with O(n)
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int max = 0, min = 65536;
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
    if (max < (a[i] - i))
      max = a[i] - i;

    if (min > (a[i] - i))
      min = a[i] - i;
  }
  printf ("Max((a[i] - i) - (a[j] - j)) is : %d\n",(max - min));
  return 0;
}
