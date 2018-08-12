#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n = 0, min = 0, max = 0, maxlen = 1;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    min = a[i];
    max = a[i];
    for (j = i + 1; j < n; j++)
    {
      min = (min < a[j]) ? min : a[j];
      max = (max > a[j]) ? max : a[j];
      if ((max - min) == (j - i))
      {
        maxlen = (maxlen > (j - i + 1)) ? maxlen : (j - i + 1);
      }
    }
  }
  printf("Max len of sub-array that can be arranged in contigious order - %d\n",maxlen);
  return 0;
}
