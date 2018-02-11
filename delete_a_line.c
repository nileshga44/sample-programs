#include <stdio.h>

/*
 * Description: Program to delete a line from a file, using line number.
 */

int main() {
  FILE *fp1, *fp2;
  char filename[50];
  char c;
  int del_line, temp = 1;
  printf("Enter file name: ");
  scanf("%s", filename);
  fp1 = fopen(filename, "r");
  c = getc(fp1);
  while (c != EOF)
  {
    printf("%c", c);
    c = getc(fp1);
  }
  rewind(fp1);
  printf("\nEnter line number of the line to be deleted: ");
  scanf("%d", &del_line);
  fp2 = fopen("copy.c", "w");
  c = getc(fp1);
  while (c != EOF) {
    if (c == '\n')
        temp++;
    if (temp != del_line) {
      putc(c, fp2);
    }
    c = getc(fp1);
  }
  fclose(fp1);
  fclose(fp2);
  remove(filename);
  rename("copy.c", filename);
  printf("\nThe contents of file after being modified are as follows:\n");
  fp1 = fopen(filename, "r");
  c = getc(fp1);
  while (c != EOF) {
    printf("%c", c);
    c = getc(fp1);
  }
  fclose(fp1);
  return 0;
}
