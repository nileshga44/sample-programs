#include "stdio.h"
int main()
{
  char *s[] = {
              "ice",
              "green",
              "cone",
              "please"
              };
  char **ptr[] = {s+3, s+2, s+1, s};
  char ***p = ptr;
  printf("%s\n",**++p);//cone
  printf("%s\n",*--*++p + 3);//Nothing
  printf("%s\n",*p[-2] + 3);//ase
  printf("%s\n",**++p);//ice
  printf("%s\n",p[-1][-1] + 1);//Garbage
  return 0;
}
