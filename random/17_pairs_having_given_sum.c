#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int *p_tmp = NULL;
  int required_sum = 0;
  int double_count = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  p_tmp = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
  {
    scanf("%d",&p_input[i]);
    p_tmp[i] = 0;
  }
  printf("Enter required sum : ");
  scanf("%d",&required_sum);
  for (i = 0; i < num_of_elements; i++)
  {
    p_tmp[p_input[i]]++;
  }
  for (i = 0; i < num_of_elements; i++)
  {
    double_count += p_tmp[required_sum - p_input[i]];
    if (p_input[i] == (required_sum - p_input[i]))
    {
      double_count--;
    }
  }
  printf("Total combinatins - %d\n", double_count/2);
  return 0;
}
