#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0, diff = 0;
  int *a = NULL, *map = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  map = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
    map[i] = 0;
  }
  for (i = 0; i < n-1; i++)
  {
    diff = a[i + 1] - a[i];
    diff = diff > 0?diff:(-1)*diff;
    if ((diff == 0) || (diff > n - 1) || (map[diff] == 1))
    {
      printf("NO\n");
      break;
    }
    else
    {
      map[diff] = 1;
      if (i == n - 2)
      {
        printf("YES\n");
      }
    }
  }
  return 0;
}
