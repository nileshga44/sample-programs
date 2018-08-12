#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int tmp_len = 1;
  int total_sets = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);

  for (i = 0; i < (num_of_elements - 1); i++)
  {
    if (p_input[i] < p_input[i + 1])
    {
      tmp_len++;
    }
    else
    {
      total_sets += (tmp_len * (tmp_len - 1))/2;
      tmp_len = 1;
    }
  }
  total_sets += (tmp_len * (tmp_len - 1))/2;
  printf("Total sets : %d\n",total_sets);
  return 0;
}
