#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int left = 0, right = 0;
  int sum = 0;
  int count = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  printf("Enter sum : ");
  scanf("%d",&sum);
  for (i = 0; i < num_of_elements - 2; i++)
  {
    left = i + 1;
    right = num_of_elements - 1;
    while (left < right)
    {
      if (p_input[left] + p_input[i] + p_input[right] == sum)
      {
        printf("Triplet set : %d %d %d\n", p_input[left], p_input[i], p_input[right]);
        count++;
        left++;
        right--;
      }
      else if (p_input[left] + p_input[i] + p_input[right] > sum)
        right--;
      else
        left++;
    }
  }
  return 0;
}
