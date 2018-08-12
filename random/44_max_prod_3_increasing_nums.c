#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL;
  int curr_prod = 1, max_prod = 1;
  int less = 1, more = 1;
  int a1 = 1, a2 = 1, a3 = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    less = 0;
    more = 0;
    for (j = 0; j < i; j++)
    {
      if ((less < a[j]) && (a[j] < a[i]))
      {
        less = a[j];
      }
    }

    for (j = i + 1; j < n; j++)
    {
      if ((more < a[j]) && (a[j] > a[i]))
      {
        more = a[j];
      }
    }
    curr_prod = less*a[i]*more;
    if (curr_prod > max_prod)
    {
      a1 = less;
      a2 = a[i];
      a3 = more;
      max_prod = curr_prod;
    }
  }
  printf("Required elements : %d %d %d\n", a1, a2, a3);
  return 0;
}
