#include <stdio.h>
#if 0 
int main()
{
  unsigned i ;
  for( i = 0 ; i < 4 ; ++i )
  {
    fprintf( stdout , "i = %d\n" , ("11213141") ) ;
  }
 
  getchar();
  return 0 ;
}
#include <stdio.h>
char* fun()
{
  return "awake";
}
int main()
{
  printf("%s",fun()+ printf("I see you"));
  getchar();
  return 0;
}
#include<stdio.h>
int main()
{
   int a;
   char *x;
   x = (char *) &a;
   a = 512;
   x[0] = 1;
   x[1] = 2;
   printf("%d\n",a);
 
   getchar();
   return 0;
}
#include<stdio.h>
int fun(char *str1)
{
  char *str2 = str1;
  while(*++str1);
  return (str1-str2);
}    
int main()
{
  char *str = "geeksforgeeks";
  printf("%d", fun(str));
  getchar();
  return 0;
}
#endif
int main() 
{
   unsigned int x = -1;
   int y = ~0;
   if(x == y)
      printf("same");
   else
      printf("not same");
   printf("\n x is %u, y is %u", x, y);
   printf("\n x is %d, y is %d", x, y);
   printf("\n x is %x, y is %x", x, y);
   getchar();
   return 0;
}
