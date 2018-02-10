#include "stdio.h"

/*
 * Description: Demo of array of function pointer.
 */

void add(int a, int b) {
  printf("Addition of a and b is: %d\n", (a + b));
}

void substraction(int a, int b) {
  printf("Substraction of a and b is: %d\n", (a - b));
}

void multiplication(int a, int b) {
  printf("Multiplication of a and b is: %d\n", (a * b));
}

void division(int a, int b) {
  printf("Division of a and b is: %d\n", (a / b));
}

int main(void) {
  int ch;
  void (*fun_ptr[])(int, int) = {add, substraction, multiplication, division};
  
  printf(
    "0. Add\n1. Substraction\n2. Multiplication\n3. Division\nEnter choice: ");
  scanf("%d", &ch);

  if ((0 > ch) || (3 < ch))
    return -1;
  else
    fun_ptr[ch](10, 20);

  printf("\nUsing loop to call all function sequentially");
  for (ch = 0; ch <= 3; ch++)
    fun_ptr[ch](10, 20);
  return 0;
}
