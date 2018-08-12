//Find if arr2 is subset of arr1 - Assume both arrays as sorted, if not given sorted than sort both arrays 
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n1 = 0, n2 = 0;
  int *arr1 = NULL, *arr2 = NULL;
  printf("Enter number of elements in arr1 : ");
  scanf("%d",&n1);
  arr1 = (int *)malloc(sizeof(int)*n1);
  for (i = 0; i < n1; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&arr1[i]);
  }
  printf("Enter number of elements in arr2 : ");
  scanf("%d",&n2);
  arr2 = (int *)malloc(sizeof(int)*n2);
  for (i = 0; i < n2; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&arr2[i]);
  }
  i = 0;
  j = 0;
  while ((i < n1) && (j < n2))
  {
    if (arr1[i] == arr2[j])
    {
      i++;
      j++;
    }
    else if (arr1[i] < arr2[j])
    {
      i++;
    }
    else
    {
      printf("arr2 is not subset of arr1\n");
      return 0;
    }
  }
  if (j < n2)
  {
      printf("j < n2, arr2 is not subset of arr1\n");
  }
  else
  {
    printf("arr2 is subset of arr1\n");
  }
  return 0;
}
