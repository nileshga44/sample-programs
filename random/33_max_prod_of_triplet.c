#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0;
  int num_of_elements = 0;
  int *p_input = NULL;
  int first, second, third;
  printf("Enter number of elements : ");
  scanf("%d",&num_of_elements);
  p_input = (int *)malloc(sizeof(int)*num_of_elements);
  for (i = 0; i < num_of_elements; i++)
    scanf("%d",&p_input[i]);
  //Arrange first 3 start
  if (p_input[0] > p_input[1])
  {
    if (p_input[0] > p_input[2])
    {
      first = p_input[0];
      if (p_input[1] > p_input[2])
      {
        second = p_input[1];
        third = p_input[2];
      }
      else
      {
        second = p_input[2];
        third = p_input[1];
      }
    }
    else
    {
      first = p_input[2];
      second = p_input[0];
      third = p_input[1];
    }
  }
  else //p1 > p0
  {
    if (p_input[1] > p_input[2])
    {
      first = p_input[1];
      if (p_input[0] > p_input[2])
      {
        second = p_input[0];
        third = p_input[2];
      }
      else
      {
        second = p_input[2];
        third = p_input[0];
      }
    }
    else
    {
      first = p_input[2];
      second = p_input[1];
      third = p_input[0];
    }
  }
  //Arrange first 3 end
  for (i = 3; i < num_of_elements; i++)
  {
    if (p_input[i] > first)
    {
      third = second;
      second = first;
      first = p_input[i];
    }
    else if (p_input[i] > second)
    {
      third = second;
      second = p_input[i];
    }
    else if (p_input[i] > third)
    {
      third = p_input[i];
    }
    else
    {}
  }
  printf("3 max numbers are : %d %d %d\n", first, second, third);
  printf("Max product of triplet - %d\n",first*second*third);
  return 0;
}
