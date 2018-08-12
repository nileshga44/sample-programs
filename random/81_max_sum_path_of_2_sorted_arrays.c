#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0, m = 0;
  int *a1 = NULL, *a2 = NULL;
  int sum1 = 0, sum2 = 0, result = 0;
  printf("Enter number of elements for a1: ");
  scanf("%d",&n);
  a1 = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element a1[%d] : ", i);
    scanf("%d",&a1[i]);
  }
  printf("Enter number of elements for a2: ");
  scanf("%d",&m);
  a2 = (int *)malloc(sizeof(int)*m);
  for (i = 0; i < m; i++)
  {
    printf("Enter element a2[%d] : ", i);
    scanf("%d",&a2[i]);
  }
  i = 0;
  j = 0;
  while ((i < n) && (j < m))
  {
    if (a1[i] < a2[j])
      sum1 += a1[i++];
    else if (a1[i] > a2[j])
      sum2 += a2[j++];
    else
    {
      result += (sum1 > sum2) ? sum1 : sum2;
      result += a1[i];
      i++;
      j++;
      sum1 = 0;
      sum2 = 0;
    }
  }
  while (i < n)
    sum1 += a1[i++];
  while (j < m)
    sum2 += a2[j++];
  result += (sum1 > sum2) ? sum1 : sum2;
  printf("Max sum path of 2 sorted arrays is : %d\n",result);
  return 0;
}
