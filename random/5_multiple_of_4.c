#include "stdio.h"
#include "string.h"
int main()
{
  int i = 0;
  printf("Enter number :");
  scanf("%d",&i);
  if (i & ((i & 0x3) == 0))
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
