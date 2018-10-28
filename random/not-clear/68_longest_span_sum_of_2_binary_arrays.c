#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a1 = NULL, *a2 = NULL, *diff = NULL;
  int preSum1 = 0, preSum2 = 0;
  int curr_diff = 0, diffIdx = -1;
  int len = 0, maxlen = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a1 = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element a1[%d] : ", i);
    scanf("%d",&a1[i]);
  }
  printf("\n\nSecond Array\n");
  a2 = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element a2[%d] : ", i);
    scanf("%d",&a2[i]);
  }
  diff = (int *)malloc(sizeof(int)*(2*n + 1));
  for (i = 0; i < (2*n + 1); i++)
    diff[i] = -1;
  
  //Start
  for (i = 0; i < n; i++)
  {
    preSum1 += a1[i];
    preSum2 += a2[i];
    curr_diff = preSum1 - preSum2;
    diffIdx = n + curr_diff;
    if (0 == curr_diff)
    {
      maxlen = i + 1;
    }
    else if (-1 == diff[diffIdx])
    {
      diff[diffIdx] = i;
    }
    else
    {
      len = i - diff[diffIdx];
      if (len > maxlen)
        maxlen = len;
    }
  }
  printf("maxlen = %d\n",maxlen);
  return 0;
}
