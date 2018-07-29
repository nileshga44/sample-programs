/*
 * Date: 2017-01-27
 *
 * Description:
 * Memset sets each byte, an integer cannot be assigned with memsetted with -1.
 * It will actually memset each byte with -1 .i.e. 0xFF will be assigned at each
 * byte in memory.
 * 0xFF is memory is -1 in integer.
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
  int i = 0;
  int a[10];
  int n = 10;

  memset(a, -1, sizeof(a));

  /*
   * Now this array has '0xff' at every byte as negative numbers are stored as
   * 2's compliment in memory.
   *
   * (gdb) x/40b a
   * 0x7fffffffdd90:  0xff  0xff  0xff  0xff  0xff  0xff  0xff  0xff
   * 0x7fffffffdd98:  0xff  0xff  0xff  0xff  0xff  0xff  0xff  0xff
   * 0x7fffffffdda0:  0xff  0xff  0xff  0xff  0xff  0xff  0xff  0xff
   * 0x7fffffffdda8:  0xff  0xff  0xff  0xff  0xff  0xff  0xff  0xff
   * 0x7fffffffddb0:  0xff  0xff  0xff  0xff  0xff  0xff  0xff  0xff
   */
  
  for (i = 0; i < n; i++) {
    printf("a[%d] : %d\n", i, a[i]);
  return 0;
}

/*
Output:
a[0] : -1
a[1] : -1
a[2] : -1
a[3] : -1
a[4] : -1
a[5] : -1
a[6] : -1
a[7] : -1
a[8] : -1
a[9] : -1
*/
