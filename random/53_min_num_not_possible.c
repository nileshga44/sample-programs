#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int res = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; (i < n) && (a[i] <= res); i++)
  {
    res = res + a[i];
  }
  printf("Mininum number not possible as sum elements of any subarray is : %d\n",res);
  return 0;
}
