#include "stdio.h"

int main()
{
  char num[10] = {'\0'};
  int result = 0, i = 0;
  printf("Enter number: ");
  scanf("%s",num);
  while ('\0' != num[i])
  {
    result = (result<<3) + (result<<1) + (num[i]&15);
    i++;
  }
  printf("Number is : %d\n",result);
}
