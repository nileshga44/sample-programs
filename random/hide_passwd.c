#include "stdio.h"
#include "conio.h"

int main()
{
  char pass[10];
  char ch;
  int i = 0;
  clrscr();
  printf("Enter Password : ");
  while ((ch=getch()) != 13)
  {
    pass[i] = ch;
    i++;
    printf("*");
  }
  printf("\nEntered Password is : %s",pass);
  getch();
  return 0;
}
