#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, x = 0;
  int *a = NULL;
  int floor = -1, ceil = -1;
  int mid = 0, low = 0, high = 0;
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
    low = 0;
    high = n - 1;
    mid = (low + high)/2;
    while (low < high)
    {
      if (x == a[mid])
      {
        printf("Ceil - %d, Floor - %d\n", a[mid], a[mid]);
        break;
      }
      else if ((a[mid] < x) && (a[mid + 1] > x))
      {
        printf("Ceil - %d, Floor - %d\n", a[mid + 1], a[mid]);
        break;
      }
      else if (x > a[mid])
      {
        low = mid;  
      }
      else
      {
        high = mid;
      }
    mid = (low + high)/2;
    }
  }
  return 0;
}
