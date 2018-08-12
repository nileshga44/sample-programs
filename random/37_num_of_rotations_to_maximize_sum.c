#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int arr_sum = 0;
  int sum_n = 0, max_sum = 0, num_of_rot = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
  {
    scanf("%d",&p_input[i]);
    sum_n += i*p_input[i];
    arr_sum += p_input[i];
  }
  max_sum = sum_n;
  for (i = 1; i < num_of_elements; i++)
  {
    //Relation was developed for Rj - Rj-1 = arr_sum - n*a[n - j]
    //Rj - Value of required sum after j rotations
    //Rj-1 - Value of required sum after j-1 rotations
    sum_n = arr_sum -num_of_elements*p_input[num_of_elements - i] + sum_n;
    if (sum_n > max_sum)
    {
      max_sum = sum_n;
      num_of_rot = i;
    }
  }
  printf("Number of rotations [%d], Max sum [%d]\n", num_of_rot, max_sum);
  return 0;
}
