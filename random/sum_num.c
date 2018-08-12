#include "stdio.h"
#include "string.h"
int main()
{
  int i = 0;
  int num, sum = 0, val;
  printf("Enter num :");
  scanf("%d",&num);
  for (i = num; i > 0; val = num%10, sum += val, num = num/10, i = num);
  printf("Sum is %d", sum);
  return 0;
}
