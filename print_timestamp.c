/*
 * Date: 2018-07-16
 *
 * Description:
 * Sample program to print log time-stamp up to milliseconds precision.
 */

#include "stdio.h"
#include <sys/time.h>

void get_milliseconds(char *time) {
  struct timeval currentTime;
  gettimeofday(&currentTime, NULL);
  sprintf(time, "%ld.%ld", currentTime.tv_sec, currentTime.tv_usec);
}

void print_log(char *str) {
  char time[100] = {'\0'};
  get_milliseconds(time);
  printf("%s: %s", time, str);
}

int main() {
  print_log("Test trace\n");
  return 0;
}
