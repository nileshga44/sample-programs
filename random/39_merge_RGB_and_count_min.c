#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  char *p_input = NULL;
  int r = 0, g = 0, b = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (char *)malloc(sizeof(char)*num_of_elements);
  scanf("%s",p_input);
  for (i = 0; i < num_of_elements; i++)
  {
    if ('R' == p_input[i])
      r++;
    else if ('G' == p_input[i])
      g++;
    else if ('B' == p_input[i])
      b++;
    else
      printf("Invalid input\n");
  }
  if ((r == num_of_elements) || (g == num_of_elements) || (b == num_of_elements))
    printf("Minimum possible value - %d\n",num_of_elements);
  else if (((r & 1) && (g & 1) && (b & 1)) || (!(r & 1) && !(g & 1) && !(b & 1)))
    printf("Minimum possible value - 2\n");
  else
    printf("Minimum possible value - 1\n");
  return 0;
}
