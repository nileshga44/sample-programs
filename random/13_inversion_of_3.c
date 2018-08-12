#include "stdio.h"
int main()
{
  int i = 0;
  int num_ele = 0;
  int *p_input = NULL;
  int inv_3 = 0, smaller = 0, greater = 0, j = 0;
  printf("Enter number of elements : ");
  scanf("%d",&num_ele);
  p_input = (int *)malloc(num_ele*sizeof(int));
  for (i = 0; i < num_ele; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d",&p_input[i]);
  }
  for (i = 1; i < num_ele; i++)
  {
    greater = 0;
    smaller = 0;
    for (j = i - 1; j >= 0; j--)
    {
      if (p_input[j] > p_input[i])
        greater++;
    }
    for (j = i + 1; j < num_ele; j++)
    {
      if (p_input[j] < p_input[i])
        smaller++;
    }
    inv_3 += greater*smaller;
  }
  printf("combinations - %d\n",inv_3);
  free (p_input);

}
