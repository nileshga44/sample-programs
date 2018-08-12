#include "stdio.h"
#include "string.h"
int main()
{
  int i = 1;
  int num = 1;
  printf("Enter num :");
  scanf("%d",&num);
  while(num != 0)
  {
    num = num >>1;
    i = i << 1;
  }
  printf("Next power of 2 will be : %d\n",i);
  return 0;
}
