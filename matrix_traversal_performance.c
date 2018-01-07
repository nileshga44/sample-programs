#include "stdio.h"
#include "time.h"

/*
 * Date: 2017-01-04
 *
 * Description:
 * Traversing 2-D array row wise is more efficient because c implements 2-D
 * array as 1-D array so row wise traversal becomes sequencial traversal of
 * 1-D array. And C chaches 16-bytes of memory so read operation reduces by 16
 * times.
 *
 *
 * Reference: https://stackoverflow.com/questions/9936132/why-does-the-order-of-the-loops-affect-performance-when-iterating-over-a-2d-arra
 */

#define SIZE 10000

void timestamp() {
    time_t ltime; /* calendar time */
    ltime = time(NULL); /* get current cal time */
    printf("%s", asctime(localtime(&ltime)));
}

void row_wise() {
  int i, j;
  static int x[SIZE][SIZE];
  for (j = 0; j < SIZE; j++) {
     for (i = 0; i < SIZE; i++) {
       x[j][i] = i + j;
     }
   }
}

void column_wise() {
  int i,j;
  static int x[SIZE][SIZE];
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      x[j][i] = i + j;
    }
  }
}

int main() {
  time_t start, end;
  start = time(NULL);
  row_wise();
  end = time(NULL);
  printf("Row wise traversal takes %f seconds.\n", difftime(end, start));

  start = time(NULL);
  column_wise();
  end = time(NULL);
  printf("Column wise traversal takes %f seconds.\n", difftime(end, start));
}

/*
 * Output:
 * Row wise traversal takes 0.000000 seconds.
 * Column wise traversal takes 2.000000 seconds.
 */
