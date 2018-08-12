#include "stdio.h"
#define merge(a, b) b##a
int main()
{
  printf("%d ", merge(12, 36));
}
