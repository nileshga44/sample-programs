#include "stdio.h"
void fun1()
{
  printf("Callig fun1()\n");
}
void fun2()
{
  printf("Callig fun2()\n");
}
void wrapper(void (*fun)())
{
  fun();
}
int main(void)
{
  wrapper(fun1);
  wrapper(fun2);
  return 0;
}
