#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, x = 0;
  int *a = NULL;
  int floor = -1, ceil = -1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  printf("Enter element : ");
  scanf("%d",&x);
  if (x < a[0])
  {
    printf("Ceil - %d, Floor - Not possible\n", a[0]);
    return 0;
  }
  else if (x > a[n - 1])
  {
    printf("Ceil - Not possible, Floor - %d\n", a[n - 1]);
    return 0;
  }
  else
  {
          for (i = 0; i < n; i++)
          {
                  if (a[i] == x)
                  {
                          printf("Ceil [%d], Floor [%d]\n",a[i], a[i]);
                          break;
                  }
                  else if (a[i] > x)
                  {
                          ceil = a[i];
                          floor = (i == 0)?-1:a[i - 1];
                          printf("Ceil [%d], Floor [%d]\n",ceil, floor);
                          break;
                  }
          }
  }
  return 0;
}
