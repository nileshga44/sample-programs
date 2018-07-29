/*
 * Date: 2017-01-27
 *
 * Description:
 * NULL pointer in C.
 */

#include "stdio.h"

int main() {
  int *ptr1 = NULL;
  int *ptr = 0; // It is also fine as NULL is also (void *)0x0 in C.
  printf("%d\n", NULL);
  printf("%c\n", NULL);
  //printf("%s\n", NULL);
  printf("%f\n", NULL);
  printf("%ld\n", sizeof(ptr));
  printf("%ld\n", sizeof(NULL));
  printf("%ld\n", sizeof(void));
  return 0;
}

/*
Output:
***********
0

0.000000
8
8
1
*/
