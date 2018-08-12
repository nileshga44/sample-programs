#include "stdio.h"

void fun(int a)
{
  printf("Value is: %d\n",a);
}
int fun2(int a, char b)
{
  printf("a: %d, b: %c\n",a,b);
  return 2*a;
}
int main(void)
{
  void (*fun_ptr)(int) = &fun;
  (*fun_ptr)(10); //Calling function fun using function pointer

  //Using & and * is optional, below is the demo for that
  int (*fun_ptr2)(int, char) = fun2;
  int x = fun_ptr2(10, 'A'); 
  return 0;
}
