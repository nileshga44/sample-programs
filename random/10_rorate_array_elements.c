#include "stdio.h"
#include "string.h"
#define MAX 5
void rotate_array(int arr[], int n, int d)
{
  int i, j, temp;
  for (i = 0; i < d; i++)
  {
    temp = arr[0];
    for (j = 1; j < n; j++)
    {
      arr[j - 1] = arr[j];
    }
    arr[n - 1] = temp;
  }
}
int main()
{
  int i = 0, n = MAX;
  int input[MAX] = {1,2,3,4,5};
  rotate_array(input, MAX, 8);
  for (i = 0; i < n; i++)
    printf("%d ",input[i]);
  return 0;
}
