#include "stdio.h"

/*
 * Description: Block scope and function scope.
 */

int main()
{
  int i = 100;
  printf ("i = %d\n",i);
  {
    int i = 1;
    printf ("i = %d\n",i);
    {
      i += 1;
      printf ("i = %d\n",i);
    }
    printf ("i = %d\n",i);
  }
  printf ("i = %d\n",i);
  return 0;
}

/*OP
i = 100
i = 1
i = 2
i = 2
i = 100
*/
