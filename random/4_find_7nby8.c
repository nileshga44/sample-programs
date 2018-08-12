#include "stdio.h"
#include "string.h"
int main()
{
  int n = 0;
  int res;
  scanf("%d",&n);
  res = (n - (n>>3));
  printf("%d\n", res);
  return 0;
}
