/*
 * Date: 2017-xx-xx
 *
 * Description:
 * Usage of comma operator in C.
 * (a, b) => b, () decreases precedence.
 * a, b => a
 */

#include "stdio.h"
int main() {
  int i = (1, 2, 3);
  printf("%d\n", i);
  i = 1, 2, 3;
  printf("%d\n", i);
}

/*
Output:
*******
3
1
*/
