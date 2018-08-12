#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0;
  int *a = NULL, *min = NULL, *max = NULL;
  int left = 0, right = 0;
  int res = -1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  min = (int *)malloc(sizeof(int)*n);
  min[0] = a[0];
  for (i = 1; i < n; i++)
  {
    min[i] = a[i] > min[i - 1]?min[i - 1]:a[i];
  }
  max = (int *)malloc(sizeof(int)*n);
  max[n - 1] = a[n - 1];
  for (i = n - 2; i >=0; i--)
  {
    max[i] = a[i] > max[i + 1]?a[i]:max[i + 1];
  }
  i = 0;
  j = 0;
  while (i < n && j < n)
  {
    if (min[i] < max[j])
    {
      if (res < j - i)
        res = j - i;
      j++;
    }
    else
    {
      i++;
    }
  }
  printf("Max(j - i) with a[j] > a[i] is : %d\n",res);
  return 0;
}
