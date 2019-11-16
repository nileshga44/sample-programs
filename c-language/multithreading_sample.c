/*
 * Date: 2019-10-30
 *
 * Description:
 * Sample program to show multithreadig in c language
 *
 * Compile this code using threading library:
 * gcc -g c-language/multithreading_sample.c -lpthread
 *
 * Reference:
 * https://www.geeksforgeeks.org/multithreading-c-2/
 */

#include "stdio.h"
#include "stdlib.h"
#include "pthread.h"
#include "unistd.h"  // For sleep()

void *mythread(void *vargp) {
  sleep(1);
  printf("Inside mythread\n");
  return NULL;
}

int main() {
  pthread_t thread_id;
  printf("Before pthread_create\n");
  pthread_create(&thread_id,
                 NULL,  // Use default attributes
                 mythread,  // Function name
                 NULL);  // Used to pass arguments to mythread function
  printf("After pthread_create\n");
  pthread_join(thread_id, NULL);
  return 0;
}

/*
 * Output
 * -------------------------
 * Before pthread_create
 * After pthread_create
 * Inside mythread
 */
