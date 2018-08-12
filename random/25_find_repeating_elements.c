#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
#if 0
  for (i = 0; i < num_of_elements; i++)
  {
    if (p_input[i] >= num_of_elements)
    {
      p_input[i] = p_input[i] - num_of_elements;
    }
    p_input[p_input[i]] += num_of_elements;
  }
  for (i = 0; i < num_of_elements; i++)
  {
    if (p_input[i] >= 2*num_of_elements)
    {
      printf("%d is repeated\n",i);
    }
  }
#else
  for (i = 0; i < num_of_elements; i++)
  {
    if (p_input[p_input[i] > 0?p_input[i]:(-1*p_input[i])] >= 0)
    {
      p_input[p_input[i] > 0?p_input[i]:(-1*p_input[i])] = -p_input[p_input[i] > 0?p_input[i]:(-1*p_input[i])];
    }
    else
    {
      printf("Repeated element - %d\n",(p_input[i] > 0?p_input[i]:(-1*p_input[i])));
    }
  }
#endif
  return 0;
}
