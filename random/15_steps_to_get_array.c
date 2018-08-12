#include "stdio.h"
int main()
{
  int i = 0, j = 0;
  int num_ele = 0;
  int *p_required = NULL;
  int steps = 0;
  int num_zero = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_ele);
  p_required = (int *)malloc(num_ele*sizeof(int));
  for (i = 0; i < num_ele; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d",&p_required[i]);
  }
  while (1)
  {
      for (i = 0; i < num_ele; i++)
      {
          if (p_required[i] & 1)
              break;
          else if (0 == p_required[i])
              num_zero++;
      }
      if (num_zero == num_ele)
      {
          printf("%d\n", steps);
          return steps;
      }
      if (i == num_ele) //all even
      {
          for (j = 0; j < num_ele; j++)
          {
              p_required[j] /= 2;
          }
          steps++;
      }
      for (j = i; j < num_ele; j++)
      {
          if (p_required[j] & 1)
          {
              steps++;
              p_required[j] -= 1;
          }
      }
  }
  free (p_required);
}
