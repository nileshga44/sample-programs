#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int xor = 0;
  int set_bit = 0;
  int x = 0, y = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);

  xor = p_input[0];
  for (i = 1; i < num_of_elements; i++)
  {
    xor ^= p_input[i];
  }
  set_bit = xor & ~(xor - 1);
  for (i = 0; i < num_of_elements; i++)
  {
          if (set_bit & p_input[i])
            x ^= p_input[i];
          else
            y ^= p_input[i];
  }
  printf("---> %d %d\n",x,y);
  
  return 0;
}
