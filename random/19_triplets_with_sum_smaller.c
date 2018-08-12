#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0, k = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int count = 0, sum = 0;
  printf("Enter sum : ");
  scanf("%d",&sum);

  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  k = num_of_elements - 1;
  for (i = 0; i < num_of_elements; i++)
  {
    j = i + 1;
    while (j < k)
    {
      if(p_input[i] + p_input[j] + p_input[k] >= sum)
      {
        k--;
      }
      else
      {
        count += (k - j);
        j++;
      }
    }
  }
  printf("Count - %d\n",count);
  return 0;
}
