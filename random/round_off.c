#include "stdio.h"
#include "string.h"
int main()
{
  int i = 0;
  float f = -3.7;
  i = f > 0? f + 0.5 : f - 0.5;
  printf("%d\n",i);
  return 0;
}
