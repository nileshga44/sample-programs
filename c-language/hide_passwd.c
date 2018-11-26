/*
 * Date: 2018-09-26
 *
 * Description:
 * Program to hide password while typing.
 *
 * Approach:
 * Keep on printing '*' till till enter key(13) is not pressed.
 *
 * Complexity:
 * NA
 */

#include "stdio.h"
#include "stdlib.h"

int main() {
  char pass[10];
  char ch;
  int i = 0;
  clrscr();
  printf("Enter Password: ");
  while ((ch=getch()) != 13) {
    pass[i] = ch;
    i++;
    printf("*");
  }
  printf("\nEntered Password is: %s", pass);
  getch();
  return 0;
}
