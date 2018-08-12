#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL;
  int first = 0, second = 0, next = 0;
  int min_dist = 0, tmp_dist = 1, count_flag = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ",i);
    scanf("%d",&a[i]);
  }
  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);
  min_dist = n - 1;
  for (i = 0; i < n; i++)
  {
    if ((a[i] == first) || (a[i] == second))
    {
      if (1 == count_flag)
      {
        if (a[i] == next)
        {
          if (tmp_dist < min_dist)
          {
            min_dist = tmp_dist;
            count_flag = 0;
            tmp_dist = 1;
          }
        }
        else
        {
          tmp_dist = 1;
        }
      }
      else
      {
        tmp_dist = 1;
        count_flag = 1;
        if (a[i] == first)
                next = second;
        else
                next = first;
      }
    }
    else
    {
      if (count_flag == 1)
      {
        tmp_dist++;
      }
    }
  }
  printf("Minimum distance between %d and %d is : %d\n",first, second, min_dist);
  return 0;
}
