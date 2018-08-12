/*Find maximum bitonic length of subarray*/
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int *inc = NULL, *dec = NULL;
  int max = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  inc = (int *)malloc(sizeof(int)*n);
  dec = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
    inc[i] = 1;
    dec[i] = 1;
  }
  for (i = 1; i < n; i++)
  {
    inc[i] = (a[i] < a[i-1]) ? 1 : (inc[i-1] + 1);
    printf ("%d ",inc[i]);
  }
  printf ("\n");
  for (i = n-2; i >= 0; i--)
  {
    dec[i] = (a[i] < a[i+1])? 1 : (dec[i+1] + 1);
    printf ("%d ",dec[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (max < (inc[i] + dec[i]))
      max = inc[i] + dec[i];
  }
  printf("\nMax biotic length is : %d\n",max - 1);
  return 0;
}
