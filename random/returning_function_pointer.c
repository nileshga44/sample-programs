#include "stdio.h"

void new_fun()
{
  printf("In new_fun()\n");
}
typedef void (*fun_ptr)();
fun_ptr fun()
{
  printf("In fun()\n");
  return new_fun;
}
int main(void)
{
  fun_ptr = fun();
  fun_ptr();
  return 0;
}
