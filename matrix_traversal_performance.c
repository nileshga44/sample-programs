#include "stdio.h"
#include "time.h"

/*
 * Reference: https://stackoverflow.com/questions/9936132/why-does-the-order-of-the-loops-affect-performance-when-iterating-over-a-2d-arra
 */

#define SIZE 10000

void timestamp() {
    time_t ltime; /* calendar time */
    ltime=time(NULL); /* get current cal time */
    printf("%s",asctime( localtime(&ltime) ) );
}

row_wise () {
  int i,j;
  static int x[SIZE][SIZE];
  for (j = 0; j < SIZE; j++) {
     for (i = 0; i < SIZE; i++) {
       x[j][i] = i + j;
     }
   }
}

column_wise () {
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
