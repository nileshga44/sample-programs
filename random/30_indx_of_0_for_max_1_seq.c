#include "stdio.h"
#include "stdlib.h"
int main()
{
  int curr_index = 0;
  int num_of_elements = 0;
  int prev_zero = -1;
  int prev_prev_zero = -1;
  int max_count = 0;
  int max_indx = -1;
  int *p_input = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (curr_index = 0; curr_index < num_of_elements; curr_index++)
    scanf("%d",&p_input[curr_index]);
  for (curr_index = 0; curr_index < num_of_elements; curr_index++)
  {
    if (0 == p_input[curr_index])
    {
      if (curr_index - prev_prev_zero > max_count)
      {
        max_count = curr_index - prev_prev_zero;
        max_indx = prev_zero;
      }
      prev_prev_zero = prev_zero;
      prev_zero = curr_index;
    }
  }
  if (num_of_elements - prev_prev_zero > max_count)
  {
          max_indx = prev_zero;
  }
  printf("Index of 0 to be changed to 1 for longest sequence of 1 is : %d\n",max_indx);
  return 0;
}
