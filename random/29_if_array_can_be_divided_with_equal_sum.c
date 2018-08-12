#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int sum = 0;
  int sum_till_now = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  for (i = 0; i < num_of_elements; i++)
    sum += p_input[i];
  for (i = 0; i < num_of_elements; i++)
  {
    if ((2*sum_till_now + p_input[i]) == sum)
    {
      printf("Possible after element [%d] from index [%d] is removed\n", p_input[i], i);
      break;
    }
    else
    {
      sum_till_now += p_input[i];
    }
  }
  return 0;
}
