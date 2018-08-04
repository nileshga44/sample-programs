/*
 * Date: 2017-xx-xx
 *
 * Description:
 * Prints data in structure as buffer of hex numbers.
 */

#include "stdio.h"
#include "string.h"
#include <stdlib.h>

typedef struct mydata {
  unsigned int bitmask;
  unsigned char emp_id;
  unsigned char name[20];
  unsigned int exp;
} mydata;

void print_data(int size, char *payload) {
  int i;
  printf("Size of data : %d\n[ ", size);
  for (i = 0; i < size; i++)
    printf("0x%02x ",payload[i]); 
  printf("]\n");
}

int main() {
  int i = 0;
  mydata *p_mydata = (mydata *)malloc(sizeof(mydata));
  memset(p_mydata, 0, sizeof(mydata));
  p_mydata->bitmask = 0x12345678;
  p_mydata->emp_id = 0xff;
  strcpy(p_mydata->name, "ABCDEFadshgdsfdjmhggdgfdfdsfdsadfsfgdeg");
  p_mydata->exp = 0x12;
  print_data(sizeof(mydata), (char *)p_mydata);
  return 0;
}

/*
Output:
Size of data : 32
[ 0x78 0x56 0x34 0x12 0xffffffff 0x41 0x42 0x43 0x44 0x45 0x46 0x61 0x64 0x73 0x68 0x67 0x64 0x73 0x66 0x64 0x6a 0x6d 0x68 0x67 0x67 0x64 0x67 0x66 0x12 0x00 0x00 0x00 ]
*/
