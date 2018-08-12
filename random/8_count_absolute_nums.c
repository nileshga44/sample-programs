#include "stdio.h"
#include "string.h"

#define MAX 5
int count_abs_nums(int arr[], int n)
{
  int abs_nums = n;
  int i = 0, j = n - 1, sum;
  while (i < j)
  {
    while((i!= j) && (arr[i] == arr[i + 1]))
    {
      abs_nums--;
      i++;
    }
    while((i!= j) && ((arr[j]) == arr[j - 1]))
    {
      abs_nums--;
      j--;
    }
    sum = arr[i] + arr[j];
    if (0 == sum)
    {
      abs_nums--;
      i++;
      j--;
    }
    else if(0 < sum)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return abs_nums;
}
int main()
{
  int input[MAX] = {-3,1,2,3,5};
  int count = 0;
  count = count_abs_nums(input, MAX);
  printf("Number of distitnct absolute elememnts : %d\n", count);
  return 0;
}
