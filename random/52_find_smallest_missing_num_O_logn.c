#include "stdio.h"
#include "stdlib.h"
int findSmallestMissing(int arr[], int start, int end)
{
  int mid = 0;
  if (start > end)
    return end + 1;
  else if (arr[start] != start)
    return start;
  else
  {
    mid = (start + end)/2;
    if (arr[mid] > mid)
      findSmallestMissing(arr, start, mid + 1);
    else
      findSmallestMissing(arr, mid + 1, end);
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
  printf("Smallest missing number is : %d\n",findSmallestMissing(a, 0, n - 1));
  return 0;
}
