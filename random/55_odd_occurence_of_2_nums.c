#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int xor_of_2_nums = 0, x = 0, y = 0;
  int right_set_bit_pos = 0;
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
    xor_of_2_nums ^= a[i];
  }
  right_set_bit_pos = xor_of_2_nums & ~(xor_of_2_nums - 1);
  for (i = 0; i < n; i++)
  {
    if (right_set_bit_pos & a[i])
    {
      x ^= a[i];
    }
    else
    {
      y ^= a[i];
    }
  }
  printf("2 Numbers occuring odd number of times are : %d %d\n", x, y);
  return 0;
}
