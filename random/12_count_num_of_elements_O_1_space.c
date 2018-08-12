#include "stdio.h"
int main()
{
  int i = 0;
  int num_ele = 0;
  int *p_input = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&num_ele);
  p_input = (int *)malloc(num_ele*sizeof(int));
  for (i = 0; i < num_ele; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d",&p_input[i]);
  }
  for (i = 0; i < num_ele; i++)
  {
    p_input[i] = p_input[i] - 1;
  }
  for (i = 0; i < num_ele; i++)
  {
    p_input[p_input[i]%num_ele] = p_input[p_input[i]%num_ele] + num_ele;
  }
  for (i = 0; i < num_ele; i++)
  {
    printf("%d ",p_input[i]/num_ele);
  }
  free (p_input);

}
