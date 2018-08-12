#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int j = 0;
  int sum = 0;
  int tmp_sum = 0;
  int start_idx = 0;
  printf("Enter Required sum : ");
  scanf("%d",&sum);
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    tmp_sum += a[i];
    if (sum == tmp_sum)
    {
      printf("Found a sub-array having given sum\nStart idx[%d], End idx[%d]\n", start_idx, i);
      break;
    }
    else if (tmp_sum > sum)
    {
      for (j = start_idx; j < i; j++)
      {
        tmp_sum -= a[j];
        start_idx++;
        if (sum == tmp_sum)
        {
              printf("Found a sub-array having given sum\nStart idx[%d], End idx[%d]\n", start_idx, i);
              break;
        }
      }
    }
  }
  //if (i ==  n)
    //printf("Not Found\n");
  return 0;
}
