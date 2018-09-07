/*
 * Date: 2018-09-07
 *
 * Description:
 * Show usage of token pasting operator(##) in C.
 */

#include "stdio.h"

#define merge(a, b) b##a

int main() {
  printf("%d\n", merge(12, 36));
}
