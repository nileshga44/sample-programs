#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int k, prev_sum = 0;
  int current_sum = 0, start_idx = -1;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  printf("Enter value of k : ");
  scanf("%d",&k);
  for (i = 0; i < k; i++)
  {
    prev_sum += p_input[i];
  }
  start_idx = 0;
  current_sum = prev_sum;
  for (i = k; i < num_of_elements; i++)
  {
    current_sum = current_sum - p_input[i - k] + p_input[i];
    if (current_sum > prev_sum)
    {
      prev_sum = current_sum;
      start_idx = i - k + 1;
    }
    else
    {
      current_sum = prev_sum;
    }
  }
  printf("%d elements with max avg are : ",k);
  for (i = start_idx; i < start_idx + k; i++)
    printf("%d ",p_input[i]);
  printf("\n");
  return 0;
}
