#include "stdio.h"
#include "stdlib.h"

void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int partition(int a[], int low, int high)
{
  int i = low - 1; //Holds counter for smaller values than pivot
  int pivot = a[high];
  int j = 0; //For iterating over array
  for (j = low; j < high; j++)
  {
    if (a[j] <= pivot)
    {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return (i+1);
}
void quickSort(int a[], int low, int high)
{
  int pi = 0;
  if (low < high)
  {
    pi = partition(a, low, high);
    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
  }
}

int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  quickSort(a, 0, n - 1);

  printf("Sorted array elements : \n");
  for (i = 0; i < n; i++)
    printf("a[%d] : %d\n", i, a[i]);
  return 0;
}
