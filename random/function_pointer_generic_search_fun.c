#include "stdio.h"
#include "stdbool.h"
//This function can also be made generic 
bool compare(const void *a, const void *b)
{
  return (*(int*)a == *(int*)b);
}
int search(void *ptr, int num_elem, int size_of_each, void *x, \
                  bool (*cmp_fun_ptr)(const void *, const void *))
{
  char *p = (char*)ptr;
  int i = 0;
  for (i = 0; i < num_elem; i++)
  {
    if (cmp_fun_ptr((p + size_of_each*i), x))
      return i;
  }
  return -1;
}
int main(void)
{
  int arr[] = {10, 3, 4, 9, 7};
  int num_elem = sizeof(arr)/sizeof(arr[0]);
  int x = 9;
  printf("Index of element is %d\n", search(arr, num_elem, sizeof(arr[0]),\
                          &x, compare));
  return 0;
}
