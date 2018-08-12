#include "stdio.h"
#include "stdlib.h"
//Find max value of abs(i - j)*min(a[i], a[j])
int main()
{
  int i = 0, j = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int max_prod = 0, curr_prod = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  i = 0;
  j = num_of_elements - 1;
  while (i < j)
  {
    if (p_input[i] < p_input[j])
    {
      curr_prod = (j - i)*p_input[i];
      i++;
    }
    else
    {
      curr_prod = (j - i)*p_input[j];
      j--;
    }
    max_prod = max_prod > curr_prod ? max_prod : curr_prod;
  }
  printf("max value of abs( i - j)*min(a[i], a[j]) is : %d\n", max_prod);
  return 0;
}
