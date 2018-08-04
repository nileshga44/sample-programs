/*
 * Date: 2017-01-27
 *
 * Description:
 * Importance of parenthesis in using macros.
 */

#include "stdio.h"

#define CUBE(X) (X*X*X)

int main() {
  int a, b;
  b = 3;
  a = CUBE(b++)/b++;
  printf("a = %d, b = %d\n", a, b);  // Output: a = 10, b = 7
  
  a = CUBE(++b)/++b;
  printf("a = %d, b = %d\n", a, b);  // Output: a = 73, b = 7
  return 0;
}
