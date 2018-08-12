#include "stdio.h"
#include "string.h"
int main()
{
  unsigned int a = 0;
  unsigned int x, y, r, l;
  a = 0xffffefff;
  //x = a & 0x0000ffff;
  //y = a & 0xffff0000;
  l = 1<<31;
  r = 1;
  while(l > r)
  {
    if ((a&l?1:0) != (a&r?1:0))
    {
      printf("Not palindrom\n");
      return 0;
      break;
    }
    l = l>>2;
    r = r<<2;
  }
  printf("Palindrom\n");
  return 0;
}
