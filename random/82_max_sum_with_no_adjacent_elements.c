#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int incl = 0, excl = 0, excl_new = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  incl = a[0];
  for (i = 1; i < n; i++)
  {
    excl_new = (excl > incl) ? excl : incl;
    incl = excl + a[i];
    excl = excl_new;
  }
  printf("Max Sum with no adjacent element is : %d\n",(excl > incl) ? excl : incl);
  return 0;
}
