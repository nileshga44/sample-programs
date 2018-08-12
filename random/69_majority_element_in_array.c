//Find majority element from an array - Majority element in array is one that occurs more than
//n/2 times, below algo is called moore's voting algo
#include "stdio.h"
#include "stdlib.h"
int find_max_occuring_num (int arr[], int n)
{
  int i = 0;
  int count = 1;
  int maj_idx = 0;
  for (i = 1; i < n; i++)
  {
    if (arr[maj_idx] == arr[i])
      count++;
    else
      count--;

    if (0 == count)
    {
      maj_idx = i;
      count = 1;
    }
  }
  return arr[maj_idx];
}
int main()
{
  int i = 0;
  int n = 0, num_max_times = 0, ctr = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  num_max_times = find_max_occuring_num(a, n);
  printf("Number occuring maximum times is : %d\n",num_max_times);
  for (i = 0; i < n; i++)
  {
    if (num_max_times == a[i])
    {
      if (++ctr > n/2)
      {
        printf("Majority element is : %d\n",a[i]);
        break;
      }
    }
  }
  return 0;
}
