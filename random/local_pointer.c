#include "stdio.h"

void fun(int *myptr)
{
  myptr = (int *)malloc(sizeof(int));
  *myptr = 10;
}
int main()
{
  int *ptr = NULL;
  fun(ptr);
  printf("ptr value - %d\n",*ptr);
  return 0;
}
