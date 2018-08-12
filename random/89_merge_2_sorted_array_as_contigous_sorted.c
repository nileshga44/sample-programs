#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, j = 0;
  int n1 = 0, n2 = 0;
  int *a1 = NULL, *a2 = NULL;
  int num = 0, last = 0;
  printf("Enter number of elements in a1: ");
  scanf("%d",&n1);
  a1 = (int *)malloc(sizeof(int)*n1);
  for (i = 0; i < n1; i++)
  {
    printf("Enter element a1[%d]: ", i);
    scanf("%d",&a1[i]);
  }

  printf("Enter number of elements in a2: ");
  scanf("%d",&n2);
  a2 = (int *)malloc(sizeof(int)*n2);
  for (i = 0; i < n2; i++)
  {
    printf("Enter element a2[%d]: ", i);
    scanf("%d",&a2[i]);
  }
  for (i = n2 -1; i >= 0; i--)
  {
		last = a1[n1 - 1];
		for (j = n1 - 2; (j >= 0 && a1[j] > a2[i]); j--)
		{
			a1[j + 1] = a1[j];
		}
		if ((j != n1 - 2) || (last > a2[i]))
		{
			a1[j + 1] = a2[i];
			a2[i] = last;
		}
  }
	printf ("First Array:\n");
  for (i = 0; i < n1; i++)
		printf("a1[%d]: %d\n", i, a1[i]);
	printf ("\n\nSecond Array:\n");
  for (i = 0; i < n2; i++)
		printf("a2[%d]: %d\n", i, a2[i]);
  return 0;
}
