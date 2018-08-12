//Find smallest missing number from a sorted array
//Range of numbers is 0 to m - 1 and m > n
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int range = 0, counter = 0;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  printf("Enter range : ");
  scanf("%d",&range);

  for (i = 0; i < n; i++)
  {
    if (a[i] != counter)
    {
      printf("Smallest missing number is : %d\n",counter);
      break;
    }
    counter++;
  }
  if (i == n)
  {
      printf("Smallest missing number is : %d\n",range - 1);
  }
  return 0;
}
