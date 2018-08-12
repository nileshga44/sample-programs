#include "stdio.h"
#include "stdlib.h"

int find_min_positive_missing(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if ((arr[i] <= n) && (arr[arr[i] - 1] > 0))
    {
      arr[arr[i] - 1] = -arr[arr[i] - 1];
    }
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      return i + 1;
    }
  }
  return n + 1;
}
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int min_positive = 0, non_positive = 0, tmp;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (0 >= a[i])
    {
      tmp = a[non_positive];
      a[non_positive] = a[i];
      a[i] = tmp;
      non_positive++;
    }
  }
  min_positive = find_min_positive_missing(a + non_positive, n - non_positive);
  printf("Minimum positive missing : %d\n",min_positive);
  return 0;
}
