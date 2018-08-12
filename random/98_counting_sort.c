/*
 * Date: 19-Nov-2017
 *
 * Description: Implement counting sort, This works for integer only and
 *              sorts in O(n) if we know the range of input elements
 *              (like till k).
 *              This sorting algo has complexity of O(n+k).
 *
 * Problem: As k increases and dominates over n, both time and space complexity
 *          increases. Like if k = n**2 then complexity of this algo becomes
 *          O(n**2). To solve this Radix sort is used.
 */

#include "stdio.h"
#include "stdlib.h"

void print_array(int arr[], int n, char *msg)
{
  int i = 0;
  printf("*********** %s *****************\n", msg);
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n\n");
}

int main()
{
  int i = 0, j = 0, l = 0;
  int n = 0;
  int *a = NULL, *count = NULL;
  int k = 0;
  printf("Enter range of elements : ");
  scanf("%d",&k);
  k++;
  count = (int *)malloc(sizeof(int)*k);
  
  // Set count to 0 for each element 
  for (i = 0; i < k; i++)
  {
    count[i] = 0;
  }

  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);

    // Take count of each element.
    count[a[i]]++;
  }
  print_array(a, n, "Inserted Array");

  for (i = 0; i < k; i++)
  {
    for (j = 0; j < count[i]; j++)
    {
      a[l++] = i;
    }
  }
  print_array(a, n, "Sorted Array");
  return 0;
}
