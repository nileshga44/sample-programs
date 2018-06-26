/*
 * Date: 2017-mm-dd
 *
 * Description:
 * Sample to show 'sizeof' is a operator in C not a function.
 */

#include "stdio.h"

int main()
{
  int a = 0;
  printf("sizeof a is %ld\n", sizeof a);
  // printf("sizeof int is %ld\n", sizeof int);  This does not work.
  return 0;
}
