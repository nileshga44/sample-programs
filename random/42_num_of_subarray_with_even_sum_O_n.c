#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int result = 0, sum = 0;
  int temp[2] = {1, 0};
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  for (i = 0; i < n; i++)
  {
    sum = ((sum + a[i]) % 2 + 2) %2;
    temp[sum]++;
  }
  result = result + (temp[0]*(temp[0] - 1)/2);
  result = result + (temp[1]*(temp[1] - 1)/2);
  printf("Result : %d\n",result);
  return 0;
}
