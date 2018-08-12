#include "stdio.h"
int main()
{
  int i = 0;
  int num_ele = 0;
  int *p_input = NULL;
  int *p_out = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&num_ele);
  p_input = (int *)malloc(num_ele*sizeof(int));
  p_out = (int *)malloc(num_ele*sizeof(int));
  for (i = 0; i < num_ele; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d",&p_input[i]);
  }
  for (i = 0; i < num_ele; i++)
  {
    p_out[p_input[i]]++;
  }
  for (i = 0; i < num_ele; i++)
  {
    printf("%d->%d\n", i, p_out[i]);
  }
  free (p_input);
  free (p_out);

}
