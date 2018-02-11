#include "stdio.h"

/*
 * Description: Program to run a shell command in C program and gather the
 * output, like we can find process id of 'python'.
 */

int main()
{
  int LEN = 50;
  char line[LEN];
  FILE *cmd = popen("pidof python", "r");

  fgets(line, LEN, cmd);
  //pid_t pid = strtoul(line, NULL, 10);
  printf("OP : %s\n", line);
  pclose(cmd);
  return 0;
} 
