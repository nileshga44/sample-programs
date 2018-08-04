/*
 * Date: 2017-xx-xx
 *
 * Description:
 * Few tests for strlen function behaviour.
 */

#include "stdio.h"
#include "string.h"

typedef struct {
  char mcc[4];
  char mnc[4];
} abc;

int main() {
  int i = 0;
  abc obj[3];
  strncpy(obj[0].mcc, "099", strlen("099"));
  strncpy(obj[0].mnc, "199", strlen("199"));
  strncpy(obj[1].mcc, "65536", strlen("65536"));
  strncpy(obj[1].mnc, "65536", strlen("65536"));

  /* gdb trace:
   * $4 = {
   *        {mcc = "099", mnc = "199"},
   *        {mcc = "6553", mnc = "6553"},
   *        {mcc = "6\335\377\377", mnc = "\377\177\000"}
   *      }
   */  
  return 0;
}
