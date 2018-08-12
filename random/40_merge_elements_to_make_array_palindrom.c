#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int count = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  i = 0;
  j = num_of_elements - 1;
  while (i < j)
  {
    if (p_input[i] == p_input[j])
    {
      i++;
      j--;
    }
    else if (p_input[i] > p_input[j])
    {
      count++;
      p_input[j] = p_input[j] + p_input[j - 1];
      j--;

    }
    else
    {
      count++;
      i++;
      p_input[i] = p_input[i] + p_input[i - 1];
    }
  }
  printf("Number of merge operations required to make array palindrom is : %d\n",count);
  return 0;
}
