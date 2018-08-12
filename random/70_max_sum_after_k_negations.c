//Maximize sum of an array after k negations
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0, idx = 0;
  int n = 0, k = 0, sum = 0;
  int *a = NULL;
  int min = 65535;
  printf("Enter value of k : ");
  scanf("%d",&k);
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 1; i <= k; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (min > a[j])
      {
        min = a[j];
        idx = j;
      }
    }
    printf("[DEBUG] : min [%d]\n",min);
    if (0 == min)
    {
      break;
    }
    else
    {
      a[idx] = -1*a[idx];
      min = 65535;
    }
  }
  for (j = 0; j < n; j++)
    sum += a[j];
  printf("max sum after k negations is : %d\n",sum);
  return 0;
}
