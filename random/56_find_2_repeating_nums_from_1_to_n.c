#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int xor = 0, set_bit = 0;
  int x = 0, y = 0;
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
    xor ^= a[i];
  }
  for (i = 1; i <= n - 2; i++)
  {
    xor ^= i;
  }
  set_bit = xor & ~(xor - 1);
  for (i = 0; i < n; i++)
  {
    if (set_bit & a[i])
    {
      x ^= a[i];
    }
    else
    {
      y ^= a[i];
    }
  }
  for (i = 1; i <= n - 2; i++)
  {
    if (set_bit & i)
    {
      x ^= i;
    }
    else
    {
      y ^= i;
    }
  }
  printf("2 elements repeating twice in array is : %d %d\n", x, y);
  
  return 0;
}
