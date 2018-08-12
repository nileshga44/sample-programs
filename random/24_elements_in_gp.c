#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, left = 0, right = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  for (i = 1; i < num_of_elements - 1; i++)
  {
    left = 0;
    right = num_of_elements - 1;
    while (left < right)
    {
      if ((p_input[i]%p_input[left] == 0) && (p_input[right]%p_input[i] == 0) \
        && (p_input[i]/p_input[left] == p_input[right]/p_input[i]))
      {
        printf("Elements in geometric progression are - %d %d %d\n", \
          p_input[left], p_input[i], p_input[right]);
          left++;
          right--;
      }
      else if (p_input[i] - p_input[left] >= p_input[right] - p_input[i])
        left++;
      else if (p_input[i] - p_input[left] <= p_input[right] - p_input[i])
        right--;
      else
      {
        printf("Should not come in this block - \
          left i right are : %d %d %d\n", left, i, right);
        break;
      }
    }
  }
  return 0;
}
