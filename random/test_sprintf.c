#include "stdio.h"
#include "string.h"

int main()
{
  char buff[10] = {'\0'};
  int i = 5, j = 10;
  printf("Previous - %s\n",buff);
  sprintf(buff, "Hello i = %d j = %d\n", i, j);
  printf("New - %s",buff);
  return 0;
}
