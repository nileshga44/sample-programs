#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int k, prev_start_idx = -1, prev_sum = 0;
  int current_sum = 0, start_idx = -1;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  printf("Enter value of k : ");
  scanf("%d",&k);
  for (i = 0; i <= num_of_elements - k; i++)
  {
          current_sum = 0;
          prev_start_idx = i;
          for (j = i; j < i + k; j++)
          {
            current_sum += p_input[j];
          }
          if (current_sum > prev_sum)
          {
            prev_sum = current_sum;
            start_idx = prev_start_idx;
          }
  }
  printf("%d elements with max avg are : ",k);
  for (i = start_idx; i < start_idx + k; i++)
    printf("%d ",p_input[i]);
  printf("\n");
  return 0;
}
