//Find the maximum number of zeros in a binary array after flipping a sub-array - O(n*n)
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL;
  int orig_zeros = 0, max_1_0_diff = 0;
  int count0 = 0, count1 = 0;
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
    count1 = 0;
    count0 = 0;
    if (0 == a[i])
      orig_zeros++;
    for (j = i; j < n; j++)
    {
      (0 == a[j]) ? count0++ : count1++;
      max_1_0_diff = (max_1_0_diff > count1 - count0) ? max_1_0_diff : count1 - count0;
    }
  }
  printf("max 0's after subarray flip is : %d\n",(orig_zeros + max_1_0_diff));
  return 0;
}
