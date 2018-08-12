#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int p_tmp[100] = {0};
  int required_sum = 0;
  int double_count = 0;
  int min = 65565;
  int range = 0;
  int new_sum = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
  {
    scanf("%d",&p_input[i]);
  }
  printf("Enter required sum : ");
  scanf("%d",&required_sum);
  for (i = 0; i < num_of_elements; i++)
  {
    if (min > p_input[i])
      min = p_input[i];
  }
  min = min < 0?(-1)*min:0;
  for (i = 0; i < num_of_elements; i++)
  {
    p_input[i] += min;
  }
  new_sum = required_sum + min;
  for (i = 0; i < num_of_elements; i++)
  {
    if ((new_sum - p_input[i] >= 0) && (p_tmp[new_sum - p_input[i]] == 1))
    {
      printf("Pair for sum [%d] is %d and %d\n", new_sum - min, p_input[i] - min, new_sum - p_input[i]);  
    }
    p_tmp[p_input[i]] = 1;
  }
  return 0;
}
