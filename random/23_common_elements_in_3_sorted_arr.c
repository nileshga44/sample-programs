#include "stdio.h"
#include "stdlib.h"

int max(a, b, c)
{
  int max = (a > b)?(a > c ? a : c): (b > c ? b: c);
}

int main()
{
  int i = 0, j = 0, k = 0;
  int num_of_elements = 0;
  int n1 = 4;
  int n2 = 5;
  int n3 = 5;
  int arr1[10] = {1,2,3,4};
  int arr2[10] = {1,3,6,5,8};
  int arr3[10] = {1,4,6,8,10};
  while ((i < n1) && (j < n2) && (k < n3))
  {
    if ((arr1[i] == arr2[j]) && (arr2[j] == arr3[k]))
    {
      printf("Common element : %d\n", arr1[i]);
      i++;
      j++;
      k++;
    }
    else if ((arr1[i] <= arr2[j]) && (arr1[i] <= arr3[k]))
    {
      i++;
    }
    else if ((arr2[j] <= arr1[i]) && (arr2[j] <= arr3[k]))
    {
      j++;
    }
    else if ((arr3[k] <= arr1[i]) && (arr3[k] <= arr2[j]))
    {
      k++;
    }
    else
    {
      printf("Breaking from loop\n");
      break;
    }
  }
  return 0;
}
