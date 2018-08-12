#include "stdio.h"
#include "string.h"
int main()
{
  int a[2] = {1, 0};
  printf("before a[0] = %d, a[1] = %d\n", a[0], a[1]);
  a[a[1]] = a[a[0]];
  printf("after a[0] = %d, a[1] = %d\n", a[0], a[1]);
  return 0;
}
