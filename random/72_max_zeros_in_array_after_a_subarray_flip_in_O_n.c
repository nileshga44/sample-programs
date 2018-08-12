//Find the maximum number of zeros in a binary array after flipping a sub-array - O(n)
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL;
  int orig_zeros = 0, max_1_0_diff = 0;
  int curr_max = 0, val = 0;
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
    if (0 == a[i])
      orig_zeros++;

    val = (1 == a[i])? 1 : -1;
    curr_max = (val <= curr_max) ? (curr_max + val): val;
    max_1_0_diff = (curr_max < max_1_0_diff) ? max_1_0_diff : curr_max;
  }
  printf("max 0's after subarray flip is : %d\n",(orig_zeros + max_1_0_diff));
  return 0;
}
