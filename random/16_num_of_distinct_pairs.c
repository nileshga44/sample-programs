#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0, num_of_pairs = 0;
  int *p_input = NULL, *p_tmp = NULL;
  int left = 0, right = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  p_tmp = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
  {
    scanf("%d",&p_input[i]);
    p_tmp[i] = 0;
  }
  while (right < num_of_elements)
  {
    while ((right < num_of_elements) && (0 == p_tmp[p_input[right]]))
    {
      num_of_pairs += (right - left);
      p_tmp[p_input[right]] = 1;
      right++;
    }
    while ((1 == p_tmp[p_input[left]]))
    {
      p_tmp[p_input[left]] = 0;
      left++;
    }
  }
  printf("Number of pairs - %d\n",num_of_pairs);
  return 0;
}
