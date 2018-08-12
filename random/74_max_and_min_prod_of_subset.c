//74_max_and_min_prod_of_subset.c - Find max and min product from subset of an array
#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int prod_of_all = 1;
  int num_of_negatives = 0;
  int is_zero_present = 0;
  int max_negative_num = -65535;
  int min_positive = 65536;
  int max_prod = 1, min_prod = 1;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (0 == a[i])
    {
      is_zero_present++;
      continue;
    }
    else if (0 > a[i])
    {
      num_of_negatives++;
      if (max_negative_num < a[i])
      {
        max_negative_num = a[i];
      }
    }
    else
    {
      if (a[i] < min_positive)
      {
        min_positive = a[i];
      }
    }
    prod_of_all *= a[i];
  }
  if (0 == num_of_negatives)
  {
    max_prod = prod_of_all;
    min_prod = min_positive;
  }
  else
  {
    if (0 > prod_of_all)
    {
      max_prod = prod_of_all/(max_negative_num);
      min_prod = prod_of_all;
    }
    else
    {
      max_prod = prod_of_all;
      min_prod = prod_of_all/(max_negative_num);
    }
  }
  printf("Max prod : %d\nMin prod : %d\n",max_prod, min_prod);
  return 0;
}
