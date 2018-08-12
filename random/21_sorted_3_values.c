#include "stdio.h"
#include "stdlib.h"

int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL, *p_small = NULL, *p_large = NULL;
  int small_idx = 0;
  int large_idx = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  large_idx = num_of_elements - 1;
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  p_small = (int *)malloc(sizeof(int)*num_of_elements);
  p_large = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
  {
    scanf("%d",&p_input[i]);
    p_small[i] = -1;
    p_large[i] = -1;
  }
  for (i = 1; i < num_of_elements; i++)
  {
    if (p_input[i] <= p_input[small_idx])
    {
      small_idx = i;
      p_small[i] = -1;
    }
    else
    {
      p_small[i] = small_idx;
    }
  }
  for (i = num_of_elements - 2; i >= 0; i--)
  {
    if (p_input[i] >= p_input[large_idx])
    {
      large_idx = i;
      p_large[i] = -1;
    }
    else
    {
      p_large[i] = large_idx;
    }
  }
  for (i = 0; i < num_of_elements; i++)
  {
    if ((p_small[i] != -1) && (p_large[i] != -1))
    {
      printf("3 sorted elements are : \
        %d %d %d\n",p_input[p_small[i]], p_input[i], p_input[p_large[i]]);
    }
  }
  return 0;
}
