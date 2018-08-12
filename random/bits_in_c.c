#include "stdio.h"
#if 0
struct test
{
  unsigned int x;
  unsigned int y:33;
  unsigned int z;
};
int main()
{
  printf("%d\n", sizeof(struct test));
  return 0;
}
//error - number of bits can't be more than type's size

struct test
{
  unsigned int x;
  long int y:33;
  unsigned int z;
};
int main()
{
  struct test t;
  unsigned int *ptr1 = &t.x;
  unsigned int *ptr2 = &t.z;
  printf("%d\n",ptr2 - ptr1);
  return 0;
}
//output - 4
#endif
struct test
{
  unsigned int x:3;
  unsigned int y:3;
  int z;
};
int main()
{
  struct test t;
  t.x = 5;
  t.y = 4;
  t.z = 1;
  printf("%d %d %d\n",t.x, t.y, t.z);
  return 0;
}


